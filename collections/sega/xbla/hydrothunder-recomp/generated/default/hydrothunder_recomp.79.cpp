#include "hydrothunder_funcs.79.h"

DEFINE_REX_FUNC(sub_821250D8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821251a0
	if (ctx.cr6.eq) goto loc_821251A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r4,r9,-25736
	ctx.r4.s64 = ctx.r9.s64 + -25736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bctrl 
	ctx.lr = 0x82125144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82125154;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82125180
	if (ctx.cr0.eq) goto loc_82125180;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,23136
	ctx.r10.s64 = ctx.r10.s64 + 23136;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82125184
	goto loc_82125184;
loc_82125180:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82125184:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-25728
	ctx.r5.s64 = ctx.r10.s64 + -25728;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821251A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821251A0:
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

DEFINE_REX_FUNC(sub_8212D108) {
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
	// addi r11,r11,-23376
	ctx.r11.s64 = ctx.r11.s64 + -23376;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8212d134
	if (ctx.cr0.eq) goto loc_8212D134;
	// bl 0x8269ce98
	ctx.lr = 0x8212D134;
	sub_8269CE98(ctx, base);
loc_8212D134:
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

DEFINE_REX_FUNC(sub_8212FFD0) {
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
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8212fffc
	if (ctx.cr0.eq) goto loc_8212FFFC;
	// bl 0x8269ce98
	ctx.lr = 0x8212FFFC;
	sub_8269CE98(ctx, base);
loc_8212FFFC:
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

DEFINE_REX_FUNC(sub_821314F8) {
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
	ctx.lr = 0x82131500;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// stw r4,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82131528
	if (!ctx.cr6.eq) goto loc_82131528;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8213152c
	goto loc_8213152C;
loc_82131528:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213152C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2016(r30)
	REX_STORE_U32(r30.u32 + 2016, ctx.r11.u32);
	// beq cr6,0x8213233c
	if (ctx.cr6.eq) goto loc_8213233C;
	// lwz r10,2036(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2036);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-21480
	r31.s64 = ctx.r11.s64 + -21480;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82131560
	if (ctx.cr6.eq) goto loc_82131560;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// li r5,388
	ctx.r5.s64 = 388;
	// bl 0x821231d0
	ctx.lr = 0x82131560;
	sub_821231D0(ctx, base);
loc_82131560:
	// lwz r11,2028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131580
	if (ctx.cr6.eq) goto loc_82131580;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-21368
	ctx.r3.s64 = ctx.r11.s64 + -21368;
	// li r5,389
	ctx.r5.s64 = 389;
	// bl 0x821231d0
	ctx.lr = 0x82131580;
	sub_821231D0(ctx, base);
loc_82131580:
	// lis r10,564
	ctx.r10.s64 = 36962304;
	// lwz r11,2016(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2016);
	// ori r10,r10,63276
	ctx.r10.u64 = ctx.r10.u64 | 63276;
	// mulli r3,r11,116
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8213159c
	if (!ctx.cr6.gt) goto loc_8213159C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8213159C:
	// bl 0x822f6338
	ctx.lr = 0x821315A0;
	sub_822F6338(ctx, base);
	// stw r3,2036(r30)
	REX_STORE_U32(r30.u32 + 2036, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821315c8
	if (!ctx.cr0.eq) goto loc_821315C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821315C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82132340
	goto loc_82132340;
loc_821315C8:
	// lwz r11,2016(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2016);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821322fc
	if (!ctx.cr6.gt) goto loc_821322FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r14,-32243
	r14.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r30,r14,-20764
	r30.s64 = r14.s64 + -20764;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r14,r10,0
	r14.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lwz r29,112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r15,-32243
	r15.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r9,-20804
	ctx.r10.s64 = ctx.r9.s64 + -20804;
	// addi r11,r11,-20784
	ctx.r11.s64 = ctx.r11.s64 + -20784;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r7,r4,-20860
	ctx.r7.s64 = ctx.r4.s64 + -20860;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r9,r8,-20824
	ctx.r9.s64 = ctx.r8.s64 + -20824;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r8,r6,-20844
	ctx.r8.s64 = ctx.r6.s64 + -20844;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r6,r31,-20876
	ctx.r6.s64 = r31.s64 + -20876;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r11,r29,-20884
	ctx.r11.s64 = r29.s64 + -20884;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r10,r28,-20892
	ctx.r10.s64 = r28.s64 + -20892;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lis r16,-32243
	r16.s64 = -2113077248;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lis r17,-32243
	r17.s64 = -2113077248;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r18,-32243
	r18.s64 = -2113077248;
	// lis r19,-32243
	r19.s64 = -2113077248;
	// std r4,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// lis r20,-32243
	r20.s64 = -2113077248;
	// lis r21,-32243
	r21.s64 = -2113077248;
	// lis r22,-32243
	r22.s64 = -2113077248;
	// lis r23,-32243
	r23.s64 = -2113077248;
	// lis r24,-32243
	r24.s64 = -2113077248;
	// lis r25,-32243
	r25.s64 = -2113077248;
	// lis r26,-32243
	r26.s64 = -2113077248;
	// lis r27,-32243
	r27.s64 = -2113077248;
	// lis r28,-32243
	r28.s64 = -2113077248;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// lis r30,-32243
	r30.s64 = -2113077248;
	// lis r31,-32243
	r31.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r14,r14,-20900
	r14.s64 = r14.s64 + -20900;
	// addi r7,r7,-21160
	ctx.r7.s64 = ctx.r7.s64 + -21160;
	// std r30,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, r30.u64);
	// addi r8,r8,-21176
	ctx.r8.s64 = ctx.r8.s64 + -21176;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r9,-21200
	ctx.r9.s64 = ctx.r9.s64 + -21200;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r10,-21220
	ctx.r10.s64 = ctx.r10.s64 + -21220;
	// std r3,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r3.u64);
	// addi r11,r11,-21240
	ctx.r11.s64 = ctx.r11.s64 + -21240;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r17,r17,-20968
	r17.s64 = r17.s64 + -20968;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r14,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r14.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r10,r23,-21040
	ctx.r10.s64 = r23.s64 + -21040;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r11,r24,-21052
	ctx.r11.s64 = r24.s64 + -21052;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r10,r26,-21072
	ctx.r10.s64 = r26.s64 + -21072;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r27,-21076
	ctx.r11.s64 = r27.s64 + -21076;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r10,r3,-20920
	ctx.r10.s64 = ctx.r3.s64 + -20920;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r11,r29,-21084
	ctx.r11.s64 = r29.s64 + -21084;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r31,-21092
	r27.s64 = r31.s64 + -21092;
	// addi r25,r25,-21064
	r25.s64 = r25.s64 + -21064;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r26,r4,-20916
	r26.s64 = ctx.r4.s64 + -20916;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// ld r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// addi r5,r5,-21124
	ctx.r5.s64 = ctx.r5.s64 + -21124;
	// stw r17,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r17.u32);
	// addi r6,r6,-21144
	ctx.r6.s64 = ctx.r6.s64 + -21144;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r25.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// addi r7,r7,-21256
	ctx.r7.s64 = ctx.r7.s64 + -21256;
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// addi r8,r8,-21272
	ctx.r8.s64 = ctx.r8.s64 + -21272;
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r17,r20,-21004
	r17.s64 = r20.s64 + -21004;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// ld r3,216(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// addi r20,r22,-21028
	r20.s64 = r22.s64 + -21028;
	// addi r9,r9,-21280
	ctx.r9.s64 = ctx.r9.s64 + -21280;
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r15,r15,-20940
	r15.s64 = r15.s64 + -20940;
	// stw r14,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r14.u32);
	// addi r16,r16,-20952
	r16.s64 = r16.s64 + -20952;
	// lwz r14,100(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r18,r18,-20980
	r18.s64 = r18.s64 + -20980;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r19,r19,-20992
	r19.s64 = r19.s64 + -20992;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r21,r21,-21016
	r21.s64 = r21.s64 + -21016;
	// addi r24,r28,-21080
	r24.s64 = r28.s64 + -21080;
	// addi r27,r3,-21096
	r27.s64 = ctx.r3.s64 + -21096;
	// stw r14,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r14.u32);
	// addi r22,r4,-21104
	r22.s64 = ctx.r4.s64 + -21104;
	// addi r26,r10,-21292
	r26.s64 = ctx.r10.s64 + -21292;
	// addi r25,r11,-21304
	r25.s64 = ctx.r11.s64 + -21304;
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r14,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r14.u32);
	// addi r14,r30,-20928
	r14.s64 = r30.s64 + -20928;
	// ld r30,200(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// addi r23,r30,-21088
	r23.s64 = r30.s64 + -21088;
loc_82131848:
	// lwz r30,404(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mulli r11,r31,116
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(116));
	// lwz r10,2036(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2036);
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82131868;
	sub_826A2E60(ctx, base);
	// lwz r29,412(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f530
	ctx.lr = 0x82131878;
	sub_8215F530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r3,r30,2020
	ctx.r3.s64 = r30.s64 + 2020;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r31.u32);
	// bl 0x8214fcc8
	ctx.lr = 0x82131894;
	sub_8214FCC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// bl 0x8215f2d0
	ctx.lr = 0x821318A8;
	sub_8215F2D0(ctx, base);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821318B8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821318BC;
	sub_8215FA30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x821318C8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821318d8
	if (!ctx.cr0.eq) goto loc_821318D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821319ec
	goto loc_821319EC;
loc_821318D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82125d00
	ctx.lr = 0x821318E4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821318f4
	if (!ctx.cr0.eq) goto loc_821318F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821319ec
	goto loc_821319EC;
loc_821318F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82125d00
	ctx.lr = 0x82131900;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131910
	if (!ctx.cr0.eq) goto loc_82131910;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821319ec
	goto loc_821319EC;
loc_82131910:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82125d00
	ctx.lr = 0x8213191C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213192c
	if (!ctx.cr0.eq) goto loc_8213192C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821319ec
	goto loc_821319EC;
loc_8213192C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82125d00
	ctx.lr = 0x82131938;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131948
	if (!ctx.cr0.eq) goto loc_82131948;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821319ec
	goto loc_821319EC;
loc_82131948:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82125d00
	ctx.lr = 0x82131954;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131964
	if (!ctx.cr0.eq) goto loc_82131964;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821319ec
	goto loc_821319EC;
loc_82131964:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82125d00
	ctx.lr = 0x82131970;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131980
	if (!ctx.cr0.eq) goto loc_82131980;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821319ec
	goto loc_821319EC;
loc_82131980:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82125d00
	ctx.lr = 0x8213198C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213199c
	if (!ctx.cr0.eq) goto loc_8213199C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821319ec
	goto loc_821319EC;
loc_8213199C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82125d00
	ctx.lr = 0x821319A8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821319b8
	if (!ctx.cr0.eq) goto loc_821319B8;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821319ec
	goto loc_821319EC;
loc_821319B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82125d00
	ctx.lr = 0x821319C4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821319d4
	if (!ctx.cr0.eq) goto loc_821319D4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821319ec
	goto loc_821319EC;
loc_821319D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82125d00
	ctx.lr = 0x821319E0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821319f0
	if (!ctx.cr0.eq) goto loc_821319F0;
	// li r11,11
	ctx.r11.s64 = 11;
loc_821319EC:
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_821319F0:
	// li r30,0
	r30.s64 = 0;
loc_821319F4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131A00;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82131a24
	if (!ctx.cr6.eq) goto loc_82131A24;
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
	// b 0x82131a28
	goto loc_82131A28;
loc_82131A24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131A28:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bge cr6,0x82131b10
	if (!ctx.cr6.lt) goto loc_82131B10;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131A3C;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82131A44;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82131A48;
	sub_8215FA30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x82131A54;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131a68
	if (!ctx.cr0.eq) goto loc_82131A68;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82131b04
	goto loc_82131B04;
loc_82131A68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82125d00
	ctx.lr = 0x82131A74;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131a88
	if (!ctx.cr0.eq) goto loc_82131A88;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// b 0x82131b04
	goto loc_82131B04;
loc_82131A88:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x82131A94;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131aa8
	if (!ctx.cr0.eq) goto loc_82131AA8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82131b04
	goto loc_82131B04;
loc_82131AA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82125d00
	ctx.lr = 0x82131AB4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131ac8
	if (!ctx.cr0.eq) goto loc_82131AC8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// b 0x82131b04
	goto loc_82131B04;
loc_82131AC8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x82131AD4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131ae8
	if (!ctx.cr0.eq) goto loc_82131AE8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x82131b04
	goto loc_82131B04;
loc_82131AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82125d00
	ctx.lr = 0x82131AF4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82131b08
	if (!ctx.cr0.eq) goto loc_82131B08;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
loc_82131B04:
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_82131B08:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x821319f4
	goto loc_821319F4;
loc_82131B10:
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8215f338
	ctx.lr = 0x82131B18;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131B1C;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131b2c
	if (!ctx.cr6.gt) goto loc_82131B2C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131b3c
	goto loc_82131B3C;
loc_82131B2C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131b3c
	if (!ctx.cr6.lt) goto loc_82131B3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131B3C:
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8215f338
	ctx.lr = 0x82131B4C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131B50;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,4080
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4080, ctx.xer);
	// ble cr6,0x82131b60
	if (!ctx.cr6.gt) goto loc_82131B60;
	// li r11,4080
	ctx.r11.s64 = 4080;
	// b 0x82131b70
	goto loc_82131B70;
loc_82131B60:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131b70
	if (!ctx.cr6.lt) goto loc_82131B70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131B70:
	// stw r11,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8215f338
	ctx.lr = 0x82131B80;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131B84;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,2040
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2040, ctx.xer);
	// ble cr6,0x82131b94
	if (!ctx.cr6.gt) goto loc_82131B94;
	// li r11,2040
	ctx.r11.s64 = 2040;
	// b 0x82131ba4
	goto loc_82131BA4;
loc_82131B94:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131ba4
	if (!ctx.cr6.lt) goto loc_82131BA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131BA4:
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8215f338
	ctx.lr = 0x82131BB4;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131BB8;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131bc8
	if (!ctx.cr6.gt) goto loc_82131BC8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131bd8
	goto loc_82131BD8;
loc_82131BC8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131bd8
	if (!ctx.cr6.lt) goto loc_82131BD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131BD8:
	// stw r11,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r11.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131BE8;
	sub_8215F338(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131BF4;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131BF8;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131c08
	if (!ctx.cr6.gt) goto loc_82131C08;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131c18
	goto loc_82131C18;
loc_82131C08:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131c18
	if (!ctx.cr6.lt) goto loc_82131C18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131C18:
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131C28;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131C2C;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131c3c
	if (!ctx.cr6.gt) goto loc_82131C3C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131c4c
	goto loc_82131C4C;
loc_82131C3C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131c4c
	if (!ctx.cr6.lt) goto loc_82131C4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131C4C:
	// stw r11,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131C5C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131C60;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,4080
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4080, ctx.xer);
	// ble cr6,0x82131c70
	if (!ctx.cr6.gt) goto loc_82131C70;
	// li r11,4080
	ctx.r11.s64 = 4080;
	// b 0x82131c80
	goto loc_82131C80;
loc_82131C70:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131c80
	if (!ctx.cr6.lt) goto loc_82131C80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131C80:
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131C90;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131C94;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,4080
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4080, ctx.xer);
	// ble cr6,0x82131ca4
	if (!ctx.cr6.gt) goto loc_82131CA4;
	// li r10,4080
	ctx.r10.s64 = 4080;
	// b 0x82131cb4
	goto loc_82131CB4;
loc_82131CA4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131cb4
	if (!ctx.cr6.lt) goto loc_82131CB4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82131CB4:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r10,40(r28)
	REX_STORE_U32(r28.u32 + 40, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82131d04
	if (!ctx.cr6.eq) goto loc_82131D04;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8215f338
	ctx.lr = 0x82131CD0;
	sub_8215F338(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131CD8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131CDC;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// ble cr6,0x82131cec
	if (!ctx.cr6.gt) goto loc_82131CEC;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82131cfc
	goto loc_82131CFC;
loc_82131CEC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -128, ctx.xer);
	// bge cr6,0x82131cfc
	if (!ctx.cr6.lt) goto loc_82131CFC;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82131CFC:
	// stw r11,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r11.u32);
	// b 0x821322e4
	goto loc_821322E4;
loc_82131D04:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82131d84
	if (!ctx.cr6.eq) goto loc_82131D84;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131D18;
	sub_8215F338(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131D24;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131D28;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// ble cr6,0x82131d38
	if (!ctx.cr6.gt) goto loc_82131D38;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82131d48
	goto loc_82131D48;
loc_82131D38:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -128, ctx.xer);
	// bge cr6,0x82131d48
	if (!ctx.cr6.lt) goto loc_82131D48;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82131D48:
	// stw r11,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8215f338
	ctx.lr = 0x82131D58;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131D5C;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// ble cr6,0x82131d6c
	if (!ctx.cr6.gt) goto loc_82131D6C;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82131d7c
	goto loc_82131D7C;
loc_82131D6C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -128, ctx.xer);
	// bge cr6,0x82131d7c
	if (!ctx.cr6.lt) goto loc_82131D7C;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82131D7C:
	// stw r11,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r11.u32);
	// b 0x821322e4
	goto loc_821322E4;
loc_82131D84:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82132208
	if (ctx.cr6.eq) goto loc_82132208;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82132208
	if (ctx.cr6.eq) goto loc_82132208;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82132208
	if (ctx.cr6.eq) goto loc_82132208;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82132208
	if (ctx.cr6.eq) goto loc_82132208;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82132208
	if (ctx.cr6.eq) goto loc_82132208;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82131dcc
	if (ctx.cr6.eq) goto loc_82131DCC;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82131dcc
	if (ctx.cr6.eq) goto loc_82131DCC;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82131dcc
	if (ctx.cr6.eq) goto loc_82131DCC;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x821322e4
	if (!ctx.cr6.eq) goto loc_821322E4;
loc_82131DCC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8215f338
	ctx.lr = 0x82131DD8;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131DE4;
	sub_8215F338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131DF4;
	sub_8215F338(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82131E04;
	sub_8215F338(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82131e24
	if (!ctx.cr6.eq) goto loc_82131E24;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82131f5c
	if (ctx.cr6.eq) goto loc_82131F5C;
loc_82131E24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8215f338
	ctx.lr = 0x82131E30;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131E34;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131e44
	if (!ctx.cr6.gt) goto loc_82131E44;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131e54
	goto loc_82131E54;
loc_82131E44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131e54
	if (!ctx.cr6.lt) goto loc_82131E54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131E54:
	// stw r11,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8215f338
	ctx.lr = 0x82131E64;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131E68;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131e78
	if (!ctx.cr6.gt) goto loc_82131E78;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131e88
	goto loc_82131E88;
loc_82131E78:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131e88
	if (!ctx.cr6.lt) goto loc_82131E88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131E88:
	// stw r11,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8215f338
	ctx.lr = 0x82131E98;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131E9C;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131eac
	if (!ctx.cr6.gt) goto loc_82131EAC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131ebc
	goto loc_82131EBC;
loc_82131EAC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131ebc
	if (!ctx.cr6.lt) goto loc_82131EBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131EBC:
	// stw r11,52(r28)
	REX_STORE_U32(r28.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8215f338
	ctx.lr = 0x82131ECC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131ED0;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131ee0
	if (!ctx.cr6.gt) goto loc_82131EE0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131ef0
	goto loc_82131EF0;
loc_82131EE0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131ef0
	if (!ctx.cr6.lt) goto loc_82131EF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131EF0:
	// stw r11,56(r28)
	REX_STORE_U32(r28.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x82131F00;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131F04;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131f14
	if (!ctx.cr6.gt) goto loc_82131F14;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131f24
	goto loc_82131F24;
loc_82131F14:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131f24
	if (!ctx.cr6.lt) goto loc_82131F24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131F24:
	// stw r11,60(r28)
	REX_STORE_U32(r28.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8215f338
	ctx.lr = 0x82131F34;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131F38;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131f48
	if (!ctx.cr6.gt) goto loc_82131F48;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131f58
	goto loc_82131F58;
loc_82131F48:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131f58
	if (!ctx.cr6.lt) goto loc_82131F58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131F58:
	// stw r11,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r11.u32);
loc_82131F5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82131f78
	if (!ctx.cr6.eq) goto loc_82131F78;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x821320b0
	if (ctx.cr6.eq) goto loc_821320B0;
loc_82131F78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8215f338
	ctx.lr = 0x82131F84;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131F88;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131f98
	if (!ctx.cr6.gt) goto loc_82131F98;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131fa8
	goto loc_82131FA8;
loc_82131F98:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131fa8
	if (!ctx.cr6.lt) goto loc_82131FA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131FA8:
	// stw r11,68(r28)
	REX_STORE_U32(r28.u32 + 68, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8215f338
	ctx.lr = 0x82131FB8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131FBC;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82131fcc
	if (!ctx.cr6.gt) goto loc_82131FCC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82131fdc
	goto loc_82131FDC;
loc_82131FCC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82131fdc
	if (!ctx.cr6.lt) goto loc_82131FDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82131FDC:
	// stw r11,72(r28)
	REX_STORE_U32(r28.u32 + 72, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8215f338
	ctx.lr = 0x82131FEC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82131FF0;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132000
	if (!ctx.cr6.gt) goto loc_82132000;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132010
	goto loc_82132010;
loc_82132000:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132010
	if (!ctx.cr6.lt) goto loc_82132010;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132010:
	// stw r11,76(r28)
	REX_STORE_U32(r28.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8215f338
	ctx.lr = 0x82132020;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132024;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132034
	if (!ctx.cr6.gt) goto loc_82132034;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132044
	goto loc_82132044;
loc_82132034:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132044
	if (!ctx.cr6.lt) goto loc_82132044;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132044:
	// stw r11,80(r28)
	REX_STORE_U32(r28.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x82132054;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132058;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132068
	if (!ctx.cr6.gt) goto loc_82132068;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132078
	goto loc_82132078;
loc_82132068:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132078
	if (!ctx.cr6.lt) goto loc_82132078;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132078:
	// stw r11,84(r28)
	REX_STORE_U32(r28.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8215f338
	ctx.lr = 0x82132088;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8213208C;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x8213209c
	if (!ctx.cr6.gt) goto loc_8213209C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x821320ac
	goto loc_821320AC;
loc_8213209C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821320ac
	if (!ctx.cr6.lt) goto loc_821320AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821320AC:
	// stw r11,88(r28)
	REX_STORE_U32(r28.u32 + 88, ctx.r11.u32);
loc_821320B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821320cc
	if (!ctx.cr6.eq) goto loc_821320CC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x821322e4
	if (ctx.cr6.eq) goto loc_821322E4;
loc_821320CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8215f338
	ctx.lr = 0x821320D8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821320DC;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x821320ec
	if (!ctx.cr6.gt) goto loc_821320EC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x821320fc
	goto loc_821320FC;
loc_821320EC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821320fc
	if (!ctx.cr6.lt) goto loc_821320FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821320FC:
	// stw r11,92(r28)
	REX_STORE_U32(r28.u32 + 92, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8215f338
	ctx.lr = 0x8213210C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132110;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132120
	if (!ctx.cr6.gt) goto loc_82132120;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132130
	goto loc_82132130;
loc_82132120:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132130
	if (!ctx.cr6.lt) goto loc_82132130;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132130:
	// stw r11,96(r28)
	REX_STORE_U32(r28.u32 + 96, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8215f338
	ctx.lr = 0x82132140;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132144;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132154
	if (!ctx.cr6.gt) goto loc_82132154;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132164
	goto loc_82132164;
loc_82132154:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132164
	if (!ctx.cr6.lt) goto loc_82132164;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132164:
	// stw r11,100(r28)
	REX_STORE_U32(r28.u32 + 100, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8215f338
	ctx.lr = 0x82132174;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132178;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132188
	if (!ctx.cr6.gt) goto loc_82132188;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132198
	goto loc_82132198;
loc_82132188:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132198
	if (!ctx.cr6.lt) goto loc_82132198;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132198:
	// stw r11,104(r28)
	REX_STORE_U32(r28.u32 + 104, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x821321A8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821321AC;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x821321bc
	if (!ctx.cr6.gt) goto loc_821321BC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x821321cc
	goto loc_821321CC;
loc_821321BC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821321cc
	if (!ctx.cr6.lt) goto loc_821321CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821321CC:
	// stw r11,108(r28)
	REX_STORE_U32(r28.u32 + 108, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8215f338
	ctx.lr = 0x821321DC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821321E0;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x821321f0
	if (!ctx.cr6.gt) goto loc_821321F0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132200
	goto loc_82132200;
loc_821321F0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132200
	if (!ctx.cr6.lt) goto loc_82132200;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132200:
	// stw r11,112(r28)
	REX_STORE_U32(r28.u32 + 112, ctx.r11.u32);
	// b 0x821322e4
	goto loc_821322E4;
loc_82132208:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8215f338
	ctx.lr = 0x82132214;
	sub_8215F338(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82132220;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132224;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// ble cr6,0x82132234
	if (!ctx.cr6.gt) goto loc_82132234;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82132244
	goto loc_82132244;
loc_82132234:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132244
	if (!ctx.cr6.lt) goto loc_82132244;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82132244:
	// stw r11,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x8215f338
	ctx.lr = 0x82132254;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82132258;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// ble cr6,0x82132268
	if (!ctx.cr6.gt) goto loc_82132268;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x82132278
	goto loc_82132278;
loc_82132268:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -128, ctx.xer);
	// bge cr6,0x82132278
	if (!ctx.cr6.lt) goto loc_82132278;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_82132278:
	// stw r11,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x8215f338
	ctx.lr = 0x82132288;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8213228C;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,359
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 359, ctx.xer);
	// ble cr6,0x8213229c
	if (!ctx.cr6.gt) goto loc_8213229C;
	// li r11,359
	ctx.r11.s64 = 359;
	// b 0x821322ac
	goto loc_821322AC;
loc_8213229C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821322ac
	if (!ctx.cr6.lt) goto loc_821322AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821322AC:
	// stw r11,52(r28)
	REX_STORE_U32(r28.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x8215f338
	ctx.lr = 0x821322BC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821322C0;
	sub_8215F990(ctx, base);
	// cmpwi cr6,r3,4080
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4080, ctx.xer);
	// ble cr6,0x821322d0
	if (!ctx.cr6.gt) goto loc_821322D0;
	// li r11,4080
	ctx.r11.s64 = 4080;
	// b 0x821322e0
	goto loc_821322E0;
loc_821322D0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821322e0
	if (!ctx.cr6.lt) goto loc_821322E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821322E0:
	// stw r11,56(r28)
	REX_STORE_U32(r28.u32 + 56, ctx.r11.u32);
loc_821322E4:
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r31,200(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,2016(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82131848
	if (ctx.cr6.lt) goto loc_82131848;
	// b 0x82132300
	goto loc_82132300;
loc_821322FC:
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_82132300:
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,416
	r30.s64 = ctx.r11.s64 + 416;
loc_82132308:
	// lbz r11,-144(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213232c
	if (ctx.cr0.eq) goto loc_8213232C;
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2016(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	// lwz r4,2036(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 2036);
	// bl 0x8269c588
	ctx.lr = 0x8213232C;
	sub_8269C588(ctx, base);
loc_8213232C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,436
	r30.s64 = r30.s64 + 436;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82132308
	if (ctx.cr6.lt) goto loc_82132308;
loc_8213233C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82132340:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821971C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r7,r7,-31232
	ctx.r7.s64 = ctx.r7.s64 + -31232;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,4(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
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
	// stw r7,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// stw r6,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r31,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r31.u32);
	// stw r10,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r8,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8219D360;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x82120780
	ctx.lr = 0x8219D378;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8219d3a4
	if (ctx.cr0.eq) goto loc_8219D3A4;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x8219D390;
	sub_8215F5F8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219D3A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D3A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8219EEF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-28860
	ctx.r9.s64 = ctx.r9.s64 + -28860;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0F30) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a0f58
	if (ctx.cr6.eq) goto loc_821A0F58;
	// bl 0x821971c0
	ctx.lr = 0x821A0F4C;
	sub_821971C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-28152
	ctx.r11.s64 = ctx.r11.s64 + -28152;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821A0F58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2EB8) {
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
	ctx.lr = 0x821A2EC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-27916
	r29.s64 = ctx.r11.s64 + -27916;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821a2ef0
	if (!ctx.cr6.eq) goto loc_821A2EF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-27384
	ctx.r3.s64 = ctx.r11.s64 + -27384;
	// li r5,608
	ctx.r5.s64 = 608;
	// bl 0x821231d0
	ctx.lr = 0x821A2EF0;
	sub_821231D0(ctx, base);
loc_821A2EF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
	// addi r27,r31,36
	r27.s64 = r31.s64 + 36;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A2F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,-17364
	ctx.r6.s64 = ctx.r11.s64 + -17364;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// bl 0x8264e548
	ctx.lr = 0x821A2F34;
	sub_8264E548(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821a2f58
	if (ctx.cr0.eq) goto loc_821A2F58;
	// cmplwi cr6,r30,997
	ctx.cr6.compare<uint32_t>(r30.u32, 997, ctx.xer);
	// beq cr6,0x821a2f60
	if (ctx.cr6.eq) goto loc_821A2F60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// li r5,614
	ctx.r5.s64 = 614;
	// bl 0x821231d0
	ctx.lr = 0x821A2F58;
	sub_821231D0(ctx, base);
loc_821A2F58:
	// cmplwi cr6,r30,997
	ctx.cr6.compare<uint32_t>(r30.u32, 997, ctx.xer);
	// bne cr6,0x821a2f68
	if (!ctx.cr6.eq) goto loc_821A2F68;
loc_821A2F60:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821a2f74
	goto loc_821A2F74;
loc_821A2F68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a2f78
	if (!ctx.cr6.eq) goto loc_821A2F78;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821A2F74:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_821A2F78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821A6FC8) {
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
	// addi r11,r11,-25196
	ctx.r11.s64 = ctx.r11.s64 + -25196;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821a7198
	ctx.lr = 0x821A6FF4;
	sub_821A7198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821780e8
	ctx.lr = 0x821A6FFC;
	sub_821780E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a700c
	if (ctx.cr0.eq) goto loc_821A700C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A700C;
	sub_8269CE98(ctx, base);
loc_821A700C:
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

DEFINE_REX_FUNC(sub_821A8E08) {
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
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// addi r11,r11,-25024
	ctx.r11.s64 = ctx.r11.s64 + -25024;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x821A8E38;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821780e8
	ctx.lr = 0x821A8E40;
	sub_821780E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a8e50
	if (ctx.cr0.eq) goto loc_821A8E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A8E50;
	sub_8269CE98(ctx, base);
loc_821A8E50:
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

DEFINE_REX_FUNC(sub_821AB708) {
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
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821abcb8
	ctx.lr = 0x821AB734;
	sub_821ABCB8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25316
	ctx.r11.s64 = ctx.r11.s64 + -25316;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82125e40
	ctx.lr = 0x821AB748;
	sub_82125E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ab758
	if (ctx.cr0.eq) goto loc_821AB758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821AB758;
	sub_8269CE98(ctx, base);
loc_821AB758:
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

DEFINE_REX_FUNC(sub_821AF060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821AF068;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821af0dc
	if (!ctx.cr6.eq) goto loc_821AF0DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// addi r30,r11,29744
	r30.s64 = ctx.r11.s64 + 29744;
	// bge cr6,0x821af0a4
	if (!ctx.cr6.lt) goto loc_821AF0A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x821AF0A4;
	sub_821231D0(ctx, base);
loc_821AF0A4:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821af0c4
	if (ctx.cr6.eq) goto loc_821AF0C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821AF0C4;
	sub_821231D0(ctx, base);
loc_821AF0C4:
	// lwz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// b 0x821af0e8
	goto loc_821AF0E8;
loc_821AF0DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821de3c8
	ctx.lr = 0x821AF0E8;
	sub_821DE3C8(ctx, base);
loc_821AF0E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B2E30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15144
	ctx.r3.s64 = ctx.r11.s64 + -15144;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3888) {
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
	ctx.lr = 0x821B3890;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B38B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x821b38e0
	if (ctx.cr0.eq) goto loc_821B38E0;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B38D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b39dc
	if (ctx.cr0.eq) goto loc_821B39DC;
loc_821B38E0:
	// lwz r29,128(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 128);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// ble cr6,0x821b3914
	if (!ctx.cr6.gt) goto loc_821B3914;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821b3914
	if (!ctx.cr6.eq) goto loc_821B3914;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8216b8e0
	ctx.lr = 0x821B390C;
	sub_8216B8E0(ctx, base);
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r27,104(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_821B3914:
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
	ctx.lr = 0x821B392C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821b3950
	if (!ctx.cr6.gt) goto loc_821B3950;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b3950
	if (!ctx.cr6.eq) goto loc_821B3950;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821b2d80
	ctx.lr = 0x821B394C;
	sub_821B2D80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_821B3950:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,208(r28)
	REX_STORE_U32(r28.u32 + 208, r30.u32);
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// stb r11,204(r28)
	REX_STORE_U8(r28.u32 + 204, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B3970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b39dc
	if (ctx.cr0.eq) goto loc_821B39DC;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B398C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b39dc
	if (ctx.cr0.eq) goto loc_821B39DC;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r29,140(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 140);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217f4b0
	ctx.lr = 0x821B39A4;
	sub_8217F4B0(ctx, base);
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// stw r30,98(r1)
	REX_STORE_U32(ctx.r1.u32 + 98, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B39DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B39DC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821BD4D0) {
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
	ctx.lr = 0x821BD4D8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x821BD4F4;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,124(r31)
	REX_STORE_U32(r31.u32 + 124, r26.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r26,128(r31)
	REX_STORE_U8(r31.u32 + 128, r26.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r9,r9,-18848
	ctx.r9.s64 = ctx.r9.s64 + -18848;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,116
	r28.s64 = r31.s64 + 116;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r26,264(r31)
	REX_STORE_U32(r31.u32 + 264, r26.u32);
	// stw r26,268(r31)
	REX_STORE_U32(r31.u32 + 268, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BD53C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bd568
	if (ctx.cr0.eq) goto loc_821BD568;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-10160
	ctx.r10.s64 = ctx.r10.s64 + -10160;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bd56c
	goto loc_821BD56C;
loc_821BD568:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821BD56C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,23304
	ctx.r5.s64 = ctx.r11.s64 + 23304;
	// bl 0x8216be80
	ctx.lr = 0x821BD57C;
	sub_8216BE80(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821BD584;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821bd5b4
	if (ctx.cr0.eq) goto loc_821BD5B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,21300
	ctx.r4.s64 = ctx.r11.s64 + 21300;
	// bl 0x82120600
	ctx.lr = 0x821BD59C;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821BD5B0;
	sub_82196BA8(ctx, base);
	// b 0x821bd5b8
	goto loc_821BD5B8;
loc_821BD5B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821BD5B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BD5CC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd5e8
	if (ctx.cr0.eq) goto loc_821BD5E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821BD5E8;
	sub_82120AC0(ctx, base);
loc_821BD5E8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821BD5F0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821bd620
	if (ctx.cr0.eq) goto loc_821BD620;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-19160
	ctx.r4.s64 = ctx.r11.s64 + -19160;
	// bl 0x82120600
	ctx.lr = 0x821BD608;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821BD61C;
	sub_82196BA8(ctx, base);
	// b 0x821bd624
	goto loc_821BD624;
loc_821BD620:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821BD624:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BD634;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd64c
	if (ctx.cr0.eq) goto loc_821BD64C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BD64C;
	sub_82120AC0(ctx, base);
loc_821BD64C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BD654;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bd674
	if (ctx.cr0.eq) goto loc_821BD674;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BD66C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bd678
	goto loc_821BD678;
loc_821BD674:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821BD678:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BD684;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BD68C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821bd700
	if (ctx.cr0.eq) goto loc_821BD700;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19180
	ctx.r4.s64 = ctx.r11.s64 + -19180;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BD6B0;
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
	ctx.lr = 0x821BD6C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bd6f0
	if (ctx.cr0.eq) goto loc_821BD6F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-10088
	ctx.r10.s64 = ctx.r10.s64 + -10088;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bd6f4
	goto loc_821BD6F4;
loc_821BD6F0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821BD6F4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821bd704
	goto loc_821BD704;
loc_821BD700:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821BD704:
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
	ctx.lr = 0x821BD71C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BD724;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821bd75c
	if (ctx.cr0.eq) goto loc_821BD75C;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19168
	ctx.r4.s64 = ctx.r11.s64 + -19168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BD748;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x821bd760
	goto loc_821BD760;
loc_821BD75C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821BD760:
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
	ctx.lr = 0x821BD778;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821D0BA0) {
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
	ctx.lr = 0x821D0BA8;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x821D0BC4;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r26,124(r31)
	REX_STORE_U8(r31.u32 + 124, r26.u8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// addi r11,r10,-13164
	ctx.r11.s64 = ctx.r10.s64 + -13164;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// addi r21,r31,128
	r21.s64 = r31.s64 + 128;
	// lfs f0,964(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r11,-13412
	ctx.r4.s64 = ctx.r11.s64 + -13412;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r25,r31,116
	r25.s64 = r31.s64 + 116;
	// addi r24,r31,120
	r24.s64 = r31.s64 + 120;
	// addi r22,r31,124
	r22.s64 = r31.s64 + 124;
	// bl 0x82120600
	ctx.lr = 0x821D0C0C;
	sub_82120600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// lfs f0,700(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// li r9,150
	ctx.r9.s64 = 150;
	// li r11,250
	ctx.r11.s64 = 250;
	// lfs f13,168(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,163(r31)
	REX_STORE_U8(r31.u32 + 163, ctx.r10.u8);
	// stb r9,162(r31)
	REX_STORE_U8(r31.u32 + 162, ctx.r9.u8);
	// lfs f12,720(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 720);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,161(r31)
	REX_STORE_U8(r31.u32 + 161, ctx.r11.u8);
	// lfs f11,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stb r8,160(r31)
	REX_STORE_U8(r31.u32 + 160, ctx.r8.u8);
	// lfs f10,708(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 708);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// addi r20,r31,156
	r20.s64 = r31.s64 + 156;
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r23,r31,160
	r23.s64 = r31.s64 + 160;
	// stfs f11,180(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r18,r31,164
	r18.s64 = r31.s64 + 164;
	// stfs f10,184(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r19,r31,176
	r19.s64 = r31.s64 + 176;
	// bl 0x822f6280
	ctx.lr = 0x821D0C74;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0c94
	if (ctx.cr0.eq) goto loc_821D0C94;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821D0C8C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821d0c98
	goto loc_821D0C98;
loc_821D0C94:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821D0C98:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821D0CA4;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821D0CAC;
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
	// beq 0x821d0d20
	if (ctx.cr0.eq) goto loc_821D0D20;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19112
	ctx.r4.s64 = ctx.r11.s64 + -19112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0CE0;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821D0CEC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0d10
	if (ctx.cr0.eq) goto loc_821D0D10;
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31416
	ctx.r10.s64 = ctx.r10.s64 + 31416;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821d0d14
	goto loc_821D0D14;
loc_821D0D10:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821D0D14:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821d0d24
	goto loc_821D0D24;
loc_821D0D20:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0D24:
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
	ctx.lr = 0x821D0D3C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821D0D44;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d0da8
	if (ctx.cr0.eq) goto loc_821D0DA8;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13404
	ctx.r4.s64 = ctx.r11.s64 + -13404;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0D68;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821D0D74;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0d98
	if (ctx.cr0.eq) goto loc_821D0D98;
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31416
	ctx.r10.s64 = ctx.r10.s64 + 31416;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821d0d9c
	goto loc_821D0D9C;
loc_821D0D98:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821D0D9C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821d0dac
	goto loc_821D0DAC;
loc_821D0DA8:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0DAC:
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
	ctx.lr = 0x821D0DC4;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821D0DCC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d0e30
	if (ctx.cr0.eq) goto loc_821D0E30;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13392
	ctx.r4.s64 = ctx.r11.s64 + -13392;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0DF0;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821D0DFC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0e20
	if (ctx.cr0.eq) goto loc_821D0E20;
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31416
	ctx.r10.s64 = ctx.r10.s64 + 31416;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821d0e24
	goto loc_821D0E24;
loc_821D0E20:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821D0E24:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821d0e34
	goto loc_821D0E34;
loc_821D0E30:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0E34:
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
	ctx.lr = 0x821D0E4C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821D0E54;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821d0e8c
	if (ctx.cr0.eq) goto loc_821D0E8C;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13380
	ctx.r4.s64 = ctx.r11.s64 + -13380;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0E80;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821d0e90
	goto loc_821D0E90;
loc_821D0E8C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0E90:
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
	ctx.lr = 0x821D0EA8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821D0EB0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d0ee0
	if (ctx.cr0.eq) goto loc_821D0EE0;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13368
	ctx.r4.s64 = ctx.r11.s64 + -13368;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0ED4;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821d0ee4
	goto loc_821D0EE4;
loc_821D0EE0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0EE4:
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
	ctx.lr = 0x821D0EFC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821D0F04;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d0f34
	if (ctx.cr0.eq) goto loc_821D0F34;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13356
	ctx.r4.s64 = ctx.r11.s64 + -13356;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0F28;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821d0f38
	goto loc_821D0F38;
loc_821D0F34:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0F38:
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
	ctx.lr = 0x821D0F50;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821D0F58;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d0f88
	if (ctx.cr0.eq) goto loc_821D0F88;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13344
	ctx.r4.s64 = ctx.r11.s64 + -13344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0F7C;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821d0f8c
	goto loc_821D0F8C;
loc_821D0F88:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0F8C:
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
	ctx.lr = 0x821D0FA4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821D0FAC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d0fdc
	if (ctx.cr0.eq) goto loc_821D0FDC;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13332
	ctx.r4.s64 = ctx.r11.s64 + -13332;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D0FD0;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821d0fe0
	goto loc_821D0FE0;
loc_821D0FDC:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821D0FE0:
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
	ctx.lr = 0x821D0FF8;
	sub_82264568(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D1000;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d1030
	if (ctx.cr0.eq) goto loc_821D1030;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-13320
	ctx.r4.s64 = ctx.r11.s64 + -13320;
	// bl 0x82120600
	ctx.lr = 0x821D1018;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r27,1
	r27.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x821D102C;
	sub_82197628(ctx, base);
	// b 0x821d1034
	goto loc_821D1034;
loc_821D1030:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D1034:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D1048;
	sub_82145710(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1064
	if (ctx.cr0.eq) goto loc_821D1064;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821D1064;
	sub_82120AC0(ctx, base);
loc_821D1064:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D106C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d109c
	if (ctx.cr0.eq) goto loc_821D109C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-13312
	ctx.r4.s64 = ctx.r11.s64 + -13312;
	// bl 0x82120600
	ctx.lr = 0x821D1084;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821D1098;
	sub_82196BA8(ctx, base);
	// b 0x821d10a0
	goto loc_821D10A0;
loc_821D109C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D10A0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D10B0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d10cc
	if (ctx.cr0.eq) goto loc_821D10CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821D10CC;
	sub_82120AC0(ctx, base);
loc_821D10CC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821D10D4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d1104
	if (ctx.cr0.eq) goto loc_821D1104;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-13300
	ctx.r4.s64 = ctx.r11.s64 + -13300;
	// bl 0x82120600
	ctx.lr = 0x821D10EC;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// bl 0x82191600
	ctx.lr = 0x821D1100;
	sub_82191600(ctx, base);
	// b 0x821d1108
	goto loc_821D1108;
loc_821D1104:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D1108:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D1118;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1134
	if (ctx.cr0.eq) goto loc_821D1134;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r27,r27,0,30,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821D1134;
	sub_82120AC0(ctx, base);
loc_821D1134:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821D113C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d116c
	if (ctx.cr0.eq) goto loc_821D116C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-13288
	ctx.r4.s64 = ctx.r11.s64 + -13288;
	// bl 0x82120600
	ctx.lr = 0x821D1154;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// bl 0x821bf110
	ctx.lr = 0x821D1168;
	sub_821BF110(ctx, base);
	// b 0x821d1170
	goto loc_821D1170;
loc_821D116C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D1170:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D1180;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d119c
	if (ctx.cr0.eq) goto loc_821D119C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821D119C;
	sub_82120AC0(ctx, base);
loc_821D119C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821D11A4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d11f0
	if (ctx.cr0.eq) goto loc_821D11F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-13276
	ctx.r4.s64 = ctx.r11.s64 + -13276;
	// bl 0x82120600
	ctx.lr = 0x821D11BC;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// bl 0x82197628
	ctx.lr = 0x821D11D0;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-11848
	ctx.r10.s64 = ctx.r10.s64 + -11848;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x821d11f4
	goto loc_821D11F4;
loc_821D11F0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821D11F4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D1204;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1220
	if (ctx.cr0.eq) goto loc_821D1220;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r27,r27,0,28,26
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821D1220;
	sub_82120AC0(ctx, base);
loc_821D1220:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D1228;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d1258
	if (ctx.cr0.eq) goto loc_821D1258;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-13264
	ctx.r4.s64 = ctx.r11.s64 + -13264;
	// bl 0x82120600
	ctx.lr = 0x821D1240;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// bl 0x8219d708
	ctx.lr = 0x821D1254;
	sub_8219D708(ctx, base);
	// b 0x821d125c
	goto loc_821D125C;
loc_821D1258:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D125C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D126C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1288
	if (ctx.cr0.eq) goto loc_821D1288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r27,r27,0,27,25
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821D1288;
	sub_82120AC0(ctx, base);
loc_821D1288:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x821D1290;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d12c0
	if (ctx.cr0.eq) goto loc_821D12C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-13252
	ctx.r4.s64 = ctx.r11.s64 + -13252;
	// bl 0x82120600
	ctx.lr = 0x821D12A8;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// bl 0x821d13f8
	ctx.lr = 0x821D12BC;
	sub_821D13F8(ctx, base);
	// b 0x821d12c4
	goto loc_821D12C4;
loc_821D12C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D12C4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D12D4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d12f0
	if (ctx.cr0.eq) goto loc_821D12F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r27,r27,0,26,24
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821D12F0;
	sub_82120AC0(ctx, base);
loc_821D12F0:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821D12F8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d1328
	if (ctx.cr0.eq) goto loc_821D1328;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-13236
	ctx.r4.s64 = ctx.r11.s64 + -13236;
	// bl 0x82120600
	ctx.lr = 0x821D1310;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// bl 0x8219db58
	ctx.lr = 0x821D1324;
	sub_8219DB58(ctx, base);
	// b 0x821d132c
	goto loc_821D132C;
loc_821D1328:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821D132C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D133C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d1354
	if (ctx.cr0.eq) goto loc_821D1354;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x821D1354;
	sub_82120AC0(ctx, base);
loc_821D1354:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82205A18) {
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
	ctx.lr = 0x82205A20;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,6092(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205A44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,-15352(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15352);
	// lwz r29,6040(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82120600
	ctx.lr = 0x82205A5C;
	sub_82120600(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82205A8C;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82205de8
	if (ctx.cr0.eq) goto loc_82205DE8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82205f30
	ctx.lr = 0x82205AA0;
	sub_82205F30(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r29,r25,96
	r29.s64 = r25.s64 + 96;
	// bl 0x822f6280
	ctx.lr = 0x82205AB8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82205e04
	if (ctx.cr0.eq) goto loc_82205E04;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82205AD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82205af8
	if (!ctx.cr6.eq) goto loc_82205AF8;
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
	// b 0x82205afc
	goto loc_82205AFC;
loc_82205AF8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82205AFC:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82205c24
	if (!ctx.cr6.lt) goto loc_82205C24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82205B10;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82205B14;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82205B28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82120ac0
	ctx.lr = 0x82205B38;
	sub_82120AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8217a160
	ctx.lr = 0x82205B44;
	sub_8217A160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120700
	ctx.lr = 0x82205B50;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82205B60;
	sub_82120AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8217a1d8
	ctx.lr = 0x82205B6C;
	sub_8217A1D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82120700
	ctx.lr = 0x82205B78;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82205B88;
	sub_82120AC0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82205ba0
	if (!ctx.cr6.lt) goto loc_82205BA0;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
loc_82205BA0:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82205bb4
	if (!ctx.cr6.lt) goto loc_82205BB4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82205BB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205BC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82205bfc
	if (!ctx.cr0.eq) goto loc_82205BFC;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82205bfc
	if (ctx.cr0.eq) goto loc_82205BFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82205e20
	ctx.lr = 0x82205BFC;
	sub_82205E20(ctx, base);
loc_82205BFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82120ac0
	ctx.lr = 0x82205C0C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82205C1C;
	sub_82120AC0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82205ad4
	goto loc_82205AD4;
loc_82205C24:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82205d54
	if (ctx.cr6.eq) goto loc_82205D54;
	// addi r31,r27,32
	r31.s64 = r27.s64 + 32;
loc_82205C68:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r5,r28,36
	ctx.r5.s64 = r28.s64 + 36;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82205cb0
	if (!ctx.cr6.lt) goto loc_82205CB0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82205cb4
	if (!ctx.cr6.gt) goto loc_82205CB4;
loc_82205CB0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82205CB4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82205d00
	if (ctx.cr0.eq) goto loc_82205D00;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// srawi r29,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r29.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x82205ce0
	if (!ctx.cr6.eq) goto loc_82205CE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8c0
	ctx.lr = 0x82205CE0;
	sub_8212A8C0(ctx, base);
loc_82205CE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205d24
	if (ctx.cr6.eq) goto loc_82205D24;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82205d24
	goto loc_82205D24;
loc_82205D00:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82205d14
	if (!ctx.cr6.eq) goto loc_82205D14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8c0
	ctx.lr = 0x82205D14;
	sub_8212A8C0(ctx, base);
loc_82205D14:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205d24
	if (ctx.cr6.eq) goto loc_82205D24;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82205D24:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82205c68
	if (!ctx.cr6.eq) goto loc_82205C68;
loc_82205D54:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// beq cr6,0x82205de4
	if (ctx.cr6.eq) goto loc_82205DE4;
loc_82205DA4:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82205DBC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82205DCC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82205DD4;
	sub_8269CE98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82205da4
	if (!ctx.cr6.eq) goto loc_82205DA4;
loc_82205DE4:
	// bl 0x8269ce98
	ctx.lr = 0x82205DE8;
	sub_8269CE98(ctx, base);
loc_82205DE8:
	// lwz r3,6092(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cf8
	return;
loc_82205E04:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82205E1C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82228500) {
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
	ctx.lr = 0x82228520;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-23684
	ctx.r11.s64 = ctx.r11.s64 + -23684;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82228534;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228554
	if (ctx.cr0.eq) goto loc_82228554;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222854C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82228558
	goto loc_82228558;
loc_82228554:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82228558:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82228564;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8222856C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822285e4
	if (ctx.cr0.eq) goto loc_822285E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-19340
	ctx.r4.s64 = ctx.r10.s64 + -19340;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82228594;
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
	ctx.lr = 0x822285A8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822285d4
	if (ctx.cr0.eq) goto loc_822285D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-31200
	ctx.r10.s64 = ctx.r10.s64 + -31200;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822285d8
	goto loc_822285D8;
loc_822285D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822285D8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822285e8
	goto loc_822285E8;
loc_822285E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822285E8:
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
	ctx.lr = 0x82228600;
	sub_82264568(ctx, base);
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

DEFINE_REX_FUNC(sub_8222C458) {
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
	// lbz r11,141(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 141);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222c4a0
	if (ctx.cr0.eq) goto loc_8222C4A0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222c4a8
	if (ctx.cr0.eq) goto loc_8222C4A8;
loc_8222C4A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222c548
	ctx.lr = 0x8222C4A8;
	sub_8222C548(ctx, base);
loc_8222C4A8:
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

DEFINE_REX_FUNC(sub_8222FC58) {
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
	ctx.lr = 0x8222FC60;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,1040
	ctx.r3.s64 = 1040;
	// bl 0x822f6280
	ctx.lr = 0x8222FC70;
	sub_822F6280(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222fc84
	if (ctx.cr0.eq) goto loc_8222FC84;
	// bl 0x8224a6d8
	ctx.lr = 0x8222FC80;
	sub_8224A6D8(ctx, base);
	// b 0x8222fc88
	goto loc_8222FC88;
loc_8222FC84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8222FC88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,180(r26)
	REX_STORE_U32(r26.u32 + 180, ctx.r3.u32);
	// bne cr6,0x8222fcac
	if (!ctx.cr6.eq) goto loc_8222FCAC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-20884
	ctx.r4.s64 = ctx.r11.s64 + -20884;
	// addi r3,r10,-20828
	ctx.r3.s64 = ctx.r10.s64 + -20828;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x8222FCAC;
	sub_821231D0(ctx, base);
loc_8222FCAC:
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// std r27,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r27.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// std r27,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r27.u64);
	// bl 0x82120600
	ctx.lr = 0x8222FCCC;
	sub_82120600(ctx, base);
	// lis r17,-32106
	r17.s64 = -2104098816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8222FCDC;
	sub_82180E18(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8222FCF0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r18,96
	r30.s64 = r18.s64 + 96;
	// addi r29,r11,22808
	r29.s64 = ctx.r11.s64 + 22808;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FD08;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r22,r27
	r22.u64 = r27.u64;
	// addi r21,r11,-19348
	r21.s64 = ctx.r11.s64 + -19348;
	// addi r20,r10,23076
	r20.s64 = ctx.r10.s64 + 23076;
	// addi r25,r9,23080
	r25.s64 = ctx.r9.s64 + 23080;
	// addi r24,r8,32412
	r24.s64 = ctx.r8.s64 + 32412;
	// addi r23,r7,16384
	r23.s64 = ctx.r7.s64 + 16384;
loc_8222FD44:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FD50;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8222fd68
	if (!ctx.cr6.eq) goto loc_8222FD68;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222fd6c
	goto loc_8222FD6C;
loc_8222FD68:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8222FD6C:
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222fe28
	if (!ctx.cr6.lt) goto loc_8222FE28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FD80;
	sub_8215F338(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f530
	ctx.lr = 0x8222FD88;
	sub_8215F530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FD98;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8222FDA0;
	sub_8215F2D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FDA8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222FDAC;
	sub_8215FA30(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222fe20
	if (!ctx.cr6.eq) goto loc_8222FE20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FDC4;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8222FDCC;
	sub_8215F2D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222FDD4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222FDD8;
	sub_8215FA30(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x8222FDE4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222fe14
	if (ctx.cr0.eq) goto loc_8222FE14;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8222FDF8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222fe14
	if (ctx.cr0.eq) goto loc_8222FE14;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8222FE0C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222fe20
	if (!ctx.cr0.eq) goto loc_8222FE20;
loc_8222FE14:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82122730
	ctx.lr = 0x8222FE20;
	sub_82122730(ctx, base);
loc_8222FE20:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// b 0x8222fd44
	goto loc_8222FD44;
loc_8222FE28:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r11,6248(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6248);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x821a33a0
	ctx.lr = 0x8222FE38;
	sub_821A33A0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r28,-1
	r28.s64 = -1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r31,r26,124
	r31.s64 = r26.s64 + 124;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82120b20
	ctx.lr = 0x8222FE90;
	sub_82120B20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f670
	ctx.lr = 0x8222FEA0;
	sub_8215F670(ctx, base);
	// lwz r11,144(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 144);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222feb4
	if (ctx.cr6.lt) goto loc_8222FEB4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8222feb8
	goto loc_8222FEB8;
loc_8222FEB4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8222FEB8:
	// bl 0x8215fbf8
	ctx.lr = 0x8222FEBC;
	sub_8215FBF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8222FEC8;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26688
	ctx.r4.s64 = ctx.r11.s64 + -26688;
	// bl 0x8215f338
	ctx.lr = 0x8222FED4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222ff88
	if (ctx.cr6.eq) goto loc_8222FF88;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8222ff04
	if (!ctx.cr6.eq) goto loc_8222FF04;
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
	// b 0x8222ff08
	goto loc_8222FF08;
loc_8222FF04:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8222FF08:
	// lwz r11,6248(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6248);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x821a33a0
	ctx.lr = 0x8222FF14;
	sub_821A33A0(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8215f1b0
	ctx.lr = 0x8222FF40;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222FF44;
	sub_8215FA30(ctx, base);
	// addi r31,r26,152
	r31.s64 = r26.s64 + 152;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120b20
	ctx.lr = 0x8222FF5C;
	sub_82120B20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x8215f670
	ctx.lr = 0x8222FF6C;
	sub_8215F670(ctx, base);
	// lwz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 172);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222ff80
	if (ctx.cr6.lt) goto loc_8222FF80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8222ff84
	goto loc_8222FF84;
loc_8222FF80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8222FF84:
	// bl 0x8215fbf8
	ctx.lr = 0x8222FF88;
	sub_8215FBF8(ctx, base);
loc_8222FF88:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,26288
	r31.s64 = ctx.r11.s64 + 26288;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8222FF9C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26744
	ctx.r4.s64 = ctx.r11.s64 + -26744;
	// bl 0x8215f670
	ctx.lr = 0x8222FFA8;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8222FFB0;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r27,8(r30)
	REX_STORE_U8(r30.u32 + 8, r27.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x8222FFC8;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-7872
	ctx.r4.s64 = ctx.r11.s64 + -7872;
	// bl 0x8215f670
	ctx.lr = 0x8222FFD4;
	sub_8215F670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// std r27,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r27.u64);
	// bl 0x8215f670
	ctx.lr = 0x8222FFF0;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x8215f670
	ctx.lr = 0x8222FFFC;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-20780
	ctx.r4.s64 = ctx.r11.s64 + -20780;
	// bl 0x8215fbf8
	ctx.lr = 0x82230008;
	sub_8215FBF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x82230018;
	sub_8215F670(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8215efb0
	ctx.lr = 0x82230020;
	sub_8215EFB0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r26,32
	ctx.r4.s64 = r26.s64 + 32;
	// addi r5,r11,-24748
	ctx.r5.s64 = ctx.r11.s64 + -24748;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82121610
	ctx.lr = 0x82230034;
	sub_82121610(ctx, base);
	// lwz r11,180(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 180);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82120b20
	ctx.lr = 0x8223004C;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8223005C;
	sub_82120AC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,180(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 180);
	// bl 0x82178528
	ctx.lr = 0x82230068;
	sub_82178528(ctx, base);
	// lwz r3,180(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 180);
	// bl 0x821787e8
	ctx.lr = 0x82230070;
	sub_821787E8(ctx, base);
	// lwz r3,180(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 180);
	// bl 0x82151d50
	ctx.lr = 0x82230078;
	sub_82151D50(ctx, base);
	// lwz r11,116(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 116);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821a1f88
	ctx.lr = 0x82230088;
	sub_821A1F88(ctx, base);
	// lwz r3,6040(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 6040);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822300A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82122800
	ctx.lr = 0x822300A8;
	sub_82122800(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f0f0
	ctx.lr = 0x822300B0;
	sub_8215F0F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x822300B8;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82250670) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13276
	ctx.r3.s64 = ctx.r11.s64 + -13276;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82250708) {
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
	ctx.lr = 0x82250710;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// bl 0x82250b90
	ctx.lr = 0x82250728;
	sub_82250B90(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82151d50
	ctx.lr = 0x82250730;
	sub_82151D50(ctx, base);
	// lbz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 112);
	// addi r29,r3,64
	r29.s64 = ctx.r3.s64 + 64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r3,32
	r26.s64 = ctx.r3.s64 + 32;
	// beq 0x82250968
	if (ctx.cr0.eq) goto loc_82250968;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r28,r31,144
	r28.s64 = r31.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82250954
	if (ctx.cr0.eq) goto loc_82250954;
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82250fa8
	ctx.lr = 0x82250788;
	sub_82250FA8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251288
	ctx.lr = 0x82250798;
	sub_82251288(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82251758
	ctx.lr = 0x822507B0;
	sub_82251758(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250904
	if (ctx.cr6.eq) goto loc_82250904;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82151d50
	ctx.lr = 0x822507F8;
	sub_82151D50(ctx, base);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f9,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f8,164(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,168(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f10,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f6,f9,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f6.f64)));
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f0,f7,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f0,f3,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82250880
	if (!ctx.cr6.gt) goto loc_82250880;
	// stfs f11,104(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// b 0x822508d8
	goto loc_822508D8;
loc_82250880:
	// lfs f10,1380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x822508d4
	if (!ctx.cr6.lt) goto loc_822508D4;
	// fsubs f9,f31,f11
	ctx.f9.f64 = double(float(f31.f64 - ctx.f11.f64));
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,1384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,1388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1388);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
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
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f9,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f9,f9,f31,f11
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? f31.f64 : ctx.f11.f64;
	// fnmsubs f0,f0,f10,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fsubs f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 - f31.f64));
	// fmadds f0,f0,f13,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f31.f64)));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// b 0x822508d8
	goto loc_822508D8;
loc_822508D4:
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
loc_822508D8:
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
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
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f11
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// b 0x82250908
	goto loc_82250908;
loc_82250904:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_82250908:
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251950
	ctx.lr = 0x82250940;
	sub_82251950(ctx, base);
	// lbz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 48);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82250964
	goto loc_82250964;
loc_82250954:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_82250964:
	// bl 0x82251ac0
	ctx.lr = 0x82250968;
	sub_82251AC0(ctx, base);
loc_82250968:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822687E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822687F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// b 0x8226885c
	goto loc_8226885C;
loc_8226880C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82268948
	ctx.lr = 0x82268818;
	sub_82268948(ctx, base);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8213cc48
	ctx.lr = 0x82268834;
	sub_8213CC48(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8269ce98
	ctx.lr = 0x8226883C;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8226884C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82268854;
	sub_8269CE98(ctx, base);
	// lbz r11,57(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 57);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8226885C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226880c
	if (ctx.cr0.eq) goto loc_8226880C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x8226888C;
	sub_8269CE98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8226D810) {
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
	ctx.lr = 0x8226D818;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r19,0
	r19.s64 = 0;
	// bl 0x82120600
	ctx.lr = 0x8226D848;
	sub_82120600(ctx, base);
	// lis r20,-32106
	r20.s64 = -2104098816;
	// li r31,1
	r31.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r21,7
	r21.s64 = 7;
	// beq 0x8226d950
	if (ctx.cr0.eq) goto loc_8226D950;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-24748
	ctx.r4.s64 = ctx.r11.s64 + -24748;
	// bl 0x82120600
	ctx.lr = 0x8226D890;
	sub_82120600(ctx, base);
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r30,3
	r30.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d950
	if (ctx.cr0.eq) goto loc_8226D950;
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d950
	if (ctx.cr0.eq) goto loc_8226D950;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x82120600
	ctx.lr = 0x8226D8EC;
	sub_82120600(ctx, base);
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D90C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d950
	if (ctx.cr0.eq) goto loc_8226D950;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-5296
	ctx.r4.s64 = ctx.r11.s64 + -5296;
	// bl 0x82120600
	ctx.lr = 0x8226D924;
	sub_82120600(ctx, base);
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r30,15
	r30.s64 = 15;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne 0x8226d954
	if (!ctx.cr0.eq) goto loc_8226D954;
loc_8226D950:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8226D954:
	// rlwinm. r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8226d974
	if (ctx.cr0.eq) goto loc_8226D974;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8226D974;
	sub_82120AC0(ctx, base);
loc_8226D974:
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d990
	if (ctx.cr0.eq) goto loc_8226D990;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8226D990;
	sub_82120AC0(ctx, base);
loc_8226D990:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d9ac
	if (ctx.cr0.eq) goto loc_8226D9AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8226D9AC;
	sub_82120AC0(ctx, base);
loc_8226D9AC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d9c4
	if (ctx.cr0.eq) goto loc_8226D9C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x8226D9C4;
	sub_82120AC0(ctx, base);
loc_8226D9C4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d9d4
	if (ctx.cr0.eq) goto loc_8226D9D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226dc18
	goto loc_8226DC18;
loc_8226D9D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8226D9E4;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226D9E8;
	sub_8215F270(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-16680
	r30.s64 = ctx.r11.s64 + -16680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DA00;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DA08;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r26,r11,-17264
	r26.s64 = ctx.r11.s64 + -17264;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DA24;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226DA28;
	sub_8215F270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DA38;
	sub_8215F670(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DA40;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r23)
	REX_STORE_U32(r23.u32 + 8, r28.u32);
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r11,-17344
	r28.s64 = ctx.r11.s64 + -17344;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DA5C;
	sub_8215F670(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DA64;
	sub_8215F0F0(ctx, base);
	// li r23,2
	r23.s64 = 2;
	// stw r31,0(r22)
	REX_STORE_U32(r22.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r23,8(r22)
	REX_STORE_U32(r22.u32 + 8, r23.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r27,r11,-17164
	r27.s64 = ctx.r11.s64 + -17164;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DA84;
	sub_8215F670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// std r25,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r25.u64);
	// bl 0x8215f670
	ctx.lr = 0x8226DA9C;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226DAA0;
	sub_8215F270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DAB0;
	sub_8215F670(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DAB8;
	sub_8215F0F0(ctx, base);
	// stw r17,8(r16)
	REX_STORE_U32(r16.u32 + 8, r17.u32);
	// stw r31,0(r16)
	REX_STORE_U32(r16.u32 + 0, r31.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DACC;
	sub_8215F670(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DAD4;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r17)
	REX_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r23,8(r17)
	REX_STORE_U32(r17.u32 + 8, r23.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DAE8;
	sub_8215F670(ctx, base);
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
	// mr r25,r19
	r25.u64 = r19.u64;
	// addi r22,r24,-8
	r22.s64 = r24.s64 + -8;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_8226DAF8:
	// stw r21,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r21.u32);
	// cmpwi cr6,r18,16
	ctx.cr6.compare<int32_t>(r18.s32, 16, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// blt cr6,0x8226db0c
	if (ctx.cr6.lt) goto loc_8226DB0C;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8226DB0C:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226dba8
	if (!ctx.cr6.lt) goto loc_8226DBA8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DB20;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226DB24;
	sub_8215F270(ctx, base);
	// lwz r11,6256(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,140(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226dba8
	if (ctx.cr0.eq) goto loc_8226DBA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r17,96(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DB60;
	sub_8215F670(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DB68;
	sub_8215F0F0(ctx, base);
	// stw r17,8(r16)
	REX_STORE_U32(r16.u32 + 8, r17.u32);
	// stw r31,0(r16)
	REX_STORE_U32(r16.u32 + 0, r31.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DB7C;
	sub_8215F670(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DB84;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r17)
	REX_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r23,8(r17)
	REX_STORE_U32(r17.u32 + 8, r23.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ldu r24,8(r22)
	ea = 8 + r22.u32;
	r24.u64 = REX_LOAD_U64(ea);
	r22.u32 = ea;
	// bl 0x8215f670
	ctx.lr = 0x8226DB9C;
	sub_8215F670(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// std r24,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r24.u64);
	// b 0x8226daf8
	goto loc_8226DAF8;
loc_8226DBA8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DBB4;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226DBB8;
	sub_8215F270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DBC8;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DBD0;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r26)
	REX_STORE_U32(r26.u32 + 8, r30.u32);
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226DBE4;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DBEC;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r19,8(r30)
	REX_STORE_U32(r30.u32 + 8, r19.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8215f670
	ctx.lr = 0x8226DC04;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226DC0C;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_8226DC18:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82288068) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2604
	ctx.r4.s64 = ctx.r11.s64 + 2604;
	// bl 0x82120600
	ctx.lr = 0x8228808C;
	sub_82120600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82208610
	ctx.lr = 0x82288098;
	sub_82208610(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822880A8;
	sub_82120AC0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,2972
	ctx.r9.s64 = ctx.r9.s64 + 2972;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_8228AA30) {
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
	ctx.lr = 0x8228AA38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stb r10,128(r3)
	REX_STORE_U8(ctx.r3.u32 + 128, ctx.r10.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x8228AA5C;
	sub_8212E8B0(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 132);
	// addi r31,r30,132
	r31.s64 = r30.s64 + 132;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228aa8c
	if (ctx.cr0.eq) goto loc_8228AA8C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3060
	ctx.r4.s64 = ctx.r11.s64 + 3060;
	// addi r3,r10,3112
	ctx.r3.s64 = ctx.r10.s64 + 3112;
	// li r5,771
	ctx.r5.s64 = 771;
	// bl 0x821231d0
	ctx.lr = 0x8228AA8C;
	sub_821231D0(ctx, base);
loc_8228AA8C:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// b 0x8228aab4
	goto loc_8228AAB4;
loc_8228AA98:
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8228AAB4:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8228aa98
	if (!ctx.cr6.eq) goto loc_8228AA98;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8228aaf0
	if (ctx.cr6.eq) goto loc_8228AAF0;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x8228AAE8;
	sub_8269CC20(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8228AAF0:
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AB08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8228ab2c
	goto loc_8228AB2C;
loc_8228AB10:
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AB28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8228AB2C:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8228ab10
	if (!ctx.cr6.eq) goto loc_8228AB10;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AB4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AB60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82291CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82291da4
	if (ctx.cr6.eq) goto loc_82291DA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291d7c
	if (ctx.cr6.eq) goto loc_82291D7C;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r3,r1,-32
	ctx.r3.s64 = ctx.r1.s64 + -32;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
loc_82291D34:
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82291d4c
	if (!ctx.cr6.lt) goto loc_82291D4C;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x82291d50
	goto loc_82291D50;
loc_82291D4C:
	// stfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82291D50:
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82291d68
	if (!ctx.cr6.gt) goto loc_82291D68;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x82291d6c
	goto loc_82291D6C;
loc_82291D68:
	// stfsx f13,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82291D6C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82291d34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82291D34;
	// b 0x82291e54
	goto loc_82291E54;
loc_82291D7C:
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r7,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// std r10,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r10.u64);
	// b 0x82291e54
	goto loc_82291E54;
loc_82291DA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291dd4
	if (ctx.cr6.eq) goto loc_82291DD4;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r7,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// std r11,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// b 0x82291e54
	goto loc_82291E54;
loc_82291DD4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// std r3,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r3,16(r7)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// ld r11,24(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// ld r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// std r9,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r3,16(r6)
	REX_STORE_U64(ctx.r6.u32 + 16, ctx.r3.u64);
	// std r11,24(r6)
	REX_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
loc_82291E54:
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r11,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// std r8,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A37A8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x822A37B0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c98
	ctx.lr = 0x822A37B8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A37E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f25,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f25.f64 = double(temp.f32);
	// lfs f27,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f26,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f26.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f30,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// ble cr6,0x822a3824
	if (!ctx.cr6.gt) goto loc_822A3824;
	// fadds f25,f0,f25
	f25.f64 = double(float(ctx.f0.f64 + f25.f64));
	// b 0x822a3828
	goto loc_822A3828;
loc_822A3824:
	// fadds f26,f0,f26
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f0.f64 + f26.f64));
loc_822A3828:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x822a3838
	if (!ctx.cr6.gt) goto loc_822A3838;
	// fadds f27,f13,f27
	f27.f64 = double(float(ctx.f13.f64 + f27.f64));
	// b 0x822a383c
	goto loc_822A383C;
loc_822A3838:
	// fadds f28,f13,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
loc_822A383C:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x822a384c
	if (!ctx.cr6.gt) goto loc_822A384C;
	// fadds f29,f12,f29
	f29.f64 = double(float(ctx.f12.f64 + f29.f64));
	// b 0x822a3850
	goto loc_822A3850;
loc_822A384C:
	// fadds f30,f12,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
loc_822A3850:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f24,f12,f12,f0
	f24.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// bctrl 
	ctx.lr = 0x822A387C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsqrts f0,f24
	ctx.f0.f64 = double(float(sqrt(f24.f64)));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f25,96(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce4
	ctx.lr = 0x822A3920;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822B0D78) {
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
	ctx.lr = 0x822B0D80;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// bne cr6,0x822b0dbc
	if (!ctx.cr6.eq) goto loc_822B0DBC;
	// lfs f31,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f30.f64 = double(temp.f32);
	// b 0x822b0ea8
	goto loc_822B0EA8;
loc_822B0DBC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x822b0dec
	if (!ctx.cr6.eq) goto loc_822B0DEC;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x822b0ea8
	goto loc_822B0EA8;
loc_822B0DEC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addic. r9,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r9.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// lfs f13,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// ble 0x822b0e44
	if (!ctx.cr0.gt) goto loc_822B0E44;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_822B0E0C:
	// lfs f12,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmsubs f12,f11,f12,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f10.f64)));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmadds f7,f9,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmadds f6,f0,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// blt cr6,0x822b0e0c
	if (ctx.cr6.lt) goto loc_822B0E0C;
loc_822B0E44:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f8,920(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 920);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f0,f9,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f0.f64)));
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fabs f5,f13
	ctx.f5.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f8
	ctx.cr6.compare(ctx.f5.f64, ctx.f8.f64);
	// ble cr6,0x822b0e8c
	if (!ctx.cr6.gt) goto loc_822B0E8C;
	// lfs f8,164(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f13,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// b 0x822b0e90
	goto loc_822B0E90;
loc_822B0E8C:
	// lfs f13,308(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
loc_822B0E90:
	// fadds f12,f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fmadds f12,f12,f0,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f7.f64)));
	// fmadds f0,f11,f0,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmuls f31,f12,f13
	f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_822B0EA8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822b0f08
	if (!ctx.cr6.gt) goto loc_822B0F08;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r31,r4,-4
	r31.s64 = ctx.r4.s64 + -4;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822B0EC0:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,8(r31)
	ea = 8 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r31.u32 = ea;
	// fsubs f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fsubs f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 - f30.f64));
	// bl 0x8269d528
	ctx.lr = 0x822B0ED4;
	sub_8269D528(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822b0ec0
	if (!ctx.cr0.eq) goto loc_822B0EC0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822b0f08
	if (!ctx.cr6.gt) goto loc_822B0F08;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x822b0f08
	if (ctx.cr0.eq) goto loc_822B0F08;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_822B0F00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822b0f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B0F00;
loc_822B0F08:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,0(r26)
	REX_STORE_U32(r26.u32 + 0, r24.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// stwx r23,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r23.u32);
	// ble cr6,0x822b0ffc
	if (!ctx.cr6.gt) goto loc_822B0FFC;
	// extsw r9,r25
	ctx.r9.s64 = r25.s32;
	// lfs f10,180(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f7,928(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 928);
	ctx.f7.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f11,288(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfsx f9,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fdivs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_822B0F58:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f13,f0,f8,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f9.f64)));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x822b0f7c
	if (!ctx.cr6.gt) goto loc_822B0F7C;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
loc_822B0F7C:
	// fmr f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f7.f64;
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822b0fe0
	if (!ctx.cr6.gt) goto loc_822B0FE0;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_822B0F98:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822b0fd4
	if (ctx.cr6.eq) goto loc_822B0FD4;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x822b0fc4
	if (!ctx.cr6.gt) goto loc_822B0FC4;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_822B0FC4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822b0fd4
	if (!ctx.cr6.lt) goto loc_822B0FD4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_822B0FD4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822b0f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B0F98;
loc_822B0FE0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// stwx r23,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r23.u32);
	// blt cr6,0x822b0f58
	if (ctx.cr6.lt) goto loc_822B0F58;
loc_822B0FFC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822C3658) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12212(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12212);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3850) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3B80) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5C60) {
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
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r11,r7,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x822c5d7c
	if (!ctx.cr6.eq) goto loc_822C5D7C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r31,-1
	r31.s64 = -65536;
	// lis r30,16384
	r30.s64 = 1073741824;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x822c5d00
	if (ctx.cr6.eq) goto loc_822C5D00;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x822c5cb4
	if (!ctx.cr0.eq) goto loc_822C5CB4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822C5CB4:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x822c5cc4
	if (!ctx.cr0.eq) goto loc_822C5CC4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822C5CC4:
	// rlwinm. r11,r7,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r31.u32);
	// bne 0x822c5ce8
	if (!ctx.cr0.eq) goto loc_822C5CE8;
	// rlwinm r11,r4,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r30,r11
	ctx.r4.u64 = ctx.r11.u64 - r30.u64;
loc_822C5CE8:
	// rlwinm r11,r4,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822daf40
	ctx.lr = 0x822C5D00;
	sub_822DAF40(ctx, base);
loc_822C5D00:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c5d7c
	if (ctx.cr6.eq) goto loc_822C5D7C;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x822c5d7c
	if (ctx.cr6.eq) goto loc_822C5D7C;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x822c5d2c
	if (!ctx.cr0.eq) goto loc_822C5D2C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822C5D2C:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x822c5d3c
	if (!ctx.cr0.eq) goto loc_822C5D3C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822C5D3C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r31,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r31.u32);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c5d64
	if (!ctx.cr0.eq) goto loc_822C5D64;
	// rlwinm r11,r5,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r30,r11
	ctx.r5.u64 = ctx.r11.u64 - r30.u64;
loc_822C5D64:
	// rlwinm r11,r5,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822daf40
	ctx.lr = 0x822C5D7C;
	sub_822DAF40(ctx, base);
loc_822C5D7C:
	// sync 
	// li r11,-256
	ctx.r11.s64 = -256;
loc_822C5D84:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822c5d84
	if (!ctx.cr0.eq) goto loc_822C5D84;
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

DEFINE_REX_FUNC(sub_822D30B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d22f8
	ctx.lr = 0x822D3104;
	sub_822D22F8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x822D3110;
	sub_823F02B8(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d3120
	if (!ctx.cr0.eq) goto loc_822D3120;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d315c
	goto loc_822D315C;
loc_822D3120:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,17409
	ctx.r10.s64 = 17409;
	// lwz r9,28(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r10,20,11,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r11.u64 & 0x200000);
	// stw r31,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r31.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// rlwimi r9,r30,28,0,3
	ctx.r9.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xF0000000) | (ctx.r9.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r9.u32);
	// bl 0x822c5e78
	ctx.lr = 0x822D3158;
	sub_822C5E78(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_822D315C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_822D96D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D96E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// clrlwi r29,r11,26
	r29.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x822d1b30
	ctx.lr = 0x822D970C;
	sub_822D1B30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// addi r11,r11,7816
	ctx.r11.s64 = ctx.r11.s64 + 7816;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r6,10,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1FF;
	// rlwinm r3,r5,13,0,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFFFE000;
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// srawi r9,r3,26
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 26;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r31,r10,2,3,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FFFFFFC;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r8,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1;
	// rlwinm r9,r6,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// rlwinm r8,r8,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x822d1728
	ctx.lr = 0x822D9788;
	sub_822D1728(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822DECF8) {
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
	ctx.lr = 0x822DED14;
	sub_823ECC50(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,21884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21884);
	// sradi r11,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 10;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_822E0CC0) {
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
	ctx.lr = 0x822E0CC8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,21796(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21796);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r7,21792(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21792);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822E0CF4:
	// stdu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x822e0cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E0CF4;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// sradi r7,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s64 >> 32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,21832(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 21832);
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// lwz r4,21788(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 21788);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// lwz r3,16772(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16772);
	// lwz r31,21824(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 21824);
	// lfs f0,21804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21804);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r30,21828(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 21828);
	// lwz r29,23560(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 23560);
	// lfs f13,21800(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21800);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,10896(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 10896);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r7,r27,r28
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(r27.u32 + r28.u32));
	// lwbrx r10,r10,r28
	ctx.r10.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r10.u32 + r28.u32));
	// lwbrx r5,r8,r28
	ctx.r5.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r8.u32 + r28.u32));
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822e0dec
	if (ctx.cr6.eq) goto loc_822E0DEC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// stw r11,21832(r9)
	REX_STORE_U32(ctx.r9.u32 + 21832, ctx.r11.u32);
	// beq cr6,0x822e0dec
	if (ctx.cr6.eq) goto loc_822E0DEC;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x822e0dec
	if (ctx.cr6.eq) goto loc_822E0DEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r5
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r5.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x822e0dcc
	if (ctx.cr6.gt) goto loc_822E0DCC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_822E0DCC:
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x822e0dd8
	if (ctx.cr6.gt) goto loc_822E0DD8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822E0DD8:
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// bl 0x822e0c58
	ctx.lr = 0x822E0DE4;
	sub_822E0C58(ctx, base);
	// rlwimi r3,r6,0,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
loc_822E0DEC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822e0ab0
	ctx.lr = 0x822E0DF4;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e10cc
	if (ctx.cr0.eq) goto loc_822E10CC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-836
	ctx.r9.s64 = ctx.r11.s64 + -836;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-836(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -836);
	// ld r10,36(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 36);
	// ld r8,-556(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + -556);
	// ld r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 44);
	// ld r6,-548(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + -548);
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// bl 0x822e0c58
	ctx.lr = 0x822E0E3C;
	sub_822E0C58(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822e0c58
	ctx.lr = 0x822E0E50;
	sub_822E0C58(ctx, base);
	// ld r11,156(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 156);
	// ld r10,-436(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + -436);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ld r7,164(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 164);
	// ld r6,-428(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + -428);
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r7,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r7.u64;
	// bl 0x822e0c58
	ctx.lr = 0x822E0E74;
	sub_822E0C58(ctx, base);
	// ld r5,-420(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + -420);
	// ld r31,172(r9)
	r31.u64 = REX_LOAD_U64(ctx.r9.u32 + 172);
	// rlwimi r30,r3,16,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// subf r11,r5,r29
	ctx.r11.u64 = r29.u64 - ctx.r5.u64;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x822e0c58
	ctx.lr = 0x822E0E98;
	sub_822E0C58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// subf r3,r31,r5
	ctx.r3.u64 = ctx.r5.u64 - r31.u64;
	// bl 0x822e0c58
	ctx.lr = 0x822E0EA4;
	sub_822E0C58(ctx, base);
	// ld r11,476(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 476);
	// ld r10,-116(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + -116);
	// rlwimi r6,r3,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// ld r7,468(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 468);
	// lis r5,0
	ctx.r5.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r11,-124(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + -124);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r3,43689
	ctx.r5.u64 = ctx.r3.u64 | 43689;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x822e0ee8
	if (!ctx.cr6.lt) goto loc_822E0EE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e0f18
	goto loc_822E0F18;
loc_822E0EE8:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822e0ef8
	if (!ctx.cr6.eq) goto loc_822E0EF8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x822e0f18
	goto loc_822E0F18;
loc_822E0EF8:
	// mulld r10,r11,r5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r5.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822E0F18:
	// ld r10,484(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 484);
	// ld r7,-108(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + -108);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwimi r11,r6,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x822e0f3c
	if (!ctx.cr6.lt) goto loc_822E0F3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e0f6c
	goto loc_822E0F6C;
loc_822E0F3C:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822e0f4c
	if (!ctx.cr6.eq) goto loc_822E0F4C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x822e0f6c
	goto loc_822E0F6C;
loc_822E0F4C:
	// mulld r7,r10,r5
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = (ctx.r8.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r7.s64 / ctx.r8.s64 : 0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r7,-1
	if (ctx.r7.s64 == -1ll || ctx.r7.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822E0F6C:
	// ld r7,268(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 268);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,-324(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + -324);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x822e0f90
	if (!ctx.cr6.lt) goto loc_822E0F90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e0fc0
	goto loc_822E0FC0;
loc_822E0F90:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822e0fa0
	if (!ctx.cr6.eq) goto loc_822E0FA0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x822e0fc0
	goto loc_822E0FC0;
loc_822E0FA0:
	// mulld r10,r10,r5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822E0FC0:
	// ld r10,124(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 124);
	// ld r7,-468(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + -468);
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwimi r11,r6,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x822e0fe4
	if (!ctx.cr6.lt) goto loc_822E0FE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e1014
	goto loc_822E1014;
loc_822E0FE4:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822e0ff4
	if (!ctx.cr6.eq) goto loc_822E0FF4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x822e1014
	goto loc_822E1014;
loc_822E0FF4:
	// mulld r7,r10,r5
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = (ctx.r8.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r7.s64 / ctx.r8.s64 : 0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r7,-1
	if (ctx.r7.s64 == -1ll || ctx.r7.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822E1014:
	// ld r7,492(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 492);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,-100(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + -100);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rldicr r11,r10,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x822e103c
	if (!ctx.cr6.lt) goto loc_822E103C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e106c
	goto loc_822E106C;
loc_822E103C:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822e104c
	if (!ctx.cr6.eq) goto loc_822E104C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x822e106c
	goto loc_822E106C;
loc_822E104C:
	// mulld r10,r11,r5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r5.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822E106C:
	// ld r10,500(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 500);
	// ld r9,-92(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + -92);
	// lwz r7,156(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwimi r11,r7,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x822e1094
	if (!ctx.cr6.lt) goto loc_822E1094;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e10c4
	goto loc_822E10C4;
loc_822E1094:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822e10a4
	if (!ctx.cr6.eq) goto loc_822E10A4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x822e10c4
	goto loc_822E10C4;
loc_822E10A4:
	// mulld r9,r10,r5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r8
	ctx.r9.s64 = (ctx.r8.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r9.s64 / ctx.r8.s64 : 0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// andc r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r9,-1
	if (ctx.r9.s64 == -1ll || ctx.r9.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822E10C4:
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822e10ec
	goto loc_822E10EC;
loc_822E10CC:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,-1
	ctx.r11.s64 = -1;
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_822E10EC:
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r3,17459
	ctx.r3.s64 = 1144193024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r3,r3,25703
	ctx.r3.u64 = ctx.r3.u64 | 25703;
	// bl 0x826b3ac0
	ctx.lr = 0x822E1104;
	sub_826B3AC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822FCC38) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fcd20
	if (!ctx.cr0.eq) goto loc_822FCD20;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lhz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822fcd20
	if (ctx.cr0.eq) goto loc_822FCD20;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// sth r10,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lha r11,28(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822fcd20
	if (ctx.cr0.gt) goto loc_822FCD20;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcca8
	if (ctx.cr6.eq) goto loc_822FCCA8;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fccac
	goto loc_822FCCAC;
loc_822FCCA8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FCCAC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fccf8
	if (ctx.cr6.eq) goto loc_822FCCF8;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fcccc
	if (ctx.cr0.eq) goto loc_822FCCCC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822fccd8
	goto loc_822FCCD8;
loc_822FCCCC:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_822FCCD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcce8
	if (ctx.cr6.eq) goto loc_822FCCE8;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fccec
	goto loc_822FCCEC;
loc_822FCCE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FCCEC:
	// bl 0x82330078
	ctx.lr = 0x822FCCF0;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcdbc
	if (!ctx.cr0.eq) goto loc_822FCDBC;
loc_822FCCF8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fcd20
	if (ctx.cr0.eq) goto loc_822FCD20;
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
	ctx.lr = 0x822FCD1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fcdb8
	goto loc_822FCDB8;
loc_822FCD20:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lha r10,28(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x822fcdb8
	if (!ctx.cr0.gt) goto loc_822FCDB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcd40
	if (ctx.cr6.eq) goto loc_822FCD40;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fcd44
	goto loc_822FCD44;
loc_822FCD40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FCD44:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fcdb8
	if (ctx.cr6.eq) goto loc_822FCDB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcd5c
	if (ctx.cr6.eq) goto loc_822FCD5C;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fcd60
	goto loc_822FCD60;
loc_822FCD5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FCD60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823300c0
	ctx.lr = 0x822FCD68;
	sub_823300C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcdbc
	if (!ctx.cr0.eq) goto loc_822FCDBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f9f10
	ctx.lr = 0x822FCD78;
	sub_822F9F10(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beq cr6,0x822fcdb8
	if (ctx.cr6.eq) goto loc_822FCDB8;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcda8
	if (ctx.cr6.eq) goto loc_822FCDA8;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fcdac
	goto loc_822FCDAC;
loc_822FCDA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FCDAC:
	// bl 0x82330078
	ctx.lr = 0x822FCDB0;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcdbc
	if (!ctx.cr0.eq) goto loc_822FCDBC;
loc_822FCDB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FCDBC:
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

DEFINE_REX_FUNC(sub_82309950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82309958;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823099c0
	if (!ctx.cr6.eq) goto loc_823099C0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4900
	ctx.r5.s64 = ctx.r10.s64 + 4900;
	// li r6,240
	ctx.r6.s64 = 240;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82309994;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823099a8
	if (ctx.cr0.eq) goto loc_823099A8;
	// bl 0x82309848
	ctx.lr = 0x823099A0;
	sub_82309848(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823099ac
	goto loc_823099AC;
loc_823099A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823099AC:
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82309a44
	if (!ctx.cr6.eq) goto loc_82309A44;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82309a9c
	goto loc_82309A9C;
loc_823099C0:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82309a3c
	if (ctx.cr6.eq) goto loc_82309A3C;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823099D0:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x823099e4
	if (!ctx.cr6.eq) goto loc_823099E4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823099E4:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82309a3c
	if (ctx.cr6.eq) goto loc_82309A3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// bne cr6,0x823099fc
	if (!ctx.cr6.eq) goto loc_823099FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823099FC:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309a2c
	if (ctx.cr6.eq) goto loc_82309A2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// bne cr6,0x82309a18
	if (!ctx.cr6.eq) goto loc_82309A18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82309A18:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82331668
	ctx.lr = 0x82309A24;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82309a34
	if (ctx.cr0.eq) goto loc_82309A34;
loc_82309A2C:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x823099d0
	goto loc_823099D0;
loc_82309A34:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82309a9c
	goto loc_82309A9C;
loc_82309A3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309a4c
	if (ctx.cr6.eq) goto loc_82309A4C;
loc_82309A44:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82309a50
	goto loc_82309A50;
loc_82309A4C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82309A50:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309a88
	goto loc_82309A88;
loc_82309A80:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82309A88:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82309a80
	if (!ctx.cr6.eq) goto loc_82309A80;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82309A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82313250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,5484
	ctx.r7.s64 = ctx.r7.s64 + 5484;
	// lfs f13,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,34
	ctx.r9.s64 = 34;
	// lfs f12,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82314CB0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82314cdc
	if (!ctx.cr6.eq) goto loc_82314CDC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82314d30
	goto loc_82314D30;
loc_82314CDC:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314cf8
	if (!ctx.cr6.eq) goto loc_82314CF8;
	// li r3,95
	ctx.r3.s64 = 95;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82314d30
	goto loc_82314D30;
loc_82314CF8:
	// bl 0x82316590
	ctx.lr = 0x82314CFC;
	sub_82316590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314D18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82316528
	ctx.lr = 0x82314D28;
	sub_82316528(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314D30:
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

DEFINE_REX_FUNC(sub_82317938) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82317940;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82317968;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823179c8
	if (!ctx.cr0.eq) goto loc_823179C8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x8231798C;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823179c8
	if (!ctx.cr0.eq) goto loc_823179C8;
	// lis r11,48
	ctx.r11.s64 = 3145728;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823179c4
	if (!ctx.cr6.lt) goto loc_823179C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_823179C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823179C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8231D348) {
	REX_FUNC_PROLOGUE();
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d358
	if (ctx.cr6.eq) goto loc_8231D358;
	// b 0x82350eb0
	sub_82350EB0(ctx, base);
	return;
loc_8231D358:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231DB40) {
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
	ctx.lr = 0x8231DB48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,6908
	r30.s64 = ctx.r11.s64 + 6908;
	// beq cr6,0x8231db80
	if (ctx.cr6.eq) goto loc_8231DB80;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,231
	ctx.r6.s64 = 231;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DB80;
	sub_82330D00(ctx, base);
loc_8231DB80:
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231dba4
	if (ctx.cr6.eq) goto loc_8231DBA4;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,236
	ctx.r6.s64 = 236;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DBA4;
	sub_82330D00(ctx, base);
loc_8231DBA4:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231dc20
	if (ctx.cr6.eq) goto loc_8231DC20;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231dc04
	if (!ctx.cr6.gt) goto loc_8231DC04;
	// li r31,0
	r31.s64 = 0;
loc_8231DBC4:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231dbf0
	if (ctx.cr6.eq) goto loc_8231DBF0;
	// lwz r10,1012(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// li r6,245
	ctx.r6.s64 = 245;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DBF0;
	sub_82330D00(ctx, base);
loc_8231DBF0:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231dbc4
	if (ctx.cr6.lt) goto loc_8231DBC4;
loc_8231DC04:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r6,249
	ctx.r6.s64 = 249;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DC20;
	sub_82330D00(ctx, base);
loc_8231DC20:
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231dc44
	if (ctx.cr6.eq) goto loc_8231DC44;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,254
	ctx.r6.s64 = 254;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DC44;
	sub_82330D00(ctx, base);
loc_8231DC44:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,257
	ctx.r6.s64 = 257;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231DC60;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82328B58) {
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
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82328B88;
	sub_82331A00(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82328bac
	if (ctx.cr6.eq) goto loc_82328BAC;
	// bl 0x82331458
	ctx.lr = 0x82328B98;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82328BAC;
	sub_82331A00(ctx, base);
loc_82328BAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82328bdc
	if (!ctx.cr6.eq) goto loc_82328BDC;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82328bdc
	if (ctx.cr6.eq) goto loc_82328BDC;
	// bl 0x82331458
	ctx.lr = 0x82328BC8;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82328BDC;
	sub_82331A00(ctx, base);
loc_82328BDC:
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

DEFINE_REX_FUNC(sub_8232B838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232B840;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,52(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r30,r3,52
	r30.s64 = ctx.r3.s64 + 52;
	// li r29,1
	r29.s64 = 1;
	// b 0x8232b874
	goto loc_8232B874;
loc_8232B854:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8232b864
	if (!ctx.cr6.eq) goto loc_8232B864;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232B864:
	// bl 0x823119a8
	ctx.lr = 0x8232B868;
	sub_823119A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b880
	if (ctx.cr0.eq) goto loc_8232B880;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8232B874:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8232b854
	if (!ctx.cr6.eq) goto loc_8232B854;
	// b 0x8232b884
	goto loc_8232B884;
loc_8232B880:
	// li r29,0
	r29.s64 = 0;
loc_8232B884:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8232D6C0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8232d6dc
	if (ctx.cr6.lt) goto loc_8232D6DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232D6DC:
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F950) {
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
	ctx.lr = 0x8232F974;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f98c
	if (!ctx.cr6.eq) goto loc_8232F98C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82338290
	ctx.lr = 0x8232F98C;
	sub_82338290(ctx, base);
loc_8232F98C:
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

DEFINE_REX_FUNC(sub_82331458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82331474
	if (ctx.cr6.eq) goto loc_82331474;
loc_82331468:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82331468
	if (!ctx.cr6.eq) goto loc_82331468;
loc_82331474:
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82333EE0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82333ef0
	if (!ctx.cr6.eq) goto loc_82333EF0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82333EF0:
	// lwz r11,21344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21344);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82334C60) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82334c94
	if (ctx.cr6.eq) goto loc_82334C94;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82334c94
	if (ctx.cr6.lt) goto loc_82334C94;
	// lwz r11,21344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21344);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82334c94
	if (!ctx.cr6.lt) goto loc_82334C94;
	// mulli r11,r4,112
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(112));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,20896
	ctx.r11.s64 = ctx.r11.s64 + 20896;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82334C94:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82338F08) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x82338F10;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r16,r20
	r16.u64 = r20.u64;
	// bne cr6,0x82338f4c
	if (!ctx.cr6.eq) goto loc_82338F4C;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-152(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
loc_82338F4C:
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82339184
	if (ctx.cr6.eq) goto loc_82339184;
	// rlwinm r11,r30,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x60;
	// li r17,1
	r17.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82338fb4
	if (!ctx.cr6.eq) goto loc_82338FB4;
	// lwz r11,288(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 288);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// or r30,r10,r30
	r30.u64 = ctx.r10.u64 | r30.u64;
	// bl 0x82338ae0
	ctx.lr = 0x82338F88;
	sub_82338AE0(ctx, base);
	// rlwinm r9,r30,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82338fb4
	if (ctx.cr6.eq) goto loc_82338FB4;
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82338fa8
	if (!ctx.cr6.eq) goto loc_82338FA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82338FA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82338fb4
	if (!ctx.cr6.eq) goto loc_82338FB4;
	// rlwimi r30,r17,6,25,26
	r30.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 6) & 0x60) | (r30.u64 & 0xFFFFFFFFFFFFFF9F);
loc_82338FB4:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338fe8
	if (ctx.cr6.eq) goto loc_82338FE8;
	// lwz r10,20884(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20884);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82338fdc
	if (!ctx.cr6.eq) goto loc_82338FDC;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
loc_82338FDC:
	// rlwinm r11,r30,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// b 0x82338ff0
	goto loc_82338FF0;
loc_82338FE8:
	// lwz r21,1176(r26)
	r21.u64 = REX_LOAD_U32(r26.u32 + 1176);
	// ori r11,r30,32
	ctx.r11.u64 = r30.u64 | 32;
loc_82338FF0:
	// rlwinm r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339008
	if (!ctx.cr6.eq) goto loc_82339008;
	// lwz r10,288(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 288);
	// rlwinm r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82339008:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233901c
	if (ctx.cr6.eq) goto loc_8233901C;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x82339020
	goto loc_82339020;
loc_8233901C:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82339020:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339038
	if (!ctx.cr6.eq) goto loc_82339038;
	// lwz r10,288(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 288);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82339038:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339050
	if (ctx.cr6.eq) goto loc_82339050;
	// rlwimi r11,r17,1,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// b 0x8233906c
	goto loc_8233906C;
loc_82339050:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339068
	if (ctx.cr6.eq) goto loc_82339068;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r25,r11,4
	r25.u64 = ctx.r11.u64 | 4;
	// b 0x8233906c
	goto loc_8233906C;
loc_82339068:
	// ori r25,r11,1
	r25.u64 = ctx.r11.u64 | 1;
loc_8233906C:
	// lwz r11,288(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 288);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339080
	if (ctx.cr6.eq) goto loc_82339080;
	// rlwimi r25,r17,9,22,23
	r25.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 9) & 0x300) | (r25.u64 & 0xFFFFFFFFFFFFFCFF);
loc_82339080:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r24,260(r29)
	r24.u64 = REX_LOAD_U32(r29.u32 + 260);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r22,19
	r22.s64 = 19;
	// lis r18,-32129
	r18.s64 = -2105606144;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// lfs f31,3744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3744);
	f31.f64 = double(temp.f32);
	// addi r19,r11,8872
	r19.s64 = ctx.r11.s64 + 8872;
	// ble cr6,0x8233927c
	if (!ctx.cr6.gt) goto loc_8233927C;
	// lwz r11,268(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823390c8
	if (ctx.cr6.eq) goto loc_823390C8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,256(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 256);
	// addi r3,r21,28
	ctx.r3.s64 = r21.s64 + 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823390C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823390cc
	goto loc_823390CC;
loc_823390C8:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_823390CC:
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823390e4
	if (!ctx.cr6.gt) goto loc_823390E4;
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
loc_823390E4:
	// lwz r11,268(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82339108
	if (ctx.cr6.eq) goto loc_82339108;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,256(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 256);
	// addi r3,r21,28
	ctx.r3.s64 = r21.s64 + 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82339104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8233910c
	goto loc_8233910C;
loc_82339108:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8233910C:
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8233927c
	if (!ctx.cr6.gt) goto loc_8233927C;
	// lwz r31,0(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82339194
	if (!ctx.cr6.eq) goto loc_82339194;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1757
	ctx.r6.s64 = 1757;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82339140;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339154
	if (ctx.cr6.eq) goto loc_82339154;
	// bl 0x8239bd28
	ctx.lr = 0x8233914C;
	sub_8239BD28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82339158
	goto loc_82339158;
loc_82339154:
	// mr r31,r20
	r31.u64 = r20.u64;
loc_82339158:
	// mr r16,r31
	r16.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82339194
	if (!ctx.cr6.eq) goto loc_82339194;
loc_82339164:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82339184
	if (ctx.cr6.eq) goto loc_82339184;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82339184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339184:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
loc_82339194:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r24,172(r31)
	REX_STORE_U32(r31.u32 + 172, r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823391e0
	if (!ctx.cr6.eq) goto loc_823391E0;
	// rlwinm r11,r25,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823391d8
	if (!ctx.cr6.eq) goto loc_823391D8;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1769
	ctx.r6.s64 = 1769;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823391CC;
	sub_82330E40(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339164
	if (ctx.cr6.eq) goto loc_82339164;
loc_823391D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823391e8
	if (ctx.cr6.eq) goto loc_823391E8;
loc_823391E0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82331480
	ctx.lr = 0x823391E8;
	sub_82331480(ctx, base);
loc_823391E8:
	// lwz r11,264(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 264);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r5,r10,-26856
	ctx.r5.s64 = ctx.r10.s64 + -26856;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r8,292(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 292);
	// addi r3,r26,21952
	ctx.r3.s64 = r26.s64 + 21952;
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// lwz r7,272(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 272);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r10,256(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 256);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r24,72(r31)
	REX_STORE_U32(r31.u32 + 72, r24.u32);
	// stw r20,68(r31)
	REX_STORE_U32(r31.u32 + 68, r20.u32);
	// stw r22,24(r31)
	REX_STORE_U32(r31.u32 + 24, r22.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// lfs f11,21348(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 21348);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f10,21348(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 21348);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f9,112(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// bl 0x823311c8
	ctx.lr = 0x82339268;
	sub_823311C8(ctx, base);
	// stw r3,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339164
	if (ctx.cr6.eq) goto loc_82339164;
	// mr r24,r17
	r24.u64 = r17.u64;
	// b 0x82339280
	goto loc_82339280;
loc_8233927C:
	// mr r23,r17
	r23.u64 = r17.u64;
loc_82339280:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82339438
	if (!ctx.cr6.gt) goto loc_82339438;
	// li r27,176
	r27.s64 = 176;
loc_82339290:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x823392a4
	if (!ctx.cr6.eq) goto loc_823392A4;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823392a8
	goto loc_823392A8;
loc_823392A4:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_823392A8:
	// li r5,296
	ctx.r5.s64 = 296;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef2f8
	ctx.lr = 0x823392B8;
	sub_823EF2F8(ctx, base);
	// lwz r11,304(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 304);
	// stw r24,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, r24.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// beq cr6,0x823392f4
	if (ctx.cr6.eq) goto loc_823392F4;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r21,28
	ctx.r3.s64 = r21.s64 + 28;
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// stw r9,32(r21)
	REX_STORE_U32(r21.u32 + 32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823392EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r17,21813(r26)
	REX_STORE_U8(r26.u32 + 21813, r17.u8);
	// b 0x823392fc
	goto loc_823392FC;
loc_823392F4:
	// lwz r3,20884(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 20884);
	// bl 0x823560f0
	ctx.lr = 0x823392FC;
	sub_823560F0(ctx, base);
loc_823392FC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82339480
	if (!ctx.cr6.eq) goto loc_82339480;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// ble cr6,0x8233931c
	if (!ctx.cr6.gt) goto loc_8233931C;
	// stwx r11,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, ctx.r11.u32);
	// b 0x82339374
	goto loc_82339374;
loc_8233931C:
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233932c
	if (ctx.cr6.eq) goto loc_8233932C;
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
loc_8233932C:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r30,r11,36
	r30.s64 = ctx.r11.s64 + 36;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339378
	if (!ctx.cr6.eq) goto loc_82339378;
	// rlwinm r10,r25,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82339378
	if (!ctx.cr6.eq) goto loc_82339378;
	// lwz r11,1012(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 1012);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1872
	ctx.r6.s64 = 1872;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82339368;
	sub_82330E40(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339164
	if (ctx.cr6.eq) goto loc_82339164;
loc_82339374:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82339378:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82339394
	if (ctx.cr6.eq) goto loc_82339394;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82331480
	ctx.lr = 0x82339390;
	sub_82331480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82339394:
	// lwz r10,264(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 264);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(r28.s32, r23.s32, ctx.xer);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r8,292(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 292);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,92(r7)
	REX_STORE_U32(ctx.r7.u32 + 92, ctx.r8.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, r25.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r20,52(r5)
	REX_STORE_U32(ctx.r5.u32 + 52, r20.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r3,256(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 256);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, r24.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r20,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, r20.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r22.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,192(r7)
	REX_STORE_U32(ctx.r7.u32 + 192, r26.u32);
	// lfs f11,21348(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 21348);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,108(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 108, temp.u32);
	// lfs f10,21348(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 21348);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f9,112(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 112, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,168(r4)
	REX_STORE_U32(ctx.r4.u32 + 168, r31.u32);
	// blt cr6,0x82339290
	if (ctx.cr6.lt) goto loc_82339290;
loc_82339438:
	// lwz r6,284(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 284);
	// lwz r4,280(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 280);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82339450
	if (!ctx.cr6.eq) goto loc_82339450;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_82339450:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233946C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r15)
	REX_STORE_U32(r15.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
loc_82339480:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// ble cr6,0x82339498
	if (!ctx.cr6.gt) goto loc_82339498;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823394b8
	goto loc_823394B8;
loc_82339498:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823394c4
	if (ctx.cr6.eq) goto loc_823394C4;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823394c4
	if (ctx.cr6.eq) goto loc_823394C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
loc_823394B8:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823394C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823394C4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823394e4
	if (ctx.cr6.eq) goto loc_823394E4;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823394E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823394E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82365D40) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365d90
	if (ctx.cr6.eq) goto loc_82365D90;
	// lbz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365db8
	if (!ctx.cr6.eq) goto loc_82365DB8;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365d88
	if (ctx.cr6.eq) goto loc_82365D88;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,356(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 356);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x82365D88;
	sub_82331A00(ctx, base);
loc_82365D88:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82365db4
	goto loc_82365DB4;
loc_82365D90:
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365db0
	if (ctx.cr6.eq) goto loc_82365DB0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,356(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 356);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x82365DB0;
	sub_82331A00(ctx, base);
loc_82365DB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365DB4:
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
loc_82365DB8:
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

DEFINE_REX_FUNC(sub_8236B4F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b518
	if (ctx.cr6.eq) goto loc_8236B518;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x8236b520
	if (ctx.cr6.eq) goto loc_8236B520;
	// lfs f0,440(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,181
	ctx.r11.s64 = ctx.r4.s64 + 181;
	// b 0x8236b538
	goto loc_8236B538;
loc_8236B518:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8236b530
	if (!ctx.cr6.eq) goto loc_8236B530;
loc_8236B520:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8236b558
	goto loc_8236B558;
loc_8236B530:
	// lfs f0,444(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,179
	ctx.r11.s64 = ctx.r4.s64 + 179;
loc_8236B538:
	// addi r10,r4,180
	ctx.r10.s64 = ctx.r4.s64 + 180;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r3
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8236B558:
	// addi r11,r4,180
	ctx.r11.s64 = ctx.r4.s64 + 180;
	// lfs f0,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,452(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823717D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823717D8;
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
	// ble cr6,0x82371840
	if (!ctx.cr6.gt) goto loc_82371840;
	// li r29,0
	r29.s64 = 0;
loc_82371800:
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
	ctx.lr = 0x82371824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371874
	if (!ctx.cr6.eq) goto loc_82371874;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82371800
	if (ctx.cr6.lt) goto loc_82371800;
loc_82371840:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,312
	ctx.r11.s64 = r31.s64 + 312;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82371854:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82371854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371854;
	// lfs f1,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,312(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// bl 0x82370fa8
	ctx.lr = 0x82371870;
	sub_82370FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82371874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82377770) {
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
	ctx.lr = 0x82377778;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4752(r1)
	ea = -4752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x823777ac
	if (!ctx.cr6.eq) goto loc_823777AC;
	// lwz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82340e38
	ctx.lr = 0x823777A4;
	sub_82340E38(ctx, base);
	// addi r1,r1,4752
	ctx.r1.s64 = ctx.r1.s64 + 4752;
	// b 0x826a1d08
	return;
loc_823777AC:
	// lwz r5,32(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// lwz r7,280(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 280);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,260(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 260);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw. r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// divwu r11,r10,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// beq 0x82377810
	if (ctx.cr0.eq) goto loc_82377810;
	// lwz r9,204(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 204);
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r9,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82377800
	if (!ctx.cr6.lt) goto loc_82377800;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82377800:
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x82377818
	goto loc_82377818;
loc_82377810:
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82377818:
	// lwz r10,244(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 244);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82377854
	if (ctx.cr6.eq) goto loc_82377854;
	// lwz r10,264(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 264);
	// lwz r9,18624(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18624);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82377854
	if (ctx.cr6.eq) goto loc_82377854;
	// lwz r10,18620(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 18620);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82377848
	if (!ctx.cr6.gt) goto loc_82377848;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82377848:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x823779cc
	goto loc_823779CC;
loc_82377854:
	// lwz r10,264(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 264);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// lbz r9,18729(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 18729);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82377998
	if (ctx.cr6.eq) goto loc_82377998;
	// divwu r11,r30,r6
	ctx.r11.u64 = uint32_t(ctx.r6.u32 ? r30.u32 / ctx.r6.u32 : 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823778c8
	if (!ctx.cr6.gt) goto loc_823778C8;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,272(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 272);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f12,3820(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3820);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f13,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fmuls f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823778d4
	if (!ctx.cr6.lt) goto loc_823778D4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823778e0
	goto loc_823778E0;
loc_823778C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823778e0
	goto loc_823778E0;
loc_823778D4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823778e0
	if (!ctx.cr6.gt) goto loc_823778E0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823778E0:
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x823778f8
	if (!ctx.cr6.gt) goto loc_823778F8;
	// li r11,99
	ctx.r11.s64 = 99;
loc_823778F8:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// lbz r8,18628(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 18628);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// bge cr6,0x82377930
	if (!ctx.cr6.lt) goto loc_82377930;
	// lbz r9,18629(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 18629);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// b 0x82377938
	goto loc_82377938;
loc_82377930:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4112);
	ctx.f13.f64 = double(temp.f32);
loc_82377938:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r6,268(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// fsubs f11,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,18136(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 18136);
	ctx.f13.f64 = double(temp.f32);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmadds f5,f7,f11,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fctidz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ble cr6,0x823779cc
	if (!ctx.cr6.gt) goto loc_823779CC;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x823779cc
	goto loc_823779CC;
loc_82377998:
	// divwu r10,r30,r6
	ctx.r10.u64 = uint32_t(ctx.r6.u32 ? r30.u32 / ctx.r6.u32 : 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823779c8
	if (!ctx.cr6.gt) goto loc_823779C8;
	// lwz r10,272(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 272);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,268(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// divwu r7,r8,r7
	ctx.r7.u64 = uint32_t(ctx.r7.u32 ? ctx.r8.u32 / ctx.r7.u32 : 0);
	// divwu r6,r9,r7
	ctx.r6.u64 = uint32_t(ctx.r7.u32 ? ctx.r9.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x823779cc
	goto loc_823779CC;
loc_823779C8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_823779CC:
	// lwz r10,188(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 188);
	// lwz r9,268(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823779e8
	if (!ctx.cr6.gt) goto loc_823779E8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_823779E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x823779F4;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377aa0
	if (!ctx.cr6.eq) goto loc_82377AA0;
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82377a14
	if (!ctx.cr6.eq) goto loc_82377A14;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,204(r29)
	REX_STORE_U32(r29.u32 + 204, ctx.r11.u32);
loc_82377A14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82377a94
	if (ctx.cr6.eq) goto loc_82377A94;
loc_82377A1C:
	// li r31,4608
	r31.s64 = 4608;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r30,4608
	ctx.cr6.compare<uint32_t>(r30.u32, 4608, ctx.xer);
	// bge cr6,0x82377a30
	if (!ctx.cr6.lt) goto loc_82377A30;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82377A30:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239e890
	ctx.lr = 0x82377A44;
	sub_8239E890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377a94
	if (!ctx.cr6.eq) goto loc_82377A94;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82377a5c
	if (!ctx.cr6.eq) goto loc_82377A5C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82377A5C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// bge cr6,0x82377a6c
	if (!ctx.cr6.lt) goto loc_82377A6C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82377A6C:
	// lwz r10,220(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82377a84
	if (ctx.cr6.eq) goto loc_82377A84;
	// lwz r10,232(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82377a8c
	if (!ctx.cr6.eq) goto loc_82377A8C;
loc_82377A84:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82377a94
	if (ctx.cr6.lt) goto loc_82377A94;
loc_82377A8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82377a1c
	if (!ctx.cr6.eq) goto loc_82377A1C;
loc_82377A94:
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,204(r29)
	REX_STORE_U32(r29.u32 + 204, ctx.r10.u32);
loc_82377AA0:
	// addi r1,r1,4752
	ctx.r1.s64 = ctx.r1.s64 + 4752;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8239EE38) {
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
	// beq cr6,0x8239ee80
	if (ctx.cr6.eq) goto loc_8239EE80;
	// lbz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239eea8
	if (!ctx.cr6.eq) goto loc_8239EEA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239EE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239eeac
	if (!ctx.cr6.eq) goto loc_8239EEAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8239eea4
	goto loc_8239EEA4;
loc_8239EE80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239EE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239eeac
	if (!ctx.cr6.eq) goto loc_8239EEAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239EEA4:
	// stb r11,272(r31)
	REX_STORE_U8(r31.u32 + 272, ctx.r11.u8);
loc_8239EEA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239EEAC:
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

DEFINE_REX_FUNC(sub_823A0940) {
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
	ctx.lr = 0x823A0948;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r25,23372(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 23372);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823A0968;
	sub_8233E7E0(ctx, base);
	// lwz r27,24(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823a0d90
	if (ctx.cr6.eq) goto loc_823A0D90;
	// lwz r11,220(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 220);
	// lwz r29,292(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a09ac
	if (ctx.cr6.eq) goto loc_823A09AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823a0998
	if (!ctx.cr6.eq) goto loc_823A0998;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r10.u32);
loc_823A0998:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A09A0;
	sub_8233E820(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A09AC:
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// rlwinm r10,r11,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r10,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823a0d90
	if (!ctx.cr6.eq) goto loc_823A0D90;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r24,r31,128
	r24.s64 = r31.s64 + 128;
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a0a24
	if (ctx.cr6.eq) goto loc_823A0A24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A09F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a0a14
	if (ctx.cr6.eq) goto loc_823A0A14;
loc_823A0A00:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A0A08;
	sub_8233E820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A0A14:
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a0a24
	if (!ctx.cr6.eq) goto loc_823A0A24;
	// stb r23,92(r31)
	REX_STORE_U8(r31.u32 + 92, r23.u8);
loc_823A0A24:
	// lbz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0a50
	if (ctx.cr6.eq) goto loc_823A0A50;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r10.u32);
	// bl 0x8233e820
	ctx.lr = 0x823A0A44;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A0A50:
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a0aa0
	if (ctx.cr6.eq) goto loc_823A0AA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0a00
	if (!ctx.cr6.eq) goto loc_823A0A00;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a0a00
	if (!ctx.cr6.eq) goto loc_823A0A00;
loc_823A0AA0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A0AA8;
	sub_8233E820(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r26,0
	r26.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a0acc
	if (!ctx.cr6.gt) goto loc_823A0ACC;
	// lwz r9,300(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 300);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823a0aec
	if (!ctx.cr6.lt) goto loc_823A0AEC;
loc_823A0ACC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0c40
	if (ctx.cr6.eq) goto loc_823A0C40;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a0c40
	if (!ctx.cr6.lt) goto loc_823A0C40;
	// lwz r9,300(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 300);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a0c40
	if (ctx.cr6.lt) goto loc_823A0C40;
loc_823A0AEC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823A0AF4;
	sub_8233E7E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r26,r23
	r26.u64 = r23.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a0c40
	if (!ctx.cr6.eq) goto loc_823A0C40;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a0c40
	if (!ctx.cr6.eq) goto loc_823A0C40;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r30,300(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 300);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a0b34
	if (!ctx.cr6.gt) goto loc_823A0B34;
	// li r30,0
	r30.s64 = 0;
	// b 0x823a0b44
	goto loc_823A0B44;
loc_823A0B34:
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a0b44
	if (!ctx.cr6.gt) goto loc_823A0B44;
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_823A0B44:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A0B4C;
	sub_8233E820(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239eec0
	ctx.lr = 0x823A0B64;
	sub_8239EEC0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823A0B70;
	sub_8233E7E0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823a0b88
	if (ctx.cr6.eq) goto loc_823A0B88;
	// cmpwi cr6,r28,22
	ctx.cr6.compare<int32_t>(r28.s32, 22, ctx.xer);
	// beq cr6,0x823a0b88
	if (ctx.cr6.eq) goto loc_823A0B88;
	// cmpwi cr6,r28,21
	ctx.cr6.compare<int32_t>(r28.s32, 21, ctx.xer);
	// bne cr6,0x823a0bc4
	if (!ctx.cr6.eq) goto loc_823A0BC4;
loc_823A0B88:
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a0bb4
	if (ctx.cr6.lt) goto loc_823A0BB4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_823A0BB4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// b 0x823a0aa0
	goto loc_823A0AA0;
loc_823A0BC4:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0c10
	if (!ctx.cr6.gt) goto loc_823A0C10;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823A0BD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0bfc
	if (ctx.cr6.eq) goto loc_823A0BFC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A0BFC:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a0bd8
	if (ctx.cr6.lt) goto loc_823A0BD8;
loc_823A0C10:
	// lwz r11,216(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 216);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,220(r27)
	REX_STORE_U32(r27.u32 + 220, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0c28
	if (ctx.cr6.eq) goto loc_823A0C28;
	// stw r28,664(r11)
	REX_STORE_U32(ctx.r11.u32 + 664, r28.u32);
loc_823A0C28:
	// stb r23,92(r31)
	REX_STORE_U8(r31.u32 + 92, r23.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A0C34;
	sub_8233E820(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A0C40:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r28,r11,r10
	r28.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x823a0c64
	if (!ctx.cr0.lt) goto loc_823A0C64;
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823A0C64:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 44);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823a0c84
	if (!ctx.cr6.lt) goto loc_823A0C84;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
loc_823A0C84:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a0cac
	if (ctx.cr6.eq) goto loc_823A0CAC;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a0cac
	if (ctx.cr6.eq) goto loc_823A0CAC;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823a0cb0
	goto loc_823A0CB0;
loc_823A0CAC:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
loc_823A0CB0:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a0d70
	if (!ctx.cr6.gt) goto loc_823A0D70;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a0cdc
	if (ctx.cr6.eq) goto loc_823A0CDC;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a0ce8
	if (!ctx.cr6.eq) goto loc_823A0CE8;
loc_823A0CDC:
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823a0d0c
	if (!ctx.cr6.eq) goto loc_823A0D0C;
loc_823A0CE8:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0d70
	if (!ctx.cr6.gt) goto loc_823A0D70;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x823a0d70
	goto loc_823A0D70;
loc_823A0D0C:
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a0d70
	if (ctx.cr6.eq) goto loc_823A0D70;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r29,0
	r29.s64 = 0;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0d6c
	if (!ctx.cr6.gt) goto loc_823A0D6C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823A0D34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0d58
	if (ctx.cr6.eq) goto loc_823A0D58;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0D58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A0D58:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a0d34
	if (ctx.cr6.lt) goto loc_823A0D34;
loc_823A0D6C:
	// stb r23,92(r31)
	REX_STORE_U8(r31.u32 + 92, r23.u8);
loc_823A0D70:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// beq cr6,0x823a0d98
	if (ctx.cr6.eq) goto loc_823A0D98;
loc_823A0D90:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A0D98;
	sub_8233E820(ctx, base);
loc_823A0D98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823C8D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823c8d68
	if (!ctx.cr6.eq) goto loc_823C8D68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C8D68:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823c8da0
	if (ctx.cr6.lt) goto loc_823C8DA0;
	// lwz r10,788(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823c8da0
	if (!ctx.cr6.lt) goto loc_823C8DA0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823c8da0
	if (ctx.cr6.eq) goto loc_823C8DA0;
	// addi r10,r4,198
	ctx.r10.s64 = ctx.r4.s64 + 198;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f0,624(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_823C8DA0:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CA358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823CA360;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826a2b40
	ctx.lr = 0x823CA370;
	sub_826A2B40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ca428
	if (ctx.cr6.eq) goto loc_823CA428;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826a2b40
	ctx.lr = 0x823CA38C;
	sub_826A2B40(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ca420
	if (ctx.cr6.eq) goto loc_823CA420;
	// li r4,6152
	ctx.r4.s64 = 6152;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826a2b40
	ctx.lr = 0x823CA3A4;
	sub_826A2B40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x823ca418
	if (ctx.cr6.eq) goto loc_823CA418;
	// bl 0x823dc9f0
	ctx.lr = 0x823CA3B4;
	sub_823DC9F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ca414
	if (ctx.cr6.eq) goto loc_823CA414;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,1128(r3)
	REX_STORE_U32(ctx.r3.u32 + 1128, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,-4416(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -4416);
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r7,1128(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1128);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// bl 0x8269d6a8
	ctx.lr = 0x823CA3F0;
	sub_8269D6A8(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,1120(r6)
	REX_STORE_U32(ctx.r6.u32 + 1120, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,1120(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1120);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823ca434
	if (!ctx.cr6.eq) goto loc_823CA434;
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823ddbc8
	ctx.lr = 0x823CA410;
	sub_823DDBC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_823CA414:
	// bl 0x8269d770
	ctx.lr = 0x823CA418;
	sub_8269D770(ctx, base);
loc_823CA418:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d770
	ctx.lr = 0x823CA420;
	sub_8269D770(ctx, base);
loc_823CA420:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d770
	ctx.lr = 0x823CA428;
	sub_8269D770(ctx, base);
loc_823CA428:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823CA434:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,96(r9)
	REX_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3584(r8)
	REX_STORE_U32(ctx.r8.u32 + 3584, r30.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,68(r7)
	REX_STORE_U32(ctx.r7.u32 + 68, r30.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,100(r6)
	REX_STORE_U32(ctx.r6.u32 + 100, r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3588(r5)
	REX_STORE_U32(ctx.r5.u32 + 3588, r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,72(r4)
	REX_STORE_U32(ctx.r4.u32 + 72, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3592(r11)
	REX_STORE_U32(ctx.r11.u32 + 3592, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r30.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,108(r9)
	REX_STORE_U32(ctx.r9.u32 + 108, r30.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3596(r8)
	REX_STORE_U32(ctx.r8.u32 + 3596, r30.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, r30.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,112(r6)
	REX_STORE_U32(ctx.r6.u32 + 112, r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3600(r5)
	REX_STORE_U32(ctx.r5.u32 + 3600, r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3604(r11)
	REX_STORE_U32(ctx.r11.u32 + 3604, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, r30.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, r30.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3608(r8)
	REX_STORE_U32(ctx.r8.u32 + 3608, r30.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,92(r7)
	REX_STORE_U32(ctx.r7.u32 + 92, r30.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,124(r6)
	REX_STORE_U32(ctx.r6.u32 + 124, r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3612(r5)
	REX_STORE_U32(ctx.r5.u32 + 3612, r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,224(r4)
	REX_STORE_U32(ctx.r4.u32 + 224, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,252(r11)
	REX_STORE_U32(ctx.r11.u32 + 252, r30.u32);
loc_823CA51C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x823dc718
	ctx.lr = 0x823CA52C;
	sub_823DC718(ctx, base);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r29,96
	ctx.cr6.compare<uint32_t>(r29.u32, 96, ctx.xer);
	// blt cr6,0x823ca51c
	if (ctx.cr6.lt) goto loc_823CA51C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r30.u32);
	// bl 0x823c9258
	ctx.lr = 0x823CA548;
	sub_823C9258(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823D3740) {
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
	// bl 0x826a1c84
	ctx.lr = 0x823D3748;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2c70
	ctx.lr = 0x823D3750;
	// stwu r1,-1600(r1)
	ea = -1600 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// lfs f29,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f29.f64 = double(temp.f32);
	// stfs f29,672(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// bl 0x826a2e60
	ctx.lr = 0x823D3774;
	sub_826A2E60(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// stfs f29,736(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 736, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x826a2e60
	ctx.lr = 0x823D3788;
	sub_826A2E60(ctx, base);
	// lwz r9,32(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 32);
	// li r26,0
	r26.s64 = 0;
	// fmr f21,f29
	ctx.fpscr.disableFlushMode();
	f21.f64 = f29.f64;
	// rlwinm r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// fmr f22,f29
	f22.f64 = f29.f64;
	// stb r26,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// fmr f20,f29
	f20.f64 = f29.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d4ca0
	if (ctx.cr6.eq) goto loc_823D4CA0;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d37d4
	if (ctx.cr6.eq) goto loc_823D37D4;
	// lwz r10,168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d37cc
	if (ctx.cr6.eq) goto loc_823D37CC;
	// lwz r18,72(r10)
	r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// b 0x823d37e4
	goto loc_823D37E4;
loc_823D37CC:
	// lwz r18,72(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x823d37e4
	goto loc_823D37E4;
loc_823D37D4:
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4cb4
	if (ctx.cr6.eq) goto loc_823D4CB4;
	// lwz r18,140(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
loc_823D37E4:
	// lwz r10,4(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,21344(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 21344);
	// lfs f16,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8616);
	f16.f64 = double(temp.f32);
	// li r25,1
	r25.s64 = 1;
	// lfs f19,8620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8620);
	f19.f64 = double(temp.f32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f17,8624(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8624);
	f17.f64 = double(temp.f32);
	// lfs f23,3704(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3704);
	f23.f64 = double(temp.f32);
	// lfs f15,3720(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3720);
	f15.f64 = double(temp.f32);
	// lfs f18,3804(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3804);
	f18.f64 = double(temp.f32);
	// bne cr6,0x823d3c44
	if (!ctx.cr6.eq) goto loc_823D3C44;
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// rlwinm r9,r9,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,300(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r7,304(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r6,308(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// beq cr6,0x823d3890
	if (ctx.cr6.eq) goto loc_823D3890;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// fmr f8,f29
	ctx.f8.f64 = f29.f64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// fmr f9,f29
	ctx.f9.f64 = f29.f64;
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lfs f13,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f23
	ctx.f10.f64 = f23.f64;
	// fmr f5,f23
	ctx.f5.f64 = f23.f64;
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// fmr f7,f29
	ctx.f7.f64 = f29.f64;
	// b 0x823d38fc
	goto loc_823D38FC;
loc_823D3890:
	// lwz r11,20968(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20968);
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,20972(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20972);
	// lfs f4,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,20976(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20976);
	// lfs f3,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,20992(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20992);
	// lfs f0,20896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20896);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,20996(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20996);
	// lfs f13,20900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20900);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,21000(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 21000);
	// lfs f12,20904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20904);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lfs f8,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lfs f9,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lfs f10,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lfs f5,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lfs f6,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lfs f7,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
loc_823D38FC:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3914
	if (ctx.cr6.eq) goto loc_823D3914;
	// fneg f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_823D3914:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f4,f12,f12,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f4.f64)));
	// fsqrts f11,f3
	ctx.f11.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, f29.f64);
	// bgt cr6,0x823d393c
	if (ctx.cr6.gt) goto loc_823D393C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// fmr f12,f29
	ctx.f12.f64 = f29.f64;
	// b 0x823d394c
	goto loc_823D394C;
loc_823D393C:
	// fdivs f11,f23,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f23.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
loc_823D394C:
	// fmuls f11,f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f13,-28488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28488);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f12,f7,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmadds f6,f12,f10,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f21,f0,f5,f7
	f21.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f7.f64)));
	// fmadds f22,f0,f8,f6
	f22.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f6.f64)));
	// fcmpu cr6,f21,f13
	ctx.cr6.compare(f21.f64, ctx.f13.f64);
	// bgt cr6,0x823d3cd0
	if (ctx.cr6.gt) goto loc_823D3CD0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-28492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28492);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f21,f0
	ctx.cr6.compare(f21.f64, ctx.f0.f64);
	// blt cr6,0x823d3cd0
	if (ctx.cr6.lt) goto loc_823D3CD0;
	// fcmpu cr6,f22,f13
	ctx.cr6.compare(f22.f64, ctx.f13.f64);
	// bgt cr6,0x823d3cd0
	if (ctx.cr6.gt) goto loc_823D3CD0;
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(f22.f64, ctx.f0.f64);
	// blt cr6,0x823d3cd0
	if (ctx.cr6.lt) goto loc_823D3CD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f21,f23
	ctx.cr6.compare(f21.f64, f23.f64);
	// lfs f24,3788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	f24.f64 = double(temp.f32);
	// ble cr6,0x823d39ac
	if (!ctx.cr6.gt) goto loc_823D39AC;
	// fmr f21,f23
	f21.f64 = f23.f64;
	// b 0x823d39b8
	goto loc_823D39B8;
loc_823D39AC:
	// fcmpu cr6,f21,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f21.f64, f24.f64);
	// bge cr6,0x823d39b8
	if (!ctx.cr6.lt) goto loc_823D39B8;
	// fmr f21,f24
	f21.f64 = f24.f64;
loc_823D39B8:
	// fcmpu cr6,f22,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f22.f64, f23.f64);
	// ble cr6,0x823d39c8
	if (!ctx.cr6.gt) goto loc_823D39C8;
	// fmr f22,f23
	f22.f64 = f23.f64;
	// b 0x823d39d4
	goto loc_823D39D4;
loc_823D39C8:
	// fcmpu cr6,f22,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f22.f64, f24.f64);
	// bge cr6,0x823d39d4
	if (!ctx.cr6.lt) goto loc_823D39D4;
	// fmr f22,f24
	f22.f64 = f24.f64;
loc_823D39D4:
	// fcmpu cr6,f21,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f21.f64, f29.f64);
	// bne cr6,0x823d39ec
	if (!ctx.cr6.eq) goto loc_823D39EC;
	// fcmpu cr6,f22,f29
	ctx.cr6.compare(f22.f64, f29.f64);
	// bne cr6,0x823d39ec
	if (!ctx.cr6.eq) goto loc_823D39EC;
	// fmr f20,f29
	f20.f64 = f29.f64;
	// b 0x823d3a38
	goto loc_823D3A38;
loc_823D39EC:
	// fneg f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f22.u64 ^ 0x8000000000000000;
	// fneg f13,f21
	ctx.f13.u64 = f21.u64 ^ 0x8000000000000000;
	// fsel f0,f22,f22,f0
	ctx.f0.f64 = f22.f64 >= 0.0 ? f22.f64 : ctx.f0.f64;
	// fsel f13,f21,f21,f13
	ctx.f13.f64 = f21.f64 >= 0.0 ? f21.f64 : ctx.f13.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823d3a1c
	if (ctx.cr6.gt) goto loc_823D3A1C;
	// fdivs f0,f21,f0
	ctx.f0.f64 = double(float(f21.f64 / ctx.f0.f64));
	// fcmpu cr6,f22,f29
	ctx.cr6.compare(f22.f64, f29.f64);
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// bge cr6,0x823d3a34
	if (!ctx.cr6.lt) goto loc_823D3A34;
	// fsubs f20,f17,f0
	f20.f64 = double(float(f17.f64 - ctx.f0.f64));
	// b 0x823d3a38
	goto loc_823D3A38;
loc_823D3A1C:
	// fdivs f0,f22,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f22.f64 / ctx.f13.f64));
	// fcmpu cr6,f21,f29
	ctx.cr6.compare(f21.f64, f29.f64);
	// fsubs f0,f19,f0
	ctx.f0.f64 = double(float(f19.f64 - ctx.f0.f64));
	// bge cr6,0x823d3a34
	if (!ctx.cr6.lt) goto loc_823D3A34;
	// fsubs f20,f16,f0
	f20.f64 = double(float(f16.f64 - ctx.f0.f64));
	// b 0x823d3a38
	goto loc_823D3A38;
loc_823D3A34:
	// fmr f20,f0
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f0.f64;
loc_823D3A38:
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f22.f64;
	// bl 0x8269d438
	ctx.lr = 0x823D3A40;
	sub_8269D438(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,16(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,4108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28496(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -28496);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r17)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r17.u32 + 80, temp.u32);
	// lfs f10,404(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 404);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f10,f13
	f30.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// beq cr6,0x823d3a80
	if (ctx.cr6.eq) goto loc_823D3A80;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(r18.s32, 1, ctx.xer);
	// bne cr6,0x823d3a80
	if (!ctx.cr6.eq) goto loc_823D3A80;
	// stb r25,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// li r18,2
	r18.s64 = 2;
loc_823D3A80:
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823d3c44
	if (!ctx.cr6.gt) goto loc_823D3C44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f31,3824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3824);
	f31.f64 = double(temp.f32);
	// lfs f25,-28500(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28500);
	f25.f64 = double(temp.f32);
	// lfs f26,-28504(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -28504);
	f26.f64 = double(temp.f32);
	// lfs f27,-28508(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -28508);
	f27.f64 = double(temp.f32);
	// lfs f28,-28512(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -28512);
	f28.f64 = double(temp.f32);
loc_823D3AB4:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// beq cr6,0x823d3c24
	if (ctx.cr6.eq) goto loc_823D3C24;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(r18.s32, 1, ctx.xer);
	// beq cr6,0x823d3c24
	if (ctx.cr6.eq) goto loc_823D3C24;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(r18.s32, 4, ctx.xer);
	// beq cr6,0x823d3ba4
	if (ctx.cr6.eq) goto loc_823D3BA4;
	// cmpwi cr6,r18,6
	ctx.cr6.compare<int32_t>(r18.s32, 6, ctx.xer);
	// beq cr6,0x823d3b70
	if (ctx.cr6.eq) goto loc_823D3B70;
	// cmpwi cr6,r18,8
	ctx.cr6.compare<int32_t>(r18.s32, 8, ctx.xer);
	// beq cr6,0x823d3b24
	if (ctx.cr6.eq) goto loc_823D3B24;
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r9,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fmuls f9,f11,f18
	ctx.f9.f64 = double(float(ctx.f11.f64 * f18.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fsubs f0,f7,f23
	ctx.f0.f64 = double(float(ctx.f7.f64 - f23.f64));
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3B24:
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(r31.u32, 7, ctx.xer);
	// bgt cr6,0x823d3bd4
	if (ctx.cr6.gt) goto loc_823D3BD4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d3b58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3B58;
	// bdzf 4*cr6+eq,0x823d3bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BD0;
	// bdzf 4*cr6+eq,0x823d3bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BD0;
	// bdzf 4*cr6+eq,0x823d3bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BC0;
	// bdzf 4*cr6+eq,0x823d3bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BC8;
	// bdzf 4*cr6+eq,0x823d3b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3B60;
	// bne cr6,0x823d3b68
	if (!ctx.cr6.eq) goto loc_823D3B68;
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3B58:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f27.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3B60:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f26.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3B68:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f25.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3B70:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(r31.u32, 5, ctx.xer);
	// bgt cr6,0x823d3bd4
	if (ctx.cr6.gt) goto loc_823D3BD4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d3b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3B9C;
	// bdzf 4*cr6+eq,0x823d3bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BD0;
	// bdzf 4*cr6+eq,0x823d3bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BD0;
	// bdzf 4*cr6+eq,0x823d3bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BC0;
	// bne cr6,0x823d3bc8
	if (!ctx.cr6.eq) goto loc_823D3BC8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3B9C:
	// fmr f0,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f15.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3BA4:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// bgt cr6,0x823d3bd4
	if (ctx.cr6.gt) goto loc_823D3BD4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d3bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BC8;
	// bdzf 4*cr6+eq,0x823d3bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D3BD0;
	// bne cr6,0x823d3bd0
	if (!ctx.cr6.eq) goto loc_823D3BD0;
loc_823D3BC0:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f24.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3BC8:
	// fmr f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f23.f64;
	// b 0x823d3bd4
	goto loc_823D3BD4;
loc_823D3BD0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_823D3BD4:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f14,f0,f31
	f14.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmr f1,f14
	ctx.f1.f64 = f14.f64;
	// bl 0x826a15c0
	ctx.lr = 0x823D3BE4;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f1,f14
	ctx.f1.f64 = f14.f64;
	// bl 0x826a14e0
	ctx.lr = 0x823D3BF4;
	sub_826A14E0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// lfs f14,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	f14.f64 = double(temp.f32);
	// addi r9,r1,736
	ctx.r9.s64 = ctx.r1.s64 + 736;
	// fmuls f12,f13,f22
	ctx.f12.f64 = double(float(ctx.f13.f64 * f22.f64));
	// fmuls f11,f13,f21
	ctx.f11.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmsubs f10,f14,f21,f12
	ctx.f10.f64 = double(float(std::fma(f14.f64, f21.f64, -ctx.f12.f64)));
	// stfsx f10,r11,r10
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmadds f9,f14,f22,f11
	ctx.f9.f64 = double(float(std::fma(f14.f64, f22.f64, ctx.f11.f64)));
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x823d3c38
	goto loc_823D3C38;
loc_823D3C24:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// addi r9,r1,736
	ctx.r9.s64 = ctx.r1.s64 + 736;
	// stfsx f21,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stfsx f22,r11,r9
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_823D3C38:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(r31.s32, r18.s32, ctx.xer);
	// blt cr6,0x823d3ab4
	if (ctx.cr6.lt) goto loc_823D3AB4;
loc_823D3C44:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,16(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lfs f1,180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D3C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r11,22056(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 22056);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d4c84
	if (ctx.cr6.eq) goto loc_823D4C84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d4c84
	if (ctx.cr6.eq) goto loc_823D4C84;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r16,r26
	r16.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823D3C90;
	sub_823EF5F0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(r18.s32, 4, ctx.xer);
	// blt cr6,0x823d3d50
	if (ctx.cr6.lt) goto loc_823D3D50;
	// addi r11,r18,-4
	ctx.r11.s64 = r18.s64 + -4;
	// lwz r9,4(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 4);
	// addi r10,r1,348
	ctx.r10.s64 = ctx.r1.s64 + 348;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D3CB8:
	// lbz r11,22228(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 22228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3ce4
	if (ctx.cr6.eq) goto loc_823D3CE4;
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823d3ce8
	goto loc_823D3CE8;
loc_823D3CD0:
	// li r3,41
	ctx.r3.s64 = 41;
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cbc
	ctx.lr = 0x823D3CE0;
	// b 0x826a1cd4
	return;
loc_823D3CE4:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_823D3CE8:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lbz r11,22228(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 22228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3d04
	if (ctx.cr6.eq) goto loc_823D3D04;
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823d3d08
	goto loc_823D3D08;
loc_823D3D04:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_823D3D08:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lbz r11,22228(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 22228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3d24
	if (ctx.cr6.eq) goto loc_823D3D24;
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823d3d28
	goto loc_823D3D28;
loc_823D3D24:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_823D3D28:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lbz r11,22228(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 22228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3d44
	if (ctx.cr6.eq) goto loc_823D3D44;
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823d3d48
	goto loc_823D3D48;
loc_823D3D44:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_823D3D48:
	// stfsu f0,16(r10)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d3cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3CB8;
loc_823D3D50:
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// bge cr6,0x823d3d94
	if (!ctx.cr6.lt) goto loc_823D3D94;
	// subf r7,r8,r18
	ctx.r7.u64 = r18.u64 - ctx.r8.u64;
	// lwz r9,4(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,348
	ctx.r11.s64 = ctx.r1.s64 + 348;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D3D70:
	// lbz r10,22228(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 22228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3d88
	if (ctx.cr6.eq) goto loc_823D3D88;
	// lwz r10,16(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823d3d8c
	goto loc_823D3D8C;
loc_823D3D88:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_823D3D8C:
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d3d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3D70;
loc_823D3D94:
	// lwz r30,4(r17)
	r30.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r11,22056(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823d3db0
	if (!ctx.cr6.eq) goto loc_823D3DB0;
	// li r29,2
	r29.s64 = 2;
	// li r16,2
	r16.s64 = 2;
	// b 0x823d3e10
	goto loc_823D3E10;
loc_823D3DB0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823d3dc4
	if (!ctx.cr6.eq) goto loc_823D3DC4;
	// li r29,5
	r29.s64 = 5;
	// li r16,6
	r16.s64 = 6;
	// b 0x823d3e10
	goto loc_823D3E10;
loc_823D3DC4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823d3dd8
	if (!ctx.cr6.eq) goto loc_823D3DD8;
	// li r29,4
	r29.s64 = 4;
	// li r16,4
	r16.s64 = 4;
	// b 0x823d3e10
	goto loc_823D3E10;
loc_823D3DD8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823d3dec
	if (!ctx.cr6.eq) goto loc_823D3DEC;
	// li r29,5
	r29.s64 = 5;
	// li r16,5
	r16.s64 = 5;
	// b 0x823d3e10
	goto loc_823D3E10;
loc_823D3DEC:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823d3e00
	if (!ctx.cr6.eq) goto loc_823D3E00;
	// li r29,5
	r29.s64 = 5;
	// li r16,6
	r16.s64 = 6;
	// b 0x823d3e10
	goto loc_823D3E10;
loc_823D3E00:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823d3e10
	if (!ctx.cr6.eq) goto loc_823D3E10;
	// li r29,7
	r29.s64 = 7;
	// li r16,8
	r16.s64 = 8;
loc_823D3E10:
	// lwz r31,16(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lfs f0,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x823d4174
	if (!ctx.cr6.gt) goto loc_823D4174;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823d4174
	if (!ctx.cr6.gt) goto loc_823D4174;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r1,736
	ctx.r11.s64 = ctx.r1.s64 + 736;
	// lfs f8,5912(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5912);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,11204(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11204);
	ctx.f7.f64 = double(temp.f32);
loc_823D3E44:
	// lfsx f10,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// bne cr6,0x823d3f40
	if (!ctx.cr6.eq) goto loc_823D3F40;
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// lfsx f0,r4,r11
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x823d3f40
	if (!ctx.cr6.eq) goto loc_823D3F40;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lbz r10,22096(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22096);
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// beq cr6,0x823d3e8c
	if (ctx.cr6.eq) goto loc_823D3E8C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823d3e90
	goto loc_823D3E90;
loc_823D3E8C:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_823D3E90:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stfs f13,-64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -64, temp.u32);
	// lbz r10,22140(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3eb0
	if (ctx.cr6.eq) goto loc_823D3EB0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823d3eb4
	goto loc_823D3EB4;
loc_823D3EB0:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_823D3EB4:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r10,22184(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3ecc
	if (ctx.cr6.eq) goto loc_823D3ECC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823d3ed0
	goto loc_823D3ED0;
loc_823D3ECC:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_823D3ED0:
	// stfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lbz r10,22272(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3ee8
	if (ctx.cr6.eq) goto loc_823D3EE8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823d3eec
	goto loc_823D3EEC;
loc_823D3EE8:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_823D3EEC:
	// stfs f13,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lbz r10,22316(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22316);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3f04
	if (ctx.cr6.eq) goto loc_823D3F04;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823d3f08
	goto loc_823D3F08;
loc_823D3F04:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_823D3F08:
	// stfs f13,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// lbz r10,22360(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22360);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3f20
	if (ctx.cr6.eq) goto loc_823D3F20;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823d3f24
	goto loc_823D3F24;
loc_823D3F20:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_823D3F24:
	// stfs f13,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// lbz r10,22404(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 22404);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d3f38
	if (!ctx.cr6.eq) goto loc_823D3F38;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_823D3F38:
	// stfs f0,384(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// b 0x823d4160
	goto loc_823D4160;
loc_823D3F40:
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// lfsx f9,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f21
	ctx.cr6.compare(ctx.f9.f64, f21.f64);
	// bne cr6,0x823d3f60
	if (!ctx.cr6.eq) goto loc_823D3F60;
	// fcmpu cr6,f10,f22
	ctx.cr6.compare(ctx.f10.f64, f22.f64);
	// bne cr6,0x823d3f60
	if (!ctx.cr6.eq) goto loc_823D3F60;
	// fmr f11,f20
	ctx.f11.f64 = f20.f64;
	// b 0x823d3fc4
	goto loc_823D3FC4;
loc_823D3F60:
	// fcmpu cr6,f9,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, f29.f64);
	// bne cr6,0x823d3f78
	if (!ctx.cr6.eq) goto loc_823D3F78;
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// bne cr6,0x823d3f78
	if (!ctx.cr6.eq) goto loc_823D3F78;
	// fmr f11,f29
	ctx.f11.f64 = f29.f64;
	// b 0x823d3fc4
	goto loc_823D3FC4;
loc_823D3F78:
	// fneg f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f13,f9
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f10,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fsel f13,f9,f9,f13
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823d3fa8
	if (ctx.cr6.gt) goto loc_823D3FA8;
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// bge cr6,0x823d3fc0
	if (!ctx.cr6.lt) goto loc_823D3FC0;
	// fsubs f11,f17,f0
	ctx.f11.f64 = double(float(f17.f64 - ctx.f0.f64));
	// b 0x823d3fc4
	goto loc_823D3FC4;
loc_823D3FA8:
	// fdivs f0,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fcmpu cr6,f9,f29
	ctx.cr6.compare(ctx.f9.f64, f29.f64);
	// fsubs f0,f19,f0
	ctx.f0.f64 = double(float(f19.f64 - ctx.f0.f64));
	// bge cr6,0x823d3fc0
	if (!ctx.cr6.lt) goto loc_823D3FC0;
	// fsubs f11,f16,f0
	ctx.f11.f64 = double(float(f16.f64 - ctx.f0.f64));
	// b 0x823d3fc4
	goto loc_823D3FC4;
loc_823D3FC0:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_823D3FC4:
	// lwz r11,22412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4160
	if (ctx.cr6.eq) goto loc_823D4160;
	// lwz r11,22416(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22416);
	// addi r8,r30,22416
	ctx.r8.s64 = r30.s64 + 22416;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d4000
	if (!ctx.cr6.eq) goto loc_823D4000;
	// lwz r11,22412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22412);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f23,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// b 0x823d4160
	goto loc_823D4160;
loc_823D4000:
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x823d4160
	if (!ctx.cr6.gt) goto loc_823D4160;
loc_823D4010:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,-4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d4028
	if (ctx.cr6.eq) goto loc_823D4028;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x823d402c
	goto loc_823D402C;
loc_823D4028:
	// lwz r10,22412(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22412);
loc_823D402C:
	// lfs f12,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x823d4084
	if (ctx.cr6.eq) goto loc_823D4084;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823d4048
	if (!ctx.cr6.lt) goto loc_823D4048;
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
loc_823D4048:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x823d4058
	if (ctx.cr6.gt) goto loc_823D4058;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x823d406c
	if (ctx.cr6.lt) goto loc_823D406C;
loc_823D4058:
	// fadds f13,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x823d4074
	if (ctx.cr6.gt) goto loc_823D4074;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823d4074
	if (!ctx.cr6.lt) goto loc_823D4074;
loc_823D406C:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// b 0x823d4078
	goto loc_823D4078;
loc_823D4074:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_823D4078:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823d4098
	if (!ctx.cr6.eq) goto loc_823D4098;
loc_823D4084:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823d4010
	if (ctx.cr6.lt) goto loc_823D4010;
	// b 0x823d4160
	goto loc_823D4160;
loc_823D4098:
	// lbz r9,37(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 37);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x823d4114
	if (ctx.cr6.eq) goto loc_823D4114;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f5,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f4,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f3,f11,f9,f13
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f2,f5,f10,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, -ctx.f6.f64)));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f0,f2,f2,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f1.f64)));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfsx f11,r3,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// fmuls f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r9,r6
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// b 0x823d4160
	goto loc_823D4160;
loc_823D4114:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f11,f12,f9,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// fnmsubs f10,f11,f11,f18
	ctx.f10.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f11.f64, -f18.f64)));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fadds f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f4,f6,f15
	ctx.f4.f64 = double(float(ctx.f6.f64 * f15.f64));
	// stfsx f4,r3,r8
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fmuls f3,f5,f15
	ctx.f3.f64 = double(float(ctx.f5.f64 * f15.f64));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f3,r9,r6
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
loc_823D4160:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpw cr6,r5,r18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r18.s32, ctx.xer);
	// addi r11,r1,736
	ctx.r11.s64 = ctx.r1.s64 + 736;
	// blt cr6,0x823d3e44
	if (ctx.cr6.lt) goto loc_823D3E44;
loc_823D4174:
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(r18.s32, 1, ctx.xer);
	// ble cr6,0x823d4a20
	if (!ctx.cr6.gt) goto loc_823D4A20;
	// li r5,508
	ctx.r5.s64 = 508;
	// stfs f29,800(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 800, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// bl 0x826a2e60
	ctx.lr = 0x823D4190;
	sub_826A2E60(ctx, base);
	// lfs f0,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bge cr6,0x823d4908
	if (!ctx.cr6.lt) goto loc_823D4908;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// fsubs f30,f23,f0
	f30.f64 = double(float(f23.f64 - ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d42e0
	if (ctx.cr6.eq) goto loc_823D42E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d42e0
	if (ctx.cr6.eq) goto loc_823D42E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823d4908
	if (!ctx.cr6.eq) goto loc_823D4908;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4908
	if (ctx.cr6.eq) goto loc_823D4908;
	// lwz r11,1196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// ble cr6,0x823d4908
	if (!ctx.cr6.gt) goto loc_823D4908;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mulli r4,r11,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D420C:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,-64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f9,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f31,f9
	ctx.f8.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfs f7,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lfs f5,256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f31,f5
	ctx.f4.f64 = double(float(f31.f64 * ctx.f5.f64));
	// lfs f3,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * f31.f64));
	// lfs f1,384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f31,f1
	ctx.f13.f64 = double(float(f31.f64 * ctx.f1.f64));
	// fmadds f12,f0,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f12.f64)));
	// stfs f12,-64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -64, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lfsx f11,r9,r3
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f30,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f10.f64)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfsx f9,r8,r3
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f30,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f8.f64)));
	// stfs f8,64(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f7,r7,r3
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f30,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, ctx.f6.f64)));
	// stfs f6,192(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f5,r6,r3
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f4.f64)));
	// stfs f4,256(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f3,r5,r3
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f30,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f2.f64)));
	// stfs f2,320(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lfsx f1,r4,r3
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f30,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f13.f64)));
	// stfs f0,384(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823d420c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D420C;
	// b 0x823d4908
	goto loc_823D4908;
loc_823D42E0:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// bne cr6,0x823d4390
	if (!ctx.cr6.eq) goto loc_823D4390;
	// lfs f0,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f23
	ctx.f13.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fmuls f0,f13,f15
	ctx.f0.f64 = double(float(ctx.f13.f64 * f15.f64));
	// fcmpu cr6,f0,f15
	ctx.cr6.compare(ctx.f0.f64, f15.f64);
	// bgt cr6,0x823d4328
	if (ctx.cr6.gt) goto loc_823D4328;
	// fmr f13,f23
	ctx.f13.f64 = f23.f64;
	// fmuls f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 * f18.f64));
	// b 0x823d4334
	goto loc_823D4334;
loc_823D4328:
	// fsubs f13,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f23.f64 - ctx.f0.f64));
	// fmr f0,f23
	ctx.f0.f64 = f23.f64;
	// fmuls f13,f13,f18
	ctx.f13.f64 = double(float(ctx.f13.f64 * f18.f64));
loc_823D4334:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x823d4374
	if (!ctx.cr6.eq) goto loc_823D4374;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823d4374
	if (!ctx.cr6.eq) goto loc_823D4374;
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x823d43b8
	goto loc_823D43B8;
loc_823D4374:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f3,f23
	ctx.f3.f64 = f23.f64;
	// fmr f4,f23
	ctx.f4.f64 = f23.f64;
	// b 0x823d43b8
	goto loc_823D43B8;
loc_823D4390:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d43b8
	if (!ctx.cr6.eq) goto loc_823D43B8;
	// lfs f1,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
loc_823D43B8:
	// lwz r10,24(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 24);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d4404
	if (ctx.cr6.eq) goto loc_823D4404;
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d43e0
	if (ctx.cr6.eq) goto loc_823D43E0;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// b 0x823d4404
	goto loc_823D4404;
loc_823D43E0:
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d43f4
	if (ctx.cr6.eq) goto loc_823D43F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823d4404
	goto loc_823D4404;
loc_823D43F4:
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d4404
	if (ctx.cr6.eq) goto loc_823D4404;
	// li r11,3
	ctx.r11.s64 = 3;
loc_823D4404:
	// lwz r10,22056(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// addi r8,r1,800
	ctx.r8.s64 = ctx.r1.s64 + 800;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// fmr f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f0.f64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x823471e8
	ctx.lr = 0x823D4430;
	sub_823471E8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r20,r26
	r20.u64 = r26.u64;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(r18.s32, 4, ctx.xer);
	// blt cr6,0x823d479c
	if (ctx.cr6.lt) goto loc_823D479C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r18,-4
	ctx.r8.s64 = r18.s64 + -4;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r1,804
	ctx.r11.s64 = ctx.r1.s64 + 804;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,804
	ctx.r8.s64 = ctx.r1.s64 + 804;
	// addi r6,r1,804
	ctx.r6.s64 = ctx.r1.s64 + 804;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r10,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r29,r10,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r1,804
	r30.s64 = ctx.r1.s64 + 804;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// add r31,r29,r30
	r31.u64 = r29.u64 + r30.u64;
	// rlwinm r29,r7,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,804
	r30.s64 = ctx.r1.s64 + 804;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r7,r9,-8
	ctx.r7.s64 = ctx.r9.s64 + -8;
	// addi r4,r8,-8
	ctx.r4.s64 = ctx.r8.s64 + -8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// addi r8,r31,-8
	ctx.r8.s64 = r31.s64 + -8;
	// add r9,r29,r30
	ctx.r9.u64 = r29.u64 + r30.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// rlwinm r20,r3,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r1,800
	r19.s64 = ctx.r1.s64 + 800;
loc_823D44CC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r1,224
	r31.s64 = ctx.r1.s64 + 224;
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// addi r30,r1,480
	r30.s64 = ctx.r1.s64 + 480;
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r1,544
	r29.s64 = ctx.r1.s64 + 544;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r1,228
	r27.s64 = ctx.r1.s64 + 228;
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f9,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r28,r1,164
	r28.s64 = ctx.r1.s64 + 164;
	// lfsx f8,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f31,f9
	ctx.f6.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfsx f7,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfsx f5,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r26,r1,292
	r26.s64 = ctx.r1.s64 + 292;
	// fmuls f2,f31,f7
	ctx.f2.f64 = double(float(f31.f64 * ctx.f7.f64));
	// lfsx f1,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f5,f31
	ctx.f0.f64 = double(float(ctx.f5.f64 * f31.f64));
	// lfsx f3,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f31,f1
	ctx.f7.f64 = double(float(f31.f64 * ctx.f1.f64));
	// addi r15,r1,804
	r15.s64 = ctx.r1.s64 + 804;
	// fmuls f8,f3,f31
	ctx.f8.f64 = double(float(ctx.f3.f64 * f31.f64));
	// addi r25,r1,288
	r25.s64 = ctx.r1.s64 + 288;
	// lfsx f9,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f12,f30
	ctx.f3.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfsx f12,r11,r19
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 * f31.f64));
	// addi r24,r1,416
	r24.s64 = ctx.r1.s64 + 416;
	// fmadds f9,f12,f30,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f6.f64)));
	// lfs f6,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f11,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f4.f64)));
	// fmadds f11,f6,f30,f2
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, ctx.f2.f64)));
	// lfs f6,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f12,f30,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f0.f64)));
	// addi r23,r1,608
	r23.s64 = ctx.r1.s64 + 608;
	// lfsx f0,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r1,420
	r22.s64 = ctx.r1.s64 + 420;
	// fmadds f12,f6,f30,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, ctx.f7.f64)));
	// lfsx f7,r11,r25
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f30,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f8.f64)));
	// lfsx f0,r11,r24
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f7,f31,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f10.f64)));
	// stfsx f4,r11,r31
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lfsx f8,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f0,f31,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f5.f64)));
	// lfsx f5,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f8,f31,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f3.f64)));
	// lfs f0,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f5,f31,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f1.f64)));
	// lfs f5,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// fmuls f13,f5,f30
	ctx.f13.f64 = double(float(ctx.f5.f64 * f30.f64));
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// addi r21,r1,484
	r21.s64 = ctx.r1.s64 + 484;
	// stfsx f2,r11,r29
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// fmuls f28,f0,f30
	f28.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsx f9,r11,r3
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// stfsx f11,r11,r30
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
	// addi r31,r1,612
	r31.s64 = ctx.r1.s64 + 612;
	// stfsx f6,r11,r28
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r28.u32, temp.u32);
	// addi r30,r1,168
	r30.s64 = ctx.r1.s64 + 168;
	// stfsx f12,r11,r27
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// addi r29,r1,296
	r29.s64 = ctx.r1.s64 + 296;
	// lfs f4,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r28,r1,424
	r28.s64 = ctx.r1.s64 + 424;
	// stfsx f10,r11,r25
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + r25.u32, temp.u32);
	// addi r27,r1,616
	r27.s64 = ctx.r1.s64 + 616;
	// stfsx f7,r11,r24
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r24.u32, temp.u32);
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * f30.f64));
	// stfsx f3,r11,r23
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
	// stfsx f1,r11,r26
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + r26.u32, temp.u32);
	// stfsx f8,r11,r22
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
	// lfsx f1,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r26,r1,172
	r26.s64 = ctx.r1.s64 + 172;
	// lfsx f0,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 * ctx.f1.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfsx f10,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfsx f7,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f31,f9
	ctx.f6.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfsx f0,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * f31.f64));
	// addi r23,r1,808
	r23.s64 = ctx.r1.s64 + 808;
	// lfsx f9,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f31,f0
	ctx.f7.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f3,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f4,f30
	ctx.f10.f64 = double(float(ctx.f4.f64 * f30.f64));
	// fmuls f4,f31,f9
	ctx.f4.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r25,r1,232
	r25.s64 = ctx.r1.s64 + 232;
	// fmuls f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmadds f3,f3,f30,f12
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f12.f64)));
	// stfsx f3,r11,r3
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// fmadds f1,f1,f30,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f11.f64)));
	// stfsx f1,r11,r31
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lfsx f11,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r24,r1,488
	r24.s64 = ctx.r1.s64 + 488;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r1,492
	r31.s64 = ctx.r1.s64 + 492;
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r15,r1,812
	r15.s64 = ctx.r1.s64 + 812;
	// fmadds f6,f0,f30,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f6.f64)));
	// addi r23,r1,552
	r23.s64 = ctx.r1.s64 + 552;
	// fmadds f8,f11,f30,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f8.f64)));
	// addi r22,r1,236
	r22.s64 = ctx.r1.s64 + 236;
	// lfsx f3,r11,r21
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	ctx.f3.f64 = double(temp.f32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f0,r11,r25
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// fmadds f5,f12,f30,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f5.f64)));
	// lfs f1,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f3,f31,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f13.f64)));
	// stfsx f8,r11,r30
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
	// fmadds f1,f1,f30,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f7.f64)));
	// lfsx f8,r11,r24
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r30,r1,300
	r30.s64 = ctx.r1.s64 + 300;
	// lfsx f12,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f3,f8,f31,f2
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f2.f64)));
	// stfsx f5,r11,r28
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + r28.u32, temp.u32);
	// fmadds f7,f12,f30,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f4.f64)));
	// stfsx f6,r11,r29
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// fmadds f6,f0,f31,f28
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f28.f64)));
	// lfsx f5,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r29,r1,556
	r29.s64 = ctx.r1.s64 + 556;
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// addi r28,r1,620
	r28.s64 = ctx.r1.s64 + 620;
	// lfsu f13,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmadds f2,f5,f31,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f10.f64)));
	// lfsx f8,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfsu f12,16(r6)
	ea = 16 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f4,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f28,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f28.f64 = double(temp.f32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// stfsx f3,r11,r24
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r24.u32, temp.u32);
	// fmuls f4,f31,f4
	ctx.f4.f64 = double(float(f31.f64 * ctx.f4.f64));
	// lfsu f0,16(r5)
	ea = 16 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fmuls f28,f28,f31
	f28.f64 = double(float(f28.f64 * f31.f64));
	// lfsu f13,16(r4)
	ea = 16 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// stfsx f11,r11,r21
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r21.u32, temp.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// stfsx f6,r11,r25
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r25.u32, temp.u32);
	// fmadds f3,f8,f31,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f9.f64)));
	// stfsx f2,r11,r23
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// stfsx f7,r11,r26
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r26.u32, temp.u32);
	// lfs f2,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f4.f64)));
	// fmadds f11,f2,f31,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, ctx.f10.f64)));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f31,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f5.f64)));
	// stfsx f3,r11,r22
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
	// fmadds f8,f10,f31,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f12.f64)));
	// fmadds f7,f13,f30,f28
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, f28.f64)));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f8,0(r28)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bdnz 0x823d44cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D44CC;
	// li r25,1
	r25.s64 = 1;
	// li r26,0
	r26.s64 = 0;
loc_823D479C:
	// cmpw cr6,r20,r18
	ctx.cr6.compare<int32_t>(r20.s32, r18.s32, ctx.xer);
	// bge cr6,0x823d4908
	if (!ctx.cr6.lt) goto loc_823D4908;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r20
	ctx.r5.u64 = ctx.r9.u64 + r20.u64;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + r20.u64;
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + r20.u64;
	// add r28,r10,r20
	r28.u64 = ctx.r10.u64 + r20.u64;
	// add r7,r7,r20
	ctx.r7.u64 = ctx.r7.u64 + r20.u64;
	// add r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 + r20.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// addi r31,r1,800
	r31.s64 = ctx.r1.s64 + 800;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,800
	r30.s64 = ctx.r1.s64 + 800;
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// subf r28,r20,r18
	r28.u64 = r18.u64 - r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r7,r3,-4
	ctx.r7.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D484C:
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r28,r1,224
	r28.s64 = ctx.r1.s64 + 224;
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * f30.f64));
	// addi r29,r1,480
	r29.s64 = ctx.r1.s64 + 480;
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * f30.f64));
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfsu f12,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * f30.f64));
	// addi r30,r1,288
	r30.s64 = ctx.r1.s64 + 288;
	// lfsx f8,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r1,416
	r31.s64 = ctx.r1.s64 + 416;
	// lfsx f7,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f31,f8
	ctx.f6.f64 = double(float(f31.f64 * ctx.f8.f64));
	// lfsx f5,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lfs f3,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f31,f5
	ctx.f2.f64 = double(float(f31.f64 * ctx.f5.f64));
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * f31.f64));
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r24,r1,800
	r24.s64 = ctx.r1.s64 + 800;
	// lfsx f12,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfsx f8,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmadds f5,f8,f31,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f10.f64)));
	// lfsu f13,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fmadds f11,f12,f31,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f11.f64)));
	// lfsu f12,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// lfsx f7,r11,r24
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f7,f30,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, f30.f64, ctx.f6.f64)));
	// stfsx f5,r11,r31
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// fmadds f8,f0,f30,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f4.f64)));
	// fmadds f7,f13,f30,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f2.f64)));
	// stfsx f10,r11,r27
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// stfsx f8,r11,r28
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + r28.u32, temp.u32);
	// fmadds f6,f12,f30,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f1.f64)));
	// stfsx f11,r11,r30
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
	// fmadds f5,f3,f31,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f9.f64)));
	// stfsx f7,r11,r29
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bdnz 0x823d484c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D484C;
loc_823D4908:
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r10,22056(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22056);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x823d49b0
	if (!ctx.cr6.eq) goto loc_823D49B0;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d49b0
	if (ctx.cr6.eq) goto loc_823D49B0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823d49b0
	if (!ctx.cr6.gt) goto loc_823D49B0;
	// addi r31,r1,604
	r31.s64 = ctx.r1.s64 + 604;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_823D493C:
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r9,r1,800
	ctx.r9.s64 = ctx.r1.s64 + 800;
	// lfs f1,-444(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -444);
	ctx.f1.f64 = double(temp.f32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// lfs f2,-380(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -380);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f3,-316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -316);
	ctx.f3.f64 = double(temp.f32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r8,22056(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 22056);
	// lfs f4,-252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -252);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,-188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -188);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,-124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -124);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x823471e8
	ctx.lr = 0x823D4984;
	sub_823471E8(ctx, base);
	// lfs f0,800(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,804(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 804);
	ctx.f13.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stfs f29,-316(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + -316, temp.u32);
	// stfs f29,-188(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + -188, temp.u32);
	// stfs f29,-124(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + -124, temp.u32);
	// stfs f29,-60(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + -60, temp.u32);
	// stfs f0,-444(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -444, temp.u32);
	// stfs f13,-380(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + -380, temp.u32);
	// stfsu f29,4(r31)
	ea = 4 + r31.u32;
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// bne 0x823d493c
	if (!ctx.cr0.eq) goto loc_823D493C;
loc_823D49B0:
	// lbz r29,128(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823d49c0
	if (ctx.cr6.eq) goto loc_823D49C0;
	// mr r18,r25
	r18.u64 = r25.u64;
loc_823D49C0:
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x823d4c84
	if (!ctx.cr6.gt) goto loc_823D4C84;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
loc_823D49D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823d49ec
	if (ctx.cr6.eq) goto loc_823D49EC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f11,f12,f15
	ctx.f11.f64 = double(float(ctx.f12.f64 * f15.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_823D49EC:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D4A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(r31.s32, r16.s32, ctx.xer);
	// blt cr6,0x823d49d0
	if (ctx.cr6.lt) goto loc_823D49D0;
	// b 0x823d4c84
	goto loc_823D4C84;
loc_823D4A20:
	// lfs f0,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bge cr6,0x823d4c50
	if (!ctx.cr6.lt) goto loc_823D4C50;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// fsubs f13,f23,f0
	ctx.f13.f64 = double(float(f23.f64 - ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d4ab4
	if (!ctx.cr6.eq) goto loc_823D4AB4;
	// lfs f12,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f23
	ctx.f11.f64 = double(float(ctx.f12.f64 + f23.f64));
	// lfs f5,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f6,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,288(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lfs f3,480(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f9,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f2,416(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f1,544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,608(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 608);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,480(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// fmuls f5,f11,f15
	ctx.f5.f64 = double(float(ctx.f11.f64 * f15.f64));
	// stfs f9,544(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// stfs f6,608(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// fsubs f4,f23,f5
	ctx.f4.f64 = double(float(f23.f64 - ctx.f5.f64));
	// fsqrts f3,f5
	ctx.f3.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsqrts f2,f4
	ctx.f2.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmadds f1,f2,f13,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f0,f3,f13,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// b 0x823d4c50
	goto loc_823D4C50;
loc_823D4AB4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d4b4c
	if (!ctx.cr6.eq) goto loc_823D4B4C;
	// lfs f12,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f5,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,480(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f7,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,608(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 608);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f5,f10,f13,f11
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f3,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f3,f13,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f0,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f11,288(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lfs f10,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f13,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f9,416(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// lfs f8,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f6,480(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// lfs f5,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f13,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f4,544(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// lfs f3,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f13,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f2,608(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// b 0x823d4c50
	goto loc_823D4C50;
loc_823D4B4C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823d4c50
	if (!ctx.cr6.eq) goto loc_823D4C50;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4c50
	if (ctx.cr6.eq) goto loc_823D4C50;
	// lfs f12,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f10,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f4,480(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f8,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f1,544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,608(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 608);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f6,f3,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r10,1196(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f13,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r6,1196(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,284(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lfsx f1,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f13,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r3,1196(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lfsx f11,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f10,416(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r11,1196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f7,480(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// lwz r6,284(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r11,1196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f6,r4,r6
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f13,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f5,544(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r11,1196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r8,r3
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f13,f8
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f3,608(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 608, temp.u32);
loc_823D4C50:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lfs f4,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,608(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 608);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,480(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f6.f64 = double(temp.f32);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lfs f5,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D4C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D4C84:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,16(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f1,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D4CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D4CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cbc
	ctx.lr = 0x823D4CB0;
	// b 0x826a1cd4
	return;
loc_823D4CB4:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cbc
	ctx.lr = 0x823D4CC4;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8247D160) {
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
	ctx.lr = 0x8247D168;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247d1d4
	if (!ctx.cr6.gt) goto loc_8247D1D4;
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_8247D18C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r29,r28,r11
	r29.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247d1b4
	if (!ctx.cr0.eq) goto loc_8247D1B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x8247D1A8;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b20
	ctx.lr = 0x8247D1B0;
	sub_82477B20(ctx, base);
	// b 0x8247d1c0
	goto loc_8247D1C0;
loc_8247D1B4:
	// stwx r29,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r29.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
loc_8247D1C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247d18c
	if (ctx.cr6.lt) goto loc_8247D18C;
loc_8247D1D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247d1e8
	if (!ctx.cr6.eq) goto loc_8247D1E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247d20c
	goto loc_8247D20C;
loc_8247D1E8:
	// subf r9,r30,r11
	ctx.r9.u64 = ctx.r11.u64 - r30.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8247D204;
	sub_826A2E60(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247D20C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82489C30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82489C38;
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824009e0
	ctx.lr = 0x82489C78;
	sub_824009E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stb r4,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r4.u8);
	// beq cr6,0x82489cbc
	if (ctx.cr6.eq) goto loc_82489CBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82489cb8
	if (ctx.cr6.eq) goto loc_82489CB8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82489cac
	if (ctx.cr6.eq) goto loc_82489CAC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82489cbc
	if (!ctx.cr6.eq) goto loc_82489CBC;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// b 0x82489cbc
	goto loc_82489CBC;
loc_82489CAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x82489cbc
	goto loc_82489CBC;
loc_82489CB8:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
loc_82489CBC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,196(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 196);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x82489CD4;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,212(r30)
	REX_STORE_U32(r30.u32 + 212, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82493930) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82493b74
	if (ctx.cr6.eq) goto loc_82493B74;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82493b74
	if (!ctx.cr6.eq) goto loc_82493B74;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82493b74
	if (ctx.cr6.eq) goto loc_82493B74;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82493b74
	if (!ctx.cr6.eq) goto loc_82493B74;
	// lwz r4,20(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,20(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82493974
	if (!ctx.cr6.eq) goto loc_82493974;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
loc_8249396C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82493974:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-13088
	ctx.r11.s64 = ctx.r11.s64 + -13088;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82493998
	if (ctx.cr6.gt) goto loc_82493998;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82493998:
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824939c4
	if (ctx.cr0.eq) goto loc_824939C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824939B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_824939C4:
	// rlwinm. r7,r11,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824939d4
	if (ctx.cr0.eq) goto loc_824939D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824939b8
	goto loc_824939B8;
loc_824939D4:
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82493a20
	if (!ctx.cr0.eq) goto loc_82493A20;
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82493ab4
	if (ctx.cr0.eq) goto loc_82493AB4;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x82493a08
	if (!ctx.cr6.eq) goto loc_82493A08;
	// rlwinm. r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82493a08
	if (ctx.cr0.eq) goto loc_82493A08;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82493a20
	if (ctx.cr0.eq) goto loc_82493A20;
loc_82493A08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82493a6c
	if (ctx.cr6.eq) goto loc_82493A6C;
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82493a6c
	if (ctx.cr0.eq) goto loc_82493A6C;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82493a6c
	if (!ctx.cr0.eq) goto loc_82493A6C;
loc_82493A20:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82493a34
	if (!ctx.cr6.eq) goto loc_82493A34;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82493A2C:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8249396c
	goto loc_8249396C;
loc_82493A34:
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// beq cr6,0x82493a64
	if (ctx.cr6.eq) goto loc_82493A64;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// beq cr6,0x82493a5c
	if (ctx.cr6.eq) goto loc_82493A5C;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// beq cr6,0x82493a54
	if (ctx.cr6.eq) goto loc_82493A54;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bne cr6,0x8249396c
	if (!ctx.cr6.eq) goto loc_8249396C;
loc_82493A54:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493A5C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493A64:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493A6C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82493aac
	if (ctx.cr6.eq) goto loc_82493AAC;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// beq cr6,0x82493aa4
	if (ctx.cr6.eq) goto loc_82493AA4;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// beq cr6,0x82493a9c
	if (ctx.cr6.eq) goto loc_82493A9C;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// beq cr6,0x82493a94
	if (ctx.cr6.eq) goto loc_82493A94;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bne cr6,0x8249396c
	if (!ctx.cr6.eq) goto loc_8249396C;
loc_82493A94:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493A9C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493AA4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493AAC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493AB4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82493b04
	if (ctx.cr0.eq) goto loc_82493B04;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82493afc
	if (ctx.cr6.eq) goto loc_82493AFC;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// beq cr6,0x82493af4
	if (ctx.cr6.eq) goto loc_82493AF4;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// beq cr6,0x82493af4
	if (ctx.cr6.eq) goto loc_82493AF4;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// beq cr6,0x82493aec
	if (ctx.cr6.eq) goto loc_82493AEC;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bne cr6,0x8249396c
	if (!ctx.cr6.eq) goto loc_8249396C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493AEC:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493AF4:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493AFC:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82493a2c
	goto loc_82493A2C;
loc_82493B04:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82493b74
	if (ctx.cr0.eq) goto loc_82493B74;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82493B10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x82493b24
	if (!ctx.cr6.eq) goto loc_82493B24;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// beq cr6,0x82493b2c
	if (ctx.cr6.eq) goto loc_82493B2C;
loc_82493B24:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82493b30
	goto loc_82493B30;
loc_82493B2C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82493B30:
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// beq cr6,0x82493a2c
	if (ctx.cr6.eq) goto loc_82493A2C;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bne cr6,0x82493b50
	if (!ctx.cr6.eq) goto loc_82493B50;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x82493b68
	if (ctx.cr6.lt) goto loc_82493B68;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// b 0x82493b64
	goto loc_82493B64;
loc_82493B50:
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x82493b68
	if (!ctx.cr6.eq) goto loc_82493B68;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// blt cr6,0x82493b68
	if (ctx.cr6.lt) goto loc_82493B68;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
loc_82493B64:
	// ble cr6,0x82493a2c
	if (!ctx.cr6.gt) goto loc_82493A2C;
loc_82493B68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82493b10
	if (ctx.cr6.lt) goto loc_82493B10;
loc_82493B74:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A76D0) {
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
	ctx.lr = 0x824A76D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824a7700
	if (ctx.cr6.eq) goto loc_824A7700;
	// lis r24,15
	r24.s64 = 983040;
	// b 0x824a77b4
	goto loc_824A77B4;
loc_824A7700:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a7720
	if (ctx.cr0.eq) goto loc_824A7720;
	// lis r24,16
	r24.s64 = 1048576;
loc_824A7720:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824a77b4
	if (ctx.cr6.eq) goto loc_824A77B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r27,r11,13120
	r27.s64 = ctx.r11.s64 + 13120;
loc_824A7738:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824a7780
	if (ctx.cr6.lt) goto loc_824A7780;
	// beq cr6,0x824a7778
	if (ctx.cr6.eq) goto loc_824A7778;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824a7770
	if (ctx.cr6.lt) goto loc_824A7770;
	// bne cr6,0x824a7784
	if (!ctx.cr6.eq) goto loc_824A7784;
	// lis r31,8
	r31.s64 = 524288;
	// b 0x824a7784
	goto loc_824A7784;
loc_824A7770:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x824a7784
	goto loc_824A7784;
loc_824A7778:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824a7784
	goto loc_824A7784;
loc_824A7780:
	// lis r31,1
	r31.s64 = 65536;
loc_824A7784:
	// and. r11,r31,r24
	ctx.r11.u64 = r31.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a77a4
	if (ctx.cr0.eq) goto loc_824A77A4;
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824A77A4;
	sub_82489C30(ctx, base);
loc_824A77A4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// or r24,r31,r24
	r24.u64 = r31.u64 | r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824a7738
	if (!ctx.cr0.eq) goto loc_824A7738;
loc_824A77B4:
	// lwz r7,204(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 204);
	// rlwinm. r11,r7,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a7838
	if (!ctx.cr0.eq) goto loc_824A7838;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824a7830
	if (ctx.cr6.eq) goto loc_824A7830;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_824A77D4:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r6,r6,0,6,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x824a7820
	if (!ctx.cr0.eq) goto loc_824A7820;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,16(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// clrlwi. r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824a7830
	if (ctx.cr0.eq) goto loc_824A7830;
	// lwz r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x824a7830
	if (ctx.cr6.eq) goto loc_824A7830;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824a7830
	if (!ctx.cr6.eq) goto loc_824A7830;
loc_824A7820:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// blt cr6,0x824a77d4
	if (ctx.cr6.lt) goto loc_824A77D4;
loc_824A7830:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bne cr6,0x824a783c
	if (!ctx.cr6.eq) goto loc_824A783C;
loc_824A7838:
	// oris r24,r24,32
	r24.u64 = r24.u64 | 2097152;
loc_824A783C:
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a788c
	if (ctx.cr0.eq) goto loc_824A788C;
	// lwz r11,296(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a788c
	if (ctx.cr6.eq) goto loc_824A788C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824a788c
	if (ctx.cr6.eq) goto loc_824A788C;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
loc_824A7864:
	// lwz r8,300(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 300);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r8,r8,6
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(6));
	// lwz r7,296(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 296);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x824a7864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7864;
loc_824A788C:
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824B3E00) {
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
	ctx.lr = 0x824B3E08;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r5,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r21,r16
	r21.u64 = r16.u64;
	// mr r15,r16
	r15.u64 = r16.u64;
	// beq cr6,0x824b4354
	if (ctx.cr6.eq) goto loc_824B4354;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// li r17,1
	r17.s64 = 1;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824B3E50:
	// lwz r31,0(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r28,r16
	r28.u64 = r16.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// clrlwi r20,r29,12
	r20.u64 = r29.u32 & 0xFFFFF;
	// bl 0x824b3c28
	ctx.lr = 0x824B3E94;
	sub_824B3C28(ctx, base);
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824b3f58
	if (!ctx.cr6.eq) goto loc_824B3F58;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// bne cr6,0x824b4340
	if (!ctx.cr6.eq) goto loc_824B4340;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r30,548(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 548);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r26,560(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 560);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824b3ae0
	ctx.lr = 0x824B3ED0;
	sub_824B3AE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824b3ae0
	ctx.lr = 0x824B3EE0;
	sub_824B3AE0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824b3c28
	ctx.lr = 0x824B3F1C;
	sub_824B3C28(ctx, base);
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824b3c28
	ctx.lr = 0x824B3F48;
	sub_824B3C28(ctx, base);
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b4340
	if (!ctx.cr6.eq) goto loc_824B4340;
	// b 0x824b3f60
	goto loc_824B3F60;
loc_824B3F58:
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
loc_824B3F60:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
	// mr r21,r16
	r21.u64 = r16.u64;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(r20.u32, 3, ctx.xer);
	// bne cr6,0x824b403c
	if (!ctx.cr6.eq) goto loc_824B403C;
	// rlwinm r11,r29,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF00000;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3f90
	if (ctx.cr6.eq) goto loc_824B3F90;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b4340
	if (!ctx.cr6.eq) goto loc_824B4340;
loc_824B3F90:
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// lwz r6,20(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// li r11,12
	ctx.r11.s64 = 12;
loc_824B3FA4:
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r5,16(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,60(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addic r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// beq cr6,0x824b3fdc
	if (ctx.cr6.eq) goto loc_824B3FDC;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824b4380
	if (!ctx.cr6.eq) goto loc_824B4380;
loc_824B3FDC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x824b3fa4
	if (ctx.cr6.lt) goto loc_824B3FA4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
	// lwz r11,200(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 200);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,258
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 258, ctx.xer);
	// blt cr6,0x824b43ac
	if (ctx.cr6.lt) goto loc_824B43AC;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824B400C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b4020
	if (ctx.cr0.eq) goto loc_824B4020;
	// bl 0x824773d0
	ctx.lr = 0x824B4018;
	sub_824773D0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x824b4024
	goto loc_824B4024;
loc_824B4020:
	// mr r21,r16
	r21.u64 = r16.u64;
loc_824B4024:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824b43e0
	if (ctx.cr6.eq) goto loc_824B43E0;
	// lis r4,29280
	ctx.r4.s64 = 1918894080;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x824b413c
	goto loc_824B413C;
loc_824B403C:
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// bne cr6,0x824b4340
	if (!ctx.cr6.eq) goto loc_824B4340;
	// rlwinm r11,r29,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF00000;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b4340
	if (!ctx.cr6.eq) goto loc_824B4340;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r17,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r17.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_824B4078:
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b408c
	if (!ctx.cr6.eq) goto loc_824B408C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// b 0x824b4090
	goto loc_824B4090;
loc_824B408C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
loc_824B4090:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r11,r8,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
	// bne cr6,0x824b43d4
	if (!ctx.cr6.eq) goto loc_824B43D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x824b4078
	if (ctx.cr6.lt) goto loc_824B4078;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b40fc
	if (!ctx.cr6.eq) goto loc_824B40FC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824b4340
	if (ctx.cr6.eq) goto loc_824B4340;
loc_824B40FC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824B4104;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b4118
	if (ctx.cr0.eq) goto loc_824B4118;
	// bl 0x824773d0
	ctx.lr = 0x824B4110;
	sub_824773D0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x824b411c
	goto loc_824B411C;
loc_824B4118:
	// mr r21,r16
	r21.u64 = r16.u64;
loc_824B411C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824b43e0
	if (ctx.cr6.eq) goto loc_824B43E0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lis r4,29312
	ctx.r4.s64 = 1920991232;
	// bne cr6,0x824b4134
	if (!ctx.cr6.eq) goto loc_824B4134;
	// lis r4,29296
	ctx.r4.s64 = 1919942656;
loc_824B4134:
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// li r5,4
	ctx.r5.s64 = 4;
loc_824B413C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82477b60
	ctx.lr = 0x824B414C;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824b4358
	if (ctx.cr0.lt) goto loc_824B4358;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824B4160:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824b4160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B4160;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r8,8(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r22,100(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r8,r10
	r23.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b41ec
	if (ctx.cr0.eq) goto loc_824B41EC;
	// lwz r24,12(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// bgt cr6,0x824b41e0
	if (ctx.cr6.gt) goto loc_824B41E0;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b4228
	if (ctx.cr6.eq) goto loc_824B4228;
loc_824B41E0:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824b4358
	goto loc_824B4358;
loc_824B41EC:
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(r22.u32, 4, ctx.xer);
	// bge cr6,0x824b421c
	if (!ctx.cr6.lt) goto loc_824B421C;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
loc_824B4200:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b421c
	if (ctx.cr6.eq) goto loc_824B421C;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// blt cr6,0x824b4200
	if (ctx.cr6.lt) goto loc_824B4200;
loc_824B421C:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// beq cr6,0x824b41e0
	if (ctx.cr6.eq) goto loc_824B41E0;
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r24.u32);
loc_824B4228:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,128(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 128);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x824B4240;
	sub_82478758(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824b43e0
	if (ctx.cr6.eq) goto loc_824B43E0;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824780d8
	ctx.lr = 0x824B4264;
	sub_824780D8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// mr r31,r16
	r31.u64 = r16.u64;
	// rlwimi r11,r24,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// beq cr6,0x824b4318
	if (ctx.cr6.eq) goto loc_824B4318;
	// rlwinm r26,r20,2,0,29
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r16
	r30.u64 = r16.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_824B428C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,128(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 128);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x824B42A4;
	sub_82478758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824b43e0
	if (ctx.cr6.eq) goto loc_824B43E0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r15,r10,r9
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r14,r11,r9
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x824780d8
	ctx.lr = 0x824B42DC;
	sub_824780D8(ctx, base);
	// stw r31,16(r15)
	REX_STORE_U32(r15.u32 + 16, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r22,12(r15)
	REX_STORE_U32(r15.u32 + 12, r22.u32);
	// lwz r11,60(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 60);
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(r31.u32, r20.u32, ctx.xer);
	// stw r11,60(r15)
	REX_STORE_U32(r15.u32 + 60, ctx.r11.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// stwx r25,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r25.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// stwx r28,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x824b428c
	if (ctx.cr6.lt) goto loc_824B428C;
	// lwz r14,332(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r15,108(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824B4318:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwx r21,r11,r18
	REX_STORE_U32(ctx.r11.u32 + r18.u32, r21.u32);
	// bl 0x824785e8
	ctx.lr = 0x824B432C;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824b4358
	if (ctx.cr0.lt) goto loc_824B4358;
	// lwz r24,340(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r21,r16
	r21.u64 = r16.u64;
	// stw r16,0(r19)
	REX_STORE_U32(r19.u32 + 0, r16.u32);
loc_824B4340:
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r15.u32);
	// cmplw cr6,r15,r24
	ctx.cr6.compare<uint32_t>(r15.u32, r24.u32, ctx.xer);
	// blt cr6,0x824b3e50
	if (ctx.cr6.lt) goto loc_824B3E50;
loc_824B4354:
	// mr r31,r16
	r31.u64 = r16.u64;
loc_824B4358:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824b4370
	if (ctx.cr6.eq) goto loc_824B4370;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82130e88
	ctx.lr = 0x824B4368;
	sub_82130E88(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82477b20
	ctx.lr = 0x824B4370;
	sub_82477B20(ctx, base);
loc_824B4370:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_824B4380:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r10,1496
	ctx.r6.s64 = ctx.r10.s64 + 1496;
loc_824B4388:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4535
	ctx.r5.s64 = 4535;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r14.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824B43A0;
	sub_82489C30(ctx, base);
loc_824B43A0:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824b4370
	goto loc_824B4370;
loc_824B43AC:
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r5,4536
	ctx.r5.s64 = 4536;
	// addi r6,r9,1408
	ctx.r6.s64 = ctx.r9.s64 + 1408;
	// lwzx r11,r10,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r14.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824B43D0;
	sub_82489C30(ctx, base);
	// b 0x824b43a0
	goto loc_824B43A0;
loc_824B43D4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r10,1320
	ctx.r6.s64 = ctx.r10.s64 + 1320;
	// b 0x824b4388
	goto loc_824B4388;
loc_824B43E0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824b4358
	goto loc_824B4358;
}

DEFINE_REX_FUNC(sub_824D5230) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824d3aa8
	ctx.lr = 0x824D5254;
	sub_824D3AA8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d5010
	ctx.lr = 0x824D5264;
	sub_824D5010(ctx, base);
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

DEFINE_REX_FUNC(sub_824D6E70) {
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
	ctx.lr = 0x824D6E78;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,404(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r8,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r9,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r10,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// li r16,0
	r16.s64 = 0;
	// bne cr6,0x824d6ec4
	if (!ctx.cr6.eq) goto loc_824D6EC4;
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// addi r22,r1,144
	r22.s64 = ctx.r1.s64 + 144;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// stw r6,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
loc_824D6EC4:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r9,12(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 12);
	// subf r29,r10,r11
	r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r8,20(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 20);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 16);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// subf r27,r10,r8
	r27.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// bne cr6,0x824d6f0c
	if (!ctx.cr6.eq) goto loc_824D6F0C;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r16.u32);
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r16.u32);
loc_824D6F0C:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// lwz r31,412(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r10,r5,31
	ctx.r10.s64 = ctx.r5.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r10,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// bne cr6,0x824d6f68
	if (!ctx.cr6.eq) goto loc_824D6F68;
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824D6F54;
	sub_823F02B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x824d6038
	ctx.lr = 0x824D6F64;
	sub_824D6038(ctx, base);
	// b 0x824d6f6c
	goto loc_824D6F6C;
loc_824D6F68:
	// mr r19,r26
	r19.u64 = r26.u64;
loc_824D6F6C:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r23,r9,r10
	r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r14,r11,r7
	r14.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r15,r11,r10
	r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r30,r23,6
	r30.s64 = r23.s64 + 6;
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(r14.u32, r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bgt cr6,0x824d6fcc
	if (ctx.cr6.gt) goto loc_824D6FCC;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_824D6FCC:
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 16);
	// slw r11,r11,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r23.u8 & 0x3F));
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824d72e0
	if (ctx.cr6.eq) goto loc_824D72E0;
	// rlwinm r11,r28,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_824D6FF4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r17,r11,30,2,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r10,r9,r17
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r17.s32);
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// beq cr6,0x824d72c0
	if (ctx.cr6.eq) goto loc_824D72C0;
	// slw r20,r11,r30
	r20.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
loc_824D7028:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r6,0(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 0);
	// add r11,r16,r11
	ctx.r11.u64 = r16.u64 + ctx.r11.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r28,r11,2,27,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r9,4(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 4);
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + r28.u64;
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r24,84(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// slw r7,r3,r30
	ctx.r7.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// mullw r27,r8,r10
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r3,r7,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r8,r3,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + r17.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r29,r7,31
	r29.u64 = ctx.r7.u32 & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r29,1,0,30
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,4,27,27
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r8,r20
	ctx.r11.u64 = ctx.r8.u64 + r20.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r16,r9
	ctx.r7.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r8,r24
	r24.u64 = ctx.r8.u64 + r24.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r10,r31,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r31.u32 << (r23.u8 & 0x3F));
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824D7118;
	sub_826A1E70(ctx, base);
	// mr r31,r14
	r31.u64 = r14.u64;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(r14.s32, r15.s32, ctx.xer);
	// bge cr6,0x824d71e8
	if (!ctx.cr6.lt) goto loc_824D71E8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r23
	r17.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r23.u8 & 0x3F));
loc_824D712C:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r4,r23
	ctx.r8.u64 = r23.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r23.u8 & 0x3F));
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + r19.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824D71D4;
	sub_826A1E70(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(r31.s32, r15.s32, ctx.xer);
	// blt cr6,0x824d712c
	if (ctx.cr6.lt) goto loc_824D712C;
	// lwz r17,112(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_824D71E8:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d72a0
	if (!ctx.cr6.lt) goto loc_824D72A0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// subf r5,r31,r10
	ctx.r5.u64 = ctx.r10.u64 - r31.u64;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r9,r7,r23
	ctx.r9.u64 = r23.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r23.u8 & 0x3F));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r5,r23
	ctx.r5.u64 = r23.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r23.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + r18.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824D72A0;
	sub_826A1E70(ctx, base);
loc_824D72A0:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d7028
	if (ctx.cr6.lt) goto loc_824D7028;
	// lwz r27,120(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	r16.s64 = 0;
	// lwz r25,396(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r26,380(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
loc_824D72C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x824d6ff4
	if (ctx.cr6.lt) goto loc_824D6FF4;
loc_824D72E0:
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// bne cr6,0x824d72f4
	if (!ctx.cr6.eq) goto loc_824D72F4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823f0350
	ctx.lr = 0x824D72F4;
	sub_823F0350(ctx, base);
loc_824D72F4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824F6E88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f6e9c
	if (!ctx.cr0.eq) goto loc_824F6E9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824F6E9C:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x824f6ebc
	if (ctx.cr6.eq) goto loc_824F6EBC;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x824f6ebc
	if (ctx.cr6.eq) goto loc_824F6EBC;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824f6ec0
	if (!ctx.cr6.eq) goto loc_824F6EC0;
loc_824F6EBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824F6EC0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F7708) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x824f7724
	if (ctx.cr6.lt) goto loc_824F7724;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824f7728
	if (!ctx.cr6.gt) goto loc_824F7728;
loc_824F7724:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F7728:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7738
	if (ctx.cr0.eq) goto loc_824F7738;
loc_824F7730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824F7738:
	// rlwinm. r11,r10,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7758
	if (ctx.cr0.eq) goto loc_824F7758;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f7730
	if (!ctx.cr6.eq) goto loc_824F7730;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f7730
	if (!ctx.cr6.eq) goto loc_824F7730;
loc_824F7758:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f7774
	if (!ctx.cr6.eq) goto loc_824F7774;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824F776C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f77ac
	if (ctx.cr6.eq) goto loc_824F77AC;
loc_824F7774:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f77a4
	if (ctx.cr6.eq) goto loc_824F77A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824f7798
	if (!ctx.cr0.eq) goto loc_824F7798;
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x824f779c
	if (ctx.cr0.eq) goto loc_824F779C;
loc_824F7798:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824F779C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f77ac
	if (ctx.cr0.eq) goto loc_824F77AC;
loc_824F77A4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824f776c
	goto loc_824F776C;
loc_824F77AC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FFCC0) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824ff930
	ctx.lr = 0x824FFCE0;
	sub_824FF930(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// ori r6,r5,1
	ctx.r6.u64 = ctx.r5.u64 | 1;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwimi r11,r7,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r9,r11,0,13,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFF80000);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ffd80
	if (ctx.cr0.eq) goto loc_824FFD80;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_824FFD80:
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

DEFINE_REX_FUNC(sub_82505840) {
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
	// rlwinm r4,r4,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x82504128
	ctx.lr = 0x8250586C;
	sub_82504128(ctx, base);
	// andc r11,r31,r3
	ctx.r11.u64 = r31.u64 & ~ctx.r3.u64;
	// clrlwi. r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82505884
	if (ctx.cr0.eq) goto loc_82505884;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r4,r31,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x82504fa8
	ctx.lr = 0x82505884;
	sub_82504FA8(ctx, base);
loc_82505884:
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

DEFINE_REX_FUNC(sub_8250AA68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8250AA94;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r3,r11,17
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFF;
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

DEFINE_REX_FUNC(sub_8250C900) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r8,r9,36
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(36));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82516400) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251642c
	if (ctx.cr6.eq) goto loc_8251642C;
loc_8251640C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82516424
	if (!ctx.cr0.eq) goto loc_82516424;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251640c
	if (!ctx.cr6.eq) goto loc_8251640C;
loc_82516424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82516440
	if (!ctx.cr6.eq) goto loc_82516440;
loc_8251642C:
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
loc_82516440:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82516FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82516FC0;
	// lwz r9,672(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r8,r5,29,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// lwz r11,684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// li r29,1
	r29.s64 = 1;
	// mullw r10,r9,r4
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r7,r5,58
	ctx.r7.u64 = ctx.r5.u64 & 0x3F;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// ldx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + r30.u32);
	// sld r7,r29,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (r29.u64 << (ctx.r7.u8 & 0x7F));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// and r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bne cr6,0x82517008
	if (!ctx.cr6.eq) goto loc_82517008;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82517008:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82517160
	if (!ctx.cr0.eq) goto loc_82517160;
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// sld r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r29.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bne cr6,0x82517034
	if (!ctx.cr6.eq) goto loc_82517034;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82517034:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82517160
	if (!ctx.cr0.eq) goto loc_82517160;
	// lwz r10,676(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r9,r4,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(5));
	// mulli r8,r5,5
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(5));
loc_8251704C:
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// nor r7,r6,r7
	ctx.r7.u64 = ~(ctx.r6.u64 | ctx.r7.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82517148
	if (!ctx.cr6.eq) goto loc_82517148;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8251704c
	if (ctx.cr6.lt) goto loc_8251704C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82517088:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82517160
	if (ctx.cr0.eq) goto loc_82517160;
	// lwz r10,680(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 680);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825170f0
	if (ctx.cr6.eq) goto loc_825170F0;
	// lwz r10,672(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825170e4
	if (!ctx.cr6.lt) goto loc_825170E4;
	// subf r8,r11,r31
	ctx.r8.u64 = r31.u64 - ctx.r11.u64;
loc_825170C4:
	// ldx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82517150
	if (!ctx.cr6.eq) goto loc_82517150;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825170c4
	if (ctx.cr6.lt) goto loc_825170C4;
loc_825170E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825170E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82517160
	if (!ctx.cr0.eq) goto loc_82517160;
loc_825170F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82517140
	if (ctx.cr6.eq) goto loc_82517140;
	// lwz r10,672(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82517134
	if (!ctx.cr6.lt) goto loc_82517134;
	// subf r9,r9,r30
	ctx.r9.u64 = r30.u64 - ctx.r9.u64;
loc_82517114:
	// ldx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82517158
	if (!ctx.cr6.eq) goto loc_82517158;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82517114
	if (ctx.cr6.lt) goto loc_82517114;
loc_82517134:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82517138:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82517160
	if (!ctx.cr0.eq) goto loc_82517160;
loc_82517140:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82517164
	goto loc_82517164;
loc_82517148:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82517088
	goto loc_82517088;
loc_82517150:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x825170e8
	goto loc_825170E8;
loc_82517158:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82517138
	goto loc_82517138;
loc_82517160:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82517164:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8252DCA8) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// beq 0x8252dcbc
	if (ctx.cr0.eq) goto loc_8252DCBC;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_8252DCBC:
	// rlwinm. r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252dcd0
	if (ctx.cr0.eq) goto loc_8252DCD0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8252dcd0
	if (ctx.cr6.eq) goto loc_8252DCD0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8252DCD0:
	// rlwinm. r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252dcf4
	if (ctx.cr0.eq) goto loc_8252DCF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8252dcf4
	if (ctx.cr6.eq) goto loc_8252DCF4;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252dcf0
	if (ctx.cr0.eq) goto loc_8252DCF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8252dcf4
	goto loc_8252DCF4;
loc_8252DCF0:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_8252DCF4:
	// rlwinm r10,r3,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825307D8) {
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
	// bl 0x825304c8
	ctx.lr = 0x825307F8;
	sub_825304C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82530830
	if (!ctx.cr0.eq) goto loc_82530830;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253081c
	if (ctx.cr6.eq) goto loc_8253081C;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8253082c
	goto loc_8253082C;
loc_8253081C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_8253082C:
	// bl 0x8252f5f8
	ctx.lr = 0x82530830;
	sub_8252F5F8(ctx, base);
loc_82530830:
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

DEFINE_REX_FUNC(sub_825324D0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x825324D8;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r18,0
	r18.s64 = 0;
	// lwz r27,0(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r24,0(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// li r17,1
	r17.s64 = 1;
	// lwz r25,12(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r29,r18
	r29.u64 = r18.u64;
	// lwz r22,12(r24)
	r22.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82532538
	if (ctx.cr6.eq) goto loc_82532538;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8253253c
	if (!ctx.cr6.eq) goto loc_8253253C;
loc_82532538:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8253253C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82532580
	if (ctx.cr0.eq) goto loc_82532580;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8252dea8
	ctx.lr = 0x82532564;
	sub_8252DEA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r29,r17
	r29.u64 = r17.u64;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82532580:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8253259c
	if (ctx.cr6.eq) goto loc_8253259C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x825325a0
	if (!ctx.cr6.eq) goto loc_825325A0;
loc_8253259C:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_825325A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253260c
	if (ctx.cr0.eq) goto loc_8253260C;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r6,r9,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r9,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r30,r29,31,3,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8252dea8
	ctx.lr = 0x825325DC;
	sub_8252DEA8(ctx, base);
	// rlwinm r11,r29,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x1C;
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stwx r27,r28,r9
	REX_STORE_U32(r28.u32 + ctx.r9.u32, r27.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r25,r28,r8
	REX_STORE_U32(r28.u32 + ctx.r8.u32, r25.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r11,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r11.u32);
	// stwx r26,r28,r7
	REX_STORE_U32(r28.u32 + ctx.r7.u32, r26.u32);
loc_8253260C:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82532628
	if (ctx.cr6.eq) goto loc_82532628;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x8253262c
	if (!ctx.cr6.eq) goto loc_8253262C;
loc_82532628:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8253262C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82532698
	if (ctx.cr0.eq) goto loc_82532698;
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r6,r9,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r9,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r30,r29,31,3,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8252dea8
	ctx.lr = 0x82532668;
	sub_8252DEA8(ctx, base);
	// rlwinm r11,r29,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x1C;
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stwx r24,r28,r9
	REX_STORE_U32(r28.u32 + ctx.r9.u32, r24.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r22,r28,r8
	REX_STORE_U32(r28.u32 + ctx.r8.u32, r22.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r11,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r11.u32);
	// stwx r23,r28,r7
	REX_STORE_U32(r28.u32 + ctx.r7.u32, r23.u32);
loc_82532698:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x82532978
	if (ctx.cr6.eq) goto loc_82532978;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// li r19,-1
	r19.s64 = -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825326B4:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r7,r19,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x825326b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825326B4;
	// andi. r11,r10,5
	ctx.r11.u64 = ctx.r10.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82532708
	if (!ctx.cr6.eq) goto loc_82532708;
loc_82532700:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8253297c
	goto loc_8253297C;
loc_82532708:
	// rlwinm r22,r10,0,29,29
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// mr r20,r18
	r20.u64 = r18.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825328dc
	if (ctx.cr6.eq) goto loc_825328DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r18
	r30.u64 = r18.u64;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_82532724:
	// addi r23,r1,104
	r23.s64 = ctx.r1.s64 + 104;
	// lwzx r11,r30,r23
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825328cc
	if (!ctx.cr6.eq) goto loc_825328CC;
	// addi r26,r1,88
	r26.s64 = ctx.r1.s64 + 88;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r24,r17
	r24.u64 = r17.u64;
	// mr r25,r18
	r25.u64 = r18.u64;
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// rlwinm r28,r11,7,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// slw r11,r17,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r17.u32 << (r28.u8 & 0x3F));
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82532858
	if (ctx.cr0.eq) goto loc_82532858;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
loc_8253277C:
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825327c8
	if (ctx.cr6.eq) goto loc_825327C8;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_82532794:
	// slw r9,r17,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825327bc
	if (ctx.cr0.eq) goto loc_825327BC;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x825327bc
	if (ctx.cr6.gt) goto loc_825327BC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_825327BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82532794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82532794;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_825327C8:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82532824
	if (ctx.cr6.eq) goto loc_82532824;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_825327DC:
	// slw r9,r17,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r8.u8 & 0x3F));
	// and. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82532818
	if (ctx.cr0.eq) goto loc_82532818;
	// add r5,r30,r8
	ctx.r5.u64 = r30.u64 + ctx.r8.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82532818
	if (!ctx.cr6.eq) goto loc_82532818;
	// li r5,3
	ctx.r5.s64 = 3;
	// slw r3,r4,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// andc r5,r27,r5
	ctx.r5.u64 = r27.u64 & ~ctx.r5.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// or r27,r5,r3
	r27.u64 = ctx.r5.u64 | ctx.r3.u64;
loc_82532818:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825327dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825327DC;
loc_82532824:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8253283c
	if (!ctx.cr6.gt) goto loc_8253283C;
	// mr r24,r18
	r24.u64 = r18.u64;
	// b 0x82532848
	goto loc_82532848;
loc_8253283C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82532848
	if (!ctx.cr6.lt) goto loc_82532848;
	// mr r25,r17
	r25.u64 = r17.u64;
loc_82532848:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253277c
	if (!ctx.cr6.eq) goto loc_8253277C;
loc_82532858:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825bdf00
	ctx.lr = 0x82532870;
	sub_825BDF00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stwx r3,r30,r23
	REX_STORE_U32(r30.u32 + r23.u32, ctx.r3.u32);
	// mr r31,r18
	r31.u64 = r18.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8253289c
	if (ctx.cr6.eq) goto loc_8253289C;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,2
	r31.s64 = 2;
	// beq 0x8253289c
	if (ctx.cr0.eq) goto loc_8253289C;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82532988
	if (ctx.cr0.eq) goto loc_82532988;
	// li r31,6
	r31.s64 = 6;
loc_8253289C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825328A4;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwimi r11,r28,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x825328BC;
	sub_8250A620(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stwx r25,r30,r26
	REX_STORE_U32(r30.u32 + r26.u32, r25.u32);
	// rlwimi r11,r27,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_825328CC:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r20,r29
	ctx.cr6.compare<uint32_t>(r20.u32, r29.u32, ctx.xer);
	// blt cr6,0x82532724
	if (ctx.cr6.lt) goto loc_82532724;
loc_825328DC:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// ble cr6,0x82532920
	if (!ctx.cr6.gt) goto loc_82532920;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// rlwinm r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82532920
	if (ctx.cr6.eq) goto loc_82532920;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82532700
	if (!ctx.cr6.eq) goto loc_82532700;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_82532920:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82532978
	if (ctx.cr6.eq) goto loc_82532978;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_8253292C:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r30,r31,r9
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8253296c
	if (!ctx.cr6.eq) goto loc_8253296C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528fd8
	ctx.lr = 0x82532960;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8253296C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8253292c
	if (!ctx.cr0.eq) goto loc_8253292C;
loc_82532978:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8253297C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_82532988:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x82532994;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8257B2A0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r7,r3,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// bne 0x8257b2dc
	if (!ctx.cr0.eq) goto loc_8257B2DC;
	// and. r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,30
	ctx.xer.ca = ctx.r11.u32 <= 30;
	ctx.r3.u64 = static_cast<uint64_t>(30) - ctx.r11.u64;
	// blr 
	return;
loc_8257B2DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x8257b30c
	goto loc_8257B30C;
loc_8257B2F8:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8257b348
	if (!ctx.cr0.eq) goto loc_8257B348;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8257B30C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8257b2f8
	if (ctx.cr6.lt) goto loc_8257B2F8;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8257B340:
	// addi r3,r11,30
	ctx.r3.s64 = ctx.r11.s64 + 30;
	// blr 
	return;
loc_8257B348:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x8257b340
	goto loc_8257B340;
}

DEFINE_REX_FUNC(sub_8257E918) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e948
	if (ctx.cr6.eq) goto loc_8257E948;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8257e948
	if (!ctx.cr6.eq) goto loc_8257E948;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8257e940
	if (ctx.cr6.eq) goto loc_8257E940;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_8257E940:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8257E948:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257EFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8257EFF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8257f010
	if (!ctx.cr6.eq) goto loc_8257F010;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824e4368
	ctx.lr = 0x8257F010;
	sub_824E4368(ctx, base);
loc_8257F010:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257f060
	if (!ctx.cr6.eq) goto loc_8257F060;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257f030
	if (!ctx.cr6.eq) goto loc_8257F030;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824e4368
	ctx.lr = 0x8257F030;
	sub_824E4368(ctx, base);
loc_8257F030:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8257ed30
	ctx.lr = 0x8257F038;
	sub_8257ED30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x8257f04c
	if (!ctx.cr0.eq) goto loc_8257F04C;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824e4368
	ctx.lr = 0x8257F04C;
	sub_824E4368(ctx, base);
loc_8257F04C:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8257ef60
	ctx.lr = 0x8257F054;
	sub_8257EF60(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8257F060:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8257F068;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8257FE28) {
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
	ctx.lr = 0x8257FE30;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8257fd20
	ctx.lr = 0x8257FE48;
	sub_8257FD20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x824ff930
	ctx.lr = 0x8257FE5C;
	sub_824FF930(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82447468
	ctx.lr = 0x8257FE68;
	sub_82447468(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r29,24(r27)
	REX_STORE_U32(r27.u32 + 24, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// stw r10,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r9,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8257fd78
	ctx.lr = 0x8257FE9C;
	sub_8257FD78(ctx, base);
	// stw r3,32(r27)
	REX_STORE_U32(r27.u32 + 32, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fd78
	ctx.lr = 0x8257FEB0;
	sub_8257FD78(ctx, base);
	// stw r3,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82581520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82581528;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258154C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581570
	if (ctx.cr6.eq) goto loc_82581570;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8258156C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581570:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581578;
	sub_8250AD28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_825830B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825830B8;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825830E0;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825830F0;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825830FC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8258310C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82583118;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// stw r9,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r9.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825871A0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825871cc
	if (ctx.cr0.eq) goto loc_825871CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825871d8
	goto loc_825871D8;
loc_825871CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825871D8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// bne 0x82587238
	if (!ctx.cr0.eq) goto loc_82587238;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
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
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824e4308
	ctx.lr = 0x82587238;
	sub_824E4308(ctx, base);
loc_82587238:
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

DEFINE_REX_FUNC(sub_825973F8) {
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
	ctx.lr = 0x82597400;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mulli r4,r10,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// stw r11,600(r3)
	REX_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// bl 0x8251f360
	ctx.lr = 0x82597420;
	sub_8251F360(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82597454
	if (ctx.cr6.eq) goto loc_82597454;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x826a1e70
	ctx.lr = 0x8259743C;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x824f7a20
	ctx.lr = 0x82597454;
	sub_824F7A20(ctx, base);
loc_82597454:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r28,r11,-17656
	r28.s64 = ctx.r11.s64 + -17656;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r27,1
	r27.s64 = 1;
loc_82597474:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 600);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583bb0
	ctx.lr = 0x825974A0;
	sub_82583BB0(ctx, base);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82597530
	if (ctx.cr6.eq) goto loc_82597530;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82597530
	if (!ctx.cr6.eq) goto loc_82597530;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258d470
	ctx.lr = 0x825974D0;
	sub_8258D470(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r30,40
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(40));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(r29.u32, 5, ctx.xer);
	// bgt cr6,0x825974ec
	if (ctx.cr6.gt) goto loc_825974EC;
	// rlwimi r9,r27,2,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// b 0x825974f0
	goto loc_825974F0;
loc_825974EC:
	// rlwimi r9,r27,1,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
loc_825974F0:
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(r29.u32, 12, ctx.xer);
	// blt cr6,0x82597474
	if (ctx.cr6.lt) goto loc_82597474;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82597530:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259753C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825A2928) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825A2930;
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
	// addi r29,r10,-11576
	r29.s64 = ctx.r10.s64 + -11576;
	// bne cr6,0x825a296c
	if (!ctx.cr6.eq) goto loc_825A296C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11836
	ctx.r5.s64 = ctx.r11.s64 + -11836;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,150
	ctx.r7.s64 = 150;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A296C;
	sub_824EA978(ctx, base);
loc_825A296C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a2994
	if (ctx.cr6.eq) goto loc_825A2994;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-11608
	ctx.r5.s64 = ctx.r11.s64 + -11608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,151
	ctx.r7.s64 = 151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2994;
	sub_824EA978(ctx, base);
loc_825A2994:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a29a4
	if (ctx.cr6.eq) goto loc_825A29A4;
	// bl 0x825a2758
	ctx.lr = 0x825A29A4;
	sub_825A2758(ctx, base);
loc_825A29A4:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a29b4
	if (ctx.cr6.eq) goto loc_825A29B4;
	// bl 0x825a2758
	ctx.lr = 0x825A29B4;
	sub_825A2758(ctx, base);
loc_825A29B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A29C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825A4EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825A4EC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A4EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825a4f74
	if (!ctx.cr0.eq) goto loc_825A4F74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-9688
	r29.s64 = ctx.r10.s64 + -9688;
	// bne cr6,0x825a4f2c
	if (!ctx.cr6.eq) goto loc_825A4F2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9288
	ctx.r5.s64 = ctx.r11.s64 + -9288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1040
	ctx.r7.s64 = 1040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4F2C;
	sub_824EA978(ctx, base);
loc_825A4F2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a4f54
	if (!ctx.cr6.eq) goto loc_825A4F54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9312
	ctx.r5.s64 = ctx.r11.s64 + -9312;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1041
	ctx.r7.s64 = 1041;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4F54;
	sub_824EA978(ctx, base);
loc_825A4F54:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_825A4F74:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A9148) {
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
	ctx.lr = 0x825A9168;
	sub_825A60D8(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// sth r10,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r10.u16);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r7,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,20,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,24,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,28,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r8,r9,0,20,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r8.u64 & 0x7000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,20,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,24,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,28,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a9268
	if (ctx.cr0.eq) goto loc_825A9268;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9268:
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r9,0,10,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r6.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r6,0,8,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a92dc
	if (ctx.cr0.eq) goto loc_825A92DC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A92DC:
	// li r9,17
	ctx.r9.s64 = 17;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// rlwimi r5,r9,18,8,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwzu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// ori r5,r5,13107
	ctx.r5.u64 = ctx.r5.u64 | 13107;
	// li r6,65
	ctx.r6.s64 = 65;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,16,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r4,r5,0,10,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3F0000) | (ctx.r4.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r5,r4,0,8,8
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800000) | (ctx.r5.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 4194304;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r5,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r5,r5,0,8,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825a9378
	if (ctx.cr0.eq) goto loc_825A9378;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9378:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r4,r9,18,8,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r4.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,13107
	ctx.r3.u64 = ctx.r3.u64 | 13107;
	// li r4,45
	ctx.r4.s64 = 45;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r9,18,8,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r3.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,13107
	ctx.r3.u64 = ctx.r3.u64 | 13107;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,16,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r7,18,8,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r7,18,8,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,16,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r5,r4,0,10,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3F0000) | (ctx.r5.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r5,r4,0,8,8
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800000) | (ctx.r5.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 4194304;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r5,r5,0,8,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825a9474
	if (ctx.cr0.eq) goto loc_825A9474;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9474:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,13107
	ctx.r10.u64 = ctx.r10.u64 | 13107;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r9,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a9508
	if (ctx.cr0.eq) goto loc_825A9508;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A9508:
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r6,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,4369
	ctx.r10.u64 = ctx.r10.u64 | 4369;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r6,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,4369
	ctx.r10.u64 = ctx.r10.u64 | 4369;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825C6930) {
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
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x824ff930
	ctx.lr = 0x825C695C;
	sub_824FF930(ctx, base);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825CA1D0) {
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
	ctx.lr = 0x825CA1D8;
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
	// beq cr6,0x825ca210
	if (ctx.cr6.eq) goto loc_825CA210;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CA20C;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CA210:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ca22c
	if (ctx.cr6.eq) goto loc_825CA22C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CA228;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CA22C:
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
	// bne 0x825ca298
	if (!ctx.cr0.eq) goto loc_825CA298;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825ca2a0
	goto loc_825CA2A0;
loc_825CA298:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CA2A0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ca2b8
	if (ctx.cr6.eq) goto loc_825CA2B8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CA2B8;
	sub_82409A88(ctx, base);
loc_825CA2B8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825ca580
	if (!ctx.cr6.gt) goto loc_825CA580;
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
loc_825CA31C:
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
	// beq cr6,0x825ca4cc
	if (ctx.cr6.eq) goto loc_825CA4CC;
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
loc_825CA4CC:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x825ca4dc
	if (ctx.cr6.lt) goto loc_825CA4DC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825CA4DC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ca4f4
	if (!ctx.cr6.gt) goto loc_825CA4F4;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x825ca4f8
	if (ctx.cr6.lt) goto loc_825CA4F8;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x825ca4f8
	goto loc_825CA4F8;
loc_825CA4F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825CA4F8:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825ca508
	if (ctx.cr6.lt) goto loc_825CA508;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825CA508:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ca520
	if (!ctx.cr6.gt) goto loc_825CA520;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x825ca524
	if (ctx.cr6.lt) goto loc_825CA524;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x825ca524
	goto loc_825CA524;
loc_825CA520:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825CA524:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x825ca534
	if (ctx.cr6.lt) goto loc_825CA534;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825CA534:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ca54c
	if (!ctx.cr6.gt) goto loc_825CA54C;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x825ca550
	if (ctx.cr6.lt) goto loc_825CA550;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x825ca550
	goto loc_825CA550;
loc_825CA54C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825CA550:
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
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
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
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
	// blt cr6,0x825ca31c
	if (ctx.cr6.lt) goto loc_825CA31C;
loc_825CA580:
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

DEFINE_REX_FUNC(sub_825DE738) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825de780
	if (ctx.cr6.eq) goto loc_825DE780;
loc_825DE75C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,1436(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1436);
	// lwz r3,1444(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DE774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825de75c
	if (!ctx.cr6.eq) goto loc_825DE75C;
loc_825DE780:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825E08C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e08fc
	if (ctx.cr6.eq) goto loc_825E08FC;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e08fc
	if (!ctx.cr0.eq) goto loc_825E08FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-17760
	ctx.r11.s64 = ctx.r11.s64 + -17760;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825e0900
	if (!ctx.cr0.eq) goto loc_825E0900;
loc_825E08FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0900:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e0930
	if (ctx.cr0.eq) goto loc_825E0930;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
loc_825E0910:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x825e0924
	if (ctx.cr6.lt) goto loc_825E0924;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// ble cr6,0x825e0938
	if (!ctx.cr6.gt) goto loc_825E0938;
loc_825E0924:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825e0910
	if (ctx.cr6.lt) goto loc_825E0910;
loc_825E0930:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825E0938:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6830) {
	REX_FUNC_PROLOGUE();
	// lwz r10,916(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 916);
	// lwz r11,924(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 924);
	// lwz r9,908(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 908);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,900(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6BF8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r5,14
	ctx.r11.s64 = ctx.r5.s64 + 14;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r5,20
	ctx.r9.s64 = ctx.r5.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825f79d0
	sub_825F79D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E94F0) {
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
	// lwz r3,2136(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// bl 0x825e9228
	ctx.lr = 0x825E9510;
	sub_825E9228(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825e9540
	if (!ctx.cr6.eq) goto loc_825E9540;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,14104
	ctx.r6.s64 = ctx.r11.s64 + 14104;
	// addi r5,r10,14096
	ctx.r5.s64 = ctx.r10.s64 + 14096;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,550
	ctx.r7.s64 = 550;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E9540;
	sub_824EA978(ctx, base);
loc_825E9540:
	// rlwinm r10,r31,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,2136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2136);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r31,27
	ctx.r9.u64 = r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_825EFCE8) {
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
	ctx.lr = 0x825EFCF0;
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r21,1
	r21.s64 = 1;
	// lwz r25,4(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// addi r23,r11,22852
	r23.s64 = ctx.r11.s64 + 22852;
	// addi r22,r10,15448
	r22.s64 = ctx.r10.s64 + 15448;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x825efe14
	if (!ctx.cr6.gt) goto loc_825EFE14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r26,0
	r26.s64 = 0;
	// addi r24,r11,16616
	r24.s64 = ctx.r11.s64 + 16616;
loc_825EFD30:
	// lwz r3,52(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efd4c
	if (!ctx.cr6.lt) goto loc_825EFD4C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825efd54
	goto loc_825EFD54;
loc_825EFD4C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFD54;
	sub_825F7718(ctx, base);
loc_825EFD54:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825efe04
	if (!ctx.cr6.eq) goto loc_825EFE04;
	// lwz r3,52(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efd80
	if (!ctx.cr6.lt) goto loc_825EFD80;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825efd88
	goto loc_825EFD88;
loc_825EFD80:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFD88;
	sub_825F7718(ctx, base);
loc_825EFD88:
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
	// bne 0x825efe04
	if (!ctx.cr0.eq) goto loc_825EFE04;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825efe04
	if (ctx.cr0.eq) goto loc_825EFE04;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,116(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 116);
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
	// bne 0x825efdf0
	if (!ctx.cr0.eq) goto loc_825EFDF0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1904
	ctx.r7.s64 = 1904;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EFDF0;
	sub_824EA978(ctx, base);
loc_825EFDF0:
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// slw r10,r21,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r21.u32 << (r30.u8 & 0x3F));
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_825EFE04:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// blt cr6,0x825efd30
	if (ctx.cr6.lt) goto loc_825EFD30;
loc_825EFE14:
	// lwz r30,40(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 40);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825efe30
	if (ctx.cr0.eq) goto loc_825EFE30;
	// lwz r11,132(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
loc_825EFE30:
	// lbz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825eff48
	if (ctx.cr0.eq) goto loc_825EFF48;
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825eff48
	if (!ctx.cr6.gt) goto loc_825EFF48;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825efeb0
	if (ctx.cr0.eq) goto loc_825EFEB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825EFE5C;
	sub_825D7AE0(ctx, base);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825efeb0
	if (!ctx.cr0.eq) goto loc_825EFEB0;
	// lwz r31,56(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,116(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 116);
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r31,27
	ctx.r9.u64 = r31.u32 & 0x1F;
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
	// beq 0x825efebc
	if (ctx.cr0.eq) goto loc_825EFEBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,16708
	ctx.r5.s64 = ctx.r11.s64 + 16708;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1922
	ctx.r7.s64 = 1922;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EFEAC;
	sub_824EA978(ctx, base);
	// b 0x825efebc
	goto loc_825EFEBC;
loc_825EFEB0:
	// lwz r3,116(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 116);
	// bl 0x825ecb10
	ctx.lr = 0x825EFEB8;
	sub_825ECB10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825EFEBC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x825efedc
	if (ctx.cr6.lt) goto loc_825EFEDC;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825efef8
	if (ctx.cr6.lt) goto loc_825EFEF8;
loc_825EFEDC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,16644
	ctx.r5.s64 = ctx.r11.s64 + 16644;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1927
	ctx.r7.s64 = 1927;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EFEF8;
	sub_824EA978(ctx, base);
loc_825EFEF8:
	// rlwinm r10,r31,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// clrlwi r9,r31,27
	ctx.r9.u64 = r31.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,228(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 228);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r31,56(r30)
	REX_STORE_U32(r30.u32 + 56, r31.u32);
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// stw r10,228(r30)
	REX_STORE_U32(r30.u32 + 228, ctx.r10.u32);
	// lwz r11,128(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 128);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825effe4
	if (!ctx.cr6.gt) goto loc_825EFFE4;
	// stw r31,128(r28)
	REX_STORE_U32(r28.u32 + 128, r31.u32);
	// b 0x825effe4
	goto loc_825EFFE4;
loc_825EFF48:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825eff84
	if (ctx.cr6.eq) goto loc_825EFF84;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825eff84
	if (!ctx.cr0.eq) goto loc_825EFF84;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r11,r11,-17760
	ctx.r11.s64 = ctx.r11.s64 + -17760;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne 0x825eff88
	if (!ctx.cr0.eq) goto loc_825EFF88;
loc_825EFF84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EFF88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825effe4
	if (ctx.cr0.eq) goto loc_825EFFE4;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825effbc
	if (!ctx.cr0.eq) goto loc_825EFFBC;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r11,1524(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1524);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1524(r10)
	REX_STORE_U32(ctx.r10.u32 + 1524, ctx.r11.u32);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// stw r9,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r9.u32);
	// b 0x825effe4
	goto loc_825EFFE4;
loc_825EFFBC:
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r10,116(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 116);
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// slw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_825EFFE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825FD9D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FE1C8) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x825fe24c
	if (ctx.cr6.lt) goto loc_825FE24C;
	// beq cr6,0x825fe244
	if (ctx.cr6.eq) goto loc_825FE244;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x825fe23c
	if (ctx.cr6.lt) goto loc_825FE23C;
	// beq cr6,0x825fe234
	if (ctx.cr6.eq) goto loc_825FE234;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x825fe22c
	if (ctx.cr6.lt) goto loc_825FE22C;
	// beq cr6,0x825fe224
	if (ctx.cr6.eq) goto loc_825FE224;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-20400
	ctx.r6.s64 = ctx.r11.s64 + -20400;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,5422
	ctx.r7.s64 = 5422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FE21C;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fe250
	goto loc_825FE250;
loc_825FE224:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x825fe250
	goto loc_825FE250;
loc_825FE22C:
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x825fe250
	goto loc_825FE250;
loc_825FE234:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x825fe250
	goto loc_825FE250;
loc_825FE23C:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x825fe250
	goto loc_825FE250;
loc_825FE244:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x825fe250
	goto loc_825FE250;
loc_825FE24C:
	// li r3,5
	ctx.r3.s64 = 5;
loc_825FE250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260A158) {
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
	ctx.lr = 0x8260A160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r27,r11,-16720
	r27.s64 = ctx.r11.s64 + -16720;
	// addi r29,r10,-17760
	r29.s64 = ctx.r10.s64 + -17760;
	// ble 0x8260a1e0
	if (!ctx.cr0.gt) goto loc_8260A1E0;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8260a1d0
	if (ctx.cr0.eq) goto loc_8260A1D0;
	// lbz r10,159(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 159);
	// li r26,1
	r26.s64 = 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8260a1d0
	if (ctx.cr0.eq) goto loc_8260A1D0;
	// li r25,1
	r25.s64 = 1;
loc_8260A1D0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8260a31c
	if (ctx.cr6.eq) goto loc_8260A31C;
loc_8260A1E0:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r11,-21368
	r28.s64 = ctx.r11.s64 + -21368;
	// mulli r11,r10,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a2a4
	if (ctx.cr0.eq) goto loc_8260A2A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x8260a234
	if (ctx.cr6.gt) goto loc_8260A234;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A22C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a2a4
	if (ctx.cr0.eq) goto loc_8260A2A4;
loc_8260A234:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8260a294
	if (ctx.cr0.eq) goto loc_8260A294;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lbz r11,158(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8260a294
	if (ctx.cr0.eq) goto loc_8260A294;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8260A294:
	// mulli r11,r30,5
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(5));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
loc_8260A2A4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8260a31c
	if (ctx.cr6.eq) goto loc_8260A31C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a31c
	if (ctx.cr0.eq) goto loc_8260A31C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A2D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8260a31c
	if (!ctx.cr6.gt) goto loc_8260A31C;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8260a30c
	if (ctx.cr0.eq) goto loc_8260A30C;
	// lbz r11,161(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 161);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8260a30c
	if (ctx.cr0.eq) goto loc_8260A30C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8260A30C:
	// mulli r11,r30,5
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(5));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
loc_8260A31C:
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andc r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ~r25.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a350
	if (ctx.cr0.eq) goto loc_8260A350;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bgt cr6,0x8260a364
	if (ctx.cr6.gt) goto loc_8260A364;
loc_8260A350:
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8260a368
	if (ctx.cr0.eq) goto loc_8260A368;
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(r25.s32, r26.s32, ctx.xer);
	// bge cr6,0x8260a368
	if (!ctx.cr6.lt) goto loc_8260A368;
loc_8260A364:
	// li r30,-1
	r30.s64 = -1;
loc_8260A368:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82615088) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-13504
	ctx.r10.s64 = ctx.r10.s64 + -13504;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82615D18) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,184(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82615FD0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82616020) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-14496
	ctx.r10.s64 = ctx.r10.s64 + -14496;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8260f8f8
	ctx.lr = 0x82616054;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8260f8f8
	ctx.lr = 0x8261605C;
	sub_8260F8F8(ctx, base);
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

DEFINE_REX_FUNC(sub_82617E00) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-14148
	ctx.r10.s64 = ctx.r11.s64 + -14148;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82617E24:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82617e44
	if (!ctx.cr0.eq) goto loc_82617E44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82617e24
	if (!ctx.cr6.eq) goto loc_82617E24;
loc_82617E44:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82617e54
	if (!ctx.cr0.eq) goto loc_82617E54;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// b 0x82617e90
	goto loc_82617E90;
loc_82617E54:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-14164
	ctx.r10.s64 = ctx.r10.s64 + -14164;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82617E64:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82617e84
	if (!ctx.cr0.eq) goto loc_82617E84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82617e64
	if (!ctx.cr6.eq) goto loc_82617E64;
loc_82617E84:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82617eb4
	if (!ctx.cr0.eq) goto loc_82617EB4;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
loc_82617E90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82617e9c
	if (!ctx.cr6.eq) goto loc_82617E9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82617E9C:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82617ebc
	goto loc_82617EBC;
loc_82617EB4:
	// bl 0x82617aa8
	ctx.lr = 0x82617EB8;
	sub_82617AA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82617EBC:
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

DEFINE_REX_FUNC(sub_8261DF08) {
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
	ctx.lr = 0x8261DF10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261df2c
	if (!ctx.cr6.eq) goto loc_8261DF2C;
loc_8261DF20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8261DF2C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261df20
	if (ctx.cr6.eq) goto loc_8261DF20;
	// addi r27,r30,224
	r27.s64 = r30.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826385e8
	ctx.lr = 0x8261DF44;
	sub_826385E8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// stw r29,236(r30)
	REX_STORE_U32(r30.u32 + 236, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,284(r30)
	REX_STORE_U32(r30.u32 + 284, r28.u32);
	// stw r29,240(r30)
	REX_STORE_U32(r30.u32 + 240, r29.u32);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826a2e60
	ctx.lr = 0x8261DF6C;
	sub_826A2E60(ctx, base);
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r29,388(r31)
	REX_STORE_U32(r31.u32 + 388, r29.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,392(r31)
	REX_STORE_U32(r31.u32 + 392, r29.u32);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8261dff8
	if (ctx.cr6.eq) goto loc_8261DFF8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8261DF98:
	// lwz r7,256(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// sth r4,122(r5)
	REX_STORE_U16(ctx.r5.u32 + 122, ctx.r4.u16);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r7,122(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 122);
	// sth r7,124(r9)
	REX_STORE_U16(ctx.r9.u32 + 124, ctx.r7.u16);
	// lwz r6,256(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,424(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// sth r6,-2(r9)
	REX_STORE_U16(ctx.r9.u32 + -2, ctx.r6.u16);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r29,116(r7)
	REX_STORE_U16(ctx.r7.u32 + 116, r29.u16);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8261df98
	if (ctx.cr6.lt) goto loc_8261DF98;
loc_8261DFF8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,276(r30)
	REX_STORE_U32(r30.u32 + 276, ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// std r29,184(r30)
	REX_STORE_U64(r30.u32 + 184, r29.u64);
	// stw r29,160(r30)
	REX_STORE_U32(r30.u32 + 160, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// stw r9,164(r30)
	REX_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// stw r29,60(r30)
	REX_STORE_U32(r30.u32 + 60, r29.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r28,696(r30)
	REX_STORE_U32(r30.u32 + 696, r28.u32);
	// stw r29,300(r30)
	REX_STORE_U32(r30.u32 + 300, r29.u32);
	// stw r5,692(r30)
	REX_STORE_U32(r30.u32 + 692, ctx.r5.u32);
	// stw r29,156(r30)
	REX_STORE_U32(r30.u32 + 156, r29.u32);
	// std r11,168(r30)
	REX_STORE_U64(r30.u32 + 168, ctx.r11.u64);
	// std r11,176(r30)
	REX_STORE_U64(r30.u32 + 176, ctx.r11.u64);
	// sth r29,154(r30)
	REX_STORE_U16(r30.u32 + 154, r29.u16);
	// stw r29,32(r30)
	REX_STORE_U32(r30.u32 + 32, r29.u32);
	// bl 0x82635be0
	ctx.lr = 0x8261E05C;
	sub_82635BE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826294A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82793e24
	ctx.lr = 0x826294D0;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826294e8
	if (ctx.cr6.eq) goto loc_826294E8;
	// bl 0x82794244
	ctx.lr = 0x826294E4;
	__imp__XAudioUnregisterRenderDriverClient(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_826294E8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
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

DEFINE_REX_FUNC(sub_8262DDB8) {
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
	ctx.lr = 0x8262DDC8;
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
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x8262df8c
	if (!ctx.cr6.eq) goto loc_8262DF8C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8262e144
	if (ctx.cr6.eq) goto loc_8262E144;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8262DE70:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// lfd f0,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// std r5,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r5.u64);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f31,f13,f11,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, f31.f64)));
	// beq cr6,0x8262df30
	if (ctx.cr6.eq) goto loc_8262DF30;
	// fmuls f29,f0,f10
	f29.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmuls f28,f0,f8
	f28.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f27,f0,f6
	f27.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f26,f0,f4
	f26.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f29,f13,f9,f29
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f29.f64)));
	// fmadds f28,f13,f7,f28
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f28.f64)));
	// fmadds f27,f13,f5,f27
	f27.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f27.f64)));
	// fmadds f26,f13,f3,f26
	f26.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f26.f64)));
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// fadds f0,f31,f30
	ctx.f0.f64 = double(float(f31.f64 + f30.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262df70
	goto loc_8262DF70;
loc_8262DF30:
	// fmuls f30,f0,f10
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f29,f0,f8
	f29.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f28,f0,f6
	f28.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f27,f0,f4
	f27.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f31,f13,f9,f30
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f30.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f31,f13,f7,f29
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f29.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f31,f13,f5,f28
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f28.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f31,f13,f3,f27
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f27.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262DF70:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8262de70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262DE70;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262DF80;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8262DF8C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f13,f0
	f25.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f30,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f28.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f26,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f26.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * ctx.f0.f64));
	// lfs f24,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f24.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	f26.f64 = double(float(f26.f64 * ctx.f0.f64));
	// lfs f22,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	f22.f64 = double(temp.f32);
	// fmuls f24,f24,f0
	f24.f64 = double(float(f24.f64 * ctx.f0.f64));
	// lfs f13,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f22,f0
	f22.f64 = double(float(f22.f64 * ctx.f0.f64));
	// lfs f20,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	f20.f64 = double(temp.f32);
	// fmuls f21,f13,f0
	f21.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f20,f20,f0
	f20.f64 = double(float(f20.f64 * ctx.f0.f64));
	// beq cr6,0x8262e144
	if (ctx.cr6.eq) goto loc_8262E144;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8262E00C:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// lfd f0,-176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f19,f0
	f19.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// frsp f13,f19
	ctx.f13.f64 = double(float(f19.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// fmuls f19,f0,f12
	f19.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f19,f13,f11,f19
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, f19.f64)));
	// beq cr6,0x8262e0cc
	if (ctx.cr6.eq) goto loc_8262E0CC;
	// fmuls f17,f0,f10
	f17.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f18,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f18.f64 = double(temp.f32);
	// fmuls f16,f0,f8
	f16.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f15,f0,f6
	f15.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f14,f0,f4
	f14.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f17,f13,f9,f17
	f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f17.f64)));
	// fmadds f16,f13,f7,f16
	f16.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f16.f64)));
	// fmadds f15,f13,f5,f15
	f15.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f15.f64)));
	// fmadds f14,f13,f3,f14
	f14.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f14.f64)));
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// fadds f0,f19,f18
	ctx.f0.f64 = double(float(f19.f64 + f18.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f17,f0
	ctx.f0.f64 = double(float(f17.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f16,f0
	ctx.f0.f64 = double(float(f16.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f15,f0
	ctx.f0.f64 = double(float(f15.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f14,f0
	ctx.f0.f64 = double(float(f14.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262e10c
	goto loc_8262E10C;
loc_8262E0CC:
	// fmuls f18,f0,f10
	ctx.fpscr.disableFlushMode();
	f18.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f19,0(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f17,f0,f8
	f17.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f16,f0,f6
	f16.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f15,f0,f4
	f15.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f19,f13,f9,f18
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f18.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f19,f13,f7,f17
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f17.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f19,f13,f5,f16
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f16.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f19,f13,f3,f15
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f15.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262E10C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f12,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 + ctx.f12.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 + ctx.f11.f64));
	// fadds f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 + ctx.f10.f64));
	// fadds f9,f28,f9
	ctx.f9.f64 = double(float(f28.f64 + ctx.f9.f64));
	// fadds f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 + ctx.f8.f64));
	// fadds f7,f26,f7
	ctx.f7.f64 = double(float(f26.f64 + ctx.f7.f64));
	// fadds f6,f25,f6
	ctx.f6.f64 = double(float(f25.f64 + ctx.f6.f64));
	// fadds f5,f24,f5
	ctx.f5.f64 = double(float(f24.f64 + ctx.f5.f64));
	// fadds f4,f23,f4
	ctx.f4.f64 = double(float(f23.f64 + ctx.f4.f64));
	// fadds f3,f22,f3
	ctx.f3.f64 = double(float(f22.f64 + ctx.f3.f64));
	// fadds f2,f21,f2
	ctx.f2.f64 = double(float(f21.f64 + ctx.f2.f64));
	// fadds f1,f20,f1
	ctx.f1.f64 = double(float(f20.f64 + ctx.f1.f64));
	// bdnz 0x8262e00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262E00C;
loc_8262E144:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262E14C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264C718) {
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
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82793824
	ctx.lr = 0x8264C740;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	ctx.r11.s64 = 537526272;
	// ori r11,r11,12800
	ctx.r11.u64 = ctx.r11.u64 | 12800;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264c790
	if (ctx.cr6.lt) goto loc_8264C790;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// bl 0x82794274
	ctx.lr = 0x8264C760;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264c790
	if (ctx.cr0.lt) goto loc_8264C790;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82793bf4
	ctx.lr = 0x8264C778;
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
	// b 0x8264c794
	goto loc_8264C794;
loc_8264C790:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8264C794:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8264c7b8
	if (ctx.cr6.eq) goto loc_8264C7B8;
	// lis r5,8235
	ctx.r5.s64 = 539688960;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r5,r5,39936
	ctx.r5.u64 = ctx.r5.u64 | 39936;
	// bctrl 
	ctx.lr = 0x8264C7B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8264c7bc
	goto loc_8264C7BC;
loc_8264C7B8:
	// bl 0x82793f34
	ctx.lr = 0x8264C7BC;
	__imp__NetDll_XNetStartup(ctx, base);
loc_8264C7BC:
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

DEFINE_REX_FUNC(sub_8264E648) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8264fb08
	ctx.lr = 0x8264E664;
	sub_8264FB08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264E750) {
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
	ctx.lr = 0x8264E758;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bge cr6,0x8264e8d4
	if (!ctx.cr6.lt) goto loc_8264E8D4;
	// li r27,1
	r27.s64 = 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x8264fb08
	ctx.lr = 0x8264E780;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8264e8d4
	if (ctx.cr6.lt) goto loc_8264E8D4;
	// beq cr6,0x8264e7a4
	if (ctx.cr6.eq) goto loc_8264E7A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8264e8d4
	if (!ctx.cr6.lt) goto loc_8264E8D4;
loc_8264E7A4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E7B0;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264e7e0
	if (ctx.cr0.eq) goto loc_8264E7E0;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fb08
	ctx.lr = 0x8264E7D8;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264E7E0:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264e800
	if (ctx.cr0.eq) goto loc_8264E800;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E7F8;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264E800:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r28,2
	r28.s64 = 2;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264e84c
	if (ctx.cr0.eq) goto loc_8264E84C;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fb08
	ctx.lr = 0x8264E824;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264e84c
	if (ctx.cr0.eq) goto loc_8264E84C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E844;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264E84C:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264e878
	if (!ctx.cr6.eq) goto loc_8264E878;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264e700
	ctx.lr = 0x8264E86C;
	sub_8264E700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// b 0x8264e884
	goto loc_8264E884;
loc_8264E878:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_8264E884:
	// li r29,0
	r29.s64 = 0;
loc_8264E888:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264e96c
	if (!ctx.cr6.eq) goto loc_8264E96C;
	// lbz r11,89(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264e8e4
	if (ctx.cr6.lt) goto loc_8264E8E4;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264fb08
	ctx.lr = 0x8264E8BC;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
loc_8264E8D0:
	// beq cr6,0x8264e9c0
	if (ctx.cr6.eq) goto loc_8264E9C0;
loc_8264E8D4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8264E8DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_8264E8E4:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x8264fa80
	ctx.lr = 0x8264E8EC;
	sub_8264FA80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8264e928
	if (ctx.cr0.eq) goto loc_8264E928;
loc_8264E904:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E910;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264e904
	if (ctx.cr6.lt) goto loc_8264E904;
loc_8264E928:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E934;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8264fb58
	ctx.lr = 0x8264E954;
	sub_8264FB58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x8264e9c0
	goto loc_8264E9C0;
loc_8264E96C:
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8264fb08
	ctx.lr = 0x8264E980;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8264e9f0
	if (ctx.cr6.lt) goto loc_8264E9F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8264e8d0
	if (!ctx.cr6.lt) goto loc_8264E8D0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f6c8
	ctx.lr = 0x8264E9AC;
	sub_8264F6C8(ctx, base);
	// addi r4,r26,1
	ctx.r4.s64 = r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264e750
	ctx.lr = 0x8264E9B8;
	sub_8264E750(ctx, base);
loc_8264E9B8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264E9C0:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264e9dc
	if (!ctx.cr6.eq) goto loc_8264E9DC;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_8264E9DC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8264e888
	if (!ctx.cr6.eq) goto loc_8264E888;
	// b 0x8264e8dc
	goto loc_8264E8DC;
loc_8264E9F0:
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264ea14
	if (ctx.cr0.eq) goto loc_8264EA14;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fb08
	ctx.lr = 0x8264EA0C;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264EA14:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264ea34
	if (ctx.cr0.eq) goto loc_8264EA34;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264EA2C;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264EA34:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264ea7c
	if (ctx.cr0.eq) goto loc_8264EA7C;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fb08
	ctx.lr = 0x8264EA54;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
	// lbz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264ea7c
	if (ctx.cr0.eq) goto loc_8264EA7C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264EA74;
	sub_8264FAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e8dc
	if (ctx.cr0.lt) goto loc_8264E8DC;
loc_8264EA7C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264e9c0
	if (ctx.cr0.eq) goto loc_8264E9C0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264e678
	ctx.lr = 0x8264EA94;
	sub_8264E678(ctx, base);
	// b 0x8264e9b8
	goto loc_8264E9B8;
}

DEFINE_REX_FUNC(sub_82661E78) {
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
	ctx.lr = 0x82661E80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lwz r27,156(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 156);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r28,64(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// bne cr6,0x82661ea0
	if (!ctx.cr6.eq) goto loc_82661EA0;
	// li r30,0
	r30.s64 = 0;
	// b 0x82661f10
	goto loc_82661F10;
loc_82661EA0:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
loc_82661EA4:
	// addic. r28,r28,1
	ctx.xer.ca = r28.u32 > 4294967294;
	r28.s64 = r28.s64 + 1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82661eb0
	if (!ctx.cr0.eq) goto loc_82661EB0;
	// li r28,1
	r28.s64 = 1;
loc_82661EB0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672760
	ctx.lr = 0x82661EBC;
	sub_82672760(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82661f1c
	if (ctx.cr0.eq) goto loc_82661F1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672c40
	ctx.lr = 0x82661EF4;
	sub_82672C40(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82661f10
	if (ctx.cr6.lt) goto loc_82661F10;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x82661ea4
	if (!ctx.cr6.eq) goto loc_82661EA4;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// li r30,0
	r30.s64 = 0;
	// stw r30,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, r30.u32);
loc_82661F10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82661F1C:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4107
	r30.u64 = r30.u64 | 4107;
	// b 0x82661f10
	goto loc_82661F10;
}

DEFINE_REX_FUNC(sub_82666F68) {
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
	ctx.lr = 0x82666F70;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// addi r9,r3,432
	ctx.r9.s64 = ctx.r3.s64 + 432;
	// li r20,0
	r20.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82666fb4
	if (ctx.cr6.eq) goto loc_82666FB4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82666F98:
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82666fb4
	if (ctx.cr6.eq) goto loc_82666FB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82666f98
	if (ctx.cr6.lt) goto loc_82666F98;
loc_82666FB4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82666fc8
	if (ctx.cr6.lt) goto loc_82666FC8;
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4101
	r29.u64 = r29.u64 | 4101;
	// b 0x826673a8
	goto loc_826673A8;
loc_82666FC8:
	// lwz r27,36(r21)
	r27.u64 = REX_LOAD_U32(r21.u32 + 36);
	// lwz r28,56(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 56);
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r27,64(r28)
	REX_STORE_U32(r28.u32 + 64, r27.u32);
	// stw r10,60(r28)
	REX_STORE_U32(r28.u32 + 60, ctx.r10.u32);
loc_82666FE0:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82666fe0
	if (!ctx.cr0.eq) goto loc_82666FE0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r28.u32);
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,292(r28)
	REX_STORE_U32(r28.u32 + 292, ctx.r11.u32);
	// beq 0x826670cc
	if (ctx.cr0.eq) goto loc_826670CC;
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// lis r9,-32646
	ctx.r9.s64 = -2139488256;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r29,r9,4113
	r29.u64 = ctx.r9.u64 | 4113;
	// beq 0x826670bc
	if (ctx.cr0.eq) goto loc_826670BC;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
loc_82667034:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667034
	if (!ctx.cr0.eq) goto loc_82667034;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8264c7f0
	ctx.lr = 0x8266705C;
	sub_8264C7F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82673220
	ctx.lr = 0x82667084;
	sub_82673220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826673a8
	if (ctx.cr0.eq) goto loc_826673A8;
loc_8266708C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266708c
	if (!ctx.cr0.eq) goto loc_8266708C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826673a8
	if (!ctx.cr6.eq) goto loc_826673A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82670cd8
	ctx.lr = 0x826670B8;
	sub_82670CD8(ctx, base);
	// b 0x826673a8
	goto loc_826673A8;
loc_826670BC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666618
	ctx.lr = 0x826670C8;
	sub_82666618(ctx, base);
	// b 0x826673a8
	goto loc_826673A8;
loc_826670CC:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r4,r11,42
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(42));
	// bl 0x82675ee0
	ctx.lr = 0x826670F4;
	sub_82675EE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82667108
	if (!ctx.cr0.eq) goto loc_82667108;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x826673a8
	goto loc_826673A8;
loc_82667108:
	// stw r27,69(r30)
	REX_STORE_U32(r30.u32 + 69, r27.u32);
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// stw r11,73(r30)
	REX_STORE_U32(r30.u32 + 73, ctx.r11.u32);
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// stw r11,77(r30)
	REX_STORE_U32(r30.u32 + 77, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667134
	if (ctx.cr6.eq) goto loc_82667134;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82667138
	goto loc_82667138;
loc_82667134:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82667138:
	// stw r11,14(r29)
	REX_STORE_U32(r29.u32 + 14, ctx.r11.u32);
	// addi r3,r29,18
	ctx.r3.s64 = r29.s64 + 18;
	// addi r4,r31,360
	ctx.r4.s64 = r31.s64 + 360;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x826a1e70
	ctx.lr = 0x8266714C;
	sub_826A1E70(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r27,r31,240
	r27.s64 = r31.s64 + 240;
	// li r26,42
	r26.s64 = 42;
	// addi r10,r29,42
	ctx.r10.s64 = r29.s64 + 42;
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x826671d0
	if (ctx.cr6.eq) goto loc_826671D0;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826671d0
	if (ctx.cr0.eq) goto loc_826671D0;
	// addi r24,r10,4
	r24.s64 = ctx.r10.s64 + 4;
	// addi r23,r10,-42
	r23.s64 = ctx.r10.s64 + -42;
loc_8266717C:
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x826671b8
	if (ctx.cr6.eq) goto loc_826671B8;
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826671b8
	if (ctx.cr0.eq) goto loc_826671B8;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stwu r10,42(r23)
	ea = 42 + r23.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r23.u32 = ea;
	// bl 0x826a1e70
	ctx.lr = 0x826671AC;
	sub_826A1E70(ctx, base);
	// addi r26,r26,42
	r26.s64 = r26.s64 + 42;
	// addi r24,r24,42
	r24.s64 = r24.s64 + 42;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_826671B8:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x826671d0
	if (ctx.cr6.eq) goto loc_826671D0;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266717c
	if (!ctx.cr0.eq) goto loc_8266717C;
loc_826671D0:
	// stb r25,13(r29)
	REX_STORE_U8(r29.u32 + 13, r25.u8);
	// stw r26,48(r30)
	REX_STORE_U32(r30.u32 + 48, r26.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667244
	if (ctx.cr6.eq) goto loc_82667244;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r6,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r6.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
loc_82667220:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
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
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667220
	if (!ctx.cr0.eq) goto loc_82667220;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
loc_82667244:
	// li r7,131
	ctx.r7.s64 = 131;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r5,r30,36
	ctx.r5.s64 = r30.s64 + 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826711d8
	ctx.lr = 0x8266725C;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826715f0
	ctx.lr = 0x82667278;
	sub_826715F0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266729c
	if (ctx.cr6.eq) goto loc_8266729C;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x82667294;
	sub_82671270(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82667358
	if (!ctx.cr0.eq) goto loc_82667358;
loc_8266729C:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
loc_826672A0:
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
	// bne 0x826672a0
	if (!ctx.cr0.eq) goto loc_826672A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826672dc
	if (!ctx.cr6.eq) goto loc_826672DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826672DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826672DC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82661e78
	ctx.lr = 0x826672EC;
	sub_82661E78(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x826673a8
	if (!ctx.cr0.eq) goto loc_826673A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82675cf0
	ctx.lr = 0x82667308;
	sub_82675CF0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x826673a8
	if (!ctx.cr0.eq) goto loc_826673A8;
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826673bc
	if (!ctx.cr0.eq) goto loc_826673BC;
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8266733c
	if (ctx.cr6.gt) goto loc_8266733C;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266733c
	if (!ctx.cr0.eq) goto loc_8266733C;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,292(r28)
	REX_STORE_U32(r28.u32 + 292, ctx.r11.u32);
	// b 0x826673bc
	goto loc_826673BC;
loc_8266733C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// li r20,1
	r20.s64 = 1;
	// bl 0x826748e8
	ctx.lr = 0x82667350;
	sub_826748E8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x826673bc
	if (ctx.cr0.eq) goto loc_826673BC;
loc_82667358:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826673a0
	if (ctx.cr6.eq) goto loc_826673A0;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
loc_82667364:
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
	// bne 0x82667364
	if (!ctx.cr0.eq) goto loc_82667364;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826673a0
	if (!ctx.cr6.eq) goto loc_826673A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826673A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826673A0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x826673bc
	if (!ctx.cr6.eq) goto loc_826673BC;
loc_826673A8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x826673B8;
	sub_826748E8(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_826673BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_826822D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826822D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r4,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	r29.s64 = ctx.r11.s32 >> 3;
	// bl 0x8265d838
	ctx.lr = 0x82682300;
	sub_8265D838(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82682310
	if (!ctx.cr0.eq) goto loc_82682310;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268239c
	goto loc_8268239C;
loc_82682310:
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82682320;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82682338
	if (ctx.cr6.eq) goto loc_82682338;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8265d850
	ctx.lr = 0x82682338;
	sub_8265D850(ctx, base);
loc_82682338:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x8268238c
	if (ctx.cr6.eq) goto loc_8268238C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8268238C:
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8268239C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82686EE0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 192, ctx.xer);
	// bne cr6,0x82686f1c
	if (!ctx.cr6.eq) goto loc_82686F1C;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r11,r11,8,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F00;
	// lbz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
loc_82686F14:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82686f3c
	goto loc_82686F3C;
loc_82686F1C:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82686f38
	if (!ctx.cr6.eq) goto loc_82686F38;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r11,r11,8,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F00;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82686f14
	goto loc_82686F14;
loc_82686F38:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82686F3C:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82689C10) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82689c44
	if (ctx.cr6.eq) goto loc_82689C44;
	// addi r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 + 88;
loc_82689C24:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82689c44
	if (ctx.cr6.eq) goto loc_82689C44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82689c24
	if (ctx.cr6.lt) goto loc_82689C24;
loc_82689C44:
	// addi r9,r11,66
	ctx.r9.s64 = ctx.r11.s64 + 66;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mulli r11,r9,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r8,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268CF68) {
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
	// bl 0x826a1e70
	ctx.lr = 0x8268CF80;
	sub_826A1E70(ctx, base);
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

DEFINE_REX_FUNC(sub_8268E510) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8268e534
	if (ctx.cr6.eq) goto loc_8268E534;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
loc_8268E534:
	// b 0x8268dcf8
	sub_8268DCF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8268F768) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8268F770;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r3,380(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 380);
	// bl 0x8268e9f0
	ctx.lr = 0x8268F7A8;
	sub_8268E9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8268f7cc
	if (!ctx.cr0.lt) goto loc_8268F7CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8268f7f4
	goto loc_8268F7F4;
loc_8268F7CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,368
	ctx.r11.s64 = r29.s64 + 368;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,372(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268f7ec
	if (ctx.cr6.eq) goto loc_8268F7EC;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// b 0x8268f7f0
	goto loc_8268F7F0;
loc_8268F7EC:
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8268F7F0:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_8268F7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826950E0) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-5960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269510C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bne 0x82695120
	if (!ctx.cr0.eq) goto loc_82695120;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82695140
	goto loc_82695140;
loc_82695120:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3820(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82695140:
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

DEFINE_REX_FUNC(sub_826985C8) {
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
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x826985D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,5664
	ctx.r11.s64 = ctx.r11.s64 + 5664;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// addi r9,r11,1536
	ctx.r9.s64 = ctx.r11.s64 + 1536;
	// beq cr6,0x826985ec
	if (ctx.cr6.eq) goto loc_826985EC;
	// addi r9,r11,1920
	ctx.r9.s64 = ctx.r11.s64 + 1920;
loc_826985EC:
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// rlwinm r26,r11,2,0,27
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
loc_826985F8:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 2;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r10,-16
	ctx.r11.s64 = ctx.r10.s64 + -16;
	// addi r10,r6,-16
	ctx.r10.s64 = ctx.r6.s64 + -16;
	// ble cr6,0x82698750
	if (!ctx.cr6.gt) goto loc_82698750;
	// mulli r6,r7,3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3));
	// addi r28,r7,-4
	r28.s64 = ctx.r7.s64 + -4;
	// rlwinm r27,r6,2,0,27
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFF0;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_82698630:
	// subf r9,r26,r9
	ctx.r9.u64 = ctx.r9.u64 - r26.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x82698740
	if (ctx.cr6.lt) goto loc_82698740;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r31,30,2,31
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r31,r7,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r7,12
	r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(12));
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_82698654:
	// lvx128 v61,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,32
	r25.s64 = 32;
	// lvx128 v60,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,64
	r24.s64 = 64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r23,16
	r23.s64 = 16;
	// lvx128 v62,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v59,v63,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v57,v62,v60
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v62,v62,v60
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v61,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v55,v58,v61
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v54,v56,v60
	simde_mm_store_ps(ctx.v54.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v53,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v61,v58,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v58,r9,r25
	ea = (ctx.r9.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v60,v56,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v56,r9,r24
	ea = (ctx.r9.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,48
	r25.s64 = 48;
	// lvx128 v8,r9,r23
	ea = (ctx.r9.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,80
	r24.s64 = 80;
	// vsubfp128 v7,v59,v57
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32)));
	// lvx128 v11,r9,r25
	ea = (ctx.r9.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v59,v59,v57
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32)));
	// lvx128 v6,r9,r24
	ea = (ctx.r9.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// vsubfp128 v0,v55,v54
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v12,v61,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v5,v63,v60
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v4,v63,v60
	simde_mm_store_ps(ctx.v4.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v10,v61,v62
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v63,v55,v54
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v3,v7,v53
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v53.f32)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v2,v0,v53
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v1,v12,v58
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v31,v5,v58
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v30,v4,v56
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v29,v10,v56
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v56.f32)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v3,v0,v8,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v3.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v7,v8,v2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v13,v5,v11,v1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vnmsubfp v8,v12,v11,v31
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(v31.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v12,v10,v6,v30
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(v30.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v11,v4,v6,v29
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(v29.f32)));
	// stvx128 v3,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stvx128 v11,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82698654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82698654;
loc_82698740:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - r27.u64;
	// bne 0x82698630
	if (!ctx.cr0.eq) goto loc_82698630;
loc_82698750:
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// rlwinm r26,r11,2,0,27
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// add r9,r26,r9
	ctx.r9.u64 = r26.u64 + ctx.r9.u64;
	// bgt cr6,0x826985f8
	if (ctx.cr6.gt) goto loc_826985F8;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ble cr6,0x82698828
	if (!ctx.cr6.gt) goto loc_82698828;
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
loc_826987A0:
	// lfs f12,-20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f6,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fadds f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f8,-28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfsx f11,r9,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,-20(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfsu f0,-16(r10)
	ea = -16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x826987a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826987A0;
loc_82698828:
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// srawi r9,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x82698898
	if (!ctx.cr6.gt) goto loc_82698898;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_82698848:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82698874
	if (!ctx.cr6.gt) goto loc_82698874;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// stfsx f13,r10,r4
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
loc_82698874:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82698878:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// xor r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82698878
	if (ctx.cr6.lt) goto loc_82698878;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82698848
	if (ctx.cr6.lt) goto loc_82698848;
loc_82698898:
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826A53F0) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826a50e8
	ctx.lr = 0x826A5410;
	sub_826A50E8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A5AC8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826A5ACC:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826a5acc
	if (!ctx.cr0.eq) goto loc_826A5ACC;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A9360) {
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
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826a2b40
	ctx.lr = 0x826A9378;
	sub_826A2B40(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a9388
	if (!ctx.cr0.eq) goto loc_826A9388;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a9424
	goto loc_826A9424;
loc_826A9388:
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,31264(r7)
	REX_STORE_U32(ctx.r7.u32 + 31264, ctx.r10.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// stw r11,31232(r8)
	REX_STORE_U32(ctx.r8.u32 + 31232, ctx.r11.u32);
	// bge cr6,0x826a93f4
	if (!ctx.cr6.lt) goto loc_826A93F4;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// li r8,10
	ctx.r8.s64 = 10;
loc_826A93B4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stw r10,-5(r11)
	REX_STORE_U32(ctx.r11.u32 + -5, ctx.r10.u32);
	// stw r9,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r9.u32);
	// stb r9,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r9.u8);
	// stb r8,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r8.u8);
	// stb r8,37(r11)
	REX_STORE_U8(ctx.r11.u32 + 37, ctx.r8.u8);
	// stw r9,59(r11)
	REX_STORE_U32(ctx.r11.u32 + 59, ctx.r9.u32);
	// stb r9,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r9.u8);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,31264(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 31264);
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x826a93b4
	if (ctx.cr6.lt) goto loc_826A93B4;
loc_826A93F4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x826a9404
	goto loc_826A9404;
loc_826A9400:
	// lwz r10,31264(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 31264);
loc_826A9404:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x826a9400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A9400;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A9424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826ADA98) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826adac4
	if (ctx.cr6.eq) goto loc_826ADAC4;
	// ble cr6,0x826adad0
	if (!ctx.cr6.gt) goto loc_826ADAD0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x826adad0
	if (ctx.cr6.gt) goto loc_826ADAD0;
	// bl 0x826a33d0
	ctx.lr = 0x826ADABC;
	sub_826A33D0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x826adacc
	goto loc_826ADACC;
loc_826ADAC4:
	// bl 0x826a33d0
	ctx.lr = 0x826ADAC8;
	sub_826A33D0(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
loc_826ADACC:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_826ADAD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF21C) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF298) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,28080
	ctx.r3.s64 = ctx.r11.s64 + 28080;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF560) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826af420
	sub_826AF420(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B00B8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x826b0104
	if (ctx.cr6.eq) goto loc_826B0104;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x826b0104
	if (ctx.cr6.eq) goto loc_826B0104;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x826b00e4
	if (!ctx.cr6.eq) goto loc_826B00E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x826afe68
	sub_826AFE68(ctx, base);
	return;
loc_826B00E4:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x826b00fc
	if (ctx.cr6.eq) goto loc_826B00FC;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x826b00fc
	if (ctx.cr6.eq) goto loc_826B00FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x826aff38
	sub_826AFF38(ctx, base);
	return;
loc_826B00FC:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x826af8a8
	sub_826AF8A8(ctx, base);
	return;
loc_826B0104:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x826af7b8
	sub_826AF7B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B23B8) {
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
	ctx.lr = 0x826B23C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r30.u32);
	// li r27,16462
	r27.s64 = 16462;
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// beq cr6,0x826b25a8
	if (ctx.cr6.eq) goto loc_826B25A8;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_826B23EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826B23FC;
	sub_826A1E70(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b2478
	if (ctx.cr6.lt) goto loc_826B2478;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826b247c
	if (!ctx.cr6.lt) goto loc_826B247C;
loc_826B2478:
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B247C:
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826b24b8
	if (ctx.cr6.eq) goto loc_826B24B8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826b24a0
	if (ctx.cr6.lt) goto loc_826B24A0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826b24a4
	if (!ctx.cr6.lt) goto loc_826B24A4;
loc_826B24A0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B24A4:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826b24b8
	if (ctx.cr6.eq) goto loc_826B24B8;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826B24B8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826b24d8
	if (ctx.cr6.lt) goto loc_826B24D8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826b24dc
	if (!ctx.cr6.lt) goto loc_826B24DC;
loc_826B24D8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B24DC:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826b24f4
	if (ctx.cr6.eq) goto loc_826B24F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_826B24F4:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b2550
	if (ctx.cr6.lt) goto loc_826B2550;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826b2554
	if (!ctx.cr6.lt) goto loc_826B2554;
loc_826B2550:
	// li r7,1
	ctx.r7.s64 = 1;
loc_826B2554:
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b2590
	if (ctx.cr6.eq) goto loc_826B2590;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826b2578
	if (ctx.cr6.lt) goto loc_826B2578;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826b257c
	if (!ctx.cr6.lt) goto loc_826B257C;
loc_826B2578:
	// li r10,1
	ctx.r10.s64 = 1;
loc_826B257C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826b2590
	if (ctx.cr6.eq) goto loc_826B2590;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826B2590:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x826b23ec
	if (!ctx.cr0.eq) goto loc_826B23EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b2634
	if (!ctx.cr6.eq) goto loc_826B2634;
loc_826B25A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b25a8
	if (ctx.cr6.eq) goto loc_826B25A8;
	// b 0x826b2634
	goto loc_826B2634;
loc_826B25F0:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826B2634:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b25f0
	if (ctx.cr0.eq) goto loc_826B25F0;
	// sth r27,0(r31)
	REX_STORE_U16(r31.u32 + 0, r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826C8B40) {
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
	ctx.lr = 0x826C8B58;
	sub_826BC110(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826C8B68;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_826CC7E8) {
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
	ctx.lr = 0x826CC7F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x826cc818
	if (ctx.cr6.eq) goto loc_826CC818;
	// bl 0x82634e78
	ctx.lr = 0x826CC814;
	sub_82634E78(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_826CC818:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826cc890
	if (ctx.cr6.eq) goto loc_826CC890;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826cc890
	if (ctx.cr6.eq) goto loc_826CC890;
	// lhz r11,34(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cc890
	if (ctx.cr6.eq) goto loc_826CC890;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826CC838:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add. r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826cc87c
	if (ctx.cr0.eq) goto loc_826CC87C;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cc868
	if (ctx.cr6.eq) goto loc_826CC868;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826cc868
	if (ctx.cr6.eq) goto loc_826CC868;
	// bl 0x82634e78
	ctx.lr = 0x826CC860;
	sub_82634E78(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_826CC868:
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826cc87c
	if (ctx.cr6.eq) goto loc_826CC87C;
	// bl 0x82634e78
	ctx.lr = 0x826CC878;
	sub_82634E78(ctx, base);
	// stw r29,424(r31)
	REX_STORE_U32(r31.u32 + 424, r29.u32);
loc_826CC87C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826cc838
	if (ctx.cr6.lt) goto loc_826CC838;
loc_826CC890:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826D4230) {
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
	ctx.lr = 0x826D4238;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
loc_826D4264:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d42c4
	if (!ctx.cr6.eq) goto loc_826D42C4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D4294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4320
	if (ctx.cr6.lt) goto loc_826D4320;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
loc_826D42C4:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// ble cr6,0x826d42d4
	if (!ctx.cr6.gt) goto loc_826D42D4;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_826D42D4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x826d42f8
	if (ctx.cr6.eq) goto loc_826D42F8;
	// add r11,r31,r25
	ctx.r11.u64 = r31.u64 + r25.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d432c
	if (ctx.cr6.gt) goto loc_826D432C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r3,r25,r21
	ctx.r3.u64 = r25.u64 + r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826D42F8;
	sub_826A1E70(ctx, base);
loc_826D42F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf. r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r25,r31,r25
	r25.u64 = r31.u64 + r25.u64;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bgt 0x826d4264
	if (ctx.cr0.gt) goto loc_826D4264;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_826D4320:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_826D432C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826DCD90) {
	REX_FUNC_PROLOGUE();
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r11,148(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// bne cr6,0x826dcdc0
	if (!ctx.cr6.eq) goto loc_826DCDC0;
	// stw r4,148(r7)
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826DCDC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x826dcdec
	if (!ctx.cr6.lt) goto loc_826DCDEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dce24
	if (ctx.cr6.eq) goto loc_826DCE24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x826dcdc0
	if (!ctx.cr6.eq) goto loc_826DCDC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826DCDEC:
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dce14
	if (ctx.cr6.eq) goto loc_826DCE14;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
loc_826DCE14:
	// stw r4,148(r7)
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
loc_826DCE24:
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826DE610) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826DE618;
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
	// bne cr6,0x826de644
	if (!ctx.cr6.eq) goto loc_826DE644;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826DE644:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826de72c
	if (ctx.cr6.eq) goto loc_826DE72C;
loc_826DE658:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826de72c
	if (ctx.cr6.eq) goto loc_826DE72C;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// bgt cr6,0x826de72c
	if (ctx.cr6.gt) goto loc_826DE72C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826de718
	if (!ctx.cr6.eq) goto loc_826DE718;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DE694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de72c
	if (ctx.cr6.lt) goto loc_826DE72C;
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
	// beq cr6,0x826de6dc
	if (ctx.cr6.eq) goto loc_826DE6DC;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x826de6e4
	goto loc_826DE6E4;
loc_826DE6DC:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826DE6E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x826de700
	if (!ctx.cr0.eq) goto loc_826DE700;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_826DE700:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x826c68d8
	ctx.lr = 0x826DE710;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de72c
	if (ctx.cr6.lt) goto loc_826DE72C;
loc_826DE718:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826de658
	if (!ctx.cr6.eq) goto loc_826DE658;
loc_826DE72C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826E4140) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r10,r11,r31
	ctx.r10.u64 = uint32_t((r31.s32 && !(ctx.r11.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r11.s32 / r31.s32 : 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r31,r6
	ctx.r6.u64 = r31.u64 & ~ctx.r6.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x826e4180
	if (!ctx.cr6.gt) goto loc_826E4180;
loc_826E4170:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srw r6,r10,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x826e4170
	if (ctx.cr6.gt) goto loc_826E4170;
loc_826E4180:
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x826e41b4
	if (!ctx.cr6.gt) goto loc_826E41B4;
loc_826E41A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x826e41a4
	if (ctx.cr6.gt) goto loc_826E41A4;
loc_826E41B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826e41f4
	if (!ctx.cr6.gt) goto loc_826E41F4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
loc_826E41D0:
	// lwz r7,348(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r5,r6,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826e41d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E41D0;
loc_826E41F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826EF030) {
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
	// addi r30,r3,224
	r30.s64 = ctx.r3.s64 + 224;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826f1f78
	ctx.lr = 0x826EF058;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef0b4
	if (ctx.cr6.lt) goto loc_826EF0B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EF070;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef0b4
	if (ctx.cr6.lt) goto loc_826EF0B4;
loc_826EF078:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r10,127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 127, ctx.xer);
	// bne cr6,0x826ef0ac
	if (!ctx.cr6.eq) goto loc_826EF0AC;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EF0A0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826ef078
	if (!ctx.cr6.lt) goto loc_826EF078;
	// b 0x826ef0b4
	goto loc_826EF0B4;
loc_826EF0AC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
loc_826EF0B4:
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

DEFINE_REX_FUNC(sub_826F2D20) {
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
	ctx.lr = 0x826F2D28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x826f2d60
	if (!ctx.cr6.gt) goto loc_826F2D60;
loc_826F2D50:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826F2D60:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826f2d50
	if (!ctx.cr6.eq) goto loc_826F2D50;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwinm r26,r8,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r6,r10,r8
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bl 0x82702d98
	ctx.lr = 0x826F2DAC;
	sub_82702D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826f2dcc
	if (ctx.cr6.eq) goto loc_826F2DCC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x826f2ddc
	if (!ctx.cr6.eq) goto loc_826F2DDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x826f2ddc
	goto loc_826F2DDC;
loc_826F2DCC:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_826F2DDC:
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 72);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// std r11,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r11.u64);
	// beq cr6,0x826f2df4
	if (ctx.cr6.eq) goto loc_826F2DF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_826F2DF4:
	// bl 0x826f2818
	ctx.lr = 0x826F2DF8;
	sub_826F2818(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826F7EF0) {
	REX_FUNC_PROLOGUE();
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// mulld r11,r11,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r11.u64);
	// mulld r10,r10,r10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r10.u64);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rldicl r11,r9,12,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 12) & 0xFFF;
	// rldicl r8,r9,44,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 44) & 0xFFFFFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826f7f30
	if (!ctx.cr6.eq) goto loc_826F7F30;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826f7f30
	if (!ctx.cr6.eq) goto loc_826F7F30;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_826F7F30:
	// rlwinm r8,r11,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826f7f50
	if (!ctx.cr6.eq) goto loc_826F7F50;
loc_826F7F3C:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r8,r11,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826f7f3c
	if (ctx.cr6.eq) goto loc_826F7F3C;
loc_826F7F50:
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// rlwinm r7,r11,7,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// addi r6,r8,30080
	ctx.r6.s64 = ctx.r8.s64 + 30080;
	// rlwinm r5,r11,10,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x4;
	// lbzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// srw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,-20
	ctx.r11.s64 = ctx.r10.s64 + -20;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x826f7f94
	if (!ctx.cr6.gt) goto loc_826F7F94;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// slw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// b 0x826f7fa4
	goto loc_826F7FA4;
loc_826F7F94:
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// srd r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_826F7FA4:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// rlwinm r8,r11,10,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FC;
	// addi r9,r9,12456
	ctx.r9.s64 = ctx.r9.s64 + 12456;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r11,r5,13488
	ctx.r11.s64 = ctx.r5.s64 + 13488;
	// lwzx r10,r8,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lwzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// rldicl r4,r5,32,32
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulld r10,r11,r8
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r8.u64);
	// rldicl r3,r10,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82703898) {
	REX_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,180(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r9,3684(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3684);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpwi cr6,r9,300
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 300, ctx.xer);
	// bgt cr6,0x827038e8
	if (ctx.cr6.gt) goto loc_827038E8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 11264;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x827038e8
	if (ctx.cr6.gt) goto loc_827038E8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,42240
	ctx.r9.u64 = ctx.r10.u64 | 42240;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x827038dc
	if (!ctx.cr6.gt) goto loc_827038DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,15564(r3)
	REX_STORE_U32(ctx.r3.u32 + 15564, ctx.r11.u32);
	// blr 
	return;
loc_827038DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,15564(r3)
	REX_STORE_U32(ctx.r3.u32 + 15564, ctx.r11.u32);
	// blr 
	return;
loc_827038E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15552(r3)
	REX_STORE_U32(ctx.r3.u32 + 15552, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827064E0) {
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
	ctx.lr = 0x827064E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
loc_82706504:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8270652c
	if (!ctx.cr0.lt) goto loc_8270652C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270652C;
	sub_82725E38(ctx, base);
loc_8270652C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82706628
	if (!ctx.cr6.eq) goto loc_82706628;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827065a4
	if (!ctx.cr6.lt) goto loc_827065A4;
loc_8270654C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827065a4
	if (ctx.cr6.eq) goto loc_827065A4;
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
	// bge 0x82706594
	if (!ctx.cr0.lt) goto loc_82706594;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706594;
	sub_82725E38(ctx, base);
loc_82706594:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270654c
	if (ctx.cr6.gt) goto loc_8270654C;
loc_827065A4:
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
	// bge 0x827065dc
	if (!ctx.cr0.lt) goto loc_827065DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827065DC;
	sub_82725E38(ctx, base);
loc_827065DC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bgt cr6,0x82706630
	if (ctx.cr6.gt) goto loc_82706630;
	// bne cr6,0x8270672c
	if (!ctx.cr6.eq) goto loc_8270672C;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82706610
	if (!ctx.cr0.lt) goto loc_82706610;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706610;
	sub_82725E38(ctx, base);
loc_82706610:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82706650
	if (ctx.cr6.eq) goto loc_82706650;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82706640
	if (!ctx.cr6.eq) goto loc_82706640;
	// li r25,1
	r25.s64 = 1;
	// b 0x82706504
	goto loc_82706504;
loc_82706628:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827067f4
	goto loc_827067F4;
loc_82706630:
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x827067f4
	goto loc_827067F4;
loc_82706640:
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82706650:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,5
	r30.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x827066c0
	if (!ctx.cr6.lt) goto loc_827066C0;
loc_82706668:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827066c0
	if (ctx.cr6.eq) goto loc_827066C0;
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
	// bge 0x827066b0
	if (!ctx.cr0.lt) goto loc_827066B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827066B0;
	sub_82725E38(ctx, base);
loc_827066B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82706668
	if (ctx.cr6.gt) goto loc_82706668;
loc_827066C0:
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
	// bge 0x827066f8
	if (!ctx.cr0.lt) goto loc_827066F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827066F8;
	sub_82725E38(ctx, base);
loc_827066F8:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82706714
	if (!ctx.cr6.eq) goto loc_82706714;
	// ori r11,r30,32
	ctx.r11.u64 = r30.u64 | 32;
	// b 0x827067f4
	goto loc_827067F4;
loc_82706714:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x827067f4
	if (ctx.cr6.eq) goto loc_827067F4;
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8270672C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,4
	r30.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8270679c
	if (!ctx.cr6.lt) goto loc_8270679C;
loc_82706744:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270679c
	if (ctx.cr6.eq) goto loc_8270679C;
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
	// bge 0x8270678c
	if (!ctx.cr0.lt) goto loc_8270678C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270678C;
	sub_82725E38(ctx, base);
loc_8270678C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82706744
	if (ctx.cr6.gt) goto loc_82706744;
loc_8270679C:
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
	// bge 0x827067d4
	if (!ctx.cr0.lt) goto loc_827067D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827067D4;
	sub_82725E38(ctx, base);
loc_827067D4:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x827067ec
	if (!ctx.cr6.eq) goto loc_827067EC;
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_827067EC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
loc_827067F4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82706800
	if (ctx.cr6.eq) goto loc_82706800;
	// xori r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 ^ 63;
loc_82706800:
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82725C28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82725c3c
	if (!ctx.cr6.eq) goto loc_82725C3C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82725C3C:
	// subfic r10,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82727DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r8,176
	ctx.r8.s64 = 176;
	// li r9,160
	ctx.r9.s64 = 160;
	// li r4,208
	ctx.r4.s64 = 208;
	// lvx128 v63,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v63,11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v60,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v62,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v55,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v60,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v54,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v55,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v56,v58,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v52,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,128
	ctx.r11.s64 = 128;
	// lvx128 v50,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v52,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// lvx128 v48,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v50,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v43,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v48,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// lvx128 v42,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// lvx128 v37,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v32,v42,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v46,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v40,v61,v2
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v39,v59,v2
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v35,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v44,v46,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v33,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v38,v57,v2
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vmulfp128 v34,v53,v2
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r6,64
	ctx.r6.s64 = 64;
	// vmulfp128 v36,v56,v2
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vmulfp128 v63,v51,v2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v62,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v37,11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r8,96
	ctx.r8.s64 = 96;
	// vcsxwfp128 v59,v35,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// lvx128 v60,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v33,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v62,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vcsxwfp128 v54,v60,11
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v53,v40,v49
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// li r10,32
	ctx.r10.s64 = 32;
	// vmsum4fp128 v52,v39,v47
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v47.f32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmsum4fp128 v51,v38,v45
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v49,v34,v41
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v50,v36,v44
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v48,v63,v32
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v32.f32), 0xFF));
	// vmulfp128 v47,v61,v2
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v46,v57,v2
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v45,v53,v1
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v44,v52,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v41,v47,v59
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// vmulfp128 v43,v51,v1
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v40,v49,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v50,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v48,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v38,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v37,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vcfpuxws128 v36,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpuxws128 v34,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vcfpuxws128 v35,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v42.f32)));
	// vcfpuxws128 v33,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v32,v41,v1
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v62,v58,11
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v60,v63,11
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v61,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v58,11
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v56,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v53,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v57,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v49,v53,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v50,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v61,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v48,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v38,v35,4,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 228), 4));
	// lvx128 v47,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v54,v2
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v41,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v36,v37,1,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// lvx128 v39,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v50,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v35,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v48,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vmulfp128 v63,v62,v2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v62,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v60,v2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum4fp128 v60,v46,v55
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// vmulfp128 v55,v52,v2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v33,v34,1,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 1));
	// vmulfp128 v57,v56,v2
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v38,v36,3,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 3));
	// vcsxwfp128 v54,v35,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmulfp128 v53,v51,v2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vcsxwfp128 v37,v44,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vcsxwfp128 v58,v41,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vcsxwfp128 v56,v39,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v52,v62,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v40,v47,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v51,v42,v45
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vmulfp128 v59,v59,v2
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v50,v49,v2
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum4fp128 v48,v63,v43
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vcfpuxws128 v49,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vmsum4fp128 v42,v53,v54
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vmulfp128 v44,v60,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v45,v57,v58
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v43,v55,v56
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v47,v61,v40
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v46,v59,v37
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v41,v50,v52
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmulfp128 v40,v51,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v48,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v35,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v63,v42,v1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v34,v45,v1
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v32,v43,v1
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v37,v47,v1
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v36,v46,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v61,v41,v1
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v62,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vrlimi128 v35,v49,4,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 228), 4));
	// vcfpuxws128 v60,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v55,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// vrlimi128 v35,v33,3,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 3));
	// vcfpuxws128 v57,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpuxws128 v56,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vpkswus128 v53,v35,v38
	simde_mm_store_si128((simde__m128i*)ctx.v53.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// vcfpuxws128 v59,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpuxws128 v58,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpuxws128 v54,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v61.f32)));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v56,v57,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v58,v59,4,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vrlimi128 v54,v55,1,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 228), 1));
	// vrlimi128 v60,v56,3,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 3));
	// vrlimi128 v58,v54,3,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 228), 3));
	// vpkswus128 v52,v58,v60
	simde_mm_store_si128((simde__m128i*)ctx.v52.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vpkuhus128 v51,v52,v53
	vTemp.u8[15] = ctx.v52.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[7];
	vTemp.u8[7] = ctx.v53.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[7];
	vTemp.u8[14] = ctx.v52.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[6];
	vTemp.u8[6] = ctx.v53.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[6];
	vTemp.u8[13] = ctx.v52.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[5];
	vTemp.u8[5] = ctx.v53.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[5];
	vTemp.u8[12] = ctx.v52.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[4];
	vTemp.u8[4] = ctx.v53.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[4];
	vTemp.u8[11] = ctx.v52.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[3];
	vTemp.u8[3] = ctx.v53.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[3];
	vTemp.u8[10] = ctx.v52.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[2];
	vTemp.u8[2] = ctx.v53.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[2];
	vTemp.u8[9] = ctx.v52.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[1];
	vTemp.u8[1] = ctx.v53.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[1];
	vTemp.u8[8] = ctx.v52.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[0];
	vTemp.u8[0] = ctx.v53.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[0];
	ctx.v51 = vTemp;
	// stvlx128 v51,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274E980) {
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
	ctx.lr = 0x8274E988;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r10,284(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8274e9d0
	if (!ctx.cr6.eq) goto loc_8274E9D0;
	// lwz r10,20908(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274e9e4
	if (ctx.cr6.eq) goto loc_8274E9E4;
loc_8274E9D0:
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x8274ea64
	if (!ctx.cr6.eq) goto loc_8274EA64;
loc_8274E9E4:
	// li r30,8
	r30.s64 = 8;
loc_8274E9E8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8274E9F8;
	sub_826A2E60(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8274EA0C;
	sub_826A2E60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_8274EA28:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8274ea28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274EA28;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8274EA40:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8274ea40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274EA40;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bne 0x8274e9e8
	if (!ctx.cr0.eq) goto loc_8274E9E8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8274EA64:
	// lwz r10,1772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1776(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// lwz r7,15504(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8274eab0
	if (!ctx.cr6.eq) goto loc_8274EAB0;
	// bl 0x82760fd0
	ctx.lr = 0x8274EAAC;
	sub_82760FD0(ctx, base);
	// b 0x8274eab4
	goto loc_8274EAB4;
loc_8274EAB0:
	// bl 0x82760f08
	ctx.lr = 0x8274EAB4;
	sub_82760F08(ctx, base);
loc_8274EAB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,204(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,3780(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e800
	ctx.lr = 0x8274EB08;
	sub_8274E800(ctx, base);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r7,1780(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// mullw r11,r29,r8
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// lwz r6,1784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// lwz r5,15504(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r7,r4
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhzx r10,r6,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x8274eb70
	if (!ctx.cr6.eq) goto loc_8274EB70;
	// lwz r11,22408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8274eb6c
	if (ctx.cr6.eq) goto loc_8274EB6C;
	// bl 0x827610b0
	ctx.lr = 0x8274EB68;
	sub_827610B0(ctx, base);
	// b 0x8274eb70
	goto loc_8274EB70;
loc_8274EB6C:
	// bl 0x827611a0
	ctx.lr = 0x8274EB70;
	sub_827611A0(ctx, base);
loc_8274EB70:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20628);
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,208(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r5,30
	ctx.r9.u64 = ctx.r5.u32 & 0x3;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// bl 0x82761270
	ctx.lr = 0x8274EBD0;
	sub_82761270(ctx, base);
	// lwz r11,3764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// bl 0x82761270
	ctx.lr = 0x8274EC00;
	sub_82761270(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827611A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r8,140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82761258
	if (ctx.cr6.eq) goto loc_82761258;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x827611f8
	if (!ctx.cr6.lt) goto loc_827611F8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x8276120c
	goto loc_8276120C;
loc_827611F8:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// ble cr6,0x8276120c
	if (!ctx.cr6.gt) goto loc_8276120C;
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8276120C:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82761234
	if (!ctx.cr6.lt) goto loc_82761234;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82761234:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// ble cr6,0x8276125c
	if (!ctx.cr6.gt) goto loc_8276125C;
	// subf r9,r8,r30
	ctx.r9.u64 = r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82761258:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8276125C:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827679E0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82767a24
	if (ctx.cr6.eq) goto loc_82767A24;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82767a24
	if (ctx.cr6.gt) goto loc_82767A24;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82767a14
	if (!ctx.cr6.lt) goto loc_82767A14;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82767a20
	if (!ctx.cr6.eq) goto loc_82767A20;
loc_82767A14:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82767A20:
	// b 0x827677b0
	sub_827677B0(ctx, base);
	return;
loc_82767A24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82769308) {
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
	ctx.lr = 0x82769310;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lbz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// subfic r11,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r30.u32);
	// extsh r27,r7
	r27.s64 = ctx.r7.s16;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x82769414
	if (ctx.cr6.lt) goto loc_82769414;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r27,28
	ctx.r9.u64 = r27.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8276940c
	if (!ctx.cr6.lt) goto loc_8276940C;
loc_82769374:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827693a0
	if (ctx.cr6.lt) goto loc_827693A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82769390;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82769374
	if (ctx.cr6.eq) goto loc_82769374;
	// srawi r27,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r27.s64 = r27.s32 >> 4;
	// b 0x82769454
	goto loc_82769454;
loc_827693A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
loc_8276940C:
	// srawi r27,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r27.s64 = r27.s32 >> 4;
	// b 0x82769454
	goto loc_82769454;
loc_82769414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276941C;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	r28.u64 = ctx.r11.u64 | 32768;
loc_82769424:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r27
	r29.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276943C;
	sub_82725F80(ctx, base);
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r30.u32);
	// extsh r27,r8
	r27.s64 = ctx.r8.s16;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x82769424
	if (ctx.cr6.lt) goto loc_82769424;
loc_82769454:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827696dc
	if (!ctx.cr6.eq) goto loc_827696DC;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// beq cr6,0x827696ec
	if (ctx.cr6.eq) goto loc_827696EC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x827696c0
	if (ctx.cr6.eq) goto loc_827696C0;
	// lwz r11,14788(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 14788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276967c
	if (ctx.cr6.eq) goto loc_8276967C;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// beq cr6,0x827695a8
	if (ctx.cr6.eq) goto loc_827695A8;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// beq cr6,0x827694d4
	if (ctx.cr6.eq) goto loc_827694D4;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x827694b8
	if (!ctx.cr0.lt) goto loc_827694B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827694B8;
	sub_82725E38(ctx, base);
loc_827694B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// neg r11,r27
	ctx.r11.s64 = static_cast<int64_t>(-r27.u64);
	// bne cr6,0x827696b4
	if (!ctx.cr6.eq) goto loc_827696B4;
	// lwz r10,1760(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1760);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// b 0x827696cc
	goto loc_827696CC;
loc_827694D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82769544
	if (!ctx.cr6.lt) goto loc_82769544;
loc_827694EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82769544
	if (ctx.cr6.eq) goto loc_82769544;
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
	// bge 0x82769534
	if (!ctx.cr0.lt) goto loc_82769534;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82769534;
	sub_82725E38(ctx, base);
loc_82769534:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827694ec
	if (ctx.cr6.gt) goto loc_827694EC;
loc_82769544:
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
	// bge 0x8276957c
	if (!ctx.cr0.lt) goto loc_8276957C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276957C;
	sub_82725E38(ctx, base);
loc_8276957C:
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x82769670
	if (ctx.cr6.eq) goto loc_82769670;
	// lwz r10,1760(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1760);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x827696cc
	goto loc_827696CC;
loc_827695A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82769618
	if (!ctx.cr6.lt) goto loc_82769618;
loc_827695C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82769618
	if (ctx.cr6.eq) goto loc_82769618;
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
	// bge 0x82769608
	if (!ctx.cr0.lt) goto loc_82769608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82769608;
	sub_82725E38(ctx, base);
loc_82769608:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827695c0
	if (ctx.cr6.gt) goto loc_827695C0;
loc_82769618:
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
	// bge 0x82769650
	if (!ctx.cr0.lt) goto loc_82769650;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82769650;
	sub_82725E38(ctx, base);
loc_82769650:
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// beq cr6,0x82769670
	if (ctx.cr6.eq) goto loc_82769670;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82769670:
	// lwz r10,1760(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1760);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x827696cc
	goto loc_827696CC;
loc_8276967C:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x827696a4
	if (!ctx.cr0.lt) goto loc_827696A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827696A4;
	sub_82725E38(ctx, base);
loc_827696A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// neg r11,r27
	ctx.r11.s64 = static_cast<int64_t>(-r27.u64);
	// bne cr6,0x827696b4
	if (!ctx.cr6.eq) goto loc_827696B4;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_827696B4:
	// lwz r10,1760(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1760);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x827696cc
	goto loc_827696CC;
loc_827696C0:
	// lwz r11,1760(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1760);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827696CC:
	// lwz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827697f4
	if (ctx.cr6.eq) goto loc_827697F4;
loc_827696DC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_827696EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// bgt cr6,0x8276970c
	if (ctx.cr6.gt) goto loc_8276970C;
	// lwz r10,14788(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 14788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8276970c
	if (ctx.cr6.eq) goto loc_8276970C;
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
loc_8276970C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r11,9
	r30.s64 = ctx.r11.s64 + 9;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8276972c
	if (!ctx.cr6.gt) goto loc_8276972C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827697d8
	goto loc_827697D8;
loc_8276972C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8276973c
	if (!ctx.cr6.eq) goto loc_8276973C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827697d8
	goto loc_827697D8;
loc_8276973C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276979c
	if (!ctx.cr6.gt) goto loc_8276979C;
loc_82769744:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276979c
	if (ctx.cr6.eq) goto loc_8276979C;
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
	// bge 0x8276978c
	if (!ctx.cr0.lt) goto loc_8276978C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276978C;
	sub_82725E38(ctx, base);
loc_8276978C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82769744
	if (ctx.cr6.gt) goto loc_82769744;
loc_8276979C:
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
	// bge 0x827697d4
	if (!ctx.cr0.lt) goto loc_827697D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827697D4;
	sub_82725E38(ctx, base);
loc_827697D4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_827697D8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827697ec
	if (ctx.cr6.eq) goto loc_827697EC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_827697EC:
	// lwz r10,1760(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1760);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_827697F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8278A4B8) {
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
	ctx.lr = 0x8278A4C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf. r23,r9,r10
	r23.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lwz r11,14588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// lwz r24,14596(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r30,14540(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 14540);
	// lwz r27,14504(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 14504);
	// lwz r29,14544(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 14544);
	// lwz r28,14548(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14548);
	// lwz r26,14508(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 14508);
	// lwz r25,14512(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 14512);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// mullw r9,r24,r9
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r9.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r22,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r22.s64 = ctx.r9.s32 >> 2;
	// add r24,r30,r10
	r24.u64 = r30.u64 + ctx.r10.u64;
	// addze r10,r22
	temp.s64 = r22.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r22.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r27,r9
	r30.u64 = r27.u64 + ctx.r9.u64;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// add r9,r26,r10
	ctx.r9.u64 = r26.u64 + ctx.r10.u64;
	// add r11,r25,r10
	ctx.r11.u64 = r25.u64 + ctx.r10.u64;
	// add r26,r24,r3
	r26.u64 = r24.u64 + ctx.r3.u64;
	// add r27,r30,r6
	r27.u64 = r30.u64 + ctx.r6.u64;
	// add r29,r29,r4
	r29.u64 = r29.u64 + ctx.r4.u64;
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// add r24,r9,r7
	r24.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r11,r8
	r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble 0x8278a564
	if (!ctx.cr0.gt) goto loc_8278A564;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_8278A53C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,14480(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14480);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8278A54C;
	sub_826A1E70(ctx, base);
	// lwz r10,14596(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// lwz r11,14588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r27,r10,r27
	r27.u64 = ctx.r10.u64 + r27.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bne 0x8278a53c
	if (!ctx.cr0.eq) goto loc_8278A53C;
loc_8278A564:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8278a5e8
	if (!ctx.cr6.gt) goto loc_8278A5E8;
	// addi r11,r23,-1
	ctx.r11.s64 = r23.s64 + -1;
	// lwz r10,14488(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14488);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8278A580:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8278a5c8
	if (!ctx.cr6.gt) goto loc_8278A5C8;
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// subf r6,r30,r24
	ctx.r6.u64 = r24.u64 - r30.u64;
loc_8278A598:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lbzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + r29.u32);
	// stbx r5,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r5,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r5.u8);
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r4,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r4,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r4.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,14488(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14488);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8278a598
	if (ctx.cr6.lt) goto loc_8278A598;
loc_8278A5C8:
	// lwz r11,14644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14644);
	// lwz r9,14648(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14648);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r9,r24
	r24.u64 = ctx.r9.u64 + r24.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bdnz 0x8278a580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A580;
loc_8278A5E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82792130) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82792144;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279217c
	if (ctx.cr0.eq) goto loc_8279217C;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32135
	ctx.r9.s64 = -2105999360;
	// addi r3,r9,12496
	ctx.r3.s64 = ctx.r9.s64 + 12496;
	// stw r11,1576(r10)
	REX_STORE_U32(ctx.r10.u32 + 1576, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,1576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1576);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8269d008
	ctx.lr = 0x8279216C;
	sub_8269D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279217C:
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
	ctx.lr = 0x82792198;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_827927A8) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-11328
	r31.s64 = ctx.r11.s64 + -11328;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = r31.s64 + 30;
	// bl 0x826a2e60
	ctx.lr = 0x827927D0;
	sub_826A2E60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x826a1e70
	ctx.lr = 0x827927E4;
	sub_826A1E70(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x826a2e60
	ctx.lr = 0x827927F4;
	sub_826A2E60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82793538) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r10,-10752
	r31.s64 = ctx.r10.s64 + -10752;
	// addi r11,r11,8584
	ctx.r11.s64 = ctx.r11.s64 + 8584;
	// addi r3,r31,24564
	ctx.r3.s64 = r31.s64 + 24564;
	// stw r11,-10752(r10)
	REX_STORE_U32(ctx.r10.u32 + -10752, ctx.r11.u32);
	// bl 0x82353b20
	ctx.lr = 0x82793564;
	sub_82353B20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,8576
	ctx.r11.s64 = ctx.r11.s64 + 8576;
	// addi r4,r9,-26856
	ctx.r4.s64 = ctx.r9.s64 + -26856;
	// stw r11,23072(r31)
	REX_STORE_U32(r31.u32 + 23072, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,21952
	ctx.r3.s64 = r31.s64 + 21952;
	// bl 0x82331228
	ctx.lr = 0x82793584;
	sub_82331228(ctx, base);
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

DEFINE_REX_FUNC(sub_82794098) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000007
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827942A8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20102b1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799940) {
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
	// lwz r10,3984(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3984);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82799974
	if (ctx.cr6.eq) goto loc_82799974;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82799978
	if (!ctx.cr6.eq) goto loc_82799978;
loc_82799974:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82799978:
	// lwz r11,2952(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2952);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lwz r10,2112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2112);
	// addi r8,r11,732
	ctx.r8.s64 = ctx.r11.s64 + 732;
	// addi r7,r11,735
	ctx.r7.s64 = ctx.r11.s64 + 735;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r10,266
	ctx.r4.s64 = ctx.r10.s64 + 266;
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,2904(r31)
	REX_STORE_U32(r31.u32 + 2904, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r8,r5,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// stw r8,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r8.u32);
	// lwz r7,2124(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2124);
	// stw r7,2116(r31)
	REX_STORE_U32(r31.u32 + 2116, ctx.r7.u32);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r6,2120(r31)
	REX_STORE_U32(r31.u32 + 2120, ctx.r6.u32);
	// beq cr6,0x827999d0
	if (ctx.cr6.eq) goto loc_827999D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827999D0:
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// lwz r11,21928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21928);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827999f8
	if (!ctx.cr6.eq) goto loc_827999F8;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,22196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,22192(r31)
	REX_STORE_U32(r31.u32 + 22192, ctx.r10.u32);
	// b 0x82799a00
	goto loc_82799A00;
loc_827999F8:
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// stw r11,22192(r31)
	REX_STORE_U32(r31.u32 + 22192, ctx.r11.u32);
loc_82799A00:
	// lwz r11,20912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82799a14
	if (!ctx.cr6.eq) goto loc_82799A14;
	// stw r9,22400(r31)
	REX_STORE_U32(r31.u32 + 22400, ctx.r9.u32);
	// b 0x82799a18
	goto loc_82799A18;
loc_82799A14:
	// stw r9,22404(r31)
	REX_STORE_U32(r31.u32 + 22404, ctx.r9.u32);
loc_82799A18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x827035c8
	ctx.lr = 0x82799A24;
	sub_827035C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x8274e3f0
	ctx.lr = 0x82799A30;
	sub_8274E3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827407a8
	ctx.lr = 0x82799A38;
	sub_827407A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827408b0
	ctx.lr = 0x82799A40;
	sub_827408B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82735080
	ctx.lr = 0x82799A4C;
	sub_82735080(ctx, base);
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

DEFINE_REX_FUNC(sub_827B0180) {
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
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// bl 0x827af610
	ctx.lr = 0x827B01C0;
	sub_827AF610(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B1D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb4
	ctx.lr = 0x827B1D50;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,48
	r30.s64 = 48;
	// lvx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	r29.s64 = 96;
	// lvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,144
	r28.s64 = 144;
	// lvx128 v58,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v57,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v61,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v60,v56,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v54,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v59,v55,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v12,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v62,v54,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v24,v0,v29
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v27,v12
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v22,v26,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v25,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v28,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v19,v23,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v18,v22,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v21,v9
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v16,v20,v12
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v19,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r5,r29
	ea = (ctx.r5.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x827b1ee0
	if (!ctx.cr6.eq) goto loc_827B1EE0;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,192
	r30.s64 = 192;
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,240
	r29.s64 = 240;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,288
	r28.s64 = 288;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,336
	r27.s64 = 336;
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// lvx128 v47,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v46,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v47,v46,v1
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v0,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
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
	// vadduhm v27,v30,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v26,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v28,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v27,v12
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v22,v26,v10
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v21,v25,v11
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v20,v24,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v23,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v22,v0
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v21,r5,r29
	ea = (ctx.r5.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827B1EE0:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// bne cr6,0x827b1f58
	if (!ctx.cr6.eq) goto loc_827B1F58;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827b1f58
	if (!ctx.cr6.gt) goto loc_827B1F58;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r31,r10,r4
	r31.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r6,-48
	ctx.r9.s64 = ctx.r6.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827B1F1C:
	// lbzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbzux r6,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827b1f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B1F1C;
loc_827B1F58:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827BBA68) {
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
	// bl 0x827b8b68
	ctx.lr = 0x827BBAB8;
	sub_827B8B68(ctx, base);
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

DEFINE_REX_FUNC(sub_827BCD70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cac
	ctx.lr = 0x827BCD78;
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r29,1012(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// lvx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r9,r29
	ctx.r9.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v57,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r8,r31,r3
	ctx.r8.u64 = r31.u64 + ctx.r3.u64;
	// vperm128 v1,v60,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// and r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 & r30.u64;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r26,r1,240
	r26.s64 = ctx.r1.s64 + 240;
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,1
	ctx.r6.s64 = 1;
	// vadduhm v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// li r25,4
	r25.s64 = 4;
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v31,v11
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r6,r25,r30
	ctx.r6.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// vadduhm v25,v30,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsplth v1,v27,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vadduhm v24,v29,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stvx128 v28,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x827bcf58
	if (!ctx.cr6.eq) goto loc_827BCF58;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,288
	r29.s64 = ctx.r1.s64 + 288;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,336
	r28.s64 = ctx.r1.s64 + 336;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,384
	r27.s64 = ctx.r1.s64 + 384;
	// lvx128 v48,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,432
	r26.s64 = ctx.r1.s64 + 432;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v5,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v9,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v5,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v29,v4,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v28,v3,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v30,v11
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v28,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BCF58:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x827bcfc8
	if (ctx.cr6.lt) goto loc_827BCFC8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bcfc8
	if (!ctx.cr6.gt) goto loc_827BCFC8;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r30,-48
	ctx.r11.s64 = r30.s64 + -48;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_827BCF94:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r26,r27,r10
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r28,r26,1
	r28.u64 = __builtin_rotateleft32(r26.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r26,r28
	ctx.r8.u64 = r26.u64 + r28.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// sth r30,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, r30.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x827bcf94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BCF94;
loc_827BCFC8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b98b0
	ctx.lr = 0x827BCFD0;
	sub_827B98B0(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x826a1cfc
	return;
}

