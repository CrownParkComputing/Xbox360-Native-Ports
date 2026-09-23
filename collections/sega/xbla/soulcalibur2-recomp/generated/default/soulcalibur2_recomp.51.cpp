#include "soulcalibur2_funcs.51.h"

DEFINE_REX_FUNC(sub_820E2128) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E4FE0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r3,48
	ctx.r3.s64 = 3145728;
	// addi r11,r11,15656
	ctx.r11.s64 = ctx.r11.s64 + 15656;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822c80d0
	ctx.lr = 0x820E5010;
	sub_822C80D0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,18816
	ctx.r10.s64 = ctx.r10.s64 + 18816;
	// addi r9,r9,19952
	ctx.r9.s64 = ctx.r9.s64 + 19952;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// addi r8,r8,18944
	ctx.r8.s64 = ctx.r8.s64 + 18944;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// addi r7,r7,18984
	ctx.r7.s64 = ctx.r7.s64 + 18984;
	// stw r9,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r9.u32);
	// addi r6,r6,20064
	ctx.r6.s64 = ctx.r6.s64 + 20064;
	// stw r8,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r8.u32);
	// addi r5,r5,-22024
	ctx.r5.s64 = ctx.r5.s64 + -22024;
	// stw r7,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r7.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r6.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// stw r5,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// lwz r10,7840(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 7840);
	// stfs f0,108(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// addi r9,r10,108
	ctx.r9.s64 = ctx.r10.s64 + 108;
	// stfs f0,116(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f0,120(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_820ED268) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-28232
	r31.s64 = ctx.r11.s64 + -28232;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f2850
	ctx.lr = 0x820ED294;
	sub_820F2850(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x820ed2c8
	if (!ctx.cr6.eq) goto loc_820ED2C8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4900);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820ed2c8
	if (!ctx.cr6.eq) goto loc_820ED2C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82202540
	ctx.lr = 0x820ED2BC;
	sub_82202540(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x820e85b8
	ctx.lr = 0x820ED2C8;
	sub_820E85B8(ctx, base);
loc_820ED2C8:
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

DEFINE_REX_FUNC(sub_820EFE58) {
	REX_FUNC_PROLOGUE();
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,16408
	ctx.r12.s64 = ctx.r12.s64 + 16408;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// nop 
	// addi r12,r12,-372
	ctx.r12.s64 = ctx.r12.s64 + -372;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820EFE8C;
	case 1:
		goto loc_820EFEC8;
	case 2:
		goto loc_820EFF14;
	case 3:
		goto loc_820EFF30;
	case 4:
		goto loc_820EFF4C;
	case 5:
		goto loc_820EFFF4;
	case 6:
		goto loc_820EFF68;
	case 7:
		goto loc_820EFF84;
	case 8:
		goto loc_820EFFA0;
	case 9:
		goto loc_820EFFBC;
	case 10:
		goto loc_820EFFD8;
	case 11:
		goto loc_820F0010;
	case 12:
		goto loc_820F002C;
	case 13:
		goto loc_820F0048;
	case 14:
		goto loc_820F0064;
	case 15:
		goto loc_820F0080;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_820EFE8C:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820efeac
	if (ctx.cr0.eq) goto loc_820EFEAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16468
	ctx.r10.s64 = ctx.r10.s64 + 16468;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820efeb0
	goto loc_820EFEB0;
loc_820EFEAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820EFEB0:
	// addi r10,r4,1215
	ctx.r10.s64 = ctx.r4.s64 + 1215;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
loc_820EFEC8:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820efee8
	if (ctx.cr0.eq) goto loc_820EFEE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16476
	ctx.r10.s64 = ctx.r10.s64 + 16476;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820efeec
	goto loc_820EFEEC;
loc_820EFEE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820EFEEC:
	// addi r10,r4,1215
	ctx.r10.s64 = ctx.r4.s64 + 1215;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,30
	ctx.r8.s64 = 30;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r5,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// blr 
	return;
loc_820EFF14:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16856
	ctx.r10.s64 = ctx.r10.s64 + 16856;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFF30:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16484
	ctx.r10.s64 = ctx.r10.s64 + 16484;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFF4C:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16492
	ctx.r10.s64 = ctx.r10.s64 + 16492;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFF68:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16500
	ctx.r10.s64 = ctx.r10.s64 + 16500;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFF84:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16508
	ctx.r10.s64 = ctx.r10.s64 + 16508;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFFA0:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16516
	ctx.r10.s64 = ctx.r10.s64 + 16516;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFFBC:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16524
	ctx.r10.s64 = ctx.r10.s64 + 16524;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFFD8:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16532
	ctx.r10.s64 = ctx.r10.s64 + 16532;
	// b 0x820f0098
	goto loc_820F0098;
loc_820EFFF4:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16540
	ctx.r10.s64 = ctx.r10.s64 + 16540;
	// b 0x820f0098
	goto loc_820F0098;
loc_820F0010:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16864
	ctx.r10.s64 = ctx.r10.s64 + 16864;
	// b 0x820f0098
	goto loc_820F0098;
loc_820F002C:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16872
	ctx.r10.s64 = ctx.r10.s64 + 16872;
	// b 0x820f0098
	goto loc_820F0098;
loc_820F0048:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16880
	ctx.r10.s64 = ctx.r10.s64 + 16880;
	// b 0x820f0098
	goto loc_820F0098;
loc_820F0064:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16548
	ctx.r10.s64 = ctx.r10.s64 + 16548;
	// b 0x820f0098
	goto loc_820F0098;
loc_820F0080:
	// mulli r11,r4,536
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(536));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,36
	ctx.xer.ca = ctx.r11.u32 > 4294967259;
	ctx.r11.s64 = ctx.r11.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f00a0
	if (ctx.cr0.eq) goto loc_820F00A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
loc_820F0098:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820f00a4
	goto loc_820F00A4;
loc_820F00A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F00A4:
	// addi r10,r4,1215
	ctx.r10.s64 = ctx.r4.s64 + 1215;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r5,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF398) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f4
	f31.f64 = ctx.f4.f64;
	// lfs f13,16908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x820ff3cc
	if (!ctx.cr6.lt) goto loc_820FF3CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820FF3CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,15624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15624);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820ff3e0
	if (!ctx.cr6.gt) goto loc_820FF3E0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_820FF3E0:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x820ff3f0
	if (ctx.cr6.lt) goto loc_820FF3F0;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
loc_820FF3F0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x820ff3fc
	if (!ctx.cr6.gt) goto loc_820FF3FC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_820FF3FC:
	// stfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x820ff2f8
	ctx.lr = 0x820FF40C;
	sub_820FF2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820ff348
	ctx.lr = 0x820FF418;
	sub_820FF348(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_82102840) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r9,r11,22576
	ctx.r9.s64 = ctx.r11.s64 + 22576;
	// lwz r10,22576(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22576);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82102870
	if (!ctx.cr6.eq) goto loc_82102870;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82102884
	goto loc_82102884;
loc_82102870:
	// lwz r3,112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x821027a0
	ctx.lr = 0x82102878;
	sub_821027A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26548);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82102884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82107068) {
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
	// bl 0x82106650
	ctx.lr = 0x8210707C;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107098;
	sub_82106C48(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82100c80
	ctx.lr = 0x821070AC;
	sub_82100C80(ctx, base);
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

DEFINE_REX_FUNC(sub_82107328) {
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
	// bl 0x82106650
	ctx.lr = 0x8210733C;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107358;
	sub_82106C48(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82100c80
	ctx.lr = 0x8210736C;
	sub_82100C80(ctx, base);
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

DEFINE_REX_FUNC(sub_82108878) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,27844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27844);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe068
	ctx.lr = 0x8210889C;
	sub_821FE068(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82108a24
	if (ctx.cr6.lt) goto loc_82108A24;
	// beq cr6,0x82108974
	if (ctx.cr6.eq) goto loc_82108974;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82108aa0
	if (!ctx.cr6.lt) goto loc_82108AA0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821088DC;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x820e68b8
	ctx.lr = 0x821088F0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,27824
	ctx.r5.s64 = ctx.r11.s64 + 27824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x8210890C;
	sub_821EB1A0(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// bl 0x820e68b8
	ctx.lr = 0x8210891C;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x820e68b8
	ctx.lr = 0x82108930;
	sub_820E68B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r9,27788
	ctx.r3.s64 = ctx.r9.s64 + 27788;
	// lfs f0,26792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f2,27816(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27816);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82108970;
	sub_821EACB0(ctx, base);
	// b 0x82108aa0
	goto loc_82108AA0;
loc_82108974:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8210898C;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x821089A0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,27824
	ctx.r5.s64 = ctx.r11.s64 + 27824;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x821089BC;
	sub_821EB1A0(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// bl 0x820e68b8
	ctx.lr = 0x821089CC;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x821089E0;
	sub_820E68B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r9,27788
	ctx.r3.s64 = ctx.r9.s64 + 27788;
	// lfs f0,26792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f2,27816(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27816);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82108A20;
	sub_821EACB0(ctx, base);
	// b 0x82108aa0
	goto loc_82108AA0;
loc_82108A24:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82108A3C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,27776
	ctx.r5.s64 = ctx.r11.s64 + 27776;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82108A54;
	sub_821EB1A0(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// bl 0x820e68b8
	ctx.lr = 0x82108A64;
	sub_820E68B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r9,27756
	ctx.r3.s64 = ctx.r9.s64 + 27756;
	// lfs f0,26792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f2,27816(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27816);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82108AA0;
	sub_821EACB0(ctx, base);
loc_82108AA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe068
	ctx.lr = 0x82108AAC;
	sub_821FE068(ctx, base);
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

DEFINE_REX_FUNC(sub_82113670) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82113678;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r11,r11,30144
	ctx.r11.s64 = ctx.r11.s64 + 30144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,192
	ctx.r12.s64 = 192;
	// stfiwx f0,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f0.u32);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,196
	ctx.r12.s64 = 196;
	// stfiwx f0,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f0.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// addic. r11,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r11.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f0,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16032(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,216(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f30,224(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f13,228(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// std r28,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r28.u64);
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// sth r28,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r28.u16);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r28,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r28.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// beq 0x82113754
	if (ctx.cr0.eq) goto loc_82113754;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x82113758
	goto loc_82113758;
loc_82113754:
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
loc_82113758:
	// addi r29,r31,256
	r29.s64 = r31.s64 + 256;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// beq cr6,0x82113770
	if (ctx.cr6.eq) goto loc_82113770;
	// stw r4,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r4.u32);
	// stb r6,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r6.u8);
loc_82113770:
	// lwa r11,196(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 196));
	// li r10,2
	ctx.r10.s64 = 2;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r10,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r10.u8);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r27,107(r31)
	REX_STORE_U8(r31.u32 + 107, r27.u8);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r28,105(r31)
	REX_STORE_U8(r31.u32 + 105, r28.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,109(r31)
	REX_STORE_U8(r31.u32 + 109, r27.u8);
	// lfs f11,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwa r11,192(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 192));
	// li r9,1
	ctx.r9.s64 = 1;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f31,40(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// stfs f31,56(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f31,24(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 / ctx.f13.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f13,16(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f10,32(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f13,48(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
	// fdivs f11,f30,f0
	ctx.f11.f64 = double(float(f30.f64 / ctx.f0.f64));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f11,20(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8210ded0
	ctx.lr = 0x82113834;
	sub_8210DED0(ctx, base);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,248(r31)
	REX_STORE_U32(r31.u32 + 248, r26.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// ble cr6,0x82113860
	if (!ctx.cr6.gt) goto loc_82113860;
	// stb r28,252(r31)
	REX_STORE_U8(r31.u32 + 252, r28.u8);
	// b 0x82113864
	goto loc_82113864;
loc_82113860:
	// stb r27,252(r31)
	REX_STORE_U8(r31.u32 + 252, r27.u8);
loc_82113864:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stw r27,244(r31)
	REX_STORE_U32(r31.u32 + 244, r27.u32);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82113998
	if (ctx.cr6.eq) goto loc_82113998;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,28724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f12,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2352(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwa r10,196(r31)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r31.u32 + 196));
	// lwa r9,192(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 192));
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fdivs f10,f30,f11
	ctx.f10.f64 = double(float(f30.f64 / ctx.f11.f64));
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,4(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f10,20(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f31,24(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f31,40(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// stfs f31,56(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// fdivs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 / ctx.f13.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f13,16(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f10,32(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f13,48(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
loc_82113998:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82121C20) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,259
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 259, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82121c54
	if (ctx.cr6.lt) goto loc_82121C54;
	// cmpwi cr6,r4,260
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 260, ctx.xer);
	// bgt cr6,0x82121c54
	if (ctx.cr6.gt) goto loc_82121C54;
	// addi r5,r4,-259
	ctx.r5.s64 = ctx.r4.s64 + -259;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d68
	ctx.lr = 0x82121C50;
	sub_82120D68(ctx, base);
	// b 0x82121c60
	goto loc_82121C60;
loc_82121C54:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8211f870
	ctx.lr = 0x82121C60;
	sub_8211F870(ctx, base);
loc_82121C60:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f2,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125860
	ctx.lr = 0x82121C78;
	sub_82125860(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82123B50) {
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
	// bl 0x822d4e58
	ctx.lr = 0x82123B58;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f30
	ctx.lr = 0x82123B60;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lfs f12,32064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32064);
	ctx.f12.f64 = double(temp.f32);
	// srawi r7,r5,12
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 12;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lfs f26,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f26.f64 = double(temp.f32);
	// rlwinm r17,r4,0,19,19
	r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// clrlwi r22,r7,28
	r22.u64 = ctx.r7.u32 & 0xF;
	// clrlwi r10,r5,20
	ctx.r10.u64 = ctx.r5.u32 & 0xFFF;
	// clrlwi r30,r4,20
	r30.u64 = ctx.r4.u32 & 0xFFF;
	// cmpwi cr6,r6,100
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 100, ctx.xer);
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// addi r11,r11,2392
	ctx.r11.s64 = ctx.r11.s64 + 2392;
	// bge cr6,0x82123bcc
	if (!ctx.cr6.lt) goto loc_82123BCC;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x82123be8
	goto loc_82123BE8;
loc_82123BCC:
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f11,f0,f26
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -f26.f64)));
	// fmadds f28,f11,f13,f12
	f28.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
loc_82123BE8:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// bge cr6,0x82123c0c
	if (!ctx.cr6.lt) goto loc_82123C0C;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82123c24
	goto loc_82123C24;
loc_82123C0C:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmsubs f0,f11,f0,f26
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -f26.f64)));
	// fmadds f31,f0,f13,f12
	f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
loc_82123C24:
	// lhz r11,90(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 90);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82123c44
	if (!ctx.cr6.eq) goto loc_82123C44;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x82123c40
	if (ctx.cr6.eq) goto loc_82123C40;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(r22.s32, 8, ctx.xer);
	// bne cr6,0x82123c44
	if (!ctx.cr6.eq) goto loc_82123C44;
loc_82123C40:
	// li r30,259
	r30.s64 = 259;
loc_82123C44:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(r21.u32 + 0);
	// lbz r8,211(r21)
	ctx.r8.u64 = REX_LOAD_U8(r21.u32 + 211);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// extsb r20,r10
	r20.s64 = ctx.r10.s8;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r19,1856(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// bne 0x82124028
	if (!ctx.cr0.eq) goto loc_82124028;
	// lhz r11,604(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 604);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x82123c78
	if (!ctx.cr6.eq) goto loc_82123C78;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82124028
	if (ctx.cr6.eq) goto loc_82124028;
loc_82123C78:
	// addi r11,r30,-256
	ctx.r11.s64 = r30.s64 + -256;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82123d64
	if (ctx.cr6.gt) goto loc_82123D64;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-30296
	ctx.r12.s64 = ctx.r12.s64 + -30296;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// nop 
	// addi r12,r12,15532
	ctx.r12.s64 = ctx.r12.s64 + 15532;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82123CAC;
	case 1:
		goto loc_82123CC0;
	case 2:
		goto loc_82123CCC;
	case 3:
		goto loc_82123D64;
	case 4:
		goto loc_82123D64;
	case 5:
		goto loc_82123CE4;
	case 6:
		goto loc_82123CD8;
	case 7:
		goto loc_82123D64;
	case 8:
		goto loc_82123D30;
	case 9:
		goto loc_82123D48;
	case 10:
		goto loc_82123D00;
	case 11:
		goto loc_82123D54;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82123CAC:
	// li r11,21
	ctx.r11.s64 = 21;
	// li r30,17
	r30.s64 = 17;
loc_82123CB4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x82123d68
	goto loc_82123D68;
loc_82123CC0:
	// li r11,20
	ctx.r11.s64 = 20;
	// li r30,16
	r30.s64 = 16;
	// b 0x82123cb4
	goto loc_82123CB4;
loc_82123CCC:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r30,8
	r30.s64 = 8;
	// b 0x82123cb4
	goto loc_82123CB4;
loc_82123CD8:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r30,9
	r30.s64 = 9;
	// b 0x82123cb4
	goto loc_82123CB4;
loc_82123CE4:
	// li r11,19
	ctx.r11.s64 = 19;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r30,15
	r30.s64 = 15;
loc_82123CF0:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// b 0x82123d68
	goto loc_82123D68;
loc_82123D00:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// b 0x82123d6c
	goto loc_82123D6C;
loc_82123D30:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,259
	ctx.r10.s64 = 259;
	// li r30,23
	r30.s64 = 23;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// b 0x82123d6c
	goto loc_82123D6C;
loc_82123D48:
	// li r11,260
	ctx.r11.s64 = 260;
	// li r30,24
	r30.s64 = 24;
	// b 0x82123cb4
	goto loc_82123CB4;
loc_82123D54:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r30,7
	r30.s64 = 7;
	// b 0x82123cf0
	goto loc_82123CF0;
loc_82123D64:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82123D68:
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_82123D6C:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r31,r11,-27848
	r31.s64 = ctx.r11.s64 + -27848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e01b0
	ctx.lr = 0x82123D80;
	sub_820E01B0(ctx, base);
	// li r26,8
	r26.s64 = 8;
	// cmpwi cr6,r22,15
	ctx.cr6.compare<int32_t>(r22.s32, 15, ctx.xer);
	// bne cr6,0x82123dd8
	if (!ctx.cr6.eq) goto loc_82123DD8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f26,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r20,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-27136
	ctx.r11.s64 = ctx.r11.s64 + -27136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1568
	ctx.r11.s64 = ctx.r11.s64 + 1568;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820e1730
	ctx.lr = 0x82123DC4;
	sub_820E1730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0af8
	ctx.lr = 0x82123DD0;
	sub_820E0AF8(ctx, base);
	// li r22,1
	r22.s64 = 1;
	// li r26,7
	r26.s64 = 7;
loc_82123DD8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// blt cr6,0x82123fc0
	if (ctx.cr6.lt) goto loc_82123FC0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// ble cr6,0x82123e00
	if (!ctx.cr6.gt) goto loc_82123E00;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// beq cr6,0x82123e00
	if (ctx.cr6.eq) goto loc_82123E00;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// ble cr6,0x82123fc0
	if (!ctx.cr6.gt) goto loc_82123FC0;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(r22.s32, 8, ctx.xer);
	// bgt cr6,0x82123fc0
	if (ctx.cr6.gt) goto loc_82123FC0;
loc_82123E00:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x8211f810
	ctx.lr = 0x82123E10;
	sub_8211F810(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x82123fc0
	if (ctx.cr6.eq) goto loc_82123FC0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lfs f29,-30440(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30440);
	f29.f64 = double(temp.f32);
	// addi r23,r1,128
	r23.s64 = ctx.r1.s64 + 128;
	// lfs f30,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	f30.f64 = double(temp.f32);
	// lis r24,-32170
	r24.s64 = -2108293120;
	// lfs f27,2024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2024);
	f27.f64 = double(temp.f32);
	// addi r27,r11,29808
	r27.s64 = ctx.r11.s64 + 29808;
	// addi r25,r10,7104
	r25.s64 = ctx.r10.s64 + 7104;
loc_82123E50:
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpwi cr6,r4,259
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 259, ctx.xer);
	// beq cr6,0x82123e78
	if (ctx.cr6.eq) goto loc_82123E78;
	// cmpwi cr6,r4,260
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 260, ctx.xer);
	// beq cr6,0x82123e78
	if (ctx.cr6.eq) goto loc_82123E78;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8211f870
	ctx.lr = 0x82123E74;
	sub_8211F870(ctx, base);
	// b 0x82123e88
	goto loc_82123E88;
loc_82123E78:
	// addi r5,r4,-259
	ctx.r5.s64 = ctx.r4.s64 + -259;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82120d68
	ctx.lr = 0x82123E88;
	sub_82120D68(ctx, base);
loc_82123E88:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x82123e9c
	if (!ctx.cr6.eq) goto loc_82123E9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125218
	ctx.lr = 0x82123E98;
	sub_82125218(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82123E9C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82123ebc
	if (!ctx.cr6.eq) goto loc_82123EBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122180
	ctx.lr = 0x82123EB8;
	sub_82122180(ctx, base);
	// b 0x82123fb4
	goto loc_82123FB4;
loc_82123EBC:
	// mulli r29,r22,192
	r29.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(192));
	// addi r30,r25,120
	r30.s64 = r25.s64 + 120;
	// li r31,0
	r31.s64 = 0;
	// lhax r11,r29,r30
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + r30.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82123f0c
	if (!ctx.cr0.gt) goto loc_82123F0C;
loc_82123ED4:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821224a8
	ctx.lr = 0x82123EF0;
	sub_821224A8(ctx, base);
	// lhz r11,90(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 90);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82123f0c
	if (ctx.cr6.eq) goto loc_82123F0C;
	// lhax r11,r29,r30
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + r30.u32));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82123ed4
	if (ctx.cr6.lt) goto loc_82123ED4;
loc_82123F0C:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// bne cr6,0x82123f28
	if (!ctx.cr6.eq) goto loc_82123F28;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(r26.s32, 7, ctx.xer);
	// beq cr6,0x82123f28
	if (ctx.cr6.eq) goto loc_82123F28;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122c88
	ctx.lr = 0x82123F28;
	sub_82122C88(ctx, base);
loc_82123F28:
	// rlwinm r31,r20,2,0,29
	r31.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// subf r11,r11,r19
	ctx.r11.u64 = r19.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// ble cr6,0x82123f68
	if (!ctx.cr6.gt) goto loc_82123F68;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,29428(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 29428);
	// bl 0x8211eba8
	ctx.lr = 0x82123F48;
	sub_8211EBA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82123f68
	if (ctx.cr0.eq) goto loc_82123F68;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x8211e1a0
	ctx.lr = 0x82123F64;
	sub_8211E1A0(ctx, base);
	// stwx r19,r31,r27
	REX_STORE_U32(r31.u32 + r27.u32, r19.u32);
loc_82123F68:
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(r22.s32, 8, ctx.xer);
	// bne cr6,0x82123fb4
	if (!ctx.cr6.eq) goto loc_82123FB4;
	// li r7,9
	ctx.r7.s64 = 9;
	// fmuls f2,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f28.f64 * f30.f64));
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmuls f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 * f30.f64));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821224a8
	ctx.lr = 0x82123F8C;
	sub_821224A8(ctx, base);
	// lhz r11,90(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 90);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82123fb4
	if (ctx.cr6.eq) goto loc_82123FB4;
	// li r7,9
	ctx.r7.s64 = 9;
	// fmuls f2,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f28.f64 * f29.f64));
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmuls f1,f31,f29
	ctx.f1.f64 = double(float(f31.f64 * f29.f64));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821224a8
	ctx.lr = 0x82123FB4;
	sub_821224A8(ctx, base);
loc_82123FB4:
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82123e50
	if (!ctx.cr6.eq) goto loc_82123E50;
loc_82123FC0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x82124000
	if (!ctx.cr6.gt) goto loc_82124000;
	// extsw r11,r18
	ctx.r11.s64 = r18.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lfs f0,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-28236(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -28236);
	// lfs f2,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820f28e8
	ctx.lr = 0x82124000;
	sub_820F28E8(ctx, base);
loc_82124000:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// blt cr6,0x82124028
	if (ctx.cr6.lt) goto loc_82124028;
	// cmpwi cr6,r16,223
	ctx.cr6.compare<int32_t>(r16.s32, 223, ctx.xer);
	// bgt cr6,0x82124028
	if (ctx.cr6.gt) goto loc_82124028;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8212d7c8
	ctx.lr = 0x82124028;
	sub_8212D7C8(ctx, base);
loc_82124028:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f7c
	ctx.lr = 0x82124034;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_821333A0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,142
	ctx.r10.s64 = ctx.r10.s64 + 142;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r8
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// mulli r8,r10,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// b 0x821333d4
	goto loc_821333D4;
loc_821333C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_821333D4:
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x821333c8
	if (!ctx.cr6.eq) goto loc_821333C8;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82133408
	if (!ctx.cr6.lt) goto loc_82133408;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,14(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r3,r11,20
	ctx.r3.u64 = ctx.r11.u32 & 0xFFF;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82133408:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135528) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f28
	ctx.lr = 0x82135540;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f24,f2
	f24.f64 = ctx.f2.f64;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57500
	ctx.r10.u64 = ctx.r10.u64 | 57500;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// sth r11,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r11.u16);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// stb r11,10(r9)
	REX_STORE_U8(ctx.r9.u32 + 10, ctx.r11.u8);
	// ble cr6,0x82135578
	if (!ctx.cr6.gt) goto loc_82135578;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82135578:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82135594
	if (ctx.cr6.eq) goto loc_82135594;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-24848
	ctx.r4.s64 = ctx.r11.s64 + -24848;
	// bl 0x822d55f8
	ctx.lr = 0x82135590;
	sub_822D55F8(ctx, base);
	// b 0x821355a0
	goto loc_821355A0;
loc_82135594:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-24860
	ctx.r4.s64 = ctx.r11.s64 + -24860;
	// bl 0x822d55f8
	ctx.lr = 0x821355A0;
	sub_822D55F8(ctx, base);
loc_821355A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f25,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f25.f64 = double(temp.f32);
	// fmr f26,f25
	f26.f64 = f25.f64;
	// beq 0x8213564c
	if (ctx.cr0.eq) goto loc_8213564C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,-24864(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24864);
	f27.f64 = double(temp.f32);
	// lfd f30,-24872(r9)
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + -24872);
	// addi r30,r11,-24900
	r30.s64 = ctx.r11.s64 + -24900;
	// lfd f31,-24880(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + -24880);
	// lfs f28,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f28.f64 = double(temp.f32);
loc_821355E4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// beq cr6,0x821355f8
	if (ctx.cr6.eq) goto loc_821355F8;
	// fmr f26,f28
	ctx.fpscr.disableFlushMode();
	f26.f64 = f28.f64;
loc_821355F8:
	// fcmpu cr6,f26,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f26.f64, f25.f64);
	// beq cr6,0x8213563c
	if (ctx.cr6.eq) goto loc_8213563C;
	// stfd f30,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f24,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f24.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f24
	ctx.f2.f64 = f24.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8213563C;
	sub_821EACB0(ctx, base);
loc_8213563C:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// fadds f29,f29,f27
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 + f27.f64));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821355e4
	if (!ctx.cr0.eq) goto loc_821355E4;
loc_8213564C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f74
	ctx.lr = 0x82135658;
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

DEFINE_REX_FUNC(sub_8213F2C0) {
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
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x8213F2E8;
	sub_821B0030(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// bl 0x82136640
	ctx.lr = 0x8213F2FC;
	sub_82136640(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r10,23912
	r31.s64 = ctx.r10.s64 + 23912;
	// addi r4,r11,21264
	ctx.r4.s64 = ctx.r11.s64 + 21264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130170
	ctx.lr = 0x8213F314;
	sub_82130170(ctx, base);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 + 52;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// addi r3,r9,23232
	ctx.r3.s64 = ctx.r9.s64 + 23232;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// bl 0x82132f78
	ctx.lr = 0x8213F338;
	sub_82132F78(ctx, base);
	// bl 0x821308e8
	ctx.lr = 0x8213F33C;
	sub_821308E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r11,13128
	ctx.r7.s64 = ctx.r11.s64 + 13128;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f3,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f0,16788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f3,108(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f3,112(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f3,116(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f3,120(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// stw r8,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// lfs f13,1840(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821afa50
	ctx.lr = 0x8213F3A8;
	sub_821AFA50(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x8213F3BC;
	sub_821D6210(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x8213F3D0;
	sub_821FF668(ctx, base);
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

DEFINE_REX_FUNC(sub_82149A00) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23108
	ctx.r10.s64 = ctx.r10.s64 + -23108;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lbz r10,62(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// sth r10,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f3,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x82149A94;
	sub_820E1850(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lfs f3,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x82149AA8;
	sub_820E1850(ctx, base);
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

DEFINE_REX_FUNC(sub_8214B060) {
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
	ctx.lr = 0x8214B068;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f0,-30080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30080);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f0,24540(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24540, temp.u32);
	// bl 0x8211c0f0
	ctx.lr = 0x8214B090;
	sub_8211C0F0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r10,r10,24136
	ctx.r10.s64 = ctx.r10.s64 + 24136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r29,24584(r9)
	REX_STORE_U32(ctx.r9.u32 + 24584, r29.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_8214B0B4:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8214b0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214B0B4;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,24280(r10)
	REX_STORE_U32(ctx.r10.u32 + 24280, ctx.r11.u32);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8214b0f4
	goto loc_8214B0F4;
loc_8214B0DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B0F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_8214B0F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8214b0dc
	if (!ctx.cr6.eq) goto loc_8214B0DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8216be10
	ctx.lr = 0x8214B10C;
	sub_8216BE10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8214E638) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82204c48
	ctx.lr = 0x8214E660;
	sub_82204C48(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214e738
	if (ctx.cr6.eq) goto loc_8214E738;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214e738
	if (ctx.cr6.eq) goto loc_8214E738;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214e738
	if (ctx.cr6.eq) goto loc_8214E738;
	// lbz r10,113(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 113);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e690
	if (ctx.cr0.eq) goto loc_8214E690;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8214e71c
	goto loc_8214E71C;
loc_8214E690:
	// rlwinm. r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e738
	if (ctx.cr0.eq) goto loc_8214E738;
	// lbz r11,109(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 109);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214e6fc
	if (ctx.cr6.eq) goto loc_8214E6FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214e6f4
	if (ctx.cr6.eq) goto loc_8214E6F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8214e718
	if (!ctx.cr6.eq) goto loc_8214E718;
	// lbz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 116);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8214e6d4
	if (ctx.cr6.lt) goto loc_8214E6D4;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8214e700
	if (!ctx.cr0.eq) goto loc_8214E700;
loc_8214E6D4:
	// lbz r11,117(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 117);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8214e6ec
	if (ctx.cr6.lt) goto loc_8214E6EC;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8214e700
	if (!ctx.cr0.eq) goto loc_8214E700;
loc_8214E6EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8214e700
	goto loc_8214E700;
loc_8214E6F4:
	// lbz r11,117(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 117);
	// b 0x8214e700
	goto loc_8214E700;
loc_8214E6FC:
	// lbz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 116);
loc_8214E700:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8214e718
	if (ctx.cr6.lt) goto loc_8214E718;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x8214e71c
	if (!ctx.cr0.eq) goto loc_8214E71C;
loc_8214E718:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8214E71C:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8214c9c8
	ctx.lr = 0x8214E738;
	sub_8214C9C8(ctx, base);
loc_8214E738:
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

DEFINE_REX_FUNC(sub_82154CE0) {
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
	ctx.lr = 0x82154CE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82154d5c
	if (!ctx.cr6.eq) goto loc_82154D5C;
	// li r10,30
	ctx.r10.s64 = 30;
	// li r11,248
	ctx.r11.s64 = 248;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82154D08:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82154d24
	if (ctx.cr6.eq) goto loc_82154D24;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,124(r10)
	REX_STORE_U32(ctx.r10.u32 + 124, ctx.r9.u32);
loc_82154D24:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82154d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154D08;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154d44
	if (ctx.cr6.eq) goto loc_82154D44;
	// stb r27,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r27.u8);
loc_82154D44:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154e54
	if (ctx.cr6.eq) goto loc_82154E54;
	// stb r27,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r27.u8);
	// b 0x82154e54
	goto loc_82154E54;
loc_82154D5C:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x82154e54
	if (ctx.cr6.lt) goto loc_82154E54;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,2460
	ctx.r11.s64 = ctx.r11.s64 + 2460;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r11,24296(r9)
	REX_STORE_U32(ctx.r9.u32 + 24296, ctx.r11.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r10,-21584
	r28.s64 = ctx.r10.s64 + -21584;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
loc_82154D8C:
	// lha r3,0(r28)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r28.u32 + 0));
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82154dcc
	if (ctx.cr6.eq) goto loc_82154DCC;
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x821e00d8
	ctx.lr = 0x82154DB4;
	sub_821E00D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82154dcc
	if (!ctx.cr0.eq) goto loc_82154DCC;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stb r27,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, r27.u8);
	// b 0x82154ddc
	goto loc_82154DDC;
loc_82154DCC:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
loc_82154DDC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x82154d8c
	if (ctx.cr6.lt) goto loc_82154D8C;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82154e30
	if (ctx.cr6.eq) goto loc_82154E30;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82154e30
	if (ctx.cr6.eq) goto loc_82154E30;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82154e30
	if (ctx.cr6.eq) goto loc_82154E30;
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 24);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82154e38
	goto loc_82154E38;
loc_82154E30:
	// lbz r11,22(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 22);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82154E38:
	// sth r11,284(r31)
	REX_STORE_U16(r31.u32 + 284, ctx.r11.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r27,310(r31)
	REX_STORE_U16(r31.u32 + 310, r27.u16);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_82154E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8215D000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8215D008;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32169
	r29.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,24312(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24312);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// xori r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 ^ 32;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// addi r5,r10,80
	ctx.r5.s64 = ctx.r10.s64 + 80;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8215c478
	ctx.lr = 0x8215D04C;
	sub_8215C478(ctx, base);
	// lwz r11,24312(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24312);
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + r31.u64;
	// addi r5,r10,80
	ctx.r5.s64 = ctx.r10.s64 + 80;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8215c478
	ctx.lr = 0x8215D080;
	sub_8215C478(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8215DE90) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215dfa4
	if (ctx.cr6.eq) goto loc_8215DFA4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,24316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24316);
	// lwz r10,24320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24320);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,4(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// beq cr6,0x8215dfc4
	if (ctx.cr6.eq) goto loc_8215DFC4;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x8215def4
	if (ctx.cr6.lt) goto loc_8215DEF4;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// ble cr6,0x8215defc
	if (!ctx.cr6.gt) goto loc_8215DEFC;
loc_8215DEF4:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8215dfc4
	if (!ctx.cr6.eq) goto loc_8215DFC4;
loc_8215DEFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215df78
	if (ctx.cr6.eq) goto loc_8215DF78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x8215df34
	if (!ctx.cr6.eq) goto loc_8215DF34;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r3,140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x8215DF34;
	sub_82101D68(ctx, base);
loc_8215DF34:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215df58
	if (ctx.cr6.eq) goto loc_8215DF58;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8215df58
	if (ctx.cr6.eq) goto loc_8215DF58;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// b 0x8215df70
	goto loc_8215DF70;
loc_8215DF58:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// lwz r10,2980(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 2980);
	// stb r11,2968(r9)
	REX_STORE_U8(ctx.r9.u32 + 2968, ctx.r11.u8);
	// stb r10,2969(r9)
	REX_STORE_U8(ctx.r9.u32 + 2969, ctx.r10.u8);
loc_8215DF70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82191be0
	ctx.lr = 0x8215DF78;
	sub_82191BE0(ctx, base);
loc_8215DF78:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(r30.s32, 9, ctx.xer);
	// beq cr6,0x8215df90
	if (ctx.cr6.eq) goto loc_8215DF90;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(r30.s32, 13, ctx.xer);
	// ble cr6,0x8215dfc4
	if (!ctx.cr6.gt) goto loc_8215DFC4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bgt cr6,0x8215dfc4
	if (ctx.cr6.gt) goto loc_8215DFC4;
loc_8215DF90:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stb r11,1888(r10)
	REX_STORE_U8(ctx.r10.u32 + 1888, ctx.r11.u8);
	// b 0x8215dfc4
	goto loc_8215DFC4;
loc_8215DFA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82191be0
	ctx.lr = 0x8215DFAC;
	sub_82191BE0(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// stb r11,2968(r10)
	REX_STORE_U8(ctx.r10.u32 + 2968, ctx.r11.u8);
	// lwz r11,2980(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2980);
	// stb r11,2969(r10)
	REX_STORE_U8(ctx.r10.u32 + 2969, ctx.r11.u8);
loc_8215DFC4:
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

DEFINE_REX_FUNC(sub_82169368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// addi r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 + 92;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,104(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821693ac
	if (ctx.cr6.eq) goto loc_821693AC;
	// lhz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// b 0x821693b0
	goto loc_821693B0;
loc_821693AC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821693B0:
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// addi r10,r4,156
	ctx.r10.s64 = ctx.r4.s64 + 156;
	// lhz r11,74(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// stb r7,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r7.u8);
	// addi r9,r3,68
	ctx.r9.s64 = ctx.r3.s64 + 68;
	// stb r7,27(r3)
	REX_STORE_U8(ctx.r3.u32 + 27, ctx.r7.u8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82169408
	if (!ctx.cr0.gt) goto loc_82169408;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_821693F0:
	// lwzu r8,84(r10)
	ea = 84 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r8,196(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 196);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x821693f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821693F0;
loc_82169408:
	// lhz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 72);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r4,124
	ctx.r8.s64 = ctx.r4.s64 + 124;
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// ble 0x82169450
	if (!ctx.cr0.gt) goto loc_82169450;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82169434:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r8,60(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 60);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lfsu f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82169434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169434;
loc_82169450:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8216946c
	if (ctx.cr6.lt) goto loc_8216946C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216946C:
	// stb r11,72(r3)
	REX_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C4E8) {
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
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8216c534
	if (ctx.cr6.eq) goto loc_8216C534;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x8216C518;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8216c52c
	if (!ctx.cr0.eq) goto loc_8216C52C;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216c534
	if (!ctx.cr6.eq) goto loc_8216C534;
loc_8216C52C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8216C534:
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

DEFINE_REX_FUNC(sub_8216D758) {
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
	// bl 0x8216ca30
	ctx.lr = 0x8216D770;
	sub_8216CA30(ctx, base);
	// lbz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 88);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216d790
	if (ctx.cr0.eq) goto loc_8216D790;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// blt cr6,0x8216d78c
	if (ctx.cr6.lt) goto loc_8216D78C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8216D78C:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8216D790:
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

DEFINE_REX_FUNC(sub_8216E020) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r9,744(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 744);
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// lwz r7,1852(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1852);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,5493
	ctx.r11.s64 = 359989248;
	// lbz r8,1827(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1827);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r7,708(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 708);
	// ori r11,r11,10751
	ctx.r11.u64 = ctx.r11.u64 | 10751;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8216e060
	if (!ctx.cr6.lt) goto loc_8216E060;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8216E060:
	// stw r8,708(r3)
	REX_STORE_U32(ctx.r3.u32 + 708, ctx.r8.u32);
	// lwz r8,712(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// lbz r7,1827(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1827);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8216e080
	if (ctx.cr6.lt) goto loc_8216E080;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8216E080:
	// lwz r7,740(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// stw r8,712(r3)
	REX_STORE_U32(ctx.r3.u32 + 712, ctx.r8.u32);
	// rlwinm. r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8216e0b0
	if (ctx.cr0.eq) goto loc_8216E0B0;
	// lbz r6,1827(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1827);
	// lwz r5,732(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 732);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8216e0ac
	if (!ctx.cr6.lt) goto loc_8216E0AC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8216E0AC:
	// stw r6,732(r3)
	REX_STORE_U32(ctx.r3.u32 + 732, ctx.r6.u32);
loc_8216E0B0:
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8216e0d8
	if (ctx.cr0.eq) goto loc_8216E0D8;
	// lbz r5,1827(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1827);
	// lwz r6,736(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8216e0d4
	if (!ctx.cr6.lt) goto loc_8216E0D4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8216E0D4:
	// stw r11,736(r3)
	REX_STORE_U32(ctx.r3.u32 + 736, ctx.r11.u32);
loc_8216E0D8:
	// lwz r11,1852(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1852);
	// stw r11,744(r3)
	REX_STORE_U32(ctx.r3.u32 + 744, ctx.r11.u32);
	// lbz r11,1827(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1827);
	// mulli r11,r11,1800
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1800));
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// ori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 | 1;
	// stw r11,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82171358) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82171360;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,-7280
	ctx.r10.s64 = ctx.r10.s64 + -7280;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r31.u32);
	// lfs f6,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f6.f64 = double(temp.f32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821713a4
	if (ctx.cr6.eq) goto loc_821713A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f6.f64 = double(temp.f32);
loc_821713A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lfs f7,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f7.f64 = double(temp.f32);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lfs f5,-24992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24992);
	ctx.f5.f64 = double(temp.f32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lfs f4,-7284(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7284);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82104548
	ctx.lr = 0x821713E4;
	sub_82104548(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// stw r3,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r3.u32);
	// stw r31,220(r30)
	REX_STORE_U32(r30.u32 + 220, r31.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821714b8
	if (ctx.cr6.eq) goto loc_821714B8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821714b8
	if (ctx.cr6.eq) goto loc_821714B8;
loc_82171400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b30e0
	ctx.lr = 0x82171408;
	sub_821B30E0(ctx, base);
	// bl 0x821dcfb8
	ctx.lr = 0x8217140C;
	sub_821DCFB8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82171420
	if (ctx.cr6.lt) goto loc_82171420;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
loc_82171420:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,21
	ctx.cr6.compare<int32_t>(r31.s32, 21, ctx.xer);
	// blt cr6,0x82171400
	if (ctx.cr6.lt) goto loc_82171400;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82171448
	if (ctx.cr6.eq) goto loc_82171448;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82171448
	if (ctx.cr6.eq) goto loc_82171448;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821714f8
	if (!ctx.cr6.eq) goto loc_821714F8;
loc_82171448:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821c7f28
	ctx.lr = 0x82171458;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8217146c
	if (ctx.cr0.eq) goto loc_8217146C;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
loc_8217146C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821c7f28
	ctx.lr = 0x8217147C;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82171490
	if (ctx.cr0.eq) goto loc_82171490;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
loc_82171490:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x821c7f28
	ctx.lr = 0x821714A0;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821714f8
	if (ctx.cr0.eq) goto loc_821714F8;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
	// b 0x821714f8
	goto loc_821714F8;
loc_821714B8:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r29,r11,28096
	r29.s64 = ctx.r11.s64 + 28096;
loc_821714C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82173f30
	ctx.lr = 0x821714D4;
	sub_82173F30(ctx, base);
	// lbz r11,130(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 130);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x821714ec
	if (ctx.cr6.eq) goto loc_821714EC;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
loc_821714EC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,21
	ctx.cr6.compare<int32_t>(r31.s32, 21, ctx.xer);
	// blt cr6,0x821714c0
	if (ctx.cr6.lt) goto loc_821714C0;
loc_821714F8:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// stw r10,224(r30)
	REX_STORE_U32(r30.u32 + 224, ctx.r10.u32);
	// addi r25,r9,432
	r25.s64 = ctx.r9.s64 + 432;
	// stw r11,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r11.u32);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82171524;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r24,r11,-7292
	r24.s64 = ctx.r11.s64 + -7292;
	// addi r31,r10,24672
	r31.s64 = ctx.r10.s64 + 24672;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82171544;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// bl 0x820e68b8
	ctx.lr = 0x82171554;
	sub_820E68B8(ctx, base);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r29,r11,4
	r29.u64 = ctx.r11.u64 | 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x8217156C;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r22,r11,-7304
	r22.s64 = ctx.r11.s64 + -7304;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82171588;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x820e68b8
	ctx.lr = 0x82171598;
	sub_820E68B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821715A8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821715BC;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// bl 0x820e68b8
	ctx.lr = 0x821715CC;
	sub_820E68B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821715DC;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821715F0;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// bl 0x820e68b8
	ctx.lr = 0x82171600;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x822d55f8
	ctx.lr = 0x82171610;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// bl 0x820e68b8
	ctx.lr = 0x82171620;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x822d55f8
	ctx.lr = 0x82171630;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x820e68b8
	ctx.lr = 0x82171640;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,768
	ctx.r3.s64 = r31.s64 + 768;
	// bl 0x822d55f8
	ctx.lr = 0x82171650;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// bl 0x820e68b8
	ctx.lr = 0x82171660;
	sub_820E68B8(ctx, base);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r29,r11,15
	r29.u64 = ctx.r11.u64 | 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x82171678;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x8217168C;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// bl 0x820e68b8
	ctx.lr = 0x8217169C;
	sub_820E68B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821716AC;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,1024
	ctx.r3.s64 = r31.s64 + 1024;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821716C0;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// bl 0x820e68b8
	ctx.lr = 0x821716D0;
	sub_820E68B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821716E0;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,1152
	ctx.r3.s64 = r31.s64 + 1152;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821716F4;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x82171704;
	sub_820E68B8(ctx, base);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r29,r11,19
	r29.u64 = ctx.r11.u64 | 19;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x8217171C;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,1280
	ctx.r3.s64 = r31.s64 + 1280;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82171730;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// bl 0x820e68b8
	ctx.lr = 0x82171740;
	sub_820E68B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82171750;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,1408
	ctx.r3.s64 = r31.s64 + 1408;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82171764;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// bl 0x820e68b8
	ctx.lr = 0x82171774;
	sub_820E68B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x82171784;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,1536
	ctx.r3.s64 = r31.s64 + 1536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82171798;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,27
	ctx.r3.u64 = ctx.r3.u64 | 27;
	// bl 0x820e68b8
	ctx.lr = 0x821717A8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,1664
	ctx.r3.s64 = r31.s64 + 1664;
	// bl 0x822d55f8
	ctx.lr = 0x821717B8;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,144
	ctx.r3.u64 = ctx.r3.u64 | 144;
	// bl 0x820e68b8
	ctx.lr = 0x821717C8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,1792
	ctx.r3.s64 = r31.s64 + 1792;
	// bl 0x822d55f8
	ctx.lr = 0x821717D8;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x820e68b8
	ctx.lr = 0x821717E8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,1920
	ctx.r3.s64 = r31.s64 + 1920;
	// bl 0x822d55f8
	ctx.lr = 0x821717F8;
	sub_822D55F8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// bl 0x820e68b8
	ctx.lr = 0x82171808;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,2048
	ctx.r3.s64 = r31.s64 + 2048;
	// bl 0x822d55f8
	ctx.lr = 0x82171818;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,145
	ctx.r3.u64 = ctx.r3.u64 | 145;
	// bl 0x820e68b8
	ctx.lr = 0x82171828;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r29,r11,21804
	r29.s64 = ctx.r11.s64 + 21804;
	// addi r31,r10,26848
	r31.s64 = ctx.r10.s64 + 26848;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82171848;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,146
	ctx.r3.u64 = ctx.r3.u64 | 146;
	// bl 0x820e68b8
	ctx.lr = 0x82171858;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x822d55f8
	ctx.lr = 0x82171868;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x82171878;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x822d55f8
	ctx.lr = 0x82171888;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,148
	ctx.r3.u64 = ctx.r3.u64 | 148;
	// bl 0x820e68b8
	ctx.lr = 0x82171898;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x821718A8;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,149
	ctx.r3.u64 = ctx.r3.u64 | 149;
	// bl 0x820e68b8
	ctx.lr = 0x821718B8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822d55f8
	ctx.lr = 0x821718C8;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,150
	ctx.r3.u64 = ctx.r3.u64 | 150;
	// bl 0x820e68b8
	ctx.lr = 0x821718D8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822d55f8
	ctx.lr = 0x821718E8;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,151
	ctx.r3.u64 = ctx.r3.u64 | 151;
	// bl 0x820e68b8
	ctx.lr = 0x821718F8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x822d55f8
	ctx.lr = 0x82171908;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,152
	ctx.r3.u64 = ctx.r3.u64 | 152;
	// bl 0x820e68b8
	ctx.lr = 0x82171918;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x822d55f8
	ctx.lr = 0x82171928;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,153
	ctx.r3.u64 = ctx.r3.u64 | 153;
	// bl 0x820e68b8
	ctx.lr = 0x82171938;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x822d55f8
	ctx.lr = 0x82171948;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// bl 0x820e68b8
	ctx.lr = 0x82171958;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x822d55f8
	ctx.lr = 0x82171968;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,155
	ctx.r3.u64 = ctx.r3.u64 | 155;
	// bl 0x820e68b8
	ctx.lr = 0x82171978;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x822d55f8
	ctx.lr = 0x82171988;
	sub_822D55F8(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// bl 0x820e68b8
	ctx.lr = 0x82171998;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x822d55f8
	ctx.lr = 0x821719A8;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 344);
	// ori r3,r3,156
	ctx.r3.u64 = ctx.r3.u64 | 156;
	// bl 0x820e68b8
	ctx.lr = 0x821719B8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x822d55f8
	ctx.lr = 0x821719C8;
	sub_822D55F8(ctx, base);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// addi r29,r8,27576
	r29.s64 = ctx.r8.s64 + 27576;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r31,27576(r8)
	REX_STORE_U32(ctx.r8.u32 + 27576, r31.u32);
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// lfd f1,-7672(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r7.u32 + -7672);
	// stw r10,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// stw r11,56(r29)
	REX_STORE_U32(r29.u32 + 56, ctx.r11.u32);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// stw r9,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r9.u32);
	// stw r10,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r10.u32);
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r11,100(r29)
	REX_STORE_U32(r29.u32 + 100, ctx.r11.u32);
	// addi r9,r31,224
	ctx.r9.s64 = r31.s64 + 224;
	// stw r10,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r10.u32);
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// stw r9,108(r29)
	REX_STORE_U32(r29.u32 + 108, ctx.r9.u32);
	// addi r10,r31,288
	ctx.r10.s64 = r31.s64 + 288;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// stw r10,116(r29)
	REX_STORE_U32(r29.u32 + 116, ctx.r10.u32);
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// stw r9,148(r29)
	REX_STORE_U32(r29.u32 + 148, ctx.r9.u32);
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// stw r11,152(r29)
	REX_STORE_U32(r29.u32 + 152, ctx.r11.u32);
	// stw r10,156(r29)
	REX_STORE_U32(r29.u32 + 156, ctx.r10.u32);
	// addi r11,r31,320
	ctx.r11.s64 = r31.s64 + 320;
	// stw r9,196(r29)
	REX_STORE_U32(r29.u32 + 196, ctx.r9.u32);
	// addi r10,r31,352
	ctx.r10.s64 = r31.s64 + 352;
	// addi r9,r31,160
	ctx.r9.s64 = r31.s64 + 160;
	// stw r11,200(r29)
	REX_STORE_U32(r29.u32 + 200, ctx.r11.u32);
	// stw r10,204(r29)
	REX_STORE_U32(r29.u32 + 204, ctx.r10.u32);
	// addi r11,r31,384
	ctx.r11.s64 = r31.s64 + 384;
	// stw r9,208(r29)
	REX_STORE_U32(r29.u32 + 208, ctx.r9.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r9,r31,160
	ctx.r9.s64 = r31.s64 + 160;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// addi r5,r8,-7656
	ctx.r5.s64 = ctx.r8.s64 + -7656;
	// stw r31,48(r29)
	REX_STORE_U32(r29.u32 + 48, r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r29)
	REX_STORE_U32(r29.u32 + 96, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,144(r29)
	REX_STORE_U32(r29.u32 + 144, r31.u32);
	// stw r31,192(r29)
	REX_STORE_U32(r29.u32 + 192, r31.u32);
	// stw r31,240(r29)
	REX_STORE_U32(r29.u32 + 240, r31.u32);
	// stw r11,244(r29)
	REX_STORE_U32(r29.u32 + 244, ctx.r11.u32);
	// stw r10,248(r29)
	REX_STORE_U32(r29.u32 + 248, ctx.r10.u32);
	// stw r9,252(r29)
	REX_STORE_U32(r29.u32 + 252, ctx.r9.u32);
	// bl 0x821eb1a0
	ctx.lr = 0x82171AC0;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f12,26932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2332(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// stfs f13,104(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f11,112(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 112, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f12,108(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// lfs f9,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 116, temp.u32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f12,124(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
	// stfs f13,120(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 120, temp.u32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// bl 0x8216ee90
	ctx.lr = 0x82171B40;
	sub_8216EE90(ctx, base);
	// lwa r11,224(r30)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r30.u32 + 224));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,92(r30)
	REX_STORE_U32(r30.u32 + 92, r28.u32);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,212(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 212, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821883A0) {
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
	// lbz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218841c
	if (ctx.cr0.eq) goto loc_8218841C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,3392(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218841c
	if (ctx.cr0.eq) goto loc_8218841C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x82208a60
	ctx.lr = 0x821883F0;
	sub_82208A60(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x82208cc8
	ctx.lr = 0x821883FC;
	sub_82208CC8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82185530
	ctx.lr = 0x82188404;
	sub_82185530(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82188430
	if (ctx.cr0.eq) goto loc_82188430;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82187d88
	ctx.lr = 0x82188414;
	sub_82187D88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82188434
	goto loc_82188434;
loc_8218841C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82187d00
	ctx.lr = 0x82188430;
	sub_82187D00(ctx, base);
loc_82188430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82188434:
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

DEFINE_REX_FUNC(sub_8218A198) {
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
	ctx.lr = 0x8218A1A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x8218A1B8;
	sub_82188300(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// addi r30,r25,4
	r30.s64 = r25.s64 + 4;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,-6708(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6708);
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq 0x8218a304
	if (ctx.cr0.eq) goto loc_8218A304;
	// li r26,0
	r26.s64 = 0;
loc_8218A1EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8218a294
	if (ctx.cr0.eq) goto loc_8218A294;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82208a78
	ctx.lr = 0x8218A218;
	sub_82208A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8218a2e4
	if (!ctx.cr0.eq) goto loc_8218A2E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218a244
	if (!ctx.cr6.eq) goto loc_8218A244;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82208a78
	ctx.lr = 0x8218A23C;
	sub_82208A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8218a2e4
	if (!ctx.cr0.eq) goto loc_8218A2E4;
loc_8218A244:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8218a2e4
	if (!ctx.cr6.eq) goto loc_8218A2E4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218A268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8218a2e4
	if (!ctx.cr0.eq) goto loc_8218A2E4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218A290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8218a2e4
	goto loc_8218A2E4;
loc_8218A294:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r29,16(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218A2BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8218a2e4
	if (!ctx.cr0.eq) goto loc_8218A2E4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218A2E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218A2E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218a1ec
	if (ctx.cr6.lt) goto loc_8218A1EC;
loc_8218A304:
	// bl 0x822094c8
	ctx.lr = 0x8218A308;
	sub_822094C8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,864(r31)
	REX_STORE_U32(r31.u32 + 864, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82189dd0
	ctx.lr = 0x8218A320;
	sub_82189DD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821911B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821911f4
	if (ctx.cr6.eq) goto loc_821911F4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x820e1b70
	ctx.lr = 0x821911EC;
	sub_820E1B70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_821911F4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821911FC;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8219120C;
	sub_820E1B70(ctx, base);
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

DEFINE_REX_FUNC(sub_821937D8) {
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
	// bne cr6,0x821937f8
	if (!ctx.cr6.eq) goto loc_821937F8;
	// li r31,0
	r31.s64 = 0;
loc_821937F8:
	// bl 0x82187b58
	ctx.lr = 0x821937FC;
	sub_82187B58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82187ff8
	ctx.lr = 0x82193804;
	sub_82187FF8(ctx, base);
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

DEFINE_REX_FUNC(sub_821942C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821942e8
	if (ctx.cr6.eq) goto loc_821942E8;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821942e8
	if (ctx.cr6.eq) goto loc_821942E8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82194308
	goto loc_82194308;
loc_821942E8:
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r9,148(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82194308:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// sth r11,30856(r10)
	REX_STORE_U16(ctx.r10.u32 + 30856, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197898) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821978A0;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfs f13,248(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,55
	ctx.r10.s64 = ctx.r4.s64 + 55;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfsx f0,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f30,f0,f10
	f30.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f31,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,-7484
	ctx.r3.s64 = ctx.r9.s64 + -7484;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f13.f64)));
	// fsubs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x821eacb0
	ctx.lr = 0x82197920;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r27,r11,-7488
	r27.s64 = ctx.r11.s64 + -7488;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8219793C;
	sub_821EB1A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x8219794C;
	sub_822D55F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lfs f4,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r30,272
	ctx.r11.s64 = r30.s64 + 272;
	// lwz r3,272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 272);
	// lfs f3,26856(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820e7428
	ctx.lr = 0x82197980;
	sub_820E7428(ctx, base);
	// addi r11,r29,43
	ctx.r11.s64 = r29.s64 + 43;
	// lwz r3,272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 272);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-24948(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24948);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f10,f31,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, f29.f64)));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 + f30.f64));
	// bl 0x820e7380
	ctx.lr = 0x821979D0;
	sub_820E7380(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8219BF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219BF58;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f31,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8219BF9C;
	sub_820E1CC0(ctx, base);
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8219BFAC;
	sub_820E1CC0(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lfs f13,44(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f1,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8219BFE0;
	sub_820E1CC0(ctx, base);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219F310) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219F318;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r8,6452
	ctx.r6.s64 = ctx.r8.s64 + 6452;
	// addi r9,r11,-4584
	ctx.r9.s64 = ctx.r11.s64 + -4584;
	// addi r8,r10,-3384
	ctx.r8.s64 = ctx.r10.s64 + -3384;
	// addi r7,r7,-4080
	ctx.r7.s64 = ctx.r7.s64 + -4080;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,901
	ctx.r4.s64 = 901;
	// bl 0x821f7d50
	ctx.lr = 0x8219F34C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f368
	if (ctx.cr0.eq) goto loc_8219F368;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8219f36c
	goto loc_8219F36C;
loc_8219F368:
	// li r30,0
	r30.s64 = 0;
loc_8219F36C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8219f37c
	if (!ctx.cr6.eq) goto loc_8219F37C;
loc_8219F374:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219f3c8
	goto loc_8219F3C8;
loc_8219F37C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// mulli r4,r29,80
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(80));
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// bl 0x82190558
	ctx.lr = 0x8219F398;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219f3ac
	if (!ctx.cr0.eq) goto loc_8219F3AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x8219F3A8;
	sub_8218CB20(ctx, base);
	// b 0x8219f374
	goto loc_8219F374;
loc_8219F3AC:
	// addi r11,r31,44
	ctx.r11.s64 = r31.s64 + 44;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
loc_8219F3C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A2120) {
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
	// bl 0x822d4e88
	ctx.lr = 0x821A2128;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq cr6,0x821a2194
	if (ctx.cr6.eq) goto loc_821A2194;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x821a2178
	if (ctx.cr6.eq) goto loc_821A2178;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x821a21d4
	if (!ctx.cr6.eq) goto loc_821A21D4;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// li r31,49
	r31.s64 = 49;
loc_821A2160:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x821a3a30
	ctx.lr = 0x821A216C;
	sub_821A3A30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821a2160
	if (!ctx.cr0.eq) goto loc_821A2160;
	// b 0x821a21d4
	goto loc_821A21D4;
loc_821A2178:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lwz r3,220(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 220);
	// bl 0x821a3a30
	ctx.lr = 0x821A2190;
	sub_821A3A30(ctx, base);
	// b 0x821a21d4
	goto loc_821A21D4;
loc_821A2194:
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// li r31,49
	r31.s64 = 49;
loc_821A219C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x821a3a30
	ctx.lr = 0x821A21A8;
	sub_821A3A30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821a219c
	if (!ctx.cr0.eq) goto loc_821A219C;
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,220(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 220);
	// bl 0x821a3a30
	ctx.lr = 0x821A21C0;
	sub_821A3A30(ctx, base);
	// li r6,49
	ctx.r6.s64 = 49;
	// li r5,49
	ctx.r5.s64 = 49;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a1b90
	ctx.lr = 0x821A21D4;
	sub_821A1B90(ctx, base);
loc_821A21D4:
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// stfs f31,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821A4CC8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-26560
	ctx.r10.s64 = ctx.r10.s64 + -26560;
	// stw r11,3128(r10)
	REX_STORE_U32(ctx.r10.u32 + 3128, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A4E68) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x821A4E70;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// rlwinm. r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a50d0
	if (ctx.cr0.eq) goto loc_821A50D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a50d0
	if (!ctx.cr6.gt) goto loc_821A50D0;
	// lhz r30,5816(r4)
	r30.u64 = REX_LOAD_U16(ctx.r4.u32 + 5816);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x821a4ec4
	if (ctx.cr6.eq) goto loc_821A4EC4;
	// lha r11,40(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 40));
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a50d0
	if (ctx.cr6.eq) goto loc_821A50D0;
loc_821A4EC4:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a4edc
	if (ctx.cr6.eq) goto loc_821A4EDC;
	// bl 0x8218c278
	ctx.lr = 0x821A4ED8;
	sub_8218C278(ctx, base);
	// stw r29,136(r31)
	REX_STORE_U32(r31.u32 + 136, r29.u32);
loc_821A4EDC:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a4ef0
	if (ctx.cr6.eq) goto loc_821A4EF0;
	// bl 0x8218c278
	ctx.lr = 0x821A4EEC;
	sub_8218C278(ctx, base);
	// stw r29,140(r31)
	REX_STORE_U32(r31.u32 + 140, r29.u32);
loc_821A4EF0:
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// sth r30,40(r31)
	REX_STORE_U16(r31.u32 + 40, r30.u16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821a4f0c
	if (ctx.cr6.eq) goto loc_821A4F0C;
	// rlwinm r10,r30,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 17) & 0x1;
	// clrlwi r29,r11,17
	r29.u64 = ctx.r11.u32 & 0x7FFF;
	// b 0x821a4f10
	goto loc_821A4F10;
loc_821A4F0C:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_821A4F10:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a4fe8
	if (ctx.cr6.eq) goto loc_821A4FE8;
	// lhz r11,624(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 624);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821a4fe8
	if (!ctx.cr6.eq) goto loc_821A4FE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r10,38(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 38));
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r27,3
	r27.s64 = 3;
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lha r11,92(r26)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r26.u32 + 92));
	// li r28,193
	r28.s64 = 193;
	// li r29,9
	r29.s64 = 9;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x821a4f5c
	if (!ctx.cr6.eq) goto loc_821A4F5C;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14912
	ctx.r9.s64 = ctx.r9.s64 + 14912;
	// b 0x821a4f64
	goto loc_821A4F64;
loc_821A4F5C:
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14880
	ctx.r9.s64 = ctx.r9.s64 + 14880;
loc_821A4F64:
	// lwzx r30,r10,r9
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821a4f7c
	if (!ctx.cr6.eq) goto loc_821A4F7C;
	// cmpwi cr6,r30,21
	ctx.cr6.compare<int32_t>(r30.s32, 21, ctx.xer);
	// bne cr6,0x821a4f7c
	if (!ctx.cr6.eq) goto loc_821A4F7C;
	// li r30,29
	r30.s64 = 29;
loc_821A4F7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r7,193
	ctx.r7.s64 = 193;
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,16272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8218dba0
	ctx.lr = 0x821A4FA4;
	sub_8218DBA0(ctx, base);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// li r7,193
	ctx.r7.s64 = 193;
	// ori r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8218d9c8
	ctx.lr = 0x821A4FC8;
	sub_8218D9C8(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8212d7c8
	ctx.lr = 0x821A4FE4;
	sub_8212D7C8(ctx, base);
	// b 0x821a509c
	goto loc_821A509C;
loc_821A4FE8:
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x821a5004
	if (ctx.cr6.lt) goto loc_821A5004;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
loc_821A5004:
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821a5018
	if (ctx.cr6.gt) goto loc_821A5018;
	// rlwinm r27,r25,30,31,31
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x1;
	// b 0x821a5028
	goto loc_821A5028;
loc_821A5018:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r27,2
	r27.s64 = 2;
	// ble cr6,0x821a5028
	if (!ctx.cr6.gt) goto loc_821A5028;
	// li r27,4
	r27.s64 = 4;
loc_821A5028:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821a5098
	if (ctx.cr6.lt) goto loc_821A5098;
	// lha r11,92(r26)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r26.u32 + 92));
	// lha r10,38(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 38));
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x821a5050
	if (!ctx.cr6.eq) goto loc_821A5050;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14912
	ctx.r9.s64 = ctx.r9.s64 + 14912;
	// b 0x821a5058
	goto loc_821A5058;
loc_821A5050:
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14880
	ctx.r9.s64 = ctx.r9.s64 + 14880;
loc_821A5058:
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821a5070
	if (!ctx.cr6.eq) goto loc_821A5070;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// bne cr6,0x821a5070
	if (!ctx.cr6.eq) goto loc_821A5070;
	// li r4,29
	ctx.r4.s64 = 29;
loc_821A5070:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r7,255
	ctx.r7.s64 = 255;
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8218dba0
	ctx.lr = 0x821A5094;
	sub_8218DBA0(ctx, base);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
loc_821A5098:
	// li r28,255
	r28.s64 = 255;
loc_821A509C:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,14408
	ctx.r11.s64 = ctx.r11.s64 + 14408;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r8,r25,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x821a50c8
	if (ctx.cr0.eq) goto loc_821A50C8;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
loc_821A50C8:
	// lfsx f2,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821a50e4
	goto loc_821A50E4;
loc_821A50D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f2,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// beq cr6,0x821a5110
	if (ctx.cr6.eq) goto loc_821A5110;
loc_821A50E4:
	// extsh r11,r27
	ctx.r11.s64 = r27.s16;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,14800
	ctx.r11.s64 = ctx.r9.s64 + 14800;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a4d68
	ctx.lr = 0x821A5110;
	sub_821A4D68(ctx, base);
loc_821A5110:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821B1200) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r6,r10,432
	ctx.r6.s64 = ctx.r10.s64 + 432;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,496(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 496);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r9,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// sth r7,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// sth r6,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r6.u16);
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// bgt cr6,0x821b1250
	if (ctx.cr6.gt) goto loc_821B1250;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_821B1250:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r10,r10,23240
	ctx.r10.s64 = ctx.r10.s64 + 23240;
	// lwz r9,204(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b127c
	if (!ctx.cr0.eq) goto loc_821B127C;
	// lwz r9,488(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 488);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// and. r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b128c
	if (ctx.cr0.eq) goto loc_821B128C;
loc_821B127C:
	// li r9,6
	ctx.r9.s64 = 6;
	// li r7,60
	ctx.r7.s64 = 60;
	// sth r9,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// sth r7,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r7.u16);
loc_821B128C:
	// lwz r9,144(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b12a8
	if (!ctx.cr0.eq) goto loc_821B12A8;
	// lwz r10,428(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 428);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b12c0
	if (ctx.cr0.eq) goto loc_821B12C0;
loc_821B12A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// sth r9,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r9.u16);
	// sth r8,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
loc_821B12C0:
	// b 0x821dc0f0
	sub_821DC0F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B5498) {
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
	// bl 0x822d4e78
	ctx.lr = 0x821B54A0;
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r29,r11,-28232
	r29.s64 = ctx.r11.s64 + -28232;
	// addi r31,r10,432
	r31.s64 = ctx.r10.s64 + 432;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// ori r27,r9,3696
	r27.u64 = ctx.r9.u64 | 3696;
	// lbz r10,26(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 26);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// bctrl 
	ctx.lr = 0x821B54F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x821d8648
	ctx.lr = 0x821B5500;
	sub_821D8648(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r11,r11,10116
	ctx.r11.u64 = ctx.r11.u64 | 10116;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// ori r11,r9,14232
	ctx.r11.u64 = ctx.r9.u64 | 14232;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r8,14236
	ctx.r9.u64 = ctx.r8.u64 | 14236;
	// ori r8,r7,14240
	ctx.r8.u64 = ctx.r7.u64 | 14240;
	// lfs f31,1996(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f31.f64 = double(temp.f32);
	// ori r5,r10,14228
	ctx.r5.u64 = ctx.r10.u64 | 14228;
	// stfsx f31,r30,r11
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,10532(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 10532, temp.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stfs f31,10536(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 10536, temp.u32);
	// stfs f31,10540(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 10540, temp.u32);
	// stfs f31,10544(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 10544, temp.u32);
	// addi r25,r10,13128
	r25.s64 = ctx.r10.s64 + 13128;
	// stfsx f31,r30,r5
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r5.u32, temp.u32);
	// lfs f30,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfsx f31,r30,r9
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
	// stfsx f31,r30,r8
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821b5598
	if (ctx.cr6.lt) goto loc_821B5598;
	// bne cr6,0x821b56ec
	if (!ctx.cr6.eq) goto loc_821B56EC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f3,10540(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 10540);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,10536(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 10536);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10532(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 10532);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B5594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821b56ec
	goto loc_821B56EC;
loc_821B5598:
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821B55A4;
	sub_821D6210(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r11.u16);
	// bl 0x8218e510
	ctx.lr = 0x821B55B4;
	sub_8218E510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e510
	ctx.lr = 0x821B55BC;
	sub_8218E510(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e510
	ctx.lr = 0x821B55C8;
	sub_8218E510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e1b0
	ctx.lr = 0x821B55D0;
	sub_8218E1B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e1b0
	ctx.lr = 0x821B55D8;
	sub_8218E1B0(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e1b0
	ctx.lr = 0x821B55E4;
	sub_8218E1B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82124980
	ctx.lr = 0x821B55EC;
	sub_82124980(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x82124980
	ctx.lr = 0x821B55F8;
	sub_82124980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,596(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 596, temp.u32);
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// bl 0x820ec518
	ctx.lr = 0x821B5614;
	sub_820EC518(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820f2e70
	ctx.lr = 0x821B5624;
	sub_820F2E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820ed268
	ctx.lr = 0x821B562C;
	sub_820ED268(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820ed2e0
	ctx.lr = 0x821B5634;
	sub_820ED2E0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820ed1b8
	ctx.lr = 0x821B563C;
	sub_820ED1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f2,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f2.f64 = double(temp.f32);
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x820f3460
	ctx.lr = 0x821B5668;
	sub_820F3460(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b5680
	if (ctx.cr6.eq) goto loc_821B5680;
	// bl 0x82200b00
	ctx.lr = 0x821B567C;
	sub_82200B00(ctx, base);
	// b 0x821b5684
	goto loc_821B5684;
loc_821B5680:
	// bl 0x82200af0
	ctx.lr = 0x821B5684;
	sub_82200AF0(ctx, base);
loc_821B5684:
	// bl 0x821fef70
	ctx.lr = 0x821B5688;
	sub_821FEF70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,9992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24832);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x822006f8
	ctx.lr = 0x821B56A4;
	sub_822006F8(ctx, base);
	// bl 0x821fef70
	ctx.lr = 0x821B56A8;
	sub_821FEF70(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200700
	ctx.lr = 0x821B56B0;
	sub_82200700(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x821B56BC;
	sub_82200708(ctx, base);
	// bl 0x821fef70
	ctx.lr = 0x821B56C0;
	sub_821FEF70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,16828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16828);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x82200818
	ctx.lr = 0x821B56D4;
	sub_82200818(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200ad0
	ctx.lr = 0x821B56DC;
	sub_82200AD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x821B56EC;
	sub_82200AC8(ctx, base);
loc_821B56EC:
	// bl 0x821b3930
	ctx.lr = 0x821B56F0;
	sub_821B3930(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c9410
	ctx.lr = 0x821B5700;
	sub_821C9410(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5718
	if (ctx.cr0.eq) goto loc_821B5718;
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
loc_821B5718:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b5760
	if (!ctx.cr0.eq) goto loc_821B5760;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r10,r10,0,18,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b5760
	if (!ctx.cr0.eq) goto loc_821B5760;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b5760
	if (!ctx.cr0.eq) goto loc_821B5760;
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lfs f0,596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,27848(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x821b5774
	if (!ctx.cr6.gt) goto loc_821B5774;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x821b5778
	goto loc_821B5778;
loc_821B5760:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// lfs f13,27848(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27848);
	ctx.f13.f64 = double(temp.f32);
loc_821B5774:
	// fsubs f12,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 - ctx.f0.f64));
loc_821B5778:
	// fmadds f1,f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f1,596(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 596, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82202560
	ctx.lr = 0x821B578C;
	sub_82202560(ctx, base);
	// lfs f0,596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - ctx.f0.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82202560
	ctx.lr = 0x821B57A0;
	sub_82202560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x821B57B0;
	sub_82202560(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// lbz r11,210(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5868
	if (!ctx.cr0.eq) goto loc_821B5868;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200a38
	ctx.lr = 0x821B57D0;
	sub_82200A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821b57e8
	if (!ctx.cr6.gt) goto loc_821B57E8;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_821B57E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f30,16308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	f30.f64 = double(temp.f32);
	// fmuls f29,f31,f30
	f29.f64 = double(float(f31.f64 * f30.f64));
	// bl 0x82200b00
	ctx.lr = 0x821B57FC;
	sub_82200B00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200a08
	ctx.lr = 0x821B5804;
	sub_82200A08(ctx, base);
	// lfs f0,10484(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10484);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f31,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200760
	ctx.lr = 0x821B5820;
	sub_82200760(ctx, base);
	// lfs f0,10488(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821b5830
	if (!ctx.cr6.gt) goto loc_821B5830;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_821B5830:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200a10
	ctx.lr = 0x821B5838;
	sub_82200A10(ctx, base);
	// fadds f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f29.f64));
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200770
	ctx.lr = 0x821B584C;
	sub_82200770(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82200a18
	ctx.lr = 0x821B5854;
	sub_82200A18(ctx, base);
	// lfs f0,10492(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200780
	ctx.lr = 0x821B5868;
	sub_82200780(ctx, base);
loc_821B5868:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b58f4
	if (ctx.cr0.eq) goto loc_821B58F4;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// bl 0x820e68b8
	ctx.lr = 0x821B5884;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-18020
	ctx.r5.s64 = ctx.r11.s64 + -18020;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x821B589C;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// lfs f0,-10732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10732);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820e68b8
	ctx.lr = 0x821B58C0;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// addi r10,r10,28080
	ctx.r10.s64 = ctx.r10.s64 + 28080;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfd f2,9984(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 9984);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821B58F4;
	sub_821EACB0(ctx, base);
loc_821B58F4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5928
	if (!ctx.cr6.eq) goto loc_821B5928;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5bc0
	if (!ctx.cr6.eq) goto loc_821B5BC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821B5928;
	sub_8212F220(ctx, base);
loc_821B5928:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5bc0
	if (!ctx.cr6.eq) goto loc_821B5BC0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r8,6(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 6);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-32168
	r28.s64 = -2108162048;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f29,9948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9948);
	f29.f64 = double(temp.f32);
	// addi r27,r11,9936
	r27.s64 = ctx.r11.s64 + 9936;
	// lfs f30,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f30.f64 = double(temp.f32);
	// bne 0x821b5a78
	if (!ctx.cr0.eq) goto loc_821B5A78;
	// bl 0x821159c8
	ctx.lr = 0x821B5964;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b5a78
	if (!ctx.cr0.eq) goto loc_821B5A78;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821b5a78
	if (ctx.cr6.lt) goto loc_821B5A78;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821b5a78
	if (!ctx.cr6.lt) goto loc_821B5A78;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821b599c
	if (!ctx.cr6.eq) goto loc_821B599C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821b5a78
	if (!ctx.cr6.eq) goto loc_821B5A78;
loc_821B599C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5a78
	if (!ctx.cr6.eq) goto loc_821B5A78;
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5a78
	if (!ctx.cr0.eq) goto loc_821B5A78;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821b59ec
	if (!ctx.cr6.eq) goto loc_821B59EC;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b59ec
	if (ctx.cr0.eq) goto loc_821B59EC;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b59ec
	if (ctx.cr0.eq) goto loc_821B59EC;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lbz r10,27(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821b5a78
	if (ctx.cr6.eq) goto loc_821B5A78;
loc_821B59EC:
	// lwz r11,-9912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5a58
	if (!ctx.cr6.eq) goto loc_821B5A58;
	// lwz r11,1852(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5a58
	if (ctx.cr0.eq) goto loc_821B5A58;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b5a18
	if (!ctx.cr6.eq) goto loc_821B5A18;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821B5A18:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821B5A28;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821B5A50;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9912(r28)
	REX_STORE_U32(r28.u32 + -9912, ctx.r11.u32);
loc_821B5A58:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5a78
	if (ctx.cr0.eq) goto loc_821B5A78;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_821B5A78:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5bc0
	if (!ctx.cr0.eq) goto loc_821B5BC0;
	// bl 0x821159c8
	ctx.lr = 0x821B5A94;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b5bc0
	if (!ctx.cr0.eq) goto loc_821B5BC0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821b5bc0
	if (ctx.cr6.lt) goto loc_821B5BC0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821b5bc0
	if (!ctx.cr6.lt) goto loc_821B5BC0;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821b5acc
	if (!ctx.cr6.eq) goto loc_821B5ACC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821b5bc0
	if (!ctx.cr6.eq) goto loc_821B5BC0;
loc_821B5ACC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5bc0
	if (!ctx.cr6.eq) goto loc_821B5BC0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b5bc0
	if (!ctx.cr0.eq) goto loc_821B5BC0;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821b5b2c
	if (!ctx.cr6.eq) goto loc_821B5B2C;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b5b2c
	if (ctx.cr0.eq) goto loc_821B5B2C;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b5b2c
	if (ctx.cr0.eq) goto loc_821B5B2C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821b5bc0
	if (ctx.cr6.eq) goto loc_821B5BC0;
loc_821B5B2C:
	// lwz r11,-9912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b5b98
	if (!ctx.cr6.eq) goto loc_821B5B98;
	// lwz r11,1852(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5b98
	if (ctx.cr0.eq) goto loc_821B5B98;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b5b58
	if (!ctx.cr6.eq) goto loc_821B5B58;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821B5B58:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821B5B68;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821B5B90;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9912(r28)
	REX_STORE_U32(r28.u32 + -9912, ctx.r11.u32);
loc_821B5B98:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5bc0
	if (ctx.cr0.eq) goto loc_821B5BC0;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_821B5BC0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821b5bd8
	if (!ctx.cr6.lt) goto loc_821B5BD8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x821b5c18
	if (!ctx.cr6.eq) goto loc_821B5C18;
loc_821B5BD8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,5
	ctx.r9.s64 = 5;
	// sth r10,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r10.u16);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// addi r10,r9,-8304
	ctx.r10.s64 = ctx.r9.s64 + -8304;
	// lfs f1,16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821B5C18;
	sub_821EB660(ctx, base);
loc_821B5C18:
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
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821D7AB0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,13816
	ctx.r12.s64 = ctx.r12.s64 + 13816;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// nop 
	// addi r12,r12,31464
	ctx.r12.s64 = ctx.r12.s64 + 31464;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821D7B10;
	case 1:
		goto loc_821D7B40;
	case 2:
		goto loc_821D7B10;
	case 3:
		goto loc_821D7B18;
	case 4:
		goto loc_821D7B08;
	case 5:
		goto loc_821D7B48;
	case 6:
		goto loc_821D7B4C;
	case 7:
		goto loc_821D7B4C;
	case 8:
		goto loc_821D7B4C;
	case 9:
		goto loc_821D7B4C;
	case 10:
		goto loc_821D7AF0;
	case 11:
		goto loc_821D7AF8;
	case 12:
		goto loc_821D7AF8;
	case 13:
		goto loc_821D7B4C;
	case 14:
		goto loc_821D7B08;
	case 15:
		goto loc_821D7B4C;
	case 16:
		goto loc_821D7B20;
	case 17:
		goto loc_821D7B18;
	case 18:
		goto loc_821D7B4C;
	case 19:
		goto loc_821D7AF0;
	case 20:
		goto loc_821D7B20;
	case 21:
		goto loc_821D7B00;
	case 22:
		goto loc_821D7AE8;
	case 23:
		goto loc_821D7AE8;
	case 24:
		goto loc_821D7B38;
	case 25:
		goto loc_821D7B00;
	case 26:
		goto loc_821D7B4C;
	case 27:
		goto loc_821D7B30;
	case 28:
		goto loc_821D7B28;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821D7AE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821D7AF0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821D7AF8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821D7B00:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_821D7B08:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_821D7B10:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_821D7B18:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_821D7B20:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_821D7B28:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_821D7B30:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_821D7B38:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_821D7B40:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_821D7B48:
	// li r3,14
	ctx.r3.s64 = 14;
loc_821D7B4C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8F38) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r7,r11,432
	ctx.r7.s64 = ctx.r11.s64 + 432;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r7,2440
	ctx.r10.s64 = ctx.r7.s64 + 2440;
	// lha r11,32(r7)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 32));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821d8e30
	ctx.lr = 0x821D8F68;
	sub_821D8E30(ctx, base);
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r8,2(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// lbz r6,3(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r5,3(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// mulli r9,r9,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// mulli r9,r9,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821d9024
	if (!ctx.cr6.lt) goto loc_821D9024;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r7,2444
	ctx.r6.s64 = ctx.r7.s64 + 2444;
	// bl 0x821d8e30
	ctx.lr = 0x821D8FD0;
	sub_821D8E30(ctx, base);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lwz r11,36(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// addi r8,r10,-7280
	ctx.r8.s64 = ctx.r10.s64 + -7280;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d9020
	if (ctx.cr0.eq) goto loc_821D9020;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_821D8FFC:
	// lwzu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// lwz r6,36(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// mulli r6,r6,12
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// lbzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821d8ffc
	if (ctx.cr6.lt) goto loc_821D8FFC;
loc_821D9020:
	// bl 0x821dde20
	ctx.lr = 0x821D9024;
	sub_821DDE20(ctx, base);
loc_821D9024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDE38) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// sth r11,426(r10)
	REX_STORE_U16(ctx.r10.u32 + 426, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DE0F8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821de148
	if (ctx.cr6.eq) goto loc_821DE148;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821de140
	if (ctx.cr6.eq) goto loc_821DE140;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821de138
	if (ctx.cr6.eq) goto loc_821DE138;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821de130
	if (ctx.cr6.eq) goto loc_821DE130;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821de14c
	if (!ctx.cr6.eq) goto loc_821DE14C;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x821de14c
	goto loc_821DE14C;
loc_821DE130:
	// li r3,86
	ctx.r3.s64 = 86;
	// b 0x821de14c
	goto loc_821DE14C;
loc_821DE138:
	// li r3,85
	ctx.r3.s64 = 85;
	// b 0x821de14c
	goto loc_821DE14C;
loc_821DE140:
	// li r3,84
	ctx.r3.s64 = 84;
	// b 0x821de14c
	goto loc_821DE14C;
loc_821DE148:
	// li r3,83
	ctx.r3.s64 = 83;
loc_821DE14C:
	// b 0x821dde50
	sub_821DDE50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E0388) {
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
	ctx.lr = 0x821E0390;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r24,r10,432
	r24.s64 = ctx.r10.s64 + 432;
	// addi r27,r11,31432
	r27.s64 = ctx.r11.s64 + 31432;
	// lwz r28,31432(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 31432);
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// lwz r26,4(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e0918
	if (!ctx.cr6.eq) goto loc_821E0918;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,320
	r31.s64 = ctx.r11.s64 + 320;
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821e0918
	if (ctx.cr6.lt) goto loc_821E0918;
	// li r23,0
	r23.s64 = 0;
	// beq cr6,0x821e0754
	if (ctx.cr6.eq) goto loc_821E0754;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821e06a0
	if (ctx.cr6.lt) goto loc_821E06A0;
	// beq cr6,0x821e0474
	if (ctx.cr6.eq) goto loc_821E0474;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821e06b4
	if (ctx.cr6.lt) goto loc_821E06B4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821e08f0
	if (!ctx.cr6.eq) goto loc_821E08F0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821e0418
	if (!ctx.cr6.eq) goto loc_821E0418;
	// bl 0x820edf28
	ctx.lr = 0x821E0404;
	sub_820EDF28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e08f0
	if (ctx.cr0.eq) goto loc_821E08F0;
	// bl 0x820f0e68
	ctx.lr = 0x821E0410;
	sub_820F0E68(ctx, base);
loc_821E0410:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821e08ec
	goto loc_821E08EC;
loc_821E0418:
	// lhz r11,30(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 30);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821e08f0
	if (!ctx.cr6.eq) goto loc_821E08F0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e08f0
	if (ctx.cr6.eq) goto loc_821E08F0;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,344(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 344);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r10,-8304
	ctx.r11.s64 = ctx.r10.s64 + -8304;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 492);
	// addis r3,r11,47
	ctx.r3.s64 = ctx.r11.s64 + 3080192;
	// addi r3,r3,-12288
	ctx.r3.s64 = ctx.r3.s64 + -12288;
	// bl 0x821af9d8
	ctx.lr = 0x821E0460;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x820e6b50
	ctx.lr = 0x821E0470;
	sub_820E6B50(ctx, base);
	// b 0x821e08f0
	goto loc_821E08F0;
loc_821E0474:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r26,r11,-7176
	r26.s64 = ctx.r11.s64 + -7176;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821e04b0
	if (!ctx.cr6.eq) goto loc_821E04B0;
	// bl 0x821e0c10
	ctx.lr = 0x821E048C;
	sub_821E0C10(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x821e04a0
	if (!ctx.cr6.lt) goto loc_821E04A0;
	// bl 0x821e0c10
	ctx.lr = 0x821E0498;
	sub_821E0C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e0918
	if (!ctx.cr0.eq) goto loc_821E0918;
loc_821E04A0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821e04b0
	if (!ctx.cr6.eq) goto loc_821E04B0;
	// bl 0x821d17e8
	ctx.lr = 0x821E04B0;
	sub_821D17E8(ctx, base);
loc_821E04B0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r25,r11,5476
	r25.s64 = ctx.r11.s64 + 5476;
	// lwz r3,-8(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + -8);
	// bl 0x8212b8e8
	ctx.lr = 0x821E04C0;
	sub_8212B8E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e08f0
	if (ctx.cr0.eq) goto loc_821E08F0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r11,-8304
	r28.s64 = ctx.r11.s64 + -8304;
	// addi r29,r10,15428
	r29.s64 = ctx.r10.s64 + 15428;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,436(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 436);
	// bl 0x821af9d8
	ctx.lr = 0x821E04EC;
	sub_821AF9D8(ctx, base);
	// lwz r11,436(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 436);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af9f8
	ctx.lr = 0x821E0504;
	sub_821AF9F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,15416
	ctx.r4.s64 = ctx.r11.s64 + 15416;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x821E051C;
	sub_822D55F8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// ble cr6,0x821e05dc
	if (!ctx.cr6.gt) goto loc_821E05DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x821ee990
	ctx.lr = 0x821E0538;
	sub_821EE990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e05dc
	if (ctx.cr0.eq) goto loc_821E05DC;
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne 0x821e059c
	if (!ctx.cr0.eq) goto loc_821E059C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r6,r8,15408
	ctx.r6.s64 = ctx.r8.s64 + 15408;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,736
	ctx.r8.s64 = ctx.r10.s64 + 736;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x821f7d50
	ctx.lr = 0x821E0578;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e0594
	if (ctx.cr0.eq) goto loc_821E0594;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821e0598
	goto loc_821E0598;
loc_821E0594:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_821E0598:
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_821E059C:
	// addi r11,r30,80
	ctx.r11.s64 = r30.s64 + 80;
	// addi r29,r11,32
	r29.s64 = ctx.r11.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e01b0
	ctx.lr = 0x821E05AC;
	sub_820E01B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// stw r29,92(r30)
	REX_STORE_U32(r30.u32 + 92, r29.u32);
	// sth r23,96(r30)
	REX_STORE_U16(r30.u32 + 96, r23.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r11,98(r30)
	REX_STORE_U16(r30.u32 + 98, ctx.r11.u16);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r10,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// sth r23,100(r30)
	REX_STORE_U16(r30.u32 + 100, r23.u16);
	// stb r23,103(r30)
	REX_STORE_U8(r30.u32 + 103, r23.u8);
	// stb r23,102(r30)
	REX_STORE_U8(r30.u32 + 102, r23.u8);
	// bl 0x821e7880
	ctx.lr = 0x821E05DC;
	sub_821E7880(ctx, base);
loc_821E05DC:
	// bl 0x821dfe58
	ctx.lr = 0x821E05E0;
	sub_821DFE58(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// stw r23,0(r25)
	REX_STORE_U32(r25.u32 + 0, r23.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821e068c
	if (ctx.cr6.eq) goto loc_821E068C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x821e068c
	if (ctx.cr6.eq) goto loc_821E068C;
	// lhz r11,2(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821e0410
	if (!ctx.cr6.eq) goto loc_821E0410;
	// lhz r11,30(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 30);
	// lwz r10,492(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 492);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821e0670
	if (!ctx.cr6.eq) goto loc_821E0670;
	// stw r23,32(r31)
	REX_STORE_U32(r31.u32 + 32, r23.u32);
	// addis r29,r10,47
	r29.s64 = ctx.r10.s64 + 3080192;
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r4,344(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 344);
	// lwz r30,172(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 172);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r29,r29,-12288
	r29.s64 = r29.s64 + -12288;
	// bl 0x820e6878
	ctx.lr = 0x821E0638;
	sub_820E6878(ctx, base);
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r7,r31,24
	ctx.r7.s64 = r31.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// bl 0x821f7aa0
	ctx.lr = 0x821E066C;
	sub_821F7AA0(ctx, base);
	// b 0x821e0698
	goto loc_821E0698;
loc_821E0670:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,28(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 28);
	// addis r4,r10,47
	ctx.r4.s64 = ctx.r10.s64 + 3080192;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r4,r4,-12288
	ctx.r4.s64 = ctx.r4.s64 + -12288;
	// bl 0x820f0df0
	ctx.lr = 0x821E0688;
	sub_820F0DF0(ctx, base);
	// b 0x821e0410
	goto loc_821E0410;
loc_821E068C:
	// lwz r4,156(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 156);
	// lwz r3,28(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 28);
	// bl 0x820f2760
	ctx.lr = 0x821E0698;
	sub_820F2760(ctx, base);
loc_821E0698:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821e08ec
	goto loc_821E08EC;
loc_821E06A0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e0918
	if (ctx.cr6.eq) goto loc_821E0918;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
loc_821E06B4:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r10,-8304
	r30.s64 = ctx.r10.s64 + -8304;
	// addi r29,r11,15396
	r29.s64 = ctx.r11.s64 + 15396;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,436(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 436);
	// bl 0x821af9f8
	ctx.lr = 0x821E06D4;
	sub_821AF9F8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x821b0660
	ctx.lr = 0x821E06EC;
	sub_821B0660(ctx, base);
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821e0040
	ctx.lr = 0x821E06F8;
	sub_821E0040(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// lwz r11,-7176(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821e071c
	if (!ctx.cr6.eq) goto loc_821E071C;
	// lhz r11,2(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821e0724
	if (ctx.cr6.eq) goto loc_821E0724;
loc_821E071C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8212b388
	ctx.lr = 0x821E0724;
	sub_8212B388(ctx, base);
loc_821E0724:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,436(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 436);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x821af9d8
	ctx.lr = 0x821E0738;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212b840
	ctx.lr = 0x821E0744;
	sub_8212B840(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,5476
	ctx.r11.s64 = ctx.r11.s64 + 5476;
	// stw r3,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// b 0x821e08f0
	goto loc_821E08F0;
loc_821E0754:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// bne cr6,0x821e07ac
	if (!ctx.cr6.eq) goto loc_821E07AC;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e0780
	if (ctx.cr6.eq) goto loc_821E0780;
	// lwz r10,19668(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 19668);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x821e0918
	if (!ctx.cr6.eq) goto loc_821E0918;
loc_821E0780:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3812
	ctx.r10.u64 = ctx.r10.u64 | 3812;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e07fc
	if (ctx.cr6.eq) goto loc_821E07FC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,23364
	ctx.r10.u64 = ctx.r10.u64 | 23364;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821e07fc
	if (ctx.cr6.eq) goto loc_821E07FC;
	// b 0x821e0918
	goto loc_821E0918;
loc_821E07AC:
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e07d0
	if (ctx.cr6.eq) goto loc_821E07D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c2f08
	ctx.lr = 0x821E07C8;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e0918
	if (ctx.cr0.eq) goto loc_821E0918;
loc_821E07D0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3812
	ctx.r11.u64 = ctx.r11.u64 | 3812;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e07fc
	if (ctx.cr6.eq) goto loc_821E07FC;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c2f08
	ctx.lr = 0x821E07F4;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e0918
	if (ctx.cr0.eq) goto loc_821E0918;
loc_821E07FC:
	// mr r30,r23
	r30.u64 = r23.u64;
	// bl 0x8212bbf0
	ctx.lr = 0x821E0804;
	sub_8212BBF0(ctx, base);
	// bl 0x82124998
	ctx.lr = 0x821E0808;
	sub_82124998(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r29,r11,-8304
	r29.s64 = ctx.r11.s64 + -8304;
	// lwz r11,-7176(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7176);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821e0894
	if (ctx.cr6.eq) goto loc_821E0894;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821e0844
	if (ctx.cr6.eq) goto loc_821E0844;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821e0894
	if (ctx.cr6.eq) goto loc_821E0894;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x821e0894
	if (ctx.cr6.eq) goto loc_821E0894;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x821e0894
	if (ctx.cr6.eq) goto loc_821E0894;
	// b 0x821e08f0
	goto loc_821E08F0;
loc_821E0844:
	// lhz r11,2(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821e0860
	if (!ctx.cr6.eq) goto loc_821E0860;
	// lhz r11,400(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 400);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821e0860
	if (ctx.cr6.eq) goto loc_821E0860;
	// li r30,1
	r30.s64 = 1;
loc_821E0860:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x821e0898
	if (ctx.cr6.lt) goto loc_821E0898;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x821e0894
	if (!ctx.cr6.gt) goto loc_821E0894;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821e0888
	if (ctx.cr6.eq) goto loc_821E0888;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821e0894
	if (ctx.cr6.eq) goto loc_821E0894;
	// b 0x821e0898
	goto loc_821E0898;
loc_821E0888:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x821e0898
	if (!ctx.cr6.gt) goto loc_821E0898;
loc_821E0894:
	// li r30,1
	r30.s64 = 1;
loc_821E0898:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821e08f0
	if (ctx.cr6.eq) goto loc_821E08F0;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821e01a8
	ctx.lr = 0x821E08AC;
	sub_821E01A8(ctx, base);
	// stw r23,36(r31)
	REX_STORE_U32(r31.u32 + 36, r23.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r6,436(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 436);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r7,r31,24
	ctx.r7.s64 = r31.s64 + 24;
	// stw r23,32(r31)
	REX_STORE_U32(r31.u32 + 32, r23.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bl 0x821f7aa0
	ctx.lr = 0x821E08E8;
	sub_821F7AA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_821E08EC:
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
loc_821E08F0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0918
	if (ctx.cr6.eq) goto loc_821E0918;
	// lhz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 20);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x821e0914
	if (!ctx.cr6.eq) goto loc_821E0914;
	// li r10,14
	ctx.r10.s64 = 14;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// b 0x821e0918
	goto loc_821E0918;
loc_821E0914:
	// sth r23,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r23.u16);
loc_821E0918:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821F3DE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
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

DEFINE_REX_FUNC(sub_821F4978) {
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
	ctx.lr = 0x821F4980;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f49fc
	if (ctx.cr6.eq) goto loc_821F49FC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f49fc
	if (!ctx.cr6.gt) goto loc_821F49FC;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_821F49B4:
	// lwz r28,16(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f49e0
	if (ctx.cr6.eq) goto loc_821F49E0;
	// lwz r11,424(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 424);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x821f3f40
	ctx.lr = 0x821F49D4;
	sub_821F3F40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r30,r28
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// bl 0x822b0df0
	ctx.lr = 0x821F49E0;
	sub_822B0DF0(ctx, base);
loc_821F49E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f49b4
	if (ctx.cr6.lt) goto loc_821F49B4;
loc_821F49FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821f4a34
	if (ctx.cr6.lt) goto loc_821F4A34;
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f3020
	ctx.lr = 0x821F4A1C;
	sub_821F3020(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,420(r27)
	REX_STORE_U32(r27.u32 + 420, ctx.r11.u32);
	// bl 0x821f4670
	ctx.lr = 0x821F4A34;
	sub_821F4670(ctx, base);
loc_821F4A34:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f3c98
	ctx.lr = 0x821F4A40;
	sub_821F3C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f4220
	ctx.lr = 0x821F4A48;
	sub_821F4220(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f4a70
	if (ctx.cr6.eq) goto loc_821F4A70;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f4a70
	if (ctx.cr6.eq) goto loc_821F4A70;
loc_821F4A64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f4a64
	if (ctx.cr6.lt) goto loc_821F4A64;
loc_821F4A70:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f4a80
	if (ctx.cr6.eq) goto loc_821F4A80;
	// bl 0x822ad960
	ctx.lr = 0x821F4A80;
	sub_822AD960(ctx, base);
loc_821F4A80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821F9A58) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f38
	ctx.lr = 0x821F9A70;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,12(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lfs f29,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f29.f64 = double(temp.f32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e01b0
	ctx.lr = 0x821F9AB8;
	sub_820E01B0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e0778
	ctx.lr = 0x821F9AC8;
	sub_820E0778(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e01b0
	ctx.lr = 0x821F9AD0;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f10,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// lfs f9,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x820e0590
	ctx.lr = 0x821F9B40;
	sub_820E0590(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e1ec0
	ctx.lr = 0x821F9B50;
	sub_820E1EC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x821F9B94;
	sub_820E1DF8(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821F9BA0;
	sub_820E0130(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bge cr6,0x821f9bb0
	if (!ctx.cr6.lt) goto loc_821F9BB0;
	// fadds f30,f30,f31
	f30.f64 = double(float(f30.f64 + f31.f64));
loc_821F9BB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x821F9BB8;
	sub_820E22E8(ctx, base);
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(f30.f64, ctx.f12.f64);
	// ble cr6,0x821f9c18
	if (!ctx.cr6.gt) goto loc_821F9C18;
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(f31.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 - f30.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x821f9c14
	if (!ctx.cr6.gt) goto loc_821F9C14;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_821F9C14:
	// fmuls f0,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * f28.f64));
loc_821F9C18:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821f9c28
	if (!ctx.cr6.lt) goto loc_821F9C28;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x821f9c44
	goto loc_821F9C44;
loc_821F9C28:
	// fsubs f12,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bge cr6,0x821f9c44
	if (!ctx.cr6.lt) goto loc_821F9C44;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
loc_821F9C44:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x821F9C50;
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

DEFINE_REX_FUNC(sub_82204700) {
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
	ctx.lr = 0x82204708;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// li r3,576
	ctx.r3.s64 = 576;
	// stw r5,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r27,20(r31)
	REX_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r7,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x822c80d0
	ctx.lr = 0x82204744;
	sub_822C80D0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220475c
	if (ctx.cr0.eq) goto loc_8220475C;
	// bl 0x822cd108
	ctx.lr = 0x82204754;
	sub_822CD108(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82204760
	goto loc_82204760;
loc_8220475C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82204760:
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cc748
	ctx.lr = 0x8220476C;
	sub_822CC748(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cc780
	ctx.lr = 0x82204778;
	sub_822CC780(ctx, base);
	// lwz r29,380(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x822c80c8
	ctx.lr = 0x82204798;
	sub_822C80C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822047A8;
	sub_822D4FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82203958
	ctx.lr = 0x822047B0;
	sub_82203958(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822047cc
	if (ctx.cr6.eq) goto loc_822047CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82204608
	ctx.lr = 0x822047CC;
	sub_82204608(ctx, base);
loc_822047CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822045a0
	ctx.lr = 0x822047D8;
	sub_822045A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x822cd498
	ctx.lr = 0x822047E4;
	sub_822CD498(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x822048cc
	if (!ctx.cr6.gt) goto loc_822048CC;
loc_822047F0:
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// sth r8,14(r9)
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r8.u16);
	// bne cr6,0x82204814
	if (!ctx.cr6.eq) goto loc_82204814;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// b 0x82204830
	goto loc_82204830;
loc_82204814:
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwz r9,-16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -16);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82204830:
	// addi r9,r11,13
	ctx.r9.s64 = ctx.r11.s64 + 13;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r7.u32);
	// bne cr6,0x8220484c
	if (!ctx.cr6.eq) goto loc_8220484C;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// b 0x82204868
	goto loc_82204868;
loc_8220484C:
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwz r9,-12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -12);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82204868:
	// addi r9,r11,21
	ctx.r9.s64 = ctx.r11.s64 + 21;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r8.u32);
	// bne cr6,0x82204884
	if (!ctx.cr6.eq) goto loc_82204884;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x822048a0
	goto loc_822048A0;
loc_82204884:
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,-8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822048A0:
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
	// addi r6,r11,37
	ctx.r6.s64 = ctx.r11.s64 + 37;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r5,r31
	REX_STORE_U32(ctx.r5.u32 + r31.u32, ctx.r10.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// stwx r9,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r9.u32);
	// blt cr6,0x822047f0
	if (ctx.cr6.lt) goto loc_822047F0;
loc_822048CC:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,18544
	ctx.r10.s64 = ctx.r10.s64 + 18544;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822048E4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822048e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822048E4;
	// lis r11,4660
	ctx.r11.s64 = 305397760;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,65244
	ctx.r11.u64 = ctx.r11.u64 | 65244;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82203958
	ctx.lr = 0x82204900;
	sub_82203958(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8220C398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8220C3A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8220f900
	ctx.lr = 0x8220C3B4;
	sub_8220F900(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
loc_8220C3BC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d41ac
	ctx.lr = 0x8220C3D0;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220c3ec
	if (ctx.cr0.lt) goto loc_8220C3EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8220c3f4
	if (ctx.cr6.eq) goto loc_8220C3F4;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x8220c3bc
	if (ctx.cr6.eq) goto loc_8220C3BC;
	// b 0x8220c3f4
	goto loc_8220C3F4;
loc_8220C3EC:
	// bl 0x8220a840
	ctx.lr = 0x8220C3F0;
	sub_8220A840(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8220C3F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8220F920) {
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
	// bl 0x822d4e68
	ctx.lr = 0x8220F928;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x8220fe50
	ctx.lr = 0x8220F948;
	sub_8220FE50(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220f980
	if (ctx.cr0.eq) goto loc_8220F980;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220fdb0
	ctx.lr = 0x8220F960;
	sub_8220FDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8220fb68
	if (ctx.cr0.eq) goto loc_8220FB68;
	// ld r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U64(r20.u32 + 0);
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(r21.u32 + 0);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8220fb68
	if (ctx.cr6.lt) goto loc_8220FB68;
loc_8220F978:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220fb6c
	goto loc_8220FB6C;
loc_8220F980:
	// lha r22,6(r29)
	r22.s64 = int16_t(REX_LOAD_U16(r29.u32 + 6));
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(r22.s32, 5, ctx.xer);
	// bgt cr6,0x8220fb68
	if (ctx.cr6.gt) goto loc_8220FB68;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8220fb68
	if (ctx.cr6.eq) goto loc_8220FB68;
	// li r23,0
	r23.s64 = 0;
	// lhz r25,2(r29)
	r25.u64 = REX_LOAD_U16(r29.u32 + 2);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r31,4(r29)
	r31.u64 = REX_LOAD_U16(r29.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r26,r23
	r26.u64 = r23.u64;
	// bne 0x8220f9e0
	if (!ctx.cr0.eq) goto loc_8220F9E0;
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// extsh r10,r25
	ctx.r10.s64 = r25.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8220f9d0
	if (!ctx.cr6.lt) goto loc_8220F9D0;
	// lhz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// b 0x8220f9e4
	goto loc_8220F9E4;
loc_8220F9D0:
	// lhz r28,112(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// bgt cr6,0x8220f9e4
	if (ctx.cr6.gt) goto loc_8220F9E4;
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x8220f9e4
	goto loc_8220F9E4;
loc_8220F9E0:
	// lhz r28,112(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
loc_8220F9E4:
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 10);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 12);
	// lhz r8,14(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 14);
	// sth r28,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r25,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// sth r24,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r23,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r23.u16);
	// sth r8,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// bl 0x824d442c
	ctx.lr = 0x8220FA20;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220fb68
	if (ctx.cr0.eq) goto loc_8220FB68;
	// extsh r27,r31
	r27.s64 = r31.s16;
loc_8220FA2C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d41cc
	ctx.lr = 0x8220FA38;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lha r11,142(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 142));
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// ble cr6,0x8220fa5c
	if (!ctx.cr6.gt) goto loc_8220FA5C;
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 100));
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
loc_8220FA54:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8220fa74
	goto loc_8220FA74;
loc_8220FA5C:
	// bge cr6,0x8220fa70
	if (!ctx.cr6.lt) goto loc_8220FA70;
	// lhz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8220fa54
	goto loc_8220FA54;
loc_8220FA70:
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
loc_8220FA74:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// ble cr6,0x8220fad0
	if (!ctx.cr6.gt) goto loc_8220FAD0;
	// b 0x8220fa8c
	goto loc_8220FA8C;
loc_8220FA88:
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
loc_8220FA8C:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d442c
	ctx.lr = 0x8220FAA0;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220fad0
	if (ctx.cr0.eq) goto loc_8220FAD0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d41cc
	ctx.lr = 0x8220FAB4;
	__imp__RtlTimeToTimeFields(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(r31.s32, r22.s32, ctx.xer);
	// lhz r30,132(r1)
	r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// blt cr6,0x8220fa88
	if (ctx.cr6.lt) goto loc_8220FA88;
loc_8220FAD0:
	// sth r30,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d442c
	ctx.lr = 0x8220FAE0;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220fb68
	if (ctx.cr0.eq) goto loc_8220FB68;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220fb74
	if (ctx.cr0.eq) goto loc_8220FB74;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 100));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220fb14
	if (ctx.cr6.lt) goto loc_8220FB14;
	// bne cr6,0x8220fb74
	if (!ctx.cr6.eq) goto loc_8220FB74;
	// ld r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U64(r21.u32 + 0);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x8220fb74
	if (!ctx.cr6.lt) goto loc_8220FB74;
loc_8220FB14:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 10);
	// lhz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,14(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 14);
	// sth r25,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// mr r26,r23
	r26.u64 = r23.u64;
	// sth r28,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r24,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r8,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// sth r23,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r23.u16);
	// bl 0x824d442c
	ctx.lr = 0x8220FB60;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220fa2c
	if (!ctx.cr0.eq) goto loc_8220FA2C;
loc_8220FB68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220FB6C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb8
	return;
loc_8220FB74:
	// std r9,0(r20)
	REX_STORE_U64(r20.u32 + 0, ctx.r9.u64);
	// b 0x8220f978
	goto loc_8220F978;
}

DEFINE_REX_FUNC(sub_82216A20) {
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
	// bl 0x824d419c
	ctx.lr = 0x82216A3C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82216a50
	if (!ctx.cr6.eq) goto loc_82216A50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x82216a58
	goto loc_82216A58;
loc_82216A50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_82216A58:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82216ca4
	if (ctx.cr6.gt) goto loc_82216CA4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,27880
	ctx.r12.s64 = ctx.r12.s64 + 27880;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32223
	ctx.r12.s64 = -2111766528;
	// nop 
	// addi r12,r12,27288
	ctx.r12.s64 = ctx.r12.s64 + 27288;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82216B28;
	case 1:
		goto loc_82216B58;
	case 2:
		goto loc_82216ADC;
	case 3:
		goto loc_82216A98;
	case 4:
		goto loc_82216CA4;
	case 5:
		goto loc_82216B84;
	case 6:
		goto loc_82216BB0;
	case 7:
		goto loc_82216BCC;
	case 8:
		goto loc_82216BE8;
	case 9:
		goto loc_82216C18;
	case 10:
		goto loc_82216C48;
	case 11:
		goto loc_82216C78;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82216A98:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82216ca4
	if (!ctx.cr0.eq) goto loc_82216CA4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82216ac0
	if (ctx.cr0.eq) goto loc_82216AC0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// divwu r4,r11,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x82223740
	ctx.lr = 0x82216AC0;
	sub_82223740(ctx, base);
loc_82216AC0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82216ca4
	if (ctx.cr0.eq) goto loc_82216CA4;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7296(r10)
	REX_STORE_U32(ctx.r10.u32 + -7296, ctx.r11.u32);
	// b 0x82216ca4
	goto loc_82216CA4;
loc_82216ADC:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216b00
	if (ctx.cr6.eq) goto loc_82216B00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b00
	if (ctx.cr6.eq) goto loc_82216B00;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82213c28
	ctx.lr = 0x82216B00;
	sub_82213C28(ctx, base);
loc_82216B00:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r10,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x823cd250
	ctx.lr = 0x82216B18;
	sub_823CD250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82216B1C:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823cd250
	ctx.lr = 0x82216B24;
	sub_823CD250(ctx, base);
	// b 0x82216ca4
	goto loc_82216CA4;
loc_82216B28:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216b4c
	if (ctx.cr6.eq) goto loc_82216B4C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b4c
	if (ctx.cr6.eq) goto loc_82216B4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82213c28
	ctx.lr = 0x82216B4C;
	sub_82213C28(ctx, base);
loc_82216B4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82216b1c
	goto loc_82216B1C;
loc_82216B58:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216b7c
	if (ctx.cr6.eq) goto loc_82216B7C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b7c
	if (ctx.cr6.eq) goto loc_82216B7C;
	// li r5,11
	ctx.r5.s64 = 11;
loc_82216B70:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82213c28
	ctx.lr = 0x82216B7C;
	sub_82213C28(ctx, base);
loc_82216B7C:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x82216b1c
	goto loc_82216B1C;
loc_82216B84:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216ba8
	if (ctx.cr6.eq) goto loc_82216BA8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216ba8
	if (ctx.cr6.eq) goto loc_82216BA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82213c28
	ctx.lr = 0x82216BA8;
	sub_82213C28(ctx, base);
loc_82216BA8:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x82216b1c
	goto loc_82216B1C;
loc_82216BB0:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216b7c
	if (ctx.cr6.eq) goto loc_82216B7C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b7c
	if (ctx.cr6.eq) goto loc_82216B7C;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82216b70
	goto loc_82216B70;
loc_82216BCC:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216b7c
	if (ctx.cr6.eq) goto loc_82216B7C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b7c
	if (ctx.cr6.eq) goto loc_82216B7C;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x82216b70
	goto loc_82216B70;
loc_82216BE8:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216c0c
	if (ctx.cr6.eq) goto loc_82216C0C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216c0c
	if (ctx.cr6.eq) goto loc_82216C0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x82213c28
	ctx.lr = 0x82216C0C;
	sub_82213C28(ctx, base);
loc_82216C0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215b28
	ctx.lr = 0x82216C14;
	sub_82215B28(ctx, base);
	// b 0x82216ca4
	goto loc_82216CA4;
loc_82216C18:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216c3c
	if (ctx.cr6.eq) goto loc_82216C3C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216c3c
	if (ctx.cr6.eq) goto loc_82216C3C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x82213c28
	ctx.lr = 0x82216C3C;
	sub_82213C28(ctx, base);
loc_82216C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215758
	ctx.lr = 0x82216C44;
	sub_82215758(ctx, base);
	// b 0x82216ca4
	goto loc_82216CA4;
loc_82216C48:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216c6c
	if (ctx.cr6.eq) goto loc_82216C6C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216c6c
	if (ctx.cr6.eq) goto loc_82216C6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x82213c28
	ctx.lr = 0x82216C6C;
	sub_82213C28(ctx, base);
loc_82216C6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82218418
	ctx.lr = 0x82216C74;
	sub_82218418(ctx, base);
	// b 0x82216ca4
	goto loc_82216CA4;
loc_82216C78:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82216c9c
	if (ctx.cr6.eq) goto loc_82216C9C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216c9c
	if (ctx.cr6.eq) goto loc_82216C9C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x82213c28
	ctx.lr = 0x82216C9C;
	sub_82213C28(ctx, base);
loc_82216C9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82218460
	ctx.lr = 0x82216CA4;
	sub_82218460(ctx, base);
loc_82216CA4:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x82216CB0;
	sub_823CD250(ctx, base);
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

DEFINE_REX_FUNC(sub_82222E80) {
	REX_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82222708
	sub_82222708(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82222F58) {
	REX_FUNC_PROLOGUE();
	// b 0x82222048
	sub_82222048(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82223018) {
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
	ctx.lr = 0x82223020;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x82223054;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82223064
	if (!ctx.cr0.eq) goto loc_82223064;
loc_8222305C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82223130
	goto loc_82223130;
loc_82223064:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82222848
	ctx.lr = 0x822230A8;
	sub_82222848(ctx, base);
	// not r11,r29
	ctx.r11.u64 = ~r29.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwinm r11,r11,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// oris r30,r11,35968
	r30.u64 = ctx.r11.u64 | 2357198848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x822230C8;
	sub_823CD118(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822230e0
	if (!ctx.cr0.eq) goto loc_822230E0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822230D8:
	// bl 0x823cd250
	ctx.lr = 0x822230DC;
	sub_823CD250(ctx, base);
	// b 0x8222305c
	goto loc_8222305C;
loc_822230E0:
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223114
	if (ctx.cr6.eq) goto loc_82223114;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x822230F4;
	sub_823CD118(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne 0x82223114
	if (!ctx.cr0.eq) goto loc_82223114;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x82223108;
	sub_823CD250(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822230d8
	goto loc_822230D8;
loc_82223114:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r29,0,0,19
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r22,r10,0,20,31
	r22.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF) | (r22.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r22,48(r31)
	REX_STORE_U32(r31.u32 + 48, r22.u32);
loc_82223130:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82226D68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,11048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,0,13,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,11048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,20,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7F;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,11048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228A80) {
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
	// ble cr6,0x82228aac
	if (!ctx.cr6.gt) goto loc_82228AAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82228AAC;
	sub_82215008(ctx, base);
loc_82228AAC:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r11,r11,15104
	ctx.r11.u64 = ctx.r11.u64 | 15104;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82229A30) {
	REX_FUNC_PROLOGUE();
	// b 0x822152c0
	sub_822152C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82229A38) {
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
	ctx.lr = 0x82229A40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229c0c
	if (ctx.cr6.eq) goto loc_82229C0C;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229c0c
	if (ctx.cr6.eq) goto loc_82229C0C;
	// ld r11,11008(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 11008);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82229c0c
	if (ctx.cr6.eq) goto loc_82229C0C;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bgt cr6,0x82229b20
	if (ctx.cr6.gt) goto loc_82229B20;
	// beq cr6,0x82229bd4
	if (ctx.cr6.eq) goto loc_82229BD4;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82229b0c
	if (ctx.cr6.lt) goto loc_82229B0C;
	// beq cr6,0x82229b0c
	if (ctx.cr6.eq) goto loc_82229B0C;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// beq cr6,0x82229ae0
	if (ctx.cr6.eq) goto loc_82229AE0;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// beq cr6,0x82229aac
	if (ctx.cr6.eq) goto loc_82229AAC;
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// bne cr6,0x82229c0c
	if (!ctx.cr6.eq) goto loc_82229C0C;
	// stw r4,23768(r31)
	REX_STORE_U32(r31.u32 + 23768, ctx.r4.u32);
	// b 0x82229c0c
	goto loc_82229C0C;
loc_82229AAC:
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,-6160(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -6160);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,-6160(r9)
	REX_STORE_U32(ctx.r9.u32 + -6160, ctx.r11.u32);
	// bne cr6,0x82229c0c
	if (!ctx.cr6.eq) goto loc_82229C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,22040(r31)
	REX_STORE_U32(r31.u32 + 22040, ctx.r10.u32);
	// stw r11,22032(r31)
	REX_STORE_U32(r31.u32 + 22032, ctx.r11.u32);
	// stw r11,22036(r31)
	REX_STORE_U32(r31.u32 + 22036, ctx.r11.u32);
	// b 0x82229c0c
	goto loc_82229C0C;
loc_82229AE0:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,-6160(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -6160);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,-6160(r10)
	REX_STORE_U32(ctx.r10.u32 + -6160, ctx.r11.u32);
	// bne cr6,0x82229c0c
	if (!ctx.cr6.eq) goto loc_82229C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22040(r31)
	REX_STORE_U32(r31.u32 + 22040, ctx.r11.u32);
	// b 0x82229c0c
	goto loc_82229C0C;
loc_82229B0C:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22040(r31)
	REX_STORE_U32(r31.u32 + 22040, ctx.r11.u32);
	// stw r11,-6160(r10)
	REX_STORE_U32(ctx.r10.u32 + -6160, ctx.r11.u32);
	// b 0x82229c0c
	goto loc_82229C0C;
loc_82229B20:
	// cmplwi cr6,r3,225
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 225, ctx.xer);
	// beq cr6,0x82229bd4
	if (ctx.cr6.eq) goto loc_82229BD4;
	// cmplwi cr6,r3,226
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 226, ctx.xer);
	// beq cr6,0x82229bd4
	if (ctx.cr6.eq) goto loc_82229BD4;
	// cmplwi cr6,r3,227
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 227, ctx.xer);
	// beq cr6,0x82229bc8
	if (ctx.cr6.eq) goto loc_82229BC8;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x82229c0c
	if (!ctx.cr6.eq) goto loc_82229C0C;
	// lis r28,-32163
	r28.s64 = -2107834368;
	// lwz r11,-6160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -6160);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229b80
	if (ctx.cr0.eq) goto loc_82229B80;
	// lwz r11,21984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21984);
	// lfs f13,22000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 22000);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-29984(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -29984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823cd3b0
	ctx.lr = 0x82229B80;
	sub_823CD3B0(ctx, base);
loc_82229B80:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r29,17
	r29.s64 = 17;
	// addi r11,r11,6816
	ctx.r11.s64 = ctx.r11.s64 + 6816;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
loc_82229B90:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// lwz r10,-6160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + -6160);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229bb8
	if (ctx.cr0.eq) goto loc_82229BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r27,-4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x82229550
	ctx.lr = 0x82229BB0;
	sub_82229550(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823cd3b0
	ctx.lr = 0x82229BB8;
	sub_823CD3B0(ctx, base);
loc_82229BB8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82229b90
	if (!ctx.cr0.eq) goto loc_82229B90;
	// b 0x82229c0c
	goto loc_82229C0C;
loc_82229BC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228740
	ctx.lr = 0x82229BD0;
	sub_82228740(ctx, base);
	// b 0x82229c0c
	goto loc_82229C0C;
loc_82229BD4:
	// lwz r11,21940(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229c0c
	if (ctx.cr6.eq) goto loc_82229C0C;
	// bl 0x823cd280
	ctx.lr = 0x82229BE4;
	sub_823CD280(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82229c0c
	if (!ctx.cr6.eq) goto loc_82229C0C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82229c08
	if (!ctx.cr6.gt) goto loc_82229C08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82229C08;
	sub_82215008(ctx, base);
loc_82229C08:
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82229C0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82234210) {
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
	ctx.lr = 0x82234218;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicl r11,r4,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82234248
	if (!ctx.cr6.eq) goto loc_82234248;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822342c4
	if (!ctx.cr0.eq) goto loc_822342C4;
loc_82234248:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824d477c
	ctx.lr = 0x82234250;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822342c4
	if (!ctx.cr0.eq) goto loc_822342C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x824d3ecc
	ctx.lr = 0x82234288;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82234298
	if (!ctx.cr0.lt) goto loc_82234298;
	// li r30,1627
	r30.s64 = 1627;
	// b 0x822342bc
	goto loc_822342BC;
loc_82234298:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822342b8
	if (!ctx.cr6.eq) goto loc_822342B8;
	// bl 0x8220a878
	ctx.lr = 0x822342A4;
	sub_8220A878(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x822342bc
	goto loc_822342BC;
loc_822342B8:
	// li r30,997
	r30.s64 = 997;
loc_822342BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x822342C4;
	__imp__ObDereferenceObject(ctx, base);
loc_822342C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82235930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82235938;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x822359a0
	if (ctx.cr6.gt) goto loc_822359A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82234fc0
	ctx.lr = 0x8223595C;
	sub_82234FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822359a8
	if (ctx.cr0.lt) goto loc_822359A8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82235978
	if (ctx.cr6.eq) goto loc_82235978;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82235978:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1F0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bne 0x822359a8
	if (!ctx.cr0.eq) goto loc_822359A8;
loc_822359A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_822359A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82237508) {
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
	ctx.lr = 0x82237510;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// lwz r9,24(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bl 0x8223b8c8
	ctx.lr = 0x82237558;
	sub_8223B8C8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x822375d0
	if (ctx.cr0.lt) goto loc_822375D0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822375b4
	if (!ctx.cr6.gt) goto loc_822375B4;
	// li r30,0
	r30.s64 = 0;
loc_82237574:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82236eb0
	ctx.lr = 0x822375A0;
	sub_82236EB0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82237574
	if (ctx.cr6.lt) goto loc_82237574;
loc_822375B4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822375d0
	if (!ctx.cr6.eq) goto loc_822375D0;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8223c518
	ctx.lr = 0x822375CC;
	sub_8223C518(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_822375D0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223A078) {
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
	ctx.lr = 0x8223A080;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// bl 0x824d48dc
	ctx.lr = 0x8223A098;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r29,1
	r29.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// b 0x8223a118
	goto loc_8223A118;
loc_8223A0A8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
loc_8223A0B0:
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
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223a0d4
	if (!ctx.cr6.eq) goto loc_8223A0D4;
	// stwcx. r8,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8223a0b0
	if (!ctx.cr0.eq) goto loc_8223A0B0;
	// b 0x8223a0dc
	goto loc_8223A0DC;
loc_8223A0D4:
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
loc_8223A0DC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8223a124
	if (ctx.cr6.eq) goto loc_8223A124;
loc_8223A0E8:
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
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x8223a10c
	if (!ctx.cr6.eq) goto loc_8223A10C;
	// stwcx. r28,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8223a0e8
	if (!ctx.cr0.eq) goto loc_8223A0E8;
	// b 0x8223a114
	goto loc_8223A114;
loc_8223A10C:
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
loc_8223A114:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8223A118:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223a0a8
	if (!ctx.cr6.eq) goto loc_8223A0A8;
	// b 0x8223a130
	goto loc_8223A130;
loc_8223A124:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223a124
	if (!ctx.cr6.eq) goto loc_8223A124;
loc_8223A130:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a144
	if (ctx.cr6.eq) goto loc_8223A144;
	// bl 0x824d48cc
	ctx.lr = 0x8223A140;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_8223A144:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8223fd28
	ctx.lr = 0x8223A14C;
	sub_8223FD28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x822387a0
	ctx.lr = 0x8223A164;
	sub_822387A0(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x82239920
	ctx.lr = 0x8223A170;
	sub_82239920(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223a1ac
	if (!ctx.cr6.gt) goto loc_8223A1AC;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
loc_8223A184:
	// lwz r3,-16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r28,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r28.u32);
	r29.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223a184
	if (ctx.cr6.lt) goto loc_8223A184;
loc_8223A1AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82244CF8) {
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
	ctx.lr = 0x82244D00;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r30,4
	r30.s64 = 4;
	// cmplwi cr6,r7,320
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 320, ctx.xer);
	// addi r10,r10,18544
	ctx.r10.s64 = ctx.r10.s64 + 18544;
	// bne cr6,0x82244d2c
	if (!ctx.cr6.eq) goto loc_82244D2C;
	// mr r19,r30
	r19.u64 = r30.u64;
	// addi r10,r10,-6912
	ctx.r10.s64 = ctx.r10.s64 + -6912;
	// b 0x82244d30
	goto loc_82244D30;
loc_82244D2C:
	// li r19,5
	r19.s64 = 5;
loc_82244D30:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,-132(r1)
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r19,-140(r1)
	REX_STORE_U32(ctx.r1.u32 + -140, r19.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r21,r9,-6016
	r21.s64 = ctx.r9.s64 + -6016;
	// stw r4,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r4.u32);
	// li r18,1
	r18.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r21,-124(r1)
	REX_STORE_U32(ctx.r1.u32 + -124, r21.u32);
	// li r24,32
	r24.s64 = 32;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x82244fe4
	if (ctx.cr6.lt) goto loc_82244FE4;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r19,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, r19.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// li r26,48
	r26.s64 = 48;
	// li r27,64
	r27.s64 = 64;
	// lvx128 v0,r21,r9
	ea = (r21.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r21,r8
	ea = (r21.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82244D88:
	// slw. r6,r18,r28
	ctx.r6.u64 = r28.u8 & 0x20 ? 0 : (r18.u32 << (r28.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srw r9,r7,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r28.u8 & 0x3F));
	// slw r25,r18,r3
	r25.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// mr r29,r23
	r29.u64 = r23.u64;
	// ble 0x82244fc0
	if (!ctx.cr0.gt) goto loc_82244FC0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
loc_82244DA4:
	// lwz r9,-128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// add r29,r9,r29
	r29.u64 = ctx.r9.u64 + r29.u64;
	// beq cr6,0x82244f2c
	if (ctx.cr6.eq) goto loc_82244F2C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82244fb8
	if (!ctx.cr6.gt) goto loc_82244FB8;
	// addi r8,r25,-1
	ctx.r8.s64 = r25.s64 + -1;
	// addi r9,r5,40
	ctx.r9.s64 = ctx.r5.s64 + 40;
	// rlwinm r4,r8,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r29,24
	ctx.r8.s64 = r29.s64 + 24;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82244DD8:
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,112
	ctx.r4.s64 = 112;
	// lvx128 v61,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,128
	ctx.r3.s64 = 128;
	// lvx128 v60,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r22,-40
	r22.s64 = -40;
	// vperm128 v58,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v56,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v62,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v59,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v59,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r7,-24
	ctx.r7.s64 = -24;
	// vperm128 v59,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r8,-80
	ctx.r8.s64 = ctx.r8.s64 + -80;
	// vperm128 v62,v62,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubfp128 v61,v58,v57
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vsubfp128 v54,v56,v60
	simde_mm_store_ps(ctx.v54.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// vaddfp128 v58,v58,v57
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// addi r4,r8,24
	ctx.r4.s64 = ctx.r8.s64 + 24;
	// vsubfp128 v57,v55,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32)));
	// addi r3,r8,-16
	ctx.r3.s64 = ctx.r8.s64 + -16;
	// vaddfp128 v60,v56,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// li r21,144
	r21.s64 = 144;
	// vsubfp128 v56,v59,v62
	simde_mm_store_ps(ctx.v56.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32)));
	// addi r31,r9,-8
	r31.s64 = ctx.r9.s64 + -8;
	// vaddfp128 v63,v55,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v62,v59,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vpermwi128 v61,v61,228
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x1B));
	// vpermwi128 v59,v54,228
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0x1B));
	// stvx128 v58,r9,r22
	ea = (ctx.r9.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v58,v57,228
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x1B));
	// stvx128 v60,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v60,v56,228
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x1B));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v62,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// stvx128 v61,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r9,32
	ctx.r4.s64 = ctx.r9.s64 + 32;
	// stvlx128 v58,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// stvrx128 v58,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// stvlx128 v60,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r3,r8,-24
	ctx.r3.s64 = ctx.r8.s64 + -24;
	// lvx128 v63,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v61,v62,34
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xDD));
	// vpermwi128 v62,v62,119
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x88));
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// vpermwi128 v60,v63,34
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xDD));
	// vpermwi128 v63,v63,119
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x88));
	// vsubfp128 v59,v61,v62
	simde_mm_store_ps(ctx.v59.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v62,v61,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v61,v60,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v63,v60,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vpermwi128 v60,v59,68
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xBB));
	// stvewx128 v62,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r30
	ea = (r31.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v63,v63,68
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xBB));
	// stvewx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82244dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244DD8;
	// lwz r3,-136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -136);
	// li r18,1
	r18.s64 = 1;
	// lwz r7,52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r19,-140(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r22,-144(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// lwz r21,-124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// b 0x82244fb8
	goto loc_82244FB8;
loc_82244F2C:
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r29,-40
	ctx.r9.s64 = r29.s64 + -40;
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// lvx128 v61,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// vperm128 v60,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v63,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v61,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubfp128 v61,v60,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v62,v60,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v60,v59,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v63,v59,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vpermwi128 v61,v61,228
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x1B));
	// stvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v62,v60,228
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x1B));
	// stvlx128 v61,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// stvlx128 v62,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// lvx128 v63,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v62,v63,34
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xDD));
	// vpermwi128 v63,v63,119
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x88));
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// vsubfp128 v61,v62,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vpermwi128 v62,v61,68
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xBB));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r9,r30
	ea = (ctx.r9.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
loc_82244FB8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x82244da4
	if (ctx.cr0.gt) goto loc_82244DA4;
loc_82244FC0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stw r11,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// mr r23,r22
	r23.u64 = r22.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// stw r3,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, ctx.r3.u32);
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(r28.s32, r19.s32, ctx.xer);
	// ble cr6,0x82244d88
	if (!ctx.cr6.gt) goto loc_82244D88;
loc_82244FE4:
	// slw. r29,r18,r19
	r29.u64 = r19.u8 & 0x20 ? 0 : (r18.u32 << (r19.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x82245090
	if (!ctx.cr0.gt) goto loc_82245090;
	// lwz r9,-132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -132);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r30,r9,32
	r30.s64 = ctx.r9.s64 + 32;
	// li r31,-32
	r31.s64 = -32;
	// li r3,-16
	ctx.r3.s64 = -16;
loc_82245004:
	// li r5,10
	ctx.r5.s64 = 10;
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vsldoi128 v60,v62,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// lvx128 v61,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v62,v63,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// vsldoi128 v58,v58,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82245034:
	// lvx128 v57,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,40
	ctx.r6.s64 = 40;
	// lvx128 v56,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v55,v61,v57
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v54,v59,v56
	simde_mm_store_ps(ctx.v54.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// lvx128 v53,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v56,v60,v56
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// vmsum4fp128 v57,v62,v57
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v52,v63,v53
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v53,v58,v53
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v53.f32), 0xFF));
	// vaddfp128 v55,v55,v54
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v57,v57,v56
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v56,v55,v52
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vaddfp128 v57,v57,v53
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v53.f32)));
	// stvewx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82245034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245034;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r4,r4,80
	ctx.r4.s64 = ctx.r4.s64 + 80;
	// bgt 0x82245004
	if (ctx.cr0.gt) goto loc_82245004;
loc_82245090:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r23,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, r23.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r22,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, r22.u32);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// stw r19,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822452d8
	if (ctx.cr6.lt) goto loc_822452D8;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v63,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r23,0
	r23.s64 = 0;
	// addi r22,r11,-10752
	r22.s64 = ctx.r11.s64 + -10752;
	// lvx128 v62,r21,r8
	ea = (r21.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822450C8:
	// subf r8,r6,r19
	ctx.r8.u64 = r19.u64 - ctx.r6.u64;
	// lwz r31,44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// srw r11,r7,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// slw r24,r18,r8
	r24.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r18,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r6.u8 & 0x3F));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822450e8
	if (ctx.cr6.eq) goto loc_822450E8;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_822450E8:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r8,-132(r1)
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r8.u32);
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822452bc
	if (!ctx.cr6.gt) goto loc_822452BC;
	// addi r8,r22,-32
	ctx.r8.s64 = r22.s64 + -32;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	// rlwinm r20,r11,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r4,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-124(r1)
	REX_STORE_U32(ctx.r1.u32 + -124, ctx.r9.u32);
	// lwzx r25,r23,r8
	r25.u64 = REX_LOAD_U32(r23.u32 + ctx.r8.u32);
loc_82245118:
	// lwz r11,-124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r31,r20,r31
	r31.u64 = r20.u64 + r31.u64;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + r21.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x822452b0
	if (!ctx.cr6.gt) goto loc_822452B0;
	// lwzx r8,r23,r22
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + r22.u32);
	// subf r30,r3,r11
	r30.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r25,r8
	ctx.r11.u64 = ctx.r8.u64 - r25.u64;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// add r29,r11,r25
	r29.u64 = ctx.r11.u64 + r25.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
loc_82245164:
	// addi r29,r9,-36
	r29.s64 = ctx.r9.s64 + -36;
	// lvlx128 v61,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r30,r11
	r27.u64 = r30.u64 + ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-36
	ctx.r7.s64 = -36;
	// addi r8,r8,-40
	ctx.r8.s64 = ctx.r8.s64 + -40;
	// addi r28,r11,-16
	r28.s64 = ctx.r11.s64 + -16;
	// lvrx128 v59,r10,r29
	temp.u32 = ctx.r10.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r9,-20
	r26.s64 = ctx.r9.s64 + -20;
	// lvlx128 v60,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r8,16
	r29.s64 = ctx.r8.s64 + 16;
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v59,r10,r27
	temp.u32 = ctx.r10.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvx128 v13,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-20
	ctx.r7.s64 = -20;
	// addi r27,r5,-20
	r27.s64 = ctx.r5.s64 + -20;
	// vmulfp128 v61,v0,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v60,v13,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vxor128 v11,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v10,v60,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v13,v13,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v12,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v61,v13,228
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x1B));
	// stvlx v0,0,r28
	ea = r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r28,r10
	ea = r28.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx128 v61,r0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r29,r10
	ea = r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// lvlx128 v61,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v59,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r10,r27
	temp.u32 = ctx.r10.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v13,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v60,r10,r26
	temp.u32 = ctx.r10.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vmulfp128 v60,v0,v61
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v61,v12,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vxor128 v11,v60,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v10,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v12,v12,v13,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v13,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v61,v12,228
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x1B));
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f0,f0,f12,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f12,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f10.f64)));
	// stfs f0,-8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// lfs f0,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lfs f12,-4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// bdnz 0x82245164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245164;
	// lwz r5,-132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -132);
	// li r18,1
	r18.s64 = 1;
	// lwz r6,-136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -136);
	// lwz r19,-140(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r7,52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r30,-128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
loc_822452B0:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,-132(r1)
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r5.u32);
	// bgt 0x82245118
	if (ctx.cr0.gt) goto loc_82245118;
loc_822452BC:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r30,-144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// stw r6,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, ctx.r6.u32);
	// stw r30,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, r30.u32);
	// bge 0x822450c8
	if (!ctx.cr0.lt) goto loc_822450C8;
loc_822452D8:
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8226EFF8) {
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
	// bl 0x8225ee88
	ctx.lr = 0x8226F01C;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226f080
	if (ctx.cr0.eq) goto loc_8226F080;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8226f048
	if (!ctx.cr6.eq) goto loc_8226F048;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8226f050
	goto loc_8226F050;
loc_8226F048:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_8226F050:
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d318
	ctx.lr = 0x8226F05C;
	sub_8225D318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226F064;
	sub_8226B6F8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8226f080
	if (ctx.cr6.eq) goto loc_8226F080;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x8226F080;
	sub_822650B0(ctx, base);
loc_8226F080:
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

DEFINE_REX_FUNC(sub_82275100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82275108;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822751c4
	if (ctx.cr6.eq) goto loc_822751C4;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x82275130;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822751c4
	if (ctx.cr0.eq) goto loc_822751C4;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82275148
	if (ctx.cr6.eq) goto loc_82275148;
	// bl 0x822d6a10
	ctx.lr = 0x82275148;
	sub_822D6A10(ctx, base);
loc_82275148:
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82275160
	if (!ctx.cr6.gt) goto loc_82275160;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822751c8
	goto loc_822751C8;
loc_82275160:
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf r8,r30,r11
	ctx.r8.u64 = ctx.r11.u64 - r30.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82275178:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82275178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82275178;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d318
	ctx.lr = 0x82275198;
	sub_8225D318(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x822751b8
	if (!ctx.cr6.gt) goto loc_822751B8;
	// subf r4,r30,r11
	ctx.r4.u64 = ctx.r11.u64 - r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82270c70
	ctx.lr = 0x822751B8;
	sub_82270C70(ctx, base);
loc_822751B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x822751C0;
	sub_8226B6F8(ctx, base);
	// b 0x822751c8
	goto loc_822751C8;
loc_822751C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822751C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82277818) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x8227cd20
	ctx.lr = 0x82277840;
	sub_8227CD20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
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

DEFINE_REX_FUNC(sub_82278978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82278980;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// divwu r10,r5,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822789b8
	if (ctx.cr0.eq) goto loc_822789B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822789fc
	goto loc_822789FC;
loc_822789B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b48
	ctx.lr = 0x822789C0;
	sub_82255B48(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822789d8
	if (!ctx.cr0.eq) goto loc_822789D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822789fc
	goto loc_822789FC;
loc_822789D8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822789E4;
	sub_822D4FA0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r31,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_822789FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227AA30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8227abcc
	if (ctx.cr6.eq) goto loc_8227ABCC;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8227abc0
	if (ctx.cr6.eq) goto loc_8227ABC0;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x8227aad0
	if (ctx.cr6.eq) goto loc_8227AAD0;
	// cmplwi cr6,r11,2041
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2041, ctx.xer);
	// beq cr6,0x8227aab8
	if (ctx.cr6.eq) goto loc_8227AAB8;
	// cmplwi cr6,r11,2042
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2042, ctx.xer);
	// bne cr6,0x8227ac50
	if (!ctx.cr6.eq) goto loc_8227AC50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lfs f13,1380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8227aaac
	if (ctx.cr6.lt) goto loc_8227AAAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8227aaac
	if (ctx.cr6.gt) goto loc_8227AAAC;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x8227ac50
	goto loc_8227AC50;
loc_8227AAAC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8227ac54
	goto loc_8227AC54;
loc_8227AAB8:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8227ac50
	goto loc_8227AC50;
loc_8227AAD0:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-21829
	ctx.r10.s64 = -1430585344;
	// ori r30,r10,52445
	r30.u64 = ctx.r10.u64 | 52445;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8227ac50
	if (!ctx.cr6.eq) goto loc_8227AC50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227ab74
	if (!ctx.cr6.eq) goto loc_8227AB74;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8227ab24
	if (!ctx.cr6.eq) goto loc_8227AB24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227a998
	ctx.lr = 0x8227AB18;
	sub_8227A998(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227ac50
	if (!ctx.cr6.eq) goto loc_8227AC50;
loc_8227AB24:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8227ab4c
	if (!ctx.cr6.eq) goto loc_8227AB4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227a908
	ctx.lr = 0x8227AB3C;
	sub_8227A908(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8227ab60
	goto loc_8227AB60;
loc_8227AB4C:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8227ab68
	if (!ctx.cr6.eq) goto loc_8227AB68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227a950
	ctx.lr = 0x8227AB60;
	sub_8227A950(ctx, base);
loc_8227AB60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8227ab74
	if (ctx.cr6.lt) goto loc_8227AB74;
loc_8227AB68:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8227AB74:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// andi. r10,r11,36
	ctx.r10.u64 = ctx.r11.u64 & 36;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bne cr6,0x8227aba4
	if (!ctx.cr6.eq) goto loc_8227ABA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227a998
	ctx.lr = 0x8227AB8C;
	sub_8227A998(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227ac50
	if (!ctx.cr6.eq) goto loc_8227AC50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227a908
	ctx.lr = 0x8227ABA0;
	sub_8227A908(ctx, base);
	// b 0x8227ac50
	goto loc_8227AC50;
loc_8227ABA4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8227ac50
	if (ctx.cr6.eq) goto loc_8227AC50;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82278790
	ctx.lr = 0x8227ABBC;
	sub_82278790(ctx, base);
	// b 0x8227ac50
	goto loc_8227AC50;
loc_8227ABC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x8227ac50
	goto loc_8227AC50;
loc_8227ABCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82256918
	ctx.lr = 0x8227ABEC;
	sub_82256918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227ac50
	if (ctx.cr0.lt) goto loc_8227AC50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-5768
	r30.s64 = ctx.r11.s64 + -5768;
loc_8227ABFC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227ac50
	if (ctx.cr6.eq) goto loc_8227AC50;
	// bl 0x82246370
	ctx.lr = 0x8227AC0C;
	sub_82246370(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82246190
	ctx.lr = 0x8227AC14;
	sub_82246190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227ac50
	if (ctx.cr0.lt) goto loc_8227AC50;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d7938
	ctx.lr = 0x8227AC28;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227ac3c
	if (!ctx.cr0.eq) goto loc_8227AC3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8227AC3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256918
	ctx.lr = 0x8227AC48;
	sub_82256918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8227abfc
	if (!ctx.cr0.lt) goto loc_8227ABFC;
loc_8227AC50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227AC54:
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

DEFINE_REX_FUNC(sub_82281988) {
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
	ctx.lr = 0x82281990;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,204(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// b 0x822819d8
	goto loc_822819D8;
loc_822819A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822819d4
	if (ctx.cr6.eq) goto loc_822819D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227fec0
	ctx.lr = 0x822819B8;
	sub_8227FEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822819d4
	if (ctx.cr0.eq) goto loc_822819D4;
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// clrlwi r29,r26,16
	r29.u64 = r26.u32 & 0xFFFF;
	// lhz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 36);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x822819ec
	if (!ctx.cr6.lt) goto loc_822819EC;
loc_822819D4:
	// lwz r31,76(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 76);
loc_822819D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822819a4
	if (!ctx.cr6.eq) goto loc_822819A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822819E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822819EC:
	// li r28,0
	r28.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// bl 0x82280c78
	ctx.lr = 0x82281A04;
	sub_82280C78(ctx, base);
	// bl 0x82280c20
	ctx.lr = 0x82281A08;
	sub_82280C20(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,30560
	r31.s64 = ctx.r11.s64 + 30560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227ff40
	ctx.lr = 0x82281A18;
	sub_8227FF40(ctx, base);
	// lhz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 36);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x82281acc
	if (!ctx.cr6.gt) goto loc_82281ACC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82281190
	ctx.lr = 0x82281A30;
	sub_82281190(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82281acc
	if (ctx.cr6.eq) goto loc_82281ACC;
	// lhz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 32);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// sth r26,36(r31)
	REX_STORE_U16(r31.u32 + 36, r26.u16);
	// lhz r11,38(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 38);
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// lhz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 32);
	// lhz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 36);
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// sth r11,32(r30)
	REX_STORE_U16(r30.u32 + 32, ctx.r11.u16);
	// sth r10,36(r30)
	REX_STORE_U16(r30.u32 + 36, ctx.r10.u16);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281a94
	if (ctx.cr6.eq) goto loc_82281A94;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
loc_82281A94:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281abc
	if (ctx.cr6.eq) goto loc_82281ABC;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_82281ABC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82281710
	ctx.lr = 0x82281AC8;
	sub_82281710(ctx, base);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82281ACC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822819e4
	goto loc_822819E4;
}

DEFINE_REX_FUNC(sub_822872A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822872B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822872e0
	if (ctx.cr6.eq) goto loc_822872E0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822872D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822872e4
	goto loc_822872E4;
loc_822872E0:
	// li r31,0
	r31.s64 = 0;
loc_822872E4:
	// lwz r11,392(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 392);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82287314
	if (ctx.cr6.eq) goto loc_82287314;
	// lwz r3,332(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 332);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228730C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,392(r30)
	REX_STORE_U32(r30.u32 + 392, r31.u32);
loc_82287314:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82288AA8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288abc
	if (!ctx.cr6.eq) goto loc_82288ABC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288ABC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82288D90) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288da4
	if (!ctx.cr6.eq) goto loc_82288DA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288DA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289370) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289528) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82289530;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x82289568;
	sub_822D5870(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82222dc0
	ctx.lr = 0x82289578;
	sub_82222DC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82289588
	if (ctx.cr6.eq) goto loc_82289588;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82289588:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82289598
	if (ctx.cr6.eq) goto loc_82289598;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82289598:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x822895A0;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8228B750) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b784
	if (!ctx.cr6.eq) goto loc_8228B784;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r9,60(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,17
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(17));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x8228b78c
	goto loc_8228B78C;
loc_8228B784:
	// lwz r10,60(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8228B78C:
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b7a0
	if (ctx.cr6.eq) goto loc_8228B7A0;
	// lwz r10,64(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_8228B7A0:
	// b 0x8228b170
	sub_8228B170(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228D0D0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82223398
	ctx.lr = 0x8228D0F8;
	sub_82223398(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223398
	ctx.lr = 0x8228D10C;
	sub_82223398(ctx, base);
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

DEFINE_REX_FUNC(sub_8228EA50) {
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
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ea7c
	if (ctx.cr6.eq) goto loc_8228EA7C;
	// bl 0x82216cc8
	ctx.lr = 0x8228EA74;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31396(r31)
	REX_STORE_U32(r31.u32 + 31396, ctx.r11.u32);
loc_8228EA7C:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ea98
	if (ctx.cr6.eq) goto loc_8228EA98;
	// bl 0x82216cc8
	ctx.lr = 0x8228EA90;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31400(r31)
	REX_STORE_U32(r31.u32 + 31400, ctx.r11.u32);
loc_8228EA98:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31404(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228eab4
	if (ctx.cr6.eq) goto loc_8228EAB4;
	// bl 0x82216cc8
	ctx.lr = 0x8228EAAC;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31404(r31)
	REX_STORE_U32(r31.u32 + 31404, ctx.r11.u32);
loc_8228EAB4:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ead0
	if (ctx.cr6.eq) goto loc_8228EAD0;
	// bl 0x82216cc8
	ctx.lr = 0x8228EAC8;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31408(r31)
	REX_STORE_U32(r31.u32 + 31408, ctx.r11.u32);
loc_8228EAD0:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,31412(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 31412);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228eb10
	if (ctx.cr6.eq) goto loc_8228EB10;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// bl 0x8228e9b8
	ctx.lr = 0x8228EAF8;
	sub_8228E9B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228eb08
	if (!ctx.cr0.eq) goto loc_8228EB08;
	// lwz r3,31412(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31412);
	// bl 0x82216cc8
	ctx.lr = 0x8228EB08;
	sub_82216CC8(ctx, base);
loc_8228EB08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31412(r31)
	REX_STORE_U32(r31.u32 + 31412, ctx.r11.u32);
loc_8228EB10:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31416(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228eb2c
	if (ctx.cr6.eq) goto loc_8228EB2C;
	// bl 0x82216cc8
	ctx.lr = 0x8228EB24;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31416(r31)
	REX_STORE_U32(r31.u32 + 31416, ctx.r11.u32);
loc_8228EB2C:
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31420(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228eb48
	if (ctx.cr6.eq) goto loc_8228EB48;
	// bl 0x82216cc8
	ctx.lr = 0x8228EB40;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31420(r31)
	REX_STORE_U32(r31.u32 + 31420, ctx.r11.u32);
loc_8228EB48:
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

DEFINE_REX_FUNC(sub_82292F50) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,12984
	ctx.r11.s64 = ctx.r11.s64 + 12984;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82292f08
	ctx.lr = 0x82292F74;
	sub_82292F08(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82292f90
	if (ctx.cr6.eq) goto loc_82292F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82292F90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82293640) {
	REX_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293780) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8229379C:
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
	// bne 0x8229379c
	if (!ctx.cr0.eq) goto loc_8229379C;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822937dc
	if (!ctx.cr6.eq) goto loc_822937DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822937dc
	if (ctx.cr6.eq) goto loc_822937DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82292f50
	ctx.lr = 0x822937D4;
	sub_82292F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x822937DC;
	sub_82255B70(ctx, base);
loc_822937DC:
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

DEFINE_REX_FUNC(sub_82295890) {
	REX_FUNC_PROLOGUE();
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82295920) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82295928) {
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
	ctx.lr = 0x82295930;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82295a30
	if (!ctx.cr6.gt) goto loc_82295A30;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82295a48
	if (ctx.cr6.lt) goto loc_82295A48;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82295a48
	if (ctx.cr6.lt) goto loc_82295A48;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82295978
	if (!ctx.cr6.eq) goto loc_82295978;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82295978:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82295988
	if (!ctx.cr6.gt) goto loc_82295988;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_82295988:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82295a44
	if (ctx.cr6.lt) goto loc_82295A44;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82295a44
	if (ctx.cr6.lt) goto loc_82295A44;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822959bc
	if (!ctx.cr6.lt) goto loc_822959BC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822959BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x822959C4;
	sub_82255B88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82295a04
	if (!ctx.cr0.eq) goto loc_82295A04;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82295a44
	if (ctx.cr6.lt) goto loc_82295A44;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x82295a44
	if (ctx.cr6.lt) goto loc_82295A44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x822959FC;
	sub_82255B88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82295a44
	if (ctx.cr0.eq) goto loc_82295A44;
loc_82295A04:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82295a20
	if (!ctx.cr6.eq) goto loc_82295A20;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82295A20;
	sub_822D4FA0(ctx, base);
loc_82295A20:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82295A30:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82295A3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82295A44:
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_82295A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82295a3c
	goto loc_82295A3C;
}

DEFINE_REX_FUNC(sub_8229E510) {
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
	ctx.lr = 0x8229E518;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x8229e218
	ctx.lr = 0x8229E538;
	sub_8229E218(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22616
	ctx.r11.s64 = ctx.r11.s64 + 22616;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x8229e558
	if (!ctx.cr6.eq) goto loc_8229E558;
loc_8229E550:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229e6c4
	goto loc_8229E6C4;
loc_8229E558:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8229e600
	if (ctx.cr6.eq) goto loc_8229E600;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// beq cr6,0x8229e5b8
	if (ctx.cr6.eq) goto loc_8229E5B8;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// bne cr6,0x8229e644
	if (!ctx.cr6.eq) goto loc_8229E644;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229E580;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r3,r28,16
	ctx.r3.u64 = r28.u32 & 0xFFFF;
	// bl 0x82404c58
	ctx.lr = 0x8229E5B4;
	sub_82404C58(ctx, base);
	// b 0x8229e644
	goto loc_8229E644;
loc_8229E5B8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229E5C0;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// rlwinm r8,r29,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// clrlwi r5,r26,16
	ctx.r5.u64 = r26.u32 & 0xFFFF;
	// clrlwi r4,r27,16
	ctx.r4.u64 = r27.u32 & 0xFFFF;
	// clrlwi r3,r28,16
	ctx.r3.u64 = r28.u32 & 0xFFFF;
	// bl 0x82404d30
	ctx.lr = 0x8229E5FC;
	sub_82404D30(ctx, base);
	// b 0x8229e644
	goto loc_8229E644;
loc_8229E600:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229E608;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r27,16
	ctx.r4.u64 = r27.u32 & 0xFFFF;
	// clrlwi r3,r28,16
	ctx.r3.u64 = r28.u32 & 0xFFFF;
	// bl 0x82404b78
	ctx.lr = 0x8229E644;
	sub_82404B78(ctx, base);
loc_8229E644:
	// lis r11,-17408
	ctx.r11.s64 = -1140850688;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,-17408
	ctx.r5.s64 = -1140850688;
	// lwz r3,31492(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// bl 0x822a98e0
	ctx.lr = 0x8229E660;
	sub_822A98E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8229e550
	if (ctx.cr0.eq) goto loc_8229E550;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82404e00
	ctx.lr = 0x8229E674;
	sub_82404E00(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r25,68(r31)
	REX_STORE_U32(r31.u32 + 68, r25.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r24,72(r31)
	REX_STORE_U32(r31.u32 + 72, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r28,30(r31)
	REX_STORE_U16(r31.u32 + 30, r28.u16);
	// sth r27,32(r31)
	REX_STORE_U16(r31.u32 + 32, r27.u16);
	// sth r26,34(r31)
	REX_STORE_U16(r31.u32 + 34, r26.u16);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824081f8
	ctx.lr = 0x8229E69C;
	sub_824081F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r11,r11,29,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
loc_8229E6C4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822A38B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,22928
	ctx.r11.s64 = ctx.r11.s64 + 22928;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822a2fe8
	ctx.lr = 0x822A38DC;
	sub_822A2FE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8229d680
	ctx.lr = 0x822A38F0;
	sub_8229D680(ctx, base);
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

DEFINE_REX_FUNC(sub_822A4060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A4068;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r10,r10,18352
	ctx.r10.s64 = ctx.r10.s64 + 18352;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// lis r9,9216
	ctx.r9.s64 = 603979776;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// stw r30,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r30.u32);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r8,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// stw r7,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r7.u32);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// stb r29,101(r31)
	REX_STORE_U8(r31.u32 + 101, r29.u8);
	// stb r29,102(r31)
	REX_STORE_U8(r31.u32 + 102, r29.u8);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stb r29,112(r31)
	REX_STORE_U8(r31.u32 + 112, r29.u8);
	// stb r29,114(r31)
	REX_STORE_U8(r31.u32 + 114, r29.u8);
	// bl 0x822a3d50
	ctx.lr = 0x822A40F0;
	sub_822A3D50(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822A40F4:
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r29,108(r9)
	REX_STORE_U8(ctx.r9.u32 + 108, r29.u8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822a40f4
	if (ctx.cr6.lt) goto loc_822A40F4;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A84B8) {
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
	ctx.lr = 0x822A84C0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822A84E4;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f3f40
	ctx.lr = 0x822A84F0;
	sub_821F3F40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822A84FC;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822A8508;
	sub_821F3F40(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8229f270
	ctx.lr = 0x822A8518;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821f3f40
	ctx.lr = 0x822A8524;
	sub_821F3F40(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f3f40
	ctx.lr = 0x822A8530;
	sub_821F3F40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822ca328
	ctx.lr = 0x822A853C;
	sub_822CA328(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f12,296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// beq cr6,0x822a8570
	if (ctx.cr6.eq) goto loc_822A8570;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822a8580
	if (!ctx.cr6.eq) goto loc_822A8580;
loc_822A8570:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 516);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_822A8580:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r30,r1,120
	r30.s64 = ctx.r1.s64 + 120;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r29,r31,540
	r29.s64 = r31.s64 + 540;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r28,8
	r28.s64 = 8;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f11,224(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_822A8614:
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x822a5ac8
	ctx.lr = 0x822A8620;
	sub_822A5AC8(ctx, base);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f12,12(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfsu f11,16(r29)
	ea = 16 + r29.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// bne 0x822a8614
	if (!ctx.cr0.eq) goto loc_822A8614;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822a8a50
	if (ctx.cr6.eq) goto loc_822A8A50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a8a50
	if (ctx.cr6.eq) goto loc_822A8A50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,23052
	r28.s64 = ctx.r11.s64 + 23052;
	// li r27,6
	r27.s64 = 6;
loc_822A8670:
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + ctx.r11.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x822a7c70
	ctx.lr = 0x822A8688;
	sub_822A7C70(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_822A868C:
	// lbzx r9,r28,r30
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + r30.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A86C4;
	sub_822A7FA8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x822a868c
	if (ctx.cr6.lt) goto loc_822A868C;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x822a8670
	if (!ctx.cr0.eq) goto loc_822A8670;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f0,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,464(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 464);
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 468);
	// fabs f7,f13
	ctx.f7.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f7,204(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// beq cr6,0x822a87b0
	if (ctx.cr6.eq) goto loc_822A87B0;
loc_822A8790:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a8108
	ctx.lr = 0x822A87A0;
	sub_822A8108(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a8790
	if (!ctx.cr6.eq) goto loc_822A8790;
loc_822A87B0:
	// addi r30,r31,432
	r30.s64 = r31.s64 + 432;
	// lwz r5,432(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 432);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,436(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 436);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822a7c70
	ctx.lr = 0x822A87C8;
	sub_822A7C70(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r29,464(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 464);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822a8880
	if (ctx.cr6.eq) goto loc_822A8880;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	f31.f64 = double(temp.f32);
loc_822A87E0:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x822a8864
	goto loc_822A8864;
loc_822A87E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a884c
	if (ctx.cr6.eq) goto loc_822A884C;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_822A8808:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// blt cr6,0x822a8848
	if (ctx.cr6.lt) goto loc_822A8848;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822a8808
	if (!ctx.cr6.eq) goto loc_822A8808;
	// b 0x822a884c
	goto loc_822A884C;
loc_822A8848:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822A884C:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a8860
	if (!ctx.cr0.eq) goto loc_822A8860;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a7fa8
	ctx.lr = 0x822A8860;
	sub_822A7FA8(ctx, base);
loc_822A8860:
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
loc_822A8864:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a87e8
	if (!ctx.cr6.eq) goto loc_822A87E8;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a87e0
	if (!ctx.cr6.eq) goto loc_822A87E0;
loc_822A8880:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822a89b8
	if (!ctx.cr6.eq) goto loc_822A89B8;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A88B8;
	sub_822A7FA8(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A88DC;
	sub_822A7FA8(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A8900;
	sub_822A7FA8(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A8924;
	sub_822A7FA8(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A8948;
	sub_822A7FA8(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A896C;
	sub_822A7FA8(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A8990;
	sub_822A7FA8(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a7fa8
	ctx.lr = 0x822A89B4;
	sub_822A7FA8(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_822A89B8:
	// lbz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 672);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a8a10
	if (ctx.cr0.eq) goto loc_822A8A10;
	// addi r29,r31,448
	r29.s64 = r31.s64 + 448;
	// lwz r6,452(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 452);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,448(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 448);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822a7c70
	ctx.lr = 0x822A89DC;
	sub_822A7C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,452(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r5,448(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r27,436(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lwz r26,0(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822a7c70
	ctx.lr = 0x822A89F8;
	sub_822A7C70(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lbz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a7d60
	ctx.lr = 0x822A8A10;
	sub_822A7D60(ctx, base);
loc_822A8A10:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a8a50
	if (!ctx.cr0.eq) goto loc_822A8A50;
	// lfs f0,416(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,420(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a82f0
	ctx.lr = 0x822A8A50;
	sub_822A82F0(ctx, base);
loc_822A8A50:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822C69E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,2956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C6D50) {
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
	// bl 0x822aad40
	ctx.lr = 0x822C6D6C;
	sub_822AAD40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822c6d88
	if (ctx.cr0.eq) goto loc_822C6D88;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C6D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C6D88:
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

DEFINE_REX_FUNC(sub_822C8360) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8BC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r10,r10,-3268
	ctx.r10.s64 = ctx.r10.s64 + -3268;
	// lwz r11,31672(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31672);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C91E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C91F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r10,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r10,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r10,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c91f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C91F4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9b3c
	if (ctx.cr6.eq) goto loc_822C9B3C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r5,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r3,16493
	ctx.r3.s64 = 1080885248;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,5000
	ctx.r3.u64 = ctx.r3.u64 | 5000;
	// bl 0x823ce1c0
	ctx.lr = 0x822C9B30;
	sub_823CE1C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_822C9B3C:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CB390) {
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
	// lbz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 292);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cb418
	if (ctx.cr0.eq) goto loc_822CB418;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb3e8
	if (ctx.cr6.eq) goto loc_822CB3E8;
	// lwz r4,300(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r3,160(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x822a1cc8
	ctx.lr = 0x822CB3D0;
	sub_822A1CC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822e75c0
	ctx.lr = 0x822CB3D8;
	sub_822E75C0(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,31464(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// bl 0x8229f998
	ctx.lr = 0x822CB3E8;
	sub_8229F998(ctx, base);
loc_822CB3E8:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cb414
	if (!ctx.cr0.eq) goto loc_822CB414;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb414
	if (ctx.cr6.eq) goto loc_822CB414;
	// bl 0x822ce328
	ctx.lr = 0x822CB404;
	sub_822CE328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cb414
	if (ctx.cr0.eq) goto loc_822CB414;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x822ce4d0
	ctx.lr = 0x822CB414;
	sub_822CE4D0(ctx, base);
loc_822CB414:
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
loc_822CB418:
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

DEFINE_REX_FUNC(sub_822CD7D8) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c80d0
	ctx.lr = 0x822CD7F8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822cd818
	if (ctx.cr0.eq) goto loc_822CD818;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,26176
	ctx.r11.s64 = ctx.r11.s64 + 26176;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822c8970
	ctx.lr = 0x822CD814;
	sub_822C8970(ctx, base);
	// b 0x822cd81c
	goto loc_822CD81C;
loc_822CD818:
	// li r31,0
	r31.s64 = 0;
loc_822CD81C:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_822CE6B8) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,176(r31)
	REX_STORE_U8(r31.u32 + 176, ctx.r11.u8);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE704;
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

DEFINE_REX_FUNC(sub_822D0960) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x822D09A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822D1970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D1978;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822d18b8
	ctx.lr = 0x822D1988;
	sub_822D18B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d19c0
	if (ctx.cr0.eq) goto loc_822D19C0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D19A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D19C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D19C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D2520) {
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
	ctx.lr = 0x822D2528;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r27,r3,36
	r27.s64 = ctx.r3.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D254C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,2
	r26.s64 = 2;
loc_822D2550:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2594
	if (ctx.cr6.eq) goto loc_822D2594;
	// li r30,0
	r30.s64 = 0;
loc_822D2564:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d18b8
	ctx.lr = 0x822D2570;
	sub_822D18B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// and r28,r11,r28
	r28.u64 = ctx.r11.u64 & r28.u64;
	// blt cr6,0x822d2564
	if (ctx.cr6.lt) goto loc_822D2564;
loc_822D2594:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822d2550
	if (!ctx.cr0.eq) goto loc_822D2550;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D25B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(__savegprlr_17) {
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
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, r21.u64);
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

DEFINE_REX_FUNC(sub_822D6130) {
	REX_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f13,26664(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// lfd f0,26920(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26920);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f1,f12
	ctx.f10.f64 = ctx.f1.f64 - ctx.f12.f64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7938) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d7964
	if (!ctx.cr0.eq) goto loc_822D7964;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_822D794C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d7964
	if (ctx.cr6.eq) goto loc_822D7964;
	// lhzu r10,2(r4)
	ea = 2 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// lhzx r11,r9,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d794c
	if (ctx.cr0.eq) goto loc_822D794C;
loc_822D7964:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822d7974
	if (!ctx.cr6.lt) goto loc_822D7974;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x822d797c
	goto loc_822D797C;
loc_822D7974:
	// ble cr6,0x822d797c
	if (!ctx.cr6.gt) goto loc_822D797C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D797C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_23) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_84) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E01E0) {
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
	ctx.lr = 0x822E01E8;
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
	// bl 0x822d9238
	ctx.lr = 0x822E0218;
	sub_822D9238(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d9260
	ctx.lr = 0x822E0228;
	sub_822D9260(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// li r21,0
	r21.s64 = 0;
	// bne 0x822e0250
	if (!ctx.cr0.eq) goto loc_822E0250;
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
loc_822E0250:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x822e026c
	if (ctx.cr6.eq) goto loc_822E026C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e00b0
	ctx.lr = 0x822E026C;
	sub_822E00B0(ctx, base);
loc_822E026C:
	// bl 0x822d6ff8
	ctx.lr = 0x822E0270;
	sub_822D6FF8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d9670
	ctx.lr = 0x822E0284;
	sub_822D9670(ctx, base);
	// lwz r11,2916(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2916);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x822e029c
	if (!ctx.cr6.eq) goto loc_822E029C;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_822E029C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822e43a0
	ctx.lr = 0x822E02A8;
	sub_822E43A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822dfa80
	ctx.lr = 0x822E02BC;
	sub_822DFA80(ctx, base);
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
	// bl 0x822df920
	ctx.lr = 0x822E02D4;
	sub_822DF920(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x822d6ff8
	ctx.lr = 0x822E02DC;
	sub_822D6FF8(ctx, base);
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
	// bl 0x822e444c
	ctx.lr = 0x822E0300;
	sub_822E444C(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e031c
	if (ctx.cr0.eq) goto loc_822E031C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x822e0314
	if (!ctx.cr6.eq) goto loc_822E0314;
	// stw r21,0(r30)
	REX_STORE_U32(r30.u32 + 0, r21.u32);
loc_822E0314:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822e42bc
	ctx.lr = 0x822E031C;
	sub_822E42BC(ctx, base);
loc_822E031C:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_822E84F8) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e85a4
	if (ctx.cr6.eq) goto loc_822E85A4;
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
	// bl 0x822125d0
	ctx.lr = 0x822E8534;
	sub_822125D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822266d8
	ctx.lr = 0x822E8540;
	sub_822266D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822268e0
	ctx.lr = 0x822E854C;
	sub_822268E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82226af8
	ctx.lr = 0x822E8558;
	sub_82226AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82212778
	ctx.lr = 0x822E8564;
	sub_82212778(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82223398
	ctx.lr = 0x822E857C;
	sub_82223398(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82223398
	ctx.lr = 0x822E8590;
	sub_82223398(ctx, base);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82223398
	ctx.lr = 0x822E85A4;
	sub_82223398(ctx, base);
loc_822E85A4:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e85bc
	if (ctx.cr6.eq) goto loc_822E85BC;
	// bl 0x82216cc8
	ctx.lr = 0x822E85B8;
	sub_82216CC8(ctx, base);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
loc_822E85BC:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e85d0
	if (ctx.cr6.eq) goto loc_822E85D0;
	// bl 0x82216cc8
	ctx.lr = 0x822E85CC;
	sub_82216CC8(ctx, base);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
loc_822E85D0:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e85e4
	if (ctx.cr6.eq) goto loc_822E85E4;
	// bl 0x82216cc8
	ctx.lr = 0x822E85E0;
	sub_82216CC8(ctx, base);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
loc_822E85E4:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e85f8
	if (ctx.cr6.eq) goto loc_822E85F8;
	// bl 0x82216cc8
	ctx.lr = 0x822E85F4;
	sub_82216CC8(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_822E85F8:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e860c
	if (ctx.cr6.eq) goto loc_822E860C;
	// bl 0x82216cc8
	ctx.lr = 0x822E8608;
	sub_82216CC8(ctx, base);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_822E860C:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8620
	if (ctx.cr6.eq) goto loc_822E8620;
	// bl 0x8221a848
	ctx.lr = 0x822E861C;
	sub_8221A848(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_822E8620:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E8634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822E8648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822ED240) {
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
	// addi r10,r11,-27752
	ctx.r10.s64 = ctx.r11.s64 + -27752;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822f8b70
	ctx.lr = 0x822ED26C;
	sub_822F8B70(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ed28c
	if (ctx.cr6.eq) goto loc_822ED28C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// bl 0x823cd250
	ctx.lr = 0x822ED288;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822ED28C:
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

DEFINE_REX_FUNC(sub_822EEB98) {
	REX_FUNC_PROLOGUE();
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EEDD0) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x824d437c
	ctx.lr = 0x822EEDE4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_822EFD98) {
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
	ctx.lr = 0x822EFDA0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,572(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// mr r26,r30
	r26.u64 = r30.u64;
	// bl 0x822f9928
	ctx.lr = 0x822EFDDC;
	sub_822F9928(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x822efe2c
	if (ctx.cr6.eq) goto loc_822EFE2C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eff40
	if (ctx.cr6.lt) goto loc_822EFF40;
loc_822EFDF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eff40
	if (ctx.cr6.lt) goto loc_822EFF40;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822fa4a0
	ctx.lr = 0x822EFE08;
	sub_822FA4A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eff40
	if (ctx.cr6.lt) goto loc_822EFF40;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x822EFE24;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822efdf4
	if (!ctx.cr6.eq) goto loc_822EFDF4;
loc_822EFE2C:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// bl 0x822f99f8
	ctx.lr = 0x822EFE38;
	sub_822F99F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822f9928
	ctx.lr = 0x822EFE4C;
	sub_822F9928(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x822efef0
	if (ctx.cr6.eq) goto loc_822EFEF0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eff40
	if (ctx.cr6.lt) goto loc_822EFF40;
loc_822EFE60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eff40
	if (ctx.cr6.lt) goto loc_822EFF40;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822efe80
	if (!ctx.cr6.eq) goto loc_822EFE80;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// b 0x822efe8c
	goto loc_822EFE8C;
loc_822EFE80:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822efe90
	if (!ctx.cr6.eq) goto loc_822EFE90;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_822EFE8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822EFE90:
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, r30.u8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r30.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, r30.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822efed4
	if (!ctx.cr6.eq) goto loc_822EFED4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_822EFED4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x822EFEE8;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822efe60
	if (!ctx.cr6.eq) goto loc_822EFE60;
loc_822EFEF0:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x822f99f8
	ctx.lr = 0x822EFEFC;
	sub_822F99F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// clrldi r4,r26,32
	ctx.r4.u64 = r26.u64 & 0xFFFFFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EFF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822eff40
	if (ctx.cr6.lt) goto loc_822EFF40;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,596(r31)
	REX_STORE_U32(r31.u32 + 596, r26.u32);
	// stb r28,592(r31)
	REX_STORE_U8(r31.u32 + 592, r28.u8);
	// stw r30,536(r31)
	REX_STORE_U32(r31.u32 + 536, r30.u32);
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// stw r27,556(r31)
	REX_STORE_U32(r31.u32 + 556, r27.u32);
	// stw r30,588(r31)
	REX_STORE_U32(r31.u32 + 588, r30.u32);
loc_822EFF40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822F8D58) {
	REX_FUNC_PROLOGUE();
	// ld r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F8D70) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-25616
	ctx.r10.s64 = ctx.r11.s64 + -25616;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x822f8da8
	if (ctx.cr6.eq) goto loc_822F8DA8;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x823cd250
	ctx.lr = 0x822F8DA8;
	sub_823CD250(ctx, base);
loc_822F8DA8:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8db8
	if (ctx.cr6.eq) goto loc_822F8DB8;
	// bl 0x82208848
	ctx.lr = 0x822F8DB8;
	sub_82208848(ctx, base);
loc_822F8DB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F8DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822F8DD4;
	sub_822EECE8(ctx, base);
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

DEFINE_REX_FUNC(sub_822FAAE8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x822f9900
	ctx.lr = 0x822FAB14;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fab44
	if (ctx.cr6.lt) goto loc_822FAB44;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822FAB30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fab44
	if (ctx.cr6.lt) goto loc_822FAB44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fa868
	ctx.lr = 0x822FAB44;
	sub_822FA868(ctx, base);
loc_822FAB44:
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

DEFINE_REX_FUNC(sub_822FCC08) {
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
	ctx.lr = 0x822FCC10;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r29,0(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r21,0
	r21.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r23,r11,-24
	r23.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x822fccc0
	if (!ctx.cr6.eq) goto loc_822FCCC0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,32
	ctx.r3.s64 = 32;
	// ori r22,r11,32768
	r22.u64 = ctx.r11.u64 | 32768;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823cd118
	ctx.lr = 0x822FCC54;
	sub_823CD118(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,204(r26)
	REX_STORE_U32(r26.u32 + 204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fccd0
	if (!ctx.cr6.eq) goto loc_822FCCD0;
	// li r30,5
	r30.s64 = 5;
loc_822FCC68:
	// lwz r31,204(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 204);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822fccc0
	if (ctx.cr6.eq) goto loc_822FCCC0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x822FCC80;
	sub_823CD250(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823cd250
	ctx.lr = 0x822FCC8C;
	sub_823CD250(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823cd250
	ctx.lr = 0x822FCC98;
	sub_823CD250(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823cd250
	ctx.lr = 0x822FCCA4;
	sub_823CD250(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x823cd250
	ctx.lr = 0x822FCCB0;
	sub_823CD250(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,204(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 204);
	// bl 0x823cd250
	ctx.lr = 0x822FCCBC;
	sub_823CD250(ctx, base);
	// stw r21,204(r26)
	REX_STORE_U32(r26.u32 + 204, r21.u32);
loc_822FCCC0:
	// std r23,0(r26)
	REX_STORE_U64(r26.u32 + 0, r23.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_822FCCD0:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822FCCE0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822fcce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FCCE0;
	// addi r30,r29,10
	r30.s64 = r29.s64 + 10;
	// cmpld cr6,r30,r23
	ctx.cr6.compare<uint64_t>(r30.u64, r23.u64, ctx.xer);
	// ble cr6,0x822fccfc
	if (!ctx.cr6.gt) goto loc_822FCCFC;
	// li r30,6
	r30.s64 = 6;
	// b 0x822fcc68
	goto loc_822FCC68;
loc_822FCCFC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FCD10;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x822fcd20
	if (ctx.cr6.eq) goto loc_822FCD20;
	// li r30,3
	r30.s64 = 3;
	// b 0x822fcc68
	goto loc_822FCC68;
loc_822FCD20:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r28,r31,2
	r28.s64 = r31.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r31,6
	r25.s64 = r31.s64 + 6;
	// sth r9,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r9.u16);
	// addi r24,r31,8
	r24.s64 = r31.s64 + 8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822fb7a0
	ctx.lr = 0x822FCDF4;
	sub_822FB7A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fcc68
	if (!ctx.cr6.eq) goto loc_822FCC68;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fce30
	if (ctx.cr6.eq) goto loc_822FCE30;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FCE1C:
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
	// bdnz 0x822fce1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FCE1C;
loc_822FCE30:
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FCE4C;
	sub_822FB7A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fcc68
	if (!ctx.cr6.eq) goto loc_822FCC68;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fce88
	if (ctx.cr6.eq) goto loc_822FCE88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FCE74:
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
	// bdnz 0x822fce74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FCE74;
loc_822FCE88:
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FCEA4;
	sub_822FB7A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fcc68
	if (!ctx.cr6.eq) goto loc_822FCC68;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcee0
	if (ctx.cr6.eq) goto loc_822FCEE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FCECC:
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
	// bdnz 0x822fcecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FCECC;
loc_822FCEE0:
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FCEFC;
	sub_822FB7A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fcc68
	if (!ctx.cr6.eq) goto loc_822FCC68;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcf38
	if (ctx.cr6.eq) goto loc_822FCF38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FCF24:
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
	// bdnz 0x822fcf24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FCF24;
loc_822FCF38:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822fb7a0
	ctx.lr = 0x822FCF54;
	sub_822FB7A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fcc68
	if (!ctx.cr6.eq) goto loc_822FCC68;
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fccc0
	if (ctx.cr6.eq) goto loc_822FCCC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822FCF7C:
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
	// bdnz 0x822fcf7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FCF7C;
	// std r23,0(r26)
	REX_STORE_U64(r26.u32 + 0, r23.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82310568) {
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
	ctx.lr = 0x82310570;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x822f9490
	ctx.lr = 0x823105A0;
	sub_822F9490(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823106ac
	if (ctx.cr6.lt) goto loc_823106AC;
	// li r5,152
	ctx.r5.s64 = 152;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x823105BC;
	sub_822D5870(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, r27.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,72(r8)
	REX_STORE_U32(ctx.r8.u32 + 72, r28.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r6,104(r7)
	REX_STORE_U32(ctx.r7.u32 + 104, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,112(r9)
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r6,116(r7)
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,124(r9)
	REX_STORE_U32(ctx.r9.u32 + 124, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r6,128(r7)
	REX_STORE_U32(ctx.r7.u32 + 128, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r8,136(r9)
	REX_STORE_U32(ctx.r9.u32 + 136, ctx.r8.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,140(r7)
	REX_STORE_U32(ctx.r7.u32 + 140, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// bl 0x822f9490
	ctx.lr = 0x82310678;
	sub_822F9490(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823106ac
	if (ctx.cr6.lt) goto loc_823106AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,44(r26)
	REX_STORE_U32(r26.u32 + 44, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823106AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823106c8
	if (ctx.cr6.eq) goto loc_823106C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f94e8
	ctx.lr = 0x823106C8;
	sub_822F94E8(ctx, base);
loc_823106C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82312730) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82311eb8
	ctx.lr = 0x82312750;
	sub_82311EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823127a0
	if (ctx.cr6.lt) goto loc_823127A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823122e8
	ctx.lr = 0x82312760;
	sub_823122E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823127a0
	if (ctx.cr6.lt) goto loc_823127A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_823127A0:
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

DEFINE_REX_FUNC(sub_82313B48) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823134b0
	ctx.lr = 0x82313B68;
	sub_823134B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313bb0
	if (ctx.cr6.lt) goto loc_82313BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82313778
	ctx.lr = 0x82313B78;
	sub_82313778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313bb0
	if (ctx.cr6.lt) goto loc_82313BB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x822f94e8
	ctx.lr = 0x82313B94;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313bb0
	if (ctx.cr6.lt) goto loc_82313BB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x822f94e8
	ctx.lr = 0x82313BB0;
	sub_822F94E8(ctx, base);
loc_82313BB0:
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

DEFINE_REX_FUNC(sub_82314770) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82314778;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231479c
	if (ctx.cr6.eq) goto loc_8231479C;
	// lhz r30,0(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x823147a0
	goto loc_823147A0;
loc_8231479C:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823147A0:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r29,1
	r29.s64 = 1;
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r26,276(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r25,284(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r24,302(r1)
	r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 302);
	// lhz r23,310(r1)
	r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 310);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// not r22,r11
	r22.u64 = ~ctx.r11.u64;
	// sth r10,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// stw r5,820(r31)
	REX_STORE_U32(r31.u32 + 820, ctx.r5.u32);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// sth r8,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r8.u16);
	// stw r27,100(r31)
	REX_STORE_U32(r31.u32 + 100, r27.u32);
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r4,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r4.u32);
	// stw r7,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r7.u32);
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r24,64(r31)
	REX_STORE_U32(r31.u32 + 64, r24.u32);
	// stw r23,68(r31)
	REX_STORE_U32(r31.u32 + 68, r23.u32);
	// stw r9,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r9.u32);
	// ble cr6,0x8231483c
	if (!ctx.cr6.gt) goto loc_8231483C;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8231482C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8231482c
	if (ctx.cr6.gt) goto loc_8231482C;
loc_8231483C:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r9,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r9.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82314864
	if (!ctx.cr6.gt) goto loc_82314864;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_82314854:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82314854
	if (ctx.cr6.gt) goto loc_82314854;
loc_82314864:
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r8.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82314880
	if (!ctx.cr6.eq) goto loc_82314880;
	// li r9,-129
	ctx.r9.s64 = -129;
	// b 0x82314890
	goto loc_82314890;
loc_82314880:
	// li r9,-651
	ctx.r9.s64 = -651;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x82314890
	if (!ctx.cr6.gt) goto loc_82314890;
	// li r9,-907
	ctx.r9.s64 = -907;
loc_82314890:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82314a38
	if (!ctx.cr6.eq) goto loc_82314A38;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r6,r9,-24592
	ctx.r6.s64 = ctx.r9.s64 + -24592;
	// lbzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82314a38
	if (ctx.cr6.eq) goto loc_82314A38;
	// rlwinm r9,r11,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x823148d8
	if (!ctx.cr6.eq) goto loc_823148D8;
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65525
	ctx.r12.u64 = ctx.r12.u64 | 65525;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
loc_823148D8:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r7,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r7.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r28,456(r31)
	REX_STORE_U32(r31.u32 + 456, r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82314900
	if (ctx.cr6.eq) goto loc_82314900;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stw r29,456(r31)
	REX_STORE_U32(r31.u32 + 456, r29.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// b 0x823149d0
	goto loc_823149D0;
loc_82314900:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314920
	if (ctx.cr6.eq) goto loc_82314920;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// stw r10,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// b 0x823149d0
	goto loc_823149D0;
loc_82314920:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823149d0
	if (ctx.cr6.eq) goto loc_823149D0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// bl 0x822d4ac8
	ctx.lr = 0x82314954;
	sub_822D4AC8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,-25040(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + -25040);
	// bl 0x822d4ac8
	ctx.lr = 0x82314964;
	sub_822D4AC8(ctx, base);
	// fdiv f10,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f31.f64 / ctx.f1.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82314998
	if (!ctx.cr6.lt) goto loc_82314998;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823149a8
	goto loc_823149A8;
loc_82314998:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823149A8:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// ble cr6,0x823149c4
	if (!ctx.cr6.gt) goto loc_823149C4;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r9,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r9.u32);
	// b 0x823149d0
	goto loc_823149D0;
loc_823149C4:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r8.u32);
loc_823149D0:
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// stw r28,444(r31)
	REX_STORE_U32(r31.u32 + 444, r28.u32);
	// stw r28,448(r31)
	REX_STORE_U32(r31.u32 + 448, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,460(r31)
	REX_STORE_U32(r31.u32 + 460, r28.u32);
	// bge cr6,0x82314a04
	if (!ctx.cr6.lt) goto loc_82314A04;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r29,448(r31)
	REX_STORE_U32(r31.u32 + 448, r29.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
loc_823149F4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823149F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_82314A04:
	// ble cr6,0x823149f4
	if (!ctx.cr6.gt) goto loc_823149F4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,444(r31)
	REX_STORE_U32(r31.u32 + 444, r29.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823149f8
	if (!ctx.cr6.gt) goto loc_823149F8;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823149f8
	if (!ctx.cr6.eq) goto loc_823149F8;
	// stw r29,460(r31)
	REX_STORE_U32(r31.u32 + 460, r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_82314A38:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82327968) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82314498
	ctx.lr = 0x82327984;
	sub_82314498(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82314498
	ctx.lr = 0x8232798C;
	sub_82314498(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x82314498
	ctx.lr = 0x82327994;
	sub_82314498(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82314498
	ctx.lr = 0x8232799C;
	sub_82314498(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82314498
	ctx.lr = 0x823279A4;
	sub_82314498(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82314498
	ctx.lr = 0x823279AC;
	sub_82314498(ctx, base);
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

DEFINE_REX_FUNC(sub_82328830) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82328884
	if (ctx.cr6.gt) goto loc_82328884;
	// cmpwi cr6,r3,-72
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -72, ctx.xer);
	// bge cr6,0x82328844
	if (!ctx.cr6.lt) goto loc_82328844;
	// li r3,-71
	ctx.r3.s64 = -71;
loc_82328844:
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// slw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r8,2720
	ctx.r5.s64 = ctx.r8.s64 + 2720;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// subf r3,r4,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lfs f11,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// blr 
	return;
loc_82328884:
	// cmpwi cr6,r3,62
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 62, ctx.xer);
	// blt cr6,0x82328890
	if (ctx.cr6.lt) goto loc_82328890;
	// li r3,62
	ctx.r3.s64 = 62;
loc_82328890:
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r11,r9,3008
	ctx.r11.s64 = ctx.r9.s64 + 3008;
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B788) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,5376
	ctx.r5.s64 = ctx.r11.s64 + 5376;
loc_8232B798:
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B7A0:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8232b7c0
	if (!ctx.cr6.eq) goto loc_8232B7C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8232b7a0
	if (ctx.cr6.lt) goto loc_8232B7A0;
loc_8232B7C0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_8232B7D0:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232b7f0
	if (!ctx.cr6.eq) goto loc_8232B7F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8232b7d0
	if (ctx.cr6.lt) goto loc_8232B7D0;
loc_8232B7F0:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// blt cr6,0x8232b798
	if (ctx.cr6.lt) goto loc_8232B798;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232E898) {
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
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// addi r31,r3,124
	r31.s64 = ctx.r3.s64 + 124;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232e938
	if (ctx.cr6.eq) goto loc_8232E938;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e8d4
	if (ctx.cr6.eq) goto loc_8232E8D4;
	// bl 0x8233eb10
	ctx.lr = 0x8232E8D0;
	sub_8233EB10(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8232E8D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e8e8
	if (ctx.cr6.eq) goto loc_8232E8E8;
	// bl 0x8233ec80
	ctx.lr = 0x8232E8E4;
	sub_8233EC80(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8232E8E8:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e8fc
	if (ctx.cr6.eq) goto loc_8232E8FC;
	// bl 0x8233edb0
	ctx.lr = 0x8232E8F8;
	sub_8233EDB0(ctx, base);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
loc_8232E8FC:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e910
	if (ctx.cr6.eq) goto loc_8232E910;
	// bl 0x8233ec80
	ctx.lr = 0x8232E90C;
	sub_8233EC80(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_8232E910:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e924
	if (ctx.cr6.eq) goto loc_8232E924;
	// bl 0x8233ec80
	ctx.lr = 0x8232E920;
	sub_8233EC80(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_8232E924:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e938
	if (ctx.cr6.eq) goto loc_8232E938;
	// bl 0x8233edb0
	ctx.lr = 0x8232E934;
	sub_8233EDB0(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_8232E938:
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

DEFINE_REX_FUNC(sub_82332ED0) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x82332ED8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332ef4
	if (!ctx.cr6.eq) goto loc_82332EF4;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ebc
	return;
loc_82332EF4:
	// lwz r10,24688(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r9,712(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82332f10
	if (ctx.cr6.eq) goto loc_82332F10;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ebc
	return;
loc_82332F10:
	// lwz r9,22036(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82332f3c
	if (!ctx.cr6.eq) goto loc_82332F3C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,-7
	ctx.r10.s64 = -7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ebc
	return;
loc_82332F3C:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,21888(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// lwz r8,14836(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r9,45384
	ctx.r5.u64 = ctx.r9.u64 | 45384;
	// lwz r9,22032(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// addic r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r29.s64 = ctx.r7.s64 + -1;
	// lwz r31,21912(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21912);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lwz r30,156(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// subfe r7,r29,r7
	temp.u8 = (~r29.u32 + ctx.r7.u32 < ~r29.u32) | (~r29.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~r29.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r28,160(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r27,22068(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 22068);
	// andc r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,22072(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 22072);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// lwz r26,22076(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 22076);
	// lwz r25,22080(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 22080);
	// lwz r24,21916(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 21916);
	// lwz r23,21924(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 21924);
	// lwz r22,21920(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 21920);
	// lwz r21,21928(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 21928);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r23.u32);
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r21.u32);
	// lwz r7,192(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82332FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8233C9B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8233C9C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r5,192(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,200(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,188(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,15536(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r9,20400(r3)
	REX_STORE_U32(ctx.r3.u32 + 20400, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,20404(r3)
	REX_STORE_U32(ctx.r3.u32 + 20404, ctx.r8.u32);
	// stw r5,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// stw r6,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r6.u32);
	// stw r4,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r4.u32);
	// beq cr6,0x8233ca1c
	if (ctx.cr6.eq) goto loc_8233CA1C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8233ca1c
	if (ctx.cr6.eq) goto loc_8233CA1C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8233ca1c
	if (ctx.cr6.eq) goto loc_8233CA1C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8233ca74
	if (!ctx.cr6.eq) goto loc_8233CA74;
loc_8233CA1C:
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stw r9,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r9.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// addze r3,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r3.s64 = temp.s64;
	// stw r8,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r8.u32);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// beq cr6,0x8233ca5c
	if (ctx.cr6.eq) goto loc_8233CA5C;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// addi r8,r9,-21968
	ctx.r8.s64 = ctx.r9.s64 + -21968;
	// stw r8,15920(r31)
	REX_STORE_U32(r31.u32 + 15920, ctx.r8.u32);
loc_8233CA5C:
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233ca74
	if (ctx.cr6.eq) goto loc_8233CA74;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r9,r10,-21592
	ctx.r9.s64 = ctx.r10.s64 + -21592;
	// stw r9,15916(r31)
	REX_STORE_U32(r31.u32 + 15916, ctx.r9.u32);
loc_8233CA74:
	// lwz r10,20760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233cab0
	if (ctx.cr6.eq) goto loc_8233CAB0;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r9.u32);
	// stw r8,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r8.u32);
	// stw r7,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r7.u32);
loc_8233CAB0:
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r7,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r7.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// bne cr6,0x8233cae4
	if (!ctx.cr6.eq) goto loc_8233CAE4;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8233cae8
	if (ctx.cr6.eq) goto loc_8233CAE8;
loc_8233CAE4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8233CAE8:
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stw r7,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r8,3788(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// srawi r7,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 4;
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r7,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// stw r5,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r5.u32);
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// stw r4,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r4.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r6,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r6.u32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x8233cb58
	if (!ctx.cr6.eq) goto loc_8233CB58;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8233CB58:
	// lwz r8,3816(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// stw r4,3812(r31)
	REX_STORE_U32(r31.u32 + 3812, ctx.r4.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x8233cb70
	if (!ctx.cr6.eq) goto loc_8233CB70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233CB70:
	// lwz r8,21888(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21888);
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,3828(r31)
	REX_STORE_U32(r31.u32 + 3828, ctx.r11.u32);
	// stw r4,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r4.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r3,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// bne cr6,0x8233cba8
	if (!ctx.cr6.eq) goto loc_8233CBA8;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233cba8
	if (!ctx.cr6.gt) goto loc_8233CBA8;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bgt cr6,0x8233cbc8
	if (ctx.cr6.gt) goto loc_8233CBC8;
loc_8233CBA8:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// stw r6,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r6.u32);
	// stw r5,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r5.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
loc_8233CBC8:
	// lwz r11,3392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3392);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8233cbf4
	if (!ctx.cr6.eq) goto loc_8233CBF4;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x8233cc0c
	if (!ctx.cr6.lt) goto loc_8233CC0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,3392(r31)
	REX_STORE_U32(r31.u32 + 3392, ctx.r9.u32);
	// b 0x8233cc0c
	goto loc_8233CC0C;
loc_8233CBF4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8233cc0c
	if (!ctx.cr6.eq) goto loc_8233CC0C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8233cc0c
	if (!ctx.cr6.eq) goto loc_8233CC0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3392(r31)
	REX_STORE_U32(r31.u32 + 3392, ctx.r11.u32);
loc_8233CC0C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,2268(r31)
	REX_STORE_U32(r31.u32 + 2268, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,2272(r31)
	REX_STORE_U32(r31.u32 + 2272, ctx.r10.u32);
	// stw r9,2276(r31)
	REX_STORE_U32(r31.u32 + 2276, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,2280(r31)
	REX_STORE_U32(r31.u32 + 2280, ctx.r8.u32);
	// bl 0x82391f00
	ctx.lr = 0x8233CC34;
	sub_82391F00(ctx, base);
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r11,21980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21980);
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,21980(r31)
	REX_STORE_U32(r31.u32 + 21980, ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8233cc98
	if (!ctx.cr6.lt) goto loc_8233CC98;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,21944(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8233CC70;
	sub_822D5870(ctx, base);
	// lwz r11,21956(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21956);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8233CC84;
	sub_822D5870(ctx, base);
	// lwz r11,21972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8233CC98;
	sub_822D5870(ctx, base);
loc_8233CC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82355630) {
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
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x82355638;
	// li r26,192
	r26.s64 = 192;
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,224
	r28.s64 = 224;
	// vcsxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// li r27,208
	r27.s64 = 208;
	// li r29,240
	r29.s64 = 240;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lvx128 v61,r6,r26
	ea = (ctx.r6.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,480
	ctx.r11.s64 = 480;
	// lvx128 v60,r6,r28
	ea = (ctx.r6.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,448
	ctx.r10.s64 = 448;
	// lvx128 v59,r6,r27
	ea = (ctx.r6.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,416
	ctx.r9.s64 = 416;
	// lvx128 v58,r6,r29
	ea = (ctx.r6.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,384
	ctx.r8.s64 = 384;
	// li r30,160
	r30.s64 = 160;
	// vcsxwfp128 v57,v61,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// li r7,352
	ctx.r7.s64 = 352;
	// lvx128 v56,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,320
	ctx.r6.s64 = 320;
	// lvx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,176
	r31.s64 = 176;
	// lvx128 v52,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v56,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r22,r30
	ea = (r22.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v54,11
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v40,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v52,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v38,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v46,v50,11
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v42,r22,r31
	ea = (r22.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v40,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v55,v59,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// vcsxwfp128 v53,v60,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvx128 v45,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v58,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// lvx128 v44,r5,r26
	ea = (ctx.r5.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// vcsxwfp128 v36,v38,11
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// vcsxwfp128 v39,v42,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v35,r22,r11
	ea = (r22.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,128
	ctx.r9.s64 = 128;
	// lvx128 v61,r22,r3
	ea = (r22.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,112
	ctx.r8.s64 = 112;
	// lvx128 v60,r22,r4
	ea = (r22.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v59,r22,r5
	ea = (r22.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,288
	r28.s64 = 288;
	// lvx128 v58,r22,r6
	ea = (r22.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,256
	r26.s64 = 256;
	// lvx128 v56,r22,r7
	ea = (r22.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v34,v49,v51
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v51.f32), 0xEF));
	// vcsxwfp128 v54,v35,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmsum3fp128 v33,v48,v53
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v53.f32), 0xEF));
	// vcsxwfp128 v50,v61,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vmsum3fp128 v32,v47,v55
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v55.f32), 0xEF));
	// lvx128 v52,r22,r8
	ea = (r22.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v46,v57
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v57.f32), 0xEF));
	// lvx128 v49,r22,r9
	ea = (r22.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v42,v37,v39
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v39.f32), 0xEF));
	// lvx128 v47,r22,r10
	ea = (r22.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v38,v36,v41
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v41.f32), 0xEF));
	// lvx128 v43,r23,r28
	ea = (r23.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r23,r26
	ea = (r23.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r21,-32172
	r21.s64 = -2108424192;
	// lvx128 v37,r23,r30
	ea = (r23.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v60,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvx128 v35,r23,r9
	ea = (r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v46,v59,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v36,v58,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v61,v56,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// addi r9,r21,2384
	ctx.r9.s64 = r21.s64 + 2384;
	// vrlimi128 v63,v32,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v32.f32), 228), 4));
	// vcsxwfp128 v58,v49,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v56,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v43,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v38,v42,1,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 1));
	// vrlimi128 v33,v34,1,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 1));
	// vcsxwfp128 v60,v52,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// lvx128 v59,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v47,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v42,v35,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v34,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v32,v44,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v12,v63,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcsxwfp128 v47,v40,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r7,496
	ctx.r7.s64 = 496;
	// vcsxwfp128 v44,v37,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r5,464
	ctx.r5.s64 = 464;
	// vcsxwfp128 v35,v56,11
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r3,432
	ctx.r3.s64 = 432;
	// vcsxwfp128 v40,v45,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v45,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v37,v59,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r9,400
	ctx.r9.s64 = 400;
	// vcsxwfp128 v63,v43,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v59,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v34,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v33,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v0.f32)));
	// li r7,368
	ctx.r7.s64 = 368;
	// vmsum3fp128 v34,v49,v52
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v52.f32), 0xEF));
	// vsubfp128 v11,v38,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v42,v42,v46
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v46.f32), 0xEF));
	// vcsxwfp128 v38,v59,11
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v32,v32,v61
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v61.f32), 0xEF));
	// vcsxwfp128 v59,v43,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmaddfp128 v45,v12,v1,v45
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v45.f32)));
	// li r5,336
	ctx.r5.s64 = 336;
	// vmsum3fp128 v49,v47,v58
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v58.f32), 0xEF));
	// lvx128 v47,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v44,v44,v36
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v36.f32), 0xEF));
	// vcsxwfp128 v43,v47,11
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v35,v35,v50
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v50.f32), 0xEF));
	// li r3,304
	ctx.r3.s64 = 304;
	// vmsum3fp128 v40,v40,v60
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v60.f32), 0xEF));
	// li r30,272
	r30.s64 = 272;
	// vmsum3fp128 v37,v37,v48
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v48.f32), 0xEF));
	// lvx128 v10,r23,r9
	ea = (r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32), 0xEF));
	// vcfsx v4,v10,11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v56,v56,v54
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v54.f32), 0xEF));
	// lvx128 v7,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v6,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v1,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v5,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v51,v38,v51
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v51.f32), 0xEF));
	// lvx128 v3,r23,r30
	ea = (r23.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v59,v59,v53
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v53.f32), 0xEF));
	// lvx128 v38,r23,r29
	ea = (r23.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r23,r27
	ea = (r23.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v47,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmsum3fp128 v43,v43,v55
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v55.f32), 0xEF));
	// lvx128 v55,r23,r10
	ea = (r23.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v2,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrlimi128 v49,v34,4,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 4));
	// lvx128 v34,r23,r31
	ea = (r23.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v42,v44,4,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 4));
	// vrlimi128 v45,v13,3,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vrlimi128 v32,v40,1,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v40.f32), 228), 1));
	// vsubfp128 v13,v49,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v35,v37,1,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// vsubfp128 v10,v42,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v63,v56,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 4));
	// vcfpuxws128 v49,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v11,v32,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v9,v35,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v8,v63,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v45,v4,v57
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v57.f32), 0xEF));
	// vmaddfp128 v33,v13,v1,v33
	simde_mm_store_ps(ctx.v33.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v33.f32)));
	// vmaddfp v13,v11,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v42,r23,r6
	ea = (r23.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v47,v10,v1,v47
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r23,r8
	ea = (r23.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v35,v3,11
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v37,r23,r4
	ea = (r23.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v53,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v32,r23,r11
	ea = (r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v5,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v59,v51,1,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 1));
	// vcsxwfp128 v63,v38,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v38,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v53,v6,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor v31,v0,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v51,v34,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor v30,v0,v0
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v56,v7,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v42,v42,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v34,v55,11
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v55,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v44,v44,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v33,v12,3,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 3));
	// vcsxwfp128 v37,v37,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v32,v32,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v47,v13,3,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vsubfp128 v13,v59,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v58,v35,v58
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v58.f32), 0xEF));
	// vrlimi128 v45,v43,4,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 228), 4));
	// vmsum3fp128 v35,v57,v61
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v61.f32), 0xEF));
	// vmsum3fp128 v59,v40,v52
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v52.f32), 0xEF));
	// vcfpuxws128 v40,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v33.f32)));
	// vmsum3fp128 v52,v63,v60
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xEF));
	// vmaddfp v11,v9,v1,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v61,v53,v41
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v41.f32), 0xEF));
	// vmaddfp128 v2,v8,v1,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp128 v12,v45,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v60,v51,v36
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v36.f32), 0xEF));
	// vmsum3fp128 v33,v56,v39
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v39.f32), 0xEF));
	// vcfpuxws128 v63,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vmsum3fp128 v53,v42,v50
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v50.f32), 0xEF));
	// vmsum3fp128 v57,v34,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v46.f32), 0xEF));
	// vmsum3fp128 v56,v44,v48
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v48.f32), 0xEF));
	// vmsum3fp128 v51,v37,v54
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v54.f32), 0xEF));
	// vmsum3fp128 v50,v32,v62
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v62.f32), 0xEF));
	// vmaddfp v13,v13,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkswus128 v49,v40,v49
	simde_mm_store_si128((simde__m128i*)ctx.v49.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v40.s32)));
	// vrlimi128 v2,v11,3,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 3));
	// vmaddfp128 v38,v12,v1,v38
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v38.f32)));
	// vrlimi128 v58,v59,4,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vrlimi128 v35,v52,1,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 228), 1));
	// vcfpuxws128 v48,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v61,v33,1,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 1));
	// vsubfp128 v11,v58,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v10,v35,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v57,v60,4,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 4));
	// vrlimi128 v53,v56,1,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 1));
	// vsubfp128 v12,v61,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v50,v51,4,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 4));
	// vsubfp128 v9,v57,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v38,v13,3,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vsubfp128 v8,v53,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v13,v50,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpkswus128 v47,v48,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vcfpuxws128 v45,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// vmaddfp128 v55,v11,v1,v55
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v55.f32)));
	// vmaddfp v11,v10,v1,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkuhus128 v46,v47,v49
	vTemp.u8[15] = ctx.v47.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[7];
	vTemp.u8[7] = ctx.v49.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[7];
	vTemp.u8[14] = ctx.v47.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[6];
	vTemp.u8[6] = ctx.v49.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[6];
	vTemp.u8[13] = ctx.v47.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[5];
	vTemp.u8[5] = ctx.v49.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[5];
	vTemp.u8[12] = ctx.v47.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[4];
	vTemp.u8[4] = ctx.v49.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[4];
	vTemp.u8[11] = ctx.v47.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[3];
	vTemp.u8[3] = ctx.v49.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[3];
	vTemp.u8[10] = ctx.v47.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[2];
	vTemp.u8[2] = ctx.v49.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[2];
	vTemp.u8[9] = ctx.v47.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[1];
	vTemp.u8[1] = ctx.v49.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[1];
	vTemp.u8[8] = ctx.v47.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[0];
	vTemp.u8[0] = ctx.v49.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[0];
	ctx.v46 = vTemp;
	// vmaddfp v12,v12,v1,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v31,v9,v1,v31
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v10,v8,v1,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v30,v13,v1,v30
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v30.f32)));
	// stvlx128 v46,r0,r25
	ea = r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvrx128 v46,r25,r11
	ea = r25.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v46.u8[i]);
	// vrlimi128 v55,v12,3,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 3));
	// vrlimi128 v31,v11,3,0
	simde_mm_store_ps(v31.f32, simde_mm_blend_ps(simde_mm_load_ps(v31.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 3));
	// vcfpuxws128 v44,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v30,v10,3,0
	simde_mm_store_ps(v30.f32, simde_mm_blend_ps(simde_mm_load_ps(v30.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 3));
	// vcfpuxws128 v43,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(v31.f32)));
	// vcfpuxws128 v42,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(v30.f32)));
	// vpkswus128 v41,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// vpkswus128 v40,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v40.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vpkuhus128 v39,v40,v41
	vTemp.u8[15] = ctx.v40.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[7];
	vTemp.u8[7] = ctx.v41.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[7];
	vTemp.u8[14] = ctx.v40.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[6];
	vTemp.u8[6] = ctx.v41.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[6];
	vTemp.u8[13] = ctx.v40.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[5];
	vTemp.u8[5] = ctx.v41.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[5];
	vTemp.u8[12] = ctx.v40.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[4];
	vTemp.u8[4] = ctx.v41.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[4];
	vTemp.u8[11] = ctx.v40.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[3];
	vTemp.u8[3] = ctx.v41.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[3];
	vTemp.u8[10] = ctx.v40.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[2];
	vTemp.u8[2] = ctx.v41.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[2];
	vTemp.u8[9] = ctx.v40.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[1];
	vTemp.u8[1] = ctx.v41.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[1];
	vTemp.u8[8] = ctx.v40.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[0];
	vTemp.u8[0] = ctx.v41.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[0];
	ctx.v39 = vTemp;
	// stvlx128 v39,r0,r24
	ea = r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r24,r11
	ea = r24.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82379FC0) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82379FC8;
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// lwz r6,332(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// lwz r11,20400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20400);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r9,1524(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r15,208(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r19,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	r19.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// lwz r8,20404(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20404);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,204(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lbz r7,4(r14)
	ctx.r7.u64 = REX_LOAD_U8(r14.u32 + 4);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lwz r6,0(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r30,3788(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// lwz r29,3816(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,6608(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 6608);
	// lwz r21,340(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r28,3792(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// add r24,r7,r24
	r24.u64 = ctx.r7.u64 + r24.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,3796(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// mullw r4,r4,r15
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r15.s32);
	// lwz r26,3820(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// lwz r25,3824(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 3824);
	// lwz r20,1772(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r15,r6,12,30,31
	r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// add r30,r8,r10
	r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// add r26,r26,r11
	r26.u64 = r26.u64 + ctx.r11.u64;
	// add r25,r25,r11
	r25.u64 = r25.u64 + ctx.r11.u64;
	// beq cr6,0x8237a0ac
	if (ctx.cr6.eq) goto loc_8237A0AC;
	// rlwinm r21,r6,8,29,31
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x7;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
loc_8237A0AC:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a0d0
	if (ctx.cr6.eq) goto loc_8237A0D0;
	// rlwinm r11,r6,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3;
	// addi r11,r11,735
	ctx.r11.s64 = ctx.r11.s64 + 735;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x8237a0d8
	goto loc_8237A0D8;
loc_8237A0D0:
	// addi r11,r31,2916
	ctx.r11.s64 = r31.s64 + 2916;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8237A0D8:
	// rlwinm r11,r6,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8237a224
	if (ctx.cr6.eq) goto loc_8237A224;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8237a22c
	if (ctx.cr6.eq) goto loc_8237A22C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8237a0fc
	if (ctx.cr6.eq) goto loc_8237A0FC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8237a4c8
	if (!ctx.cr6.eq) goto loc_8237A4C8;
loc_8237A0FC:
	// lwz r24,1532(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r21,1540(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// bne cr6,0x8237a134
	if (!ctx.cr6.eq) goto loc_8237A134;
	// bl 0x823a3d60
	ctx.lr = 0x8237A130;
	sub_823A3D60(ctx, base);
	// b 0x8237a138
	goto loc_8237A138;
loc_8237A134:
	// bl 0x823a3c98
	ctx.lr = 0x8237A138;
	sub_823A3C98(ctx, base);
loc_8237A138:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8237a158
	if (!ctx.cr6.eq) goto loc_8237A158;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8237a164
	goto loc_8237A164;
loc_8237A158:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8237A164:
	// lwz r11,3960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823a5ec0
	ctx.lr = 0x8237A190;
	sub_823A5EC0(ctx, base);
	// lwz r10,22184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237a1a4
	if (ctx.cr6.eq) goto loc_8237A1A4;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
loc_8237A1A4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a6538
	ctx.lr = 0x8237A1B4;
	sub_823A6538(ctx, base);
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a1d8
	if (ctx.cr6.eq) goto loc_8237A1D8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4b90
	ctx.lr = 0x8237A1D8;
	sub_823A4B90(ctx, base);
loc_8237A1D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237A1FC;
	sub_823A4D50(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237A220;
	sub_823A4D50(ctx, base);
	// b 0x8237a4c0
	goto loc_8237A4C0;
loc_8237A224:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8237a250
	if (!ctx.cr6.eq) goto loc_8237A250;
loc_8237A22C:
	// lwz r11,1548(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r24,1532(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r21,1540(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r10,1556(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x8237a298
	goto loc_8237A298;
loc_8237A250:
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4016);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,1540(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r4,1532(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a63c0
	ctx.lr = 0x8237A290;
	sub_823A63C0(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8237A298:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8237a2d8
	if (!ctx.cr6.eq) goto loc_8237A2D8;
	// bl 0x823a3d60
	ctx.lr = 0x8237A2BC;
	sub_823A3D60(ctx, base);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a3d60
	ctx.lr = 0x8237A2D4;
	sub_823A3D60(ctx, base);
	// b 0x8237a2f4
	goto loc_8237A2F4;
loc_8237A2D8:
	// bl 0x823a3c98
	ctx.lr = 0x8237A2DC;
	sub_823A3C98(ctx, base);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a3c98
	ctx.lr = 0x8237A2F4;
	sub_823A3C98(ctx, base);
loc_8237A2F4:
	// lwz r11,3960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823a5ec0
	ctx.lr = 0x8237A324;
	sub_823A5EC0(ctx, base);
	// lwz r11,3960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3960);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,1024
	ctx.r6.s64 = ctx.r1.s64 + 1024;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823a5ec0
	ctx.lr = 0x8237A354;
	sub_823A5EC0(ctx, base);
	// lwz r11,3244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3244);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,1024
	ctx.r5.s64 = ctx.r1.s64 + 1024;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bctrl 
	ctx.lr = 0x8237A380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,22184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237a394
	if (ctx.cr6.eq) goto loc_8237A394;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
loc_8237A394:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a6538
	ctx.lr = 0x8237A3A4;
	sub_823A6538(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a6538
	ctx.lr = 0x8237A3B4;
	sub_823A6538(ctx, base);
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a3d8
	if (ctx.cr6.eq) goto loc_8237A3D8;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4b90
	ctx.lr = 0x8237A3D8;
	sub_823A4B90(ctx, base);
loc_8237A3D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237A3FC;
	sub_823A4D50(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237A420;
	sub_823A4D50(ctx, base);
	// lwz r11,3244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3244);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x8237A44C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237A470;
	sub_823A4D50(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237A494;
	sub_823A4D50(ctx, base);
	// lwz r11,3244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3244);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bctrl 
	ctx.lr = 0x8237A4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237A4C0:
	// lwz r21,120(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,112(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8237A4C8:
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// li r26,0
	r26.s64 = 0;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r22,r11,-22680
	r22.s64 = ctx.r11.s64 + -22680;
	// addi r23,r1,768
	r23.s64 = ctx.r1.s64 + 768;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// ori r25,r10,32768
	r25.u64 = ctx.r10.u64 | 32768;
loc_8237A4F0:
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// lbzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237af1c
	if (ctx.cr6.eq) goto loc_8237AF1C;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237a684
	if (ctx.cr6.eq) goto loc_8237A684;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8237a684
	if (!ctx.cr6.eq) goto loc_8237A684;
	// lwz r11,2560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2560);
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237a538
	if (!ctx.cr6.eq) goto loc_8237A538;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// b 0x8237a65c
	goto loc_8237A65C;
loc_8237A538:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8237a624
	if (ctx.cr6.lt) goto loc_8237A624;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8237a61c
	if (!ctx.cr6.lt) goto loc_8237A61C;
loc_8237A584:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237a5b0
	if (ctx.cr6.lt) goto loc_8237A5B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82337e90
	ctx.lr = 0x8237A5A0;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8237a584
	if (ctx.cr6.eq) goto loc_8237A584;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8237a65c
	goto loc_8237A65C;
loc_8237A5B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r5.u64);
loc_8237A61C:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8237a65c
	goto loc_8237A65C;
loc_8237A624:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82337f50
	ctx.lr = 0x8237A62C;
	sub_82337F50(ctx, base);
loc_8237A62C:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82337f50
	ctx.lr = 0x8237A644;
	sub_82337F50(ctx, base);
	// add r10,r29,r25
	ctx.r10.u64 = r29.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8237a62c
	if (ctx.cr6.lt) goto loc_8237A62C;
loc_8237A65C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8237b23c
	if (!ctx.cr6.eq) goto loc_8237B23C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// bge cr6,0x8237b23c
	if (!ctx.cr6.lt) goto loc_8237B23C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r22,-32
	ctx.r10.s64 = r22.s64 + -32;
	// lwzx r15,r11,r22
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwzx r21,r11,r10
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8237A684:
	// add r11,r27,r14
	ctx.r11.u64 = r27.u64 + r14.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stb r21,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r21.u8);
	// bne cr6,0x8237a6d4
	if (!ctx.cr6.eq) goto loc_8237A6D4;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r20,1772(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,1836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237A6B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x8237ad60
	goto loc_8237AD60;
loc_8237A6D4:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// bne cr6,0x8237a8c0
	if (!ctx.cr6.eq) goto loc_8237A8C0;
	// lwz r20,1768(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r29,1
	r29.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// bl 0x822d5870
	ctx.lr = 0x8237A6F8;
	sub_822D5870(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a798
	if (ctx.cr6.eq) goto loc_8237A798;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8237a784
	if (!ctx.cr6.eq) goto loc_8237A784;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237a784
	if (!ctx.cr6.eq) goto loc_8237A784;
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
	// bge 0x8237a744
	if (!ctx.cr0.lt) goto loc_8237A744;
	// bl 0x823380c8
	ctx.lr = 0x8237A744;
	sub_823380C8(ctx, base);
loc_8237A744:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237a828
	if (!ctx.cr6.eq) goto loc_8237A828;
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
	// bge 0x8237a774
	if (!ctx.cr0.lt) goto loc_8237A774;
	// bl 0x823380c8
	ctx.lr = 0x8237A774;
	sub_823380C8(ctx, base);
loc_8237A774:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237a824
	if (!ctx.cr6.eq) goto loc_8237A824;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x8237a828
	goto loc_8237A828;
loc_8237A784:
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// rlwinm r29,r15,0,30,30
	r29.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	r28.u64 = r15.u32 & 0x1;
	// stbx r15,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, r15.u8);
	// b 0x8237a838
	goto loc_8237A838;
loc_8237A798:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8237a7bc
	if (ctx.cr6.eq) goto loc_8237A7BC;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r29,r9,0,30,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// clrlwi r28,r9,31
	r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x8237a838
	goto loc_8237A838;
loc_8237A7BC:
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
	// bge 0x8237a7e4
	if (!ctx.cr0.lt) goto loc_8237A7E4;
	// bl 0x823380c8
	ctx.lr = 0x8237A7E4;
	sub_823380C8(ctx, base);
loc_8237A7E4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237a828
	if (!ctx.cr6.eq) goto loc_8237A828;
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
	// bge 0x8237a814
	if (!ctx.cr0.lt) goto loc_8237A814;
	// bl 0x823380c8
	ctx.lr = 0x8237A814;
	sub_823380C8(ctx, base);
loc_8237A814:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237a824
	if (!ctx.cr6.eq) goto loc_8237A824;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x8237a828
	goto loc_8237A828;
loc_8237A824:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8237A828:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | r28.u64;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8237A838:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8237a884
	if (ctx.cr6.eq) goto loc_8237A884;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237A860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237A884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237A884:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8237ad6c
	if (ctx.cr6.eq) goto loc_8237AD6C;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237A8AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8237ad58
	goto loc_8237AD58;
loc_8237A8C0:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x8237aaac
	if (!ctx.cr6.eq) goto loc_8237AAAC;
	// lwz r20,1768(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r29,1
	r29.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// bl 0x822d5870
	ctx.lr = 0x8237A8E4;
	sub_822D5870(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a984
	if (ctx.cr6.eq) goto loc_8237A984;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8237a970
	if (!ctx.cr6.eq) goto loc_8237A970;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237a970
	if (!ctx.cr6.eq) goto loc_8237A970;
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
	// bge 0x8237a930
	if (!ctx.cr0.lt) goto loc_8237A930;
	// bl 0x823380c8
	ctx.lr = 0x8237A930;
	sub_823380C8(ctx, base);
loc_8237A930:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237aa14
	if (!ctx.cr6.eq) goto loc_8237AA14;
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
	// bge 0x8237a960
	if (!ctx.cr0.lt) goto loc_8237A960;
	// bl 0x823380c8
	ctx.lr = 0x8237A960;
	sub_823380C8(ctx, base);
loc_8237A960:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237aa10
	if (!ctx.cr6.eq) goto loc_8237AA10;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x8237aa14
	goto loc_8237AA14;
loc_8237A970:
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// rlwinm r29,r15,0,30,30
	r29.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	r28.u64 = r15.u32 & 0x1;
	// stbx r15,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, r15.u8);
	// b 0x8237aa24
	goto loc_8237AA24;
loc_8237A984:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8237a9a8
	if (ctx.cr6.eq) goto loc_8237A9A8;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r29,r9,0,30,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// clrlwi r28,r9,31
	r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x8237aa24
	goto loc_8237AA24;
loc_8237A9A8:
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
	// bge 0x8237a9d0
	if (!ctx.cr0.lt) goto loc_8237A9D0;
	// bl 0x823380c8
	ctx.lr = 0x8237A9D0;
	sub_823380C8(ctx, base);
loc_8237A9D0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237aa14
	if (!ctx.cr6.eq) goto loc_8237AA14;
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
	// bge 0x8237aa00
	if (!ctx.cr0.lt) goto loc_8237AA00;
	// bl 0x823380c8
	ctx.lr = 0x8237AA00;
	sub_823380C8(ctx, base);
loc_8237AA00:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8237aa10
	if (!ctx.cr6.eq) goto loc_8237AA10;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x8237aa14
	goto loc_8237AA14;
loc_8237AA10:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8237AA14:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | r28.u64;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8237AA24:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8237aa70
	if (ctx.cr6.eq) goto loc_8237AA70;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AA70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237AA70:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8237ad6c
	if (ctx.cr6.eq) goto loc_8237AD6C;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AA98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8237ad58
	goto loc_8237AD58;
loc_8237AAAC:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// bne cr6,0x8237ad6c
	if (!ctx.cr6.eq) goto loc_8237AD6C;
	// lwz r20,1768(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822d5870
	ctx.lr = 0x8237AAC8;
	sub_822D5870(ctx, base);
	// lwz r11,2480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bne cr6,0x8237aae8
	if (!ctx.cr6.eq) goto loc_8237AAE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// b 0x8237ac0c
	goto loc_8237AC0C;
loc_8237AAE8:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8237abd4
	if (ctx.cr6.lt) goto loc_8237ABD4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8237abcc
	if (!ctx.cr6.lt) goto loc_8237ABCC;
loc_8237AB34:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237ab60
	if (ctx.cr6.lt) goto loc_8237AB60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82337e90
	ctx.lr = 0x8237AB50;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8237ab34
	if (ctx.cr6.eq) goto loc_8237AB34;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8237ac0c
	goto loc_8237AC0C;
loc_8237AB60:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r5.u64);
loc_8237ABCC:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8237ac0c
	goto loc_8237AC0C;
loc_8237ABD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82337f50
	ctx.lr = 0x8237ABDC;
	sub_82337F50(ctx, base);
loc_8237ABDC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82337f50
	ctx.lr = 0x8237ABF4;
	sub_82337F50(ctx, base);
	// add r10,r29,r25
	ctx.r10.u64 = r29.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8237abdc
	if (ctx.cr6.lt) goto loc_8237ABDC;
loc_8237AC0C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8237b23c
	if (!ctx.cr6.eq) goto loc_8237B23C;
	// addi r11,r14,14
	ctx.r11.s64 = r14.s64 + 14;
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r30,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, r30.u8);
	// beq cr6,0x8237ac7c
	if (ctx.cr6.eq) goto loc_8237AC7C;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1864);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AC7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237AC7C:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237accc
	if (ctx.cr6.eq) goto loc_8237ACCC;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237ACA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237ACCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237ACCC:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237ad1c
	if (ctx.cr6.eq) goto loc_8237AD1C;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237ACF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AD1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237AD1C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237ad6c
	if (ctx.cr6.eq) goto loc_8237AD6C;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1864);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b234
	if (!ctx.cr6.eq) goto loc_8237B234;
	// lwz r11,3212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_8237AD58:
	// lwz r5,1772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_8237AD60:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AD6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237AD6C:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lwz r10,3200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// addi r9,r11,18040
	ctx.r9.s64 = ctx.r11.s64 + 18040;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8237ada0
	if (!ctx.cr6.eq) goto loc_8237ADA0;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r20,-2
	ctx.r10.s64 = r20.s64 + -2;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8237AD90:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8237ad90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237AD90;
loc_8237ADA0:
	// mr r19,r26
	r19.u64 = r26.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// bge cr6,0x8237adbc
	if (!ctx.cr6.lt) goto loc_8237ADBC;
	// lwz r30,104(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// li r28,16
	r28.s64 = 16;
	// b 0x8237add8
	goto loc_8237ADD8;
loc_8237ADBC:
	// bne cr6,0x8237adcc
	if (!ctx.cr6.eq) goto loc_8237ADCC;
	// addi r30,r1,256
	r30.s64 = ctx.r1.s64 + 256;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// b 0x8237add4
	goto loc_8237ADD4;
loc_8237ADCC:
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_8237ADD4:
	// li r28,8
	r28.s64 = 8;
loc_8237ADD8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8237ADE4:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r29,r6,3
	r29.s64 = ctx.r6.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8237ADF8:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r30,r4
	ctx.r9.u64 = r30.u64 + ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + r20.u64;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lhz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8237ae24
	if (!ctx.cr0.lt) goto loc_8237AE24;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8237ae30
	goto loc_8237AE30;
loc_8237AE24:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8237ae30
	if (!ctx.cr6.gt) goto loc_8237AE30;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8237AE30:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r10,1(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8237ae54
	if (!ctx.cr0.lt) goto loc_8237AE54;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8237ae60
	goto loc_8237AE60;
loc_8237AE54:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8237ae60
	if (!ctx.cr6.gt) goto loc_8237AE60;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8237AE60:
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r22,r8,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lbz r8,2(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// lhzx r7,r22,r20
	ctx.r7.u64 = REX_LOAD_U16(r22.u32 + r20.u32);
	// lwz r22,112(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,1(r22)
	REX_STORE_U8(r22.u32 + 1, ctx.r10.u8);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8237ae9c
	if (!ctx.cr0.lt) goto loc_8237AE9C;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8237aea8
	goto loc_8237AEA8;
loc_8237AE9C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8237aea8
	if (!ctx.cr6.gt) goto loc_8237AEA8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8237AEA8:
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,3(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// lhzx r7,r8,r20
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r20.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r22,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, r22.u8);
	// bge 0x8237aee4
	if (!ctx.cr0.lt) goto loc_8237AEE4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8237aef0
	goto loc_8237AEF0;
loc_8237AEE4:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8237aef0
	if (!ctx.cr6.gt) goto loc_8237AEF0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8237AEF0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8237adf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237ADF8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// add r4,r28,r4
	ctx.r4.u64 = r28.u64 + ctx.r4.u64;
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// blt cr6,0x8237ade4
	if (ctx.cr6.lt) goto loc_8237ADE4;
	// lwz r22,120(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8237afb4
	goto loc_8237AFB4;
loc_8237AF1C:
	// add r11,r27,r14
	ctx.r11.u64 = r27.u64 + r14.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// stb r26,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r26.u8);
	// bge cr6,0x8237af3c
	if (!ctx.cr6.lt) goto loc_8237AF3C;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8237af58
	goto loc_8237AF58;
loc_8237AF3C:
	// bne cr6,0x8237af4c
	if (!ctx.cr6.eq) goto loc_8237AF4C;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x8237af54
	goto loc_8237AF54;
loc_8237AF4C:
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_8237AF54:
	// li r3,8
	ctx.r3.s64 = 8;
loc_8237AF58:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
loc_8237AF60:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8237AF74:
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8237af88
	if (!ctx.cr6.lt) goto loc_8237AF88;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8237af94
	goto loc_8237AF94;
loc_8237AF88:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8237af94
	if (!ctx.cr6.gt) goto loc_8237AF94;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8237AF94:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8237af74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237AF74;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8237af60
	if (!ctx.cr0.eq) goto loc_8237AF60;
loc_8237AFB4:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// bge cr6,0x8237afe0
	if (!ctx.cr6.lt) goto loc_8237AFE0;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x8237afd4
	if (!ctx.cr6.eq) goto loc_8237AFD4;
	// addi r23,r23,120
	r23.s64 = r23.s64 + 120;
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// b 0x8237afdc
	goto loc_8237AFDC;
loc_8237AFD4:
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_8237AFDC:
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_8237AFE0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// blt cr6,0x8237a4f0
	if (ctx.cr6.lt) goto loc_8237A4F0;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8237AFF4:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,771
	ctx.r6.s64 = ctx.r1.s64 + 771;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + r26.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + r26.u64;
loc_8237B014:
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r3,r1,769
	ctx.r3.s64 = ctx.r1.s64 + 769;
	// lbzx r30,r8,r5
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r3,r7,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r1,770
	ctx.r7.s64 = ctx.r1.s64 + 770;
	// stbx r30,r8,r16
	REX_STORE_U8(ctx.r8.u32 + r16.u32, r30.u8);
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + ctx.r7.u32);
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// stb r3,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// stb r7,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r8,r16
	ctx.r3.u64 = ctx.r8.u64 + r16.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r4,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// bdnz 0x8237b014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237B014;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x8237aff4
	if (ctx.cr6.lt) goto loc_8237AFF4;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8237B0B4:
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r6,r1,129
	ctx.r6.s64 = ctx.r1.s64 + 129;
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r4,r1,193
	ctx.r4.s64 = ctx.r1.s64 + 193;
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r5,r3,r18
	REX_STORE_U8(ctx.r3.u32 + r18.u32, ctx.r5.u8);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r5,r3,r10
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stbx r9,r5,r17
	REX_STORE_U8(ctx.r5.u32 + r17.u32, ctx.r9.u8);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// addi r30,r1,194
	r30.s64 = ctx.r1.s64 + 194;
	// addi r29,r1,131
	r29.s64 = ctx.r1.s64 + 131;
	// addi r28,r1,195
	r28.s64 = ctx.r1.s64 + 195;
	// addi r27,r1,132
	r27.s64 = ctx.r1.s64 + 132;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r26,r1,197
	r26.s64 = ctx.r1.s64 + 197;
	// addi r25,r1,134
	r25.s64 = ctx.r1.s64 + 134;
	// addi r24,r1,198
	r24.s64 = ctx.r1.s64 + 198;
	// lbzx r28,r11,r28
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// lbzx r27,r11,r27
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// lbzx r26,r11,r26
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// lbzx r25,r11,r25
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + r25.u32);
	// lbzx r24,r11,r24
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + r24.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + r18.u64;
	// stb r6,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r6.u8);
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// lbzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// lbzx r30,r11,r29
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// addi r29,r1,133
	r29.s64 = ctx.r1.s64 + 133;
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// addi r4,r1,135
	ctx.r4.s64 = ctx.r1.s64 + 135;
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// lbzx r29,r11,r29
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// stb r3,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// stb r5,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r18
	ctx.r3.u64 = ctx.r9.u64 + r18.u64;
	// stb r30,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r30.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r17
	ctx.r5.u64 = ctx.r9.u64 + r17.u64;
	// stb r28,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, r28.u8);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// stb r27,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, r27.u8);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + r17.u64;
	// stb r6,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r18
	ctx.r6.u64 = ctx.r9.u64 + r18.u64;
	// stb r29,5(r6)
	REX_STORE_U8(ctx.r6.u32 + 5, r29.u8);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + r17.u64;
	// stb r26,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r18
	ctx.r6.u64 = ctx.r9.u64 + r18.u64;
	// stb r25,6(r6)
	REX_STORE_U8(ctx.r6.u32 + 6, r25.u8);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + r17.u64;
	// stb r24,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, r24.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r6,r1,199
	ctx.r6.s64 = ctx.r1.s64 + 199;
	// lbzx r5,r11,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r9,r18
	ctx.r3.u64 = ctx.r9.u64 + r18.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stb r5,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r5.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r17
	ctx.r6.u64 = ctx.r9.u64 + r17.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r4,7(r6)
	REX_STORE_U8(ctx.r6.u32 + 7, ctx.r4.u8);
	// bdnz 0x8237b0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237B0B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237B234:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x822d4ea0
	return;
loc_8237B23C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823C1830) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823C1838;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,340(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// srawi r11,r14,31
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r14.s32 >> 31;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r27,r14
	r27.u64 = r14.u64;
	// xor r10,r14,r11
	ctx.r10.u64 = r14.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c1868
	if (ctx.cr6.eq) goto loc_823C1868;
	// srawi r27,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r27.s64 = r14.s32 >> 1;
loc_823C1868:
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// srawi r11,r24,31
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r24.s32 >> 31;
	// mr r28,r24
	r28.u64 = r24.u64;
	// xor r10,r24,r11
	ctx.r10.u64 = r24.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c1888
	if (ctx.cr6.eq) goto loc_823C1888;
	// srawi r28,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r28.s64 = r24.s32 >> 1;
loc_823C1888:
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r17,324(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// subf r31,r9,r11
	r31.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r20,r7,16,0,15
	r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// divw r10,r31,r26
	ctx.r10.u64 = uint32_t((r26.s32 && !(r31.s32 == INT32_MIN && r26.s32 == -1)) ? r31.s32 / r26.s32 : 0);
	// subf r25,r9,r20
	r25.u64 = r20.u64 - ctx.r9.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rotlwi r30,r25,1
	r30.u64 = __builtin_rotateleft32(r25.u32, 1);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// lis r29,0
	r29.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r29,r29,32768
	r29.u64 = r29.u64 | 32768;
	// addi r23,r17,-1
	r23.s64 = r17.s64 + -1;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// andc r30,r23,r9
	r30.u64 = r23.u64 & ~ctx.r9.u64;
	// andc r31,r26,r31
	r31.u64 = r26.u64 & ~r31.u64;
	// subf r15,r29,r11
	r15.u64 = ctx.r11.u64 - r29.u64;
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r9,r25,r23
	ctx.r9.u64 = uint32_t((r23.s32 && !(r25.s32 == INT32_MIN && r23.s32 == -1)) ? r25.s32 / r23.s32 : 0);
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r30,-1
	if (r30.s32 == -1 || r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r31,-1
	if (r31.s32 == -1 || r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r19,r27,1,0,30
	r19.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r28,1,0,30
	r22.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r21,r29
	r21.u64 = r29.u64;
	// cmpw cr6,r15,r29
	ctx.cr6.compare<int32_t>(r15.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c1984
	if (ctx.cr6.lt) goto loc_823C1984;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwz r27,364(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r18,r10,1,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// subf r23,r29,r11
	r23.u64 = ctx.r11.u64 - r29.u64;
loc_823C1920:
	// srawi r30,r21,17
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1FFFF) != 0);
	r30.s64 = r21.s32 >> 17;
	// li r31,0
	r31.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(r23.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c1974
	if (ctx.cr6.lt) goto loc_823C1974;
	// mullw r28,r30,r16
	r28.s64 = int64_t(r30.s32) * int64_t(r16.s32);
	// add r26,r28,r6
	r26.u64 = r28.u64 + ctx.r6.u64;
	// addi r25,r27,1
	r25.s64 = r27.s64 + 1;
	// rlwinm r24,r9,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C1944:
	// srawi r30,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	r30.s64 = ctx.r11.s32 >> 17;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// lbzx r30,r26,r30
	r30.u64 = REX_LOAD_U8(r26.u32 + r30.u32);
	// lbzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stbx r30,r25,r31
	REX_STORE_U8(r25.u32 + r31.u32, r30.u8);
	// stbx r4,r27,r31
	REX_STORE_U8(r27.u32 + r31.u32, ctx.r4.u8);
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// ble cr6,0x823c1944
	if (!ctx.cr6.gt) goto loc_823C1944;
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_823C1974:
	// add r21,r18,r21
	r21.u64 = r18.u64 + r21.u64;
	// add r27,r27,r19
	r27.u64 = r27.u64 + r19.u64;
	// cmpw cr6,r21,r15
	ctx.cr6.compare<int32_t>(r21.s32, r15.s32, ctx.xer);
	// ble cr6,0x823c1920
	if (!ctx.cr6.gt) goto loc_823C1920;
loc_823C1984:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823c19c0
	if (!ctx.cr6.eq) goto loc_823C19C0;
	// clrlwi r11,r17,30
	ctx.r11.u64 = r17.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c19c0
	if (!ctx.cr6.eq) goto loc_823C19C0;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823c07c0
	ctx.lr = 0x823C19B8;
	sub_823C07C0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_823C19C0:
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpw cr6,r15,r29
	ctx.cr6.compare<int32_t>(r15.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c1a4c
	if (ctx.cr6.lt) goto loc_823C1A4C;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r25,r14,1,0,30
	r25.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + r20.u64;
	// subf r27,r29,r8
	r27.u64 = ctx.r8.u64 - r29.u64;
loc_823C19E4:
	// add r11,r26,r10
	ctx.r11.u64 = r26.u64 + ctx.r10.u64;
	// srawi r7,r26,16
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = r26.s32 >> 16;
	// srawi r30,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r30.s64 = ctx.r11.s32 >> 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c1a3c
	if (ctx.cr6.lt) goto loc_823C1A3C;
	// lwz r6,308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r28,r3,r14
	r28.u64 = ctx.r3.u64 + r14.u64;
	// mullw r31,r7,r6
	r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r30,r6
	ctx.r7.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_823C1A18:
	// srawi r7,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// lbzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r7.u32);
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// stbx r6,r3,r8
	REX_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r6.u8);
	// stbx r7,r28,r8
	REX_STORE_U8(r28.u32 + ctx.r8.u32, ctx.r7.u8);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// ble cr6,0x823c1a18
	if (!ctx.cr6.gt) goto loc_823C1A18;
loc_823C1A3C:
	// add r26,r5,r26
	r26.u64 = ctx.r5.u64 + r26.u64;
	// add r3,r25,r3
	ctx.r3.u64 = r25.u64 + ctx.r3.u64;
	// cmpw cr6,r26,r15
	ctx.cr6.compare<int32_t>(r26.s32, r15.s32, ctx.xer);
	// ble cr6,0x823c19e4
	if (!ctx.cr6.gt) goto loc_823C19E4;
loc_823C1A4C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823CAEA0) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CB038) {
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
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bne cr6,0x823cb078
	if (!ctx.cr6.eq) goto loc_823CB078;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x823cb07c
	goto loc_823CB07C;
loc_823CB078:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823CB07C:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x824d491c
	ctx.lr = 0x823CB098;
	__imp__XMsgStartIORequestEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cb0b8
	if (ctx.cr0.lt) goto loc_823CB0B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82209598
	ctx.lr = 0x823CB0A8;
	sub_82209598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cb0b8
	if (ctx.cr0.lt) goto loc_823CB0B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823cb0d0
	goto loc_823CB0D0;
loc_823CB0B8:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823cb0d0
	if (ctx.cr6.eq) goto loc_823CB0D0;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_823CB0D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CC868) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e78
	ctx.lr = 0x823CC870;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f04
	ctx.lr = 0x823CC878;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823CC89C;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r25,12
	ctx.r3.s64 = r25.s64 + 12;
	// bl 0x823cd0c0
	ctx.lr = 0x823CC8AC;
	sub_823CD0C0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823cd0c0
	ctx.lr = 0x823CC8BC;
	sub_823CD0C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f25,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f25.f64 = double(temp.f32);
	// fmr f21,f25
	f21.f64 = f25.f64;
	// fmr f20,f25
	f20.f64 = f25.f64;
	// fmr f19,f25
	f19.f64 = f25.f64;
	// ble cr6,0x823cc918
	if (!ctx.cr6.gt) goto loc_823CC918;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r7,64(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 64);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f12,f11
	f20.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f21,f13,f11
	f21.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f19,f0,f11
	f19.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_823CC918:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccd78
	if (ctx.cr6.eq) goto loc_823CCD78;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f18,-13840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13840);
	f18.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f16,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f16.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f22,-25016(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -25016);
	f22.f64 = double(temp.f32);
	// lfs f23,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	f23.f64 = double(temp.f32);
	// addi r24,r29,28
	r24.s64 = r29.s64 + 28;
	// lfs f24,1984(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1984);
	f24.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f26,21056(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 21056);
	f26.f64 = double(temp.f32);
	// lfs f27,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	f27.f64 = double(temp.f32);
	// lfs f17,1980(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1980);
	f17.f64 = double(temp.f32);
loc_823CC96C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823cca7c
	if (!ctx.cr6.gt) goto loc_823CCA7C;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lfsx f1,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f17
	ctx.cr6.compare(ctx.f1.f64, f17.f64);
	// beq cr6,0x823cca7c
	if (ctx.cr6.eq) goto loc_823CCA7C;
	// bl 0x822d4d68
	ctx.lr = 0x823CC988;
	sub_822D4D68(ctx, base);
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfsx f1,r27,r11
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4c88
	ctx.lr = 0x823CC998;
	sub_822D4C88(ctx, base);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// fsubs f0,f27,f31
	ctx.f0.f64 = double(float(f27.f64 - f31.f64));
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r7,32(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lwz r6,36(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 36);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f6,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f4,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lwz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 0);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f7,f2,f0,f31
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, f31.f64)));
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f9,f9,f0,f31
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, f31.f64)));
	// fmadds f1,f11,f0,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, f31.f64)));
	// fsubs f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fadds f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fsubs f11,f8,f3
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f3,f10,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fsubs f2,f2,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * f20.f64));
	// fmuls f12,f11,f19
	ctx.f12.f64 = double(float(ctx.f11.f64 * f19.f64));
	// fmuls f11,f8,f20
	ctx.f11.f64 = double(float(ctx.f8.f64 * f20.f64));
	// fmadds f10,f9,f21,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, f21.f64, ctx.f0.f64)));
	// fmadds f9,f1,f20,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, f20.f64, ctx.f12.f64)));
	// fmadds f8,f7,f19,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, f19.f64, ctx.f11.f64)));
	// fmadds f7,f3,f19,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f3.f64, f19.f64, ctx.f10.f64)));
	// fmadds f5,f5,f21,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, f21.f64, ctx.f9.f64)));
	// fmadds f3,f2,f21,f8
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, f21.f64, ctx.f8.f64)));
	// fadds f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// b 0x823cca8c
	goto loc_823CCA8C;
loc_823CCA7C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823CCA8C;
	sub_822D4FA0(ctx, base);
loc_823CCA8C:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823ccaa8
	if (!ctx.cr6.gt) goto loc_823CCAA8;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f17
	ctx.cr6.compare(ctx.f0.f64, f17.f64);
	// beq cr6,0x823ccd64
	if (ctx.cr6.eq) goto loc_823CCD64;
loc_823CCAA8:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r25,24
	ctx.r4.s64 = r25.s64 + 24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823cd088
	ctx.lr = 0x823CCAB8;
	sub_823CD088(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f3,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f9,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f1,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f13,f8,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f9,f1,f13,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f10,f6,f13,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f7.f64)));
	// lfs f0,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f28,r27,r11
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	f28.f64 = double(temp.f32);
	// fmadds f1,f12,f5,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f11.f64)));
	// stfsx f25,r27,r11
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r27.u32 + ctx.r11.u32, temp.u32);
	// fmadds f29,f0,f12,f9
	f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f2,f4,f12,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmuls f8,f1,f1
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f7,f2,f2,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f8.f64)));
	// fsqrts f31,f7
	f31.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// bgt cr6,0x823ccbc0
	if (ctx.cr6.gt) goto loc_823CCBC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823ccb44
	if (ctx.cr6.eq) goto loc_823CCB44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823CCB44:
	// rlwinm r9,r26,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ccb54
	if (ctx.cr6.eq) goto loc_823CCB54;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823CCB54:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r8,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f28,f12
	ctx.f0.f64 = double(float(f28.f64 / ctx.f12.f64));
	// beq cr6,0x823ccd64
	if (ctx.cr6.eq) goto loc_823CCD64;
loc_823CCB78:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccbac
	if (ctx.cr6.eq) goto loc_823CCBAC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823ccb94
	if (!ctx.cr6.eq) goto loc_823CCB94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823ccbac
	if (!ctx.cr6.eq) goto loc_823CCBAC;
loc_823CCB94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
loc_823CCBAC:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ccb78
	if (ctx.cr6.lt) goto loc_823CCB78;
	// b 0x823ccd64
	goto loc_823CCD64;
loc_823CCBC0:
	// bl 0x822d48b8
	ctx.lr = 0x823CCBC4;
	sub_822D48B8(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f1,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4c88
	ctx.lr = 0x823CCBD8;
	sub_822D4C88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 52);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f13,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f29,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// blt cr6,0x823ccc00
	if (ctx.cr6.lt) goto loc_823CCC00;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// b 0x823ccc68
	goto loc_823CCC68;
loc_823CCC00:
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4c88
	ctx.lr = 0x823CCC10;
	sub_822D4C88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 52);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f29,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fmuls f10,f12,f23
	ctx.f10.f64 = double(float(ctx.f12.f64 * f23.f64));
	// fmuls f9,f11,f24
	ctx.f9.f64 = double(float(ctx.f11.f64 * f24.f64));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x822d8d78
	ctx.lr = 0x823CCC38;
	sub_822D8D78(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fadds f8,f29,f27
	ctx.f8.f64 = double(float(f29.f64 + f27.f64));
	// fdivs f15,f28,f8
	f15.f64 = double(float(f28.f64 / ctx.f8.f64));
	// fmr f1,f15
	ctx.f1.f64 = f15.f64;
	// bl 0x823cc248
	ctx.lr = 0x823CCC60;
	sub_823CC248(ctx, base);
	// fadds f2,f30,f22
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f30.f64 + f22.f64));
	// fmuls f1,f15,f29
	ctx.f1.f64 = double(float(f15.f64 * f29.f64));
loc_823CCC68:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cc248
	ctx.lr = 0x823CCC7C;
	sub_823CC248(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f16
	ctx.f0.f64 = double(float(ctx.f0.f64 * f16.f64));
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// bge cr6,0x823ccc98
	if (!ctx.cr6.lt) goto loc_823CCC98;
	// fmr f0,f18
	ctx.f0.f64 = f18.f64;
loc_823CCC98:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x823ccd64
	if (ctx.cr6.gt) goto loc_823CCD64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823cccb8
	if (ctx.cr6.eq) goto loc_823CCCB8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823CCCB8:
	// rlwinm r8,r26,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cccc8
	if (ctx.cr6.eq) goto loc_823CCCC8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823CCCC8:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fsubs f13,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f26.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// std r9,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfd f12,136(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f28,f10
	ctx.f13.f64 = double(float(f28.f64 / ctx.f10.f64));
	// beq cr6,0x823ccd64
	if (ctx.cr6.eq) goto loc_823CCD64;
loc_823CCCF4:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ccd54
	if (ctx.cr6.eq) goto loc_823CCD54;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823ccd10
	if (!ctx.cr6.eq) goto loc_823CCD10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823ccd54
	if (!ctx.cr6.eq) goto loc_823CCD54;
loc_823CCD10:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fsubs f12,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f27.f64 - ctx.f0.f64));
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r9,r10
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f13,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfsx f8,r9,r10
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
loc_823CCD54:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823cccf4
	if (ctx.cr6.lt) goto loc_823CCCF4;
loc_823CCD64:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cc96c
	if (ctx.cr6.lt) goto loc_823CC96C;
loc_823CCD78:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f50
	ctx.lr = 0x823CCD84;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823DD308) {
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
	// bl 0x822d4e78
	ctx.lr = 0x823DD310;
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
	// beq cr6,0x823dd348
	if (ctx.cr6.eq) goto loc_823DD348;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DD344;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DD348:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dd364
	if (ctx.cr6.eq) goto loc_823DD364;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DD360;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DD364:
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
	// lfs f31,1996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
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
	// bne 0x823dd3d0
	if (!ctx.cr0.eq) goto loc_823DD3D0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823dd3d8
	goto loc_823DD3D8;
loc_823DD3D0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DD3D8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd3f0
	if (ctx.cr6.eq) goto loc_823DD3F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DD3F0;
	sub_823DC658(ctx, base);
loc_823DD3F0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823dd6b8
	if (!ctx.cr6.gt) goto loc_823DD6B8;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f10,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f0,9952(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,32280(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 32280);
	ctx.f6.f64 = double(temp.f32);
loc_823DD454:
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
	// beq cr6,0x823dd604
	if (ctx.cr6.eq) goto loc_823DD604;
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
loc_823DD604:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823dd614
	if (ctx.cr6.lt) goto loc_823DD614;
	// li r11,31
	ctx.r11.s64 = 31;
loc_823DD614:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dd62c
	if (!ctx.cr6.gt) goto loc_823DD62C;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x823dd630
	if (ctx.cr6.lt) goto loc_823DD630;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x823dd630
	goto loc_823DD630;
loc_823DD62C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DD630:
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823dd640
	if (ctx.cr6.lt) goto loc_823DD640;
	// li r11,31
	ctx.r11.s64 = 31;
loc_823DD640:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dd658
	if (!ctx.cr6.gt) goto loc_823DD658;
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// blt cr6,0x823dd65c
	if (ctx.cr6.lt) goto loc_823DD65C;
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x823dd65c
	goto loc_823DD65C;
loc_823DD658:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DD65C:
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823dd66c
	if (ctx.cr6.lt) goto loc_823DD66C;
	// li r11,31
	ctx.r11.s64 = 31;
loc_823DD66C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823dd684
	if (!ctx.cr6.gt) goto loc_823DD684;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x823dd688
	if (ctx.cr6.lt) goto loc_823DD688;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x823dd688
	goto loc_823DD688;
loc_823DD684:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DD688:
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sthux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823dd454
	if (ctx.cr6.lt) goto loc_823DD454;
loc_823DD6B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823E4D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,116(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e4dd4
	if (!ctx.cr6.lt) goto loc_823E4DD4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,-30028(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E4D74:
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
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
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
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
	// lhzu r10,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
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
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e4d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4D74;
loc_823E4DD4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4df0
	if (ctx.cr6.eq) goto loc_823E4DF0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E4DF0;
	sub_82413D40(ctx, base);
loc_823E4DF0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4e0c
	if (ctx.cr6.eq) goto loc_823E4E0C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E4E0C;
	sub_823DC3F0(ctx, base);
loc_823E4E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E8078) {
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
	// bl 0x82226458
	ctx.lr = 0x823E80B4;
	sub_82226458(ctx, base);
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

DEFINE_REX_FUNC(sub_823EB160) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EB168;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x823eb18c
	goto loc_823EB18C;
loc_823EB180:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb1b0
	if (ctx.cr6.eq) goto loc_823EB1B0;
loc_823EB18C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ea610
	ctx.lr = 0x823EB1A4;
	sub_823EA610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eb180
	if (!ctx.cr0.lt) goto loc_823EB180;
	// b 0x823eb1b4
	goto loc_823EB1B4;
loc_823EB1B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EB1B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823ECA00) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x823ecaf4
	if (ctx.cr6.gt) goto loc_823ECAF4;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13756
	ctx.r12.s64 = ctx.r12.s64 + -13756;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823ECA70;
	case 1:
		goto loc_823ECAA0;
	case 2:
		goto loc_823ECAD4;
	case 3:
		goto loc_823ECADC;
	case 4:
		goto loc_823ECADC;
	case 5:
		goto loc_823ECADC;
	case 6:
		goto loc_823ECADC;
	case 7:
		goto loc_823ECADC;
	case 8:
		goto loc_823ECADC;
	case 9:
		goto loc_823ECAF4;
	case 10:
		goto loc_823ECADC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823ECA70:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ECA98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,201
	ctx.r7.s64 = 201;
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
loc_823ECAA0:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823ecb20
	if (!ctx.cr6.eq) goto loc_823ECB20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec7d8
	ctx.lr = 0x823ECAC8;
	sub_823EC7D8(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823ecb20
	goto loc_823ECB20;
loc_823ECAD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ecb24
	goto loc_823ECB24;
loc_823ECADC:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECAF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823ecb24
	goto loc_823ECB24;
loc_823ECAF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823ECB20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ECB20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823ECB24:
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

DEFINE_REX_FUNC(sub_823F01B0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f01cc
	if (ctx.cr6.eq) goto loc_823F01CC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f01cc
	if (ctx.cr6.eq) goto loc_823F01CC;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// and r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ctx.r5.u64;
	// blr 
	return;
loc_823F01CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F03D8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,1559(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r10,1560(r3)
	REX_STORE_U8(ctx.r3.u32 + 1560, ctx.r10.u8);
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F0B68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,10(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// mullw. r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0b9c
	if (ctx.cr0.eq) goto loc_823F0B9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_823F0B90:
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823f0b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0B90;
loc_823F0B9C:
	// lbz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xF8;
	// stb r10,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F38D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F38D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r10,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r5,r9,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r30,r8,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// rlwinm r29,r6,8,16,23
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 | ctx.r9.u64;
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// or r9,r30,r8
	ctx.r9.u64 = r30.u64 | ctx.r8.u64;
	// or r11,r29,r6
	ctx.r11.u64 = r29.u64 | ctx.r6.u64;
	// sth r10,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// sth r9,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// bl 0x823f3500
	ctx.lr = 0x823F3944;
	sub_823F3500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f3af4
	if (ctx.cr0.lt) goto loc_823F3AF4;
	// lbz r11,97(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ble cr6,0x823f3a04
	if (!ctx.cr6.gt) goto loc_823F3A04;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-7216(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7216);
	ctx.f0.f64 = double(temp.f32);
loc_823F39B4:
	// subfic r9,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r9.u64 = static_cast<uint64_t>(7) - ctx.r11.u64;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f39b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F39B4;
	// b 0x823f3a78
	goto loc_823F3A78;
loc_823F3A04:
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16308(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
loc_823F3A14:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f3a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3A14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_823F3A78:
	// lbz r8,99(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_823F3A9C:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823f3a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3A9C;
	// lbz r8,102(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r7,103(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// addi r9,r31,124
	ctx.r9.s64 = r31.s64 + 124;
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_823F3AD8:
	// rlwinm r10,r11,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823f3ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3AD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F3AF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823FA830) {
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
	ctx.lr = 0x823FA838;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FA85C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stw r3,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r3.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r8,r9,-22640
	ctx.r8.s64 = ctx.r9.s64 + -22640;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// beq cr6,0x823fa898
	if (ctx.cr6.eq) goto loc_823FA898;
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
	ctx.lr = 0x823FA898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA898:
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fa8e8
	if (ctx.cr6.eq) goto loc_823FA8E8;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823fa8d4
	if (!ctx.cr6.lt) goto loc_823FA8D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,47
	ctx.r10.s64 = 47;
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
	ctx.lr = 0x823FA8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA8D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fa148
	ctx.lr = 0x823FA8DC;
	sub_823FA148(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// b 0x823fa8ec
	goto loc_823FA8EC;
loc_823FA8E8:
	// lwz r27,320(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 320);
loc_823FA8EC:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fa968
	if (!ctx.cr6.gt) goto loc_823FA968;
	// addi r30,r11,-56
	r30.s64 = ctx.r11.s64 + -56;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_823FA908:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,68(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzu r11,84(r30)
	ea = 84 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r8,r6,r5
	ctx.r8.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// mullw r6,r8,r27
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bctrl 
	ctx.lr = 0x823FA954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823fa908
	if (ctx.cr6.lt) goto loc_823FA908;
loc_823FA968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823FE9E8) {
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
	ctx.lr = 0x823FE9F0;
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lwz r26,112(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r9,328(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,20(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x823fead4
	if (ctx.cr0.lt) goto loc_823FEAD4;
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r6,-4
	r25.s64 = ctx.r6.s64 + -4;
loc_823FEA1C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwzu r10,4(r25)
	ea = 4 + r25.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r25.u32 = ea;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// lwzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq cr6,0x823feacc
	if (ctx.cr6.eq) goto loc_823FEACC;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_823FEA60:
	// lbzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbzx r23,r6,r11
	r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r22,r7,2
	r22.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r23,r7
	ctx.r7.u64 = ctx.r7.u64 - r23.u64;
	// lbz r7,255(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 255);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// lwzx r7,r22,r27
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + r27.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r23,r8
	ctx.r7.u64 = ctx.r8.u64 - r23.u64;
	// lbz r8,255(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 255);
	// stb r8,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lwzx r7,r22,r29
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + r29.u32);
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r7,r23,r8
	ctx.r7.u64 = ctx.r8.u64 - r23.u64;
	// lbz r8,255(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 255);
	// stb r8,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823fea60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FEA60;
loc_823FEACC:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge 0x823fea1c
	if (!ctx.cr0.lt) goto loc_823FEA1C;
loc_823FEAD4:
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82404BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82404BF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lwz r30,268(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r29,260(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82404900
	ctx.lr = 0x82404C50;
	sub_82404900(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82405410) {
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
	ctx.lr = 0x82405418;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	r30.s64 = 4;
loc_82405430:
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82409e00
	ctx.lr = 0x8240544C;
	sub_82409E00(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// bne 0x82405430
	if (!ctx.cr0.eq) goto loc_82405430;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82406468) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82406598
	if (ctx.cr6.eq) goto loc_82406598;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406514
	if (ctx.cr6.eq) goto loc_82406514;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82406490
	if (ctx.cr6.eq) goto loc_82406490;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82406490:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82406508
	if (!ctx.cr6.eq) goto loc_82406508;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824064fc
	if (ctx.cr6.eq) goto loc_824064FC;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824064fc
	if (ctx.cr6.eq) goto loc_824064FC;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824064fc
	if (ctx.cr6.eq) goto loc_824064FC;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82406508
	if (!ctx.cr6.eq) goto loc_82406508;
loc_824064FC:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// blr 
	return;
loc_82406508:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// blr 
	return;
loc_82406514:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240658c
	if (!ctx.cr6.eq) goto loc_8240658C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406580
	if (ctx.cr6.eq) goto loc_82406580;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406580
	if (ctx.cr6.eq) goto loc_82406580;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406580
	if (ctx.cr6.eq) goto loc_82406580;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8240658c
	if (!ctx.cr6.eq) goto loc_8240658C;
loc_82406580:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// blr 
	return;
loc_8240658C:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// blr 
	return;
loc_82406598:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,24368
	ctx.r3.s64 = ctx.r11.s64 + 24368;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240E930) {
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
	ctx.lr = 0x8240E938;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,16880
	r30.s64 = ctx.r11.s64 + 16880;
	// addi r29,r10,28608
	r29.s64 = ctx.r10.s64 + 28608;
	// bne cr6,0x8240e980
	if (!ctx.cr6.eq) goto loc_8240E980;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,28348
	ctx.r5.s64 = ctx.r11.s64 + 28348;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E980;
	sub_8240E308(ctx, base);
loc_8240E980:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8240e9c0
	if (!ctx.cr0.eq) goto loc_8240E9C0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,28712
	ctx.r5.s64 = ctx.r11.s64 + 28712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E9B8;
	sub_8240E308(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8240e9e0
	goto loc_8240E9E0;
loc_8240E9C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// stw r27,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r27.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2436);
	// bl 0x8240e780
	ctx.lr = 0x8240E9DC;
	sub_8240E780(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240E9E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824106C0) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x824106C8;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f2c
	ctx.lr = 0x824106D0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x824106fc
	if (ctx.cr6.eq) goto loc_824106FC;
loc_824106E4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824106EC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f78
	ctx.lr = 0x824106F8;
	// b 0x822d4eac
	return;
loc_824106FC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82410728
	if (ctx.cr6.eq) goto loc_82410728;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824106e4
	if (!ctx.cr6.eq) goto loc_824106E4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x824106e4
	if (!ctx.cr6.eq) goto loc_824106E4;
loc_82410728:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8241074c
	if (ctx.cr6.eq) goto loc_8241074C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824106e4
	if (!ctx.cr6.eq) goto loc_824106E4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x824106e4
	if (!ctx.cr6.eq) goto loc_824106E4;
loc_8241074C:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824106e4
	if (!ctx.cr6.eq) goto loc_824106E4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82410790
	if (!ctx.cr6.gt) goto loc_82410790;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82410790
	if (ctx.cr0.eq) goto loc_82410790;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_82410790:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824107ac
	if (!ctx.cr6.gt) goto loc_824107AC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_824107AC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824107c8
	if (!ctx.cr6.gt) goto loc_824107C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_824107C8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r30,-1
	r30.s64 = -1;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x824107ec
	if (!ctx.cr6.gt) goto loc_824107EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824107EC:
	// bl 0x822c80d0
	ctx.lr = 0x824107F0;
	sub_822C80D0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82410808
	if (!ctx.cr6.eq) goto loc_82410808;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824106ec
	goto loc_824106EC;
loc_82410808:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82410854
	if (!ctx.cr6.eq) goto loc_82410854;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82410830
	if (!ctx.cr6.gt) goto loc_82410830;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82410830:
	// bl 0x822c80d0
	ctx.lr = 0x82410834;
	sub_822C80D0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// b 0x82410890
	goto loc_82410890;
loc_82410854:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82410868
	if (!ctx.cr6.gt) goto loc_82410868;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82410868:
	// bl 0x822c80d0
	ctx.lr = 0x8241086C;
	sub_822C80D0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(48));
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r28,r9,r3
	r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r27,r8,r3
	r27.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_82410890:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824108b4
	if (!ctx.cr6.eq) goto loc_824108B4;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_824108A4:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824108AC;
	sub_822C80A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824106ec
	goto loc_824106EC;
loc_824108B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824108d4
	if (!ctx.cr6.eq) goto loc_824108D4;
	// mr r25,r29
	r25.u64 = r29.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r22,r27
	r22.u64 = r27.u64;
	// b 0x824108e4
	goto loc_824108E4;
loc_824108D4:
	// addi r25,r29,16
	r25.s64 = r29.s64 + 16;
	// addi r24,r30,16
	r24.s64 = r30.s64 + 16;
	// addi r23,r28,16
	r23.s64 = r28.s64 + 16;
	// addi r22,r27,16
	r22.s64 = r27.s64 + 16;
loc_824108E4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82410b84
	if (!ctx.cr6.gt) goto loc_82410B84;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,16372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	f31.f64 = double(temp.f32);
loc_82410900:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm r20,r19,1,0,30
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82410b74
	if (!ctx.cr6.gt) goto loc_82410B74;
loc_82410914:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r31,r21,1,0,30
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x82410960
	if (ctx.cr6.eq) goto loc_82410960;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r20,1
	ctx.r5.s64 = r20.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82410960:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// beq cr6,0x82410988
	if (ctx.cr6.eq) goto loc_82410988;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82410988:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// beq cr6,0x824109b8
	if (ctx.cr6.eq) goto loc_824109B8;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// beq cr6,0x824109b8
	if (ctx.cr6.eq) goto loc_824109B8;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r20,1
	ctx.r5.s64 = r20.s64 + 1;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824109B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824109B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82410b40
	if (!ctx.cr6.gt) goto loc_82410B40;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_824109D0:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r17,r1,80
	r17.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + r25.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lfsx f13,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// lfsx f0,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + r23.u64;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f11,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + r22.u64;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfsx f10,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r24
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f5,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// lfsx f9,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	f30.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfsx f29,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f28.f64 = double(temp.f32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfsx f4,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f26,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	f25.f64 = double(temp.f32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 + ctx.f11.f64));
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fadds f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 + ctx.f12.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f12,f27,f12
	ctx.f12.f64 = double(float(f27.f64 + ctx.f12.f64));
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(f26.f64 + ctx.f13.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(f25.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r8,4(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r7,8(r17)
	ctx.r7.u64 = REX_LOAD_U32(r17.u32 + 8);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,12(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824109d0
	if (ctx.cr6.lt) goto loc_824109D0;
loc_82410B40:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410B60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82410914
	if (ctx.cr6.lt) goto loc_82410914;
loc_82410B74:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82410900
	if (ctx.cr6.lt) goto loc_82410900;
loc_82410B84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82410B8C;
	sub_822C80A8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x824108a4
	goto loc_824108A4;
}

DEFINE_REX_FUNC(sub_82420260) {
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
	ctx.lr = 0x82420268;
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
	// bne cr6,0x824202a8
	if (!ctx.cr6.eq) goto loc_824202A8;
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
	// li r7,2261
	ctx.r7.s64 = 2261;
	// bl 0x8240e308
	ctx.lr = 0x824202A8;
	sub_8240E308(ctx, base);
loc_824202A8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x824202B8;
	sub_8240E880(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne 0x82420320
	if (!ctx.cr0.eq) goto loc_82420320;
	// beq cr6,0x824202dc
	if (ctx.cr6.eq) goto loc_824202DC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x824202DC;
	sub_8240E930(ctx, base);
loc_824202DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420318
	if (ctx.cr6.eq) goto loc_82420318;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420318
	if (ctx.cr6.eq) goto loc_82420318;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bctrl 
	ctx.lr = 0x82420318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420318:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82420378
	goto loc_82420378;
loc_82420320:
	// beq cr6,0x82420338
	if (ctx.cr6.eq) goto loc_82420338;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420338;
	sub_8240E930(ctx, base);
loc_82420338:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420374
	if (ctx.cr6.eq) goto loc_82420374;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420374
	if (ctx.cr6.eq) goto loc_82420374;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bctrl 
	ctx.lr = 0x82420374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420374:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82420378:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82423450) {
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
	// bl 0x822d4e64
	ctx.lr = 0x82423458;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r20,r11,13408
	r20.s64 = ctx.r11.s64 + 13408;
	// mulli r11,r10,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq 0x82423498
	if (ctx.cr0.eq) goto loc_82423498;
	// rlwimi r10,r11,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// b 0x8242349c
	goto loc_8242349C;
loc_82423498:
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
loc_8242349C:
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r9,228(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r23,1
	r23.s64 = 1;
	// addi r19,r11,8424
	r19.s64 = ctx.r11.s64 + 8424;
	// addi r22,r10,16880
	r22.s64 = ctx.r10.s64 + 16880;
	// addi r21,r9,-17024
	r21.s64 = ctx.r9.s64 + -17024;
	// beq 0x82423600
	if (ctx.cr0.eq) goto loc_82423600;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r28,0
	r28.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// li r27,0
	r27.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r29,0
	r29.s64 = 0;
	// addi r24,r30,128
	r24.s64 = r30.s64 + 128;
	// addi r26,r11,-16416
	r26.s64 = ctx.r11.s64 + -16416;
	// addi r25,r10,-16396
	r25.s64 = ctx.r10.s64 + -16396;
loc_824234F4:
	// lbzx r11,r24,r29
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824235b0
	if (ctx.cr6.lt) goto loc_824235B0;
	// beq cr6,0x82423580
	if (ctx.cr6.eq) goto loc_82423580;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82423550
	if (ctx.cr6.lt) goto loc_82423550;
	// beq cr6,0x8242352c
	if (ctx.cr6.eq) goto loc_8242352C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2370
	ctx.r7.s64 = 2370;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82423528;
	sub_8240E308(ctx, base);
	// b 0x824235f0
	goto loc_824235F0;
loc_8242352C:
	// slw r11,r23,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,20,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r9,r10,0,12,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF) | (ctx.r9.u64 & 0xF00000);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r11,r9,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// b 0x824235ec
	goto loc_824235EC;
loc_82423550:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423570
	if (ctx.cr0.eq) goto loc_82423570;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2361
	ctx.r7.s64 = 2361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82423570;
	sub_8240E308(ctx, base);
loc_82423570:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r23
	r27.u64 = r23.u64;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// b 0x824235ec
	goto loc_824235EC;
loc_82423580:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824235a0
	if (ctx.cr0.eq) goto loc_824235A0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2356
	ctx.r7.s64 = 2356;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824235A0;
	sub_8240E308(ctx, base);
loc_824235A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r23
	r28.u64 = r23.u64;
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x824235ec
	goto loc_824235EC;
loc_824235B0:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r11,r23,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// beq 0x824235e0
	if (ctx.cr0.eq) goto loc_824235E0;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r9,0,12,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF) | (ctx.r11.u64 & 0xF00000);
	// b 0x824235ec
	goto loc_824235EC;
loc_824235E0:
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
loc_824235EC:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824235F0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x824234f4
	if (ctx.cr6.lt) goto loc_824234F4;
	// b 0x8242364c
	goto loc_8242364C;
loc_82423600:
	// addi r11,r30,128
	ctx.r11.s64 = r30.s64 + 128;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r11.u32));
	// lwzx r10,r10,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r20.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,25,14,14
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r8,r9,25,21,22
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x600) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF9FF);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r8,25,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xE;
	// nor r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 | ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// beq 0x82423644
	if (ctx.cr0.eq) goto loc_82423644;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82423648
	goto loc_82423648;
loc_82423644:
	// rlwimi r10,r11,16,12,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF0FFFF);
loc_82423648:
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8242364C:
	// lwz r4,952(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 952);
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// bl 0x824289a0
	ctx.lr = 0x82423658;
	sub_824289A0(ctx, base);
	// lwz r11,952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 952);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x8242a1c0
	ctx.lr = 0x8242366C;
	sub_8242A1C0(ctx, base);
	// lwz r10,952(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 952);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// cmpwi cr6,r29,48
	ctx.cr6.compare<int32_t>(r29.s32, 48, ctx.xer);
	// lwz r10,2736(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2736);
	// lwz r10,2132(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2132);
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82423718
	if (ctx.cr6.eq) goto loc_82423718;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(r29.s32, 5, ctx.xer);
	// bne cr6,0x824236a4
	if (!ctx.cr6.eq) goto loc_824236A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// rlwimi r11,r10,1,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x824237a0
	goto loc_824237A0;
loc_824236A4:
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// bne cr6,0x824236b8
	if (!ctx.cr6.eq) goto loc_824236B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 | 63;
	// b 0x824237a0
	goto loc_824237A0;
loc_824236B8:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// bne cr6,0x824236c8
	if (!ctx.cr6.eq) goto loc_824236C8;
	// li r10,61
	ctx.r10.s64 = 61;
	// b 0x824236e8
	goto loc_824236E8;
loc_824236C8:
	// cmpwi cr6,r29,43
	ctx.cr6.compare<int32_t>(r29.s32, 43, ctx.xer);
	// bne cr6,0x824236dc
	if (!ctx.cr6.eq) goto loc_824236DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r23,5,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x824237a0
	goto loc_824237A0;
loc_824236DC:
	// cmpwi cr6,r29,44
	ctx.cr6.compare<int32_t>(r29.s32, 44, ctx.xer);
	// bne cr6,0x824236f4
	if (!ctx.cr6.eq) goto loc_824236F4;
	// li r10,33
	ctx.r10.s64 = 33;
loc_824236E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r10,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x824237a0
	goto loc_824237A0;
loc_824236F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82428710
	ctx.lr = 0x82423700;
	sub_82428710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82423780
	if (ctx.cr0.eq) goto loc_82423780;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82423794
	if (ctx.cr6.eq) goto loc_82423794;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// b 0x824237ac
	goto loc_824237AC;
loc_82423718:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423774
	if (ctx.cr0.eq) goto loc_82423774;
	// bl 0x82428710
	ctx.lr = 0x82423738;
	sub_82428710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242374c
	if (!ctx.cr0.eq) goto loc_8242374C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r28,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x824237a0
	goto loc_824237A0;
loc_8242374C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8242376c
	if (!ctx.cr6.eq) goto loc_8242376C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// rlwinm r11,r11,0,24,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// rlwimi r10,r27,8,18,23
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x824237a0
	goto loc_824237A0;
loc_8242376C:
	// li r7,2439
	ctx.r7.s64 = 2439;
	// b 0x824237ac
	goto loc_824237AC;
loc_82423774:
	// bl 0x82428710
	ctx.lr = 0x82423778;
	sub_82428710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242378c
	if (!ctx.cr0.eq) goto loc_8242378C;
loc_82423780:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r28,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x824237a0
	goto loc_824237A0;
loc_8242378C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x824237a8
	if (!ctx.cr6.eq) goto loc_824237A8;
loc_82423794:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r27,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824237A0:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x824237c0
	goto loc_824237C0;
loc_824237A8:
	// li r7,2451
	ctx.r7.s64 = 2451;
loc_824237AC:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824237C0;
	sub_8240E308(ctx, base);
loc_824237C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82435770) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm. r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x824357cc
	if (ctx.cr0.eq) goto loc_824357CC;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_824357AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824357cc
	if (!ctx.cr0.eq) goto loc_824357CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x824357ac
	if (!ctx.cr6.eq) goto loc_824357AC;
loc_824357CC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824357ec
	if (ctx.cr0.eq) goto loc_824357EC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x824357DC;
	sub_822D4FA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434bc0
	ctx.lr = 0x824357E8;
	sub_82434BC0(ctx, base);
	// b 0x824357f0
	goto loc_824357F0;
loc_824357EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824357F0:
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

DEFINE_REX_FUNC(sub_824371D0) {
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
	// bl 0x822d4e74
	ctx.lr = 0x824371D8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,544(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 544);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824371FC:
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437340
	if (!ctx.cr6.eq) goto loc_82437340;
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243721c
	if (ctx.cr6.eq) goto loc_8243721C;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82437220
	goto loc_82437220;
loc_8243721C:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82437220:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82437340
	if (ctx.cr6.eq) goto loc_82437340;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82437260
	if (ctx.cr6.eq) goto loc_82437260;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82437240:
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82437260
	if (ctx.cr6.lt) goto loc_82437260;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82437240
	if (!ctx.cr6.eq) goto loc_82437240;
loc_82437260:
	// lwz r10,504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// beq cr6,0x824372a4
	if (ctx.cr6.eq) goto loc_824372A4;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_824372A4:
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x82438e18
	ctx.lr = 0x824372AC;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243753c
	if (ctx.cr0.eq) goto loc_8243753C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// beq 0x824372d0
	if (ctx.cr0.eq) goto loc_824372D0;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_824372D0:
	// addi r3,r31,588
	ctx.r3.s64 = r31.s64 + 588;
	// bl 0x82438e18
	ctx.lr = 0x824372D8;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243753c
	if (ctx.cr0.eq) goto loc_8243753C;
	// lwz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 640);
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82437300
	if (!ctx.cr6.eq) goto loc_82437300;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x82437304
	if (!ctx.cr6.eq) goto loc_82437304;
loc_82437300:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82437304:
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,644(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bne cr6,0x82437340
	if (!ctx.cr6.eq) goto loc_82437340;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x82434ad0
	ctx.lr = 0x82437338;
	sub_82434AD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
loc_82437340:
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// addi r30,r31,516
	r30.s64 = r31.s64 + 516;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824374d8
	if (ctx.cr6.lt) goto loc_824374D8;
	// beq cr6,0x82437548
	if (ctx.cr6.eq) goto loc_82437548;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824374bc
	if (ctx.cr6.lt) goto loc_824374BC;
	// bne cr6,0x82437528
	if (!ctx.cr6.eq) goto loc_82437528;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,512(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 512);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8244ab88
	ctx.lr = 0x82437390;
	sub_8244AB88(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x82437550
	if (ctx.cr0.lt) goto loc_82437550;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824373e4
	if (ctx.cr6.eq) goto loc_824373E4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x824373c8
	if (ctx.cr6.lt) goto loc_824373C8;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,628(r31)
	REX_STORE_U32(r31.u32 + 628, ctx.r11.u32);
	// b 0x82437528
	goto loc_82437528;
loc_824373C8:
	// subf r5,r11,r30
	ctx.r5.u64 = r30.u64 - ctx.r11.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x824373D8;
	sub_822D4FA0(ctx, base);
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// stw r26,628(r31)
	REX_STORE_U32(r31.u32 + 628, r26.u32);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
loc_824373E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82437528
	if (ctx.cr6.eq) goto loc_82437528;
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82437450
	if (ctx.cr6.gt) goto loc_82437450;
	// bge cr6,0x82437444
	if (!ctx.cr6.lt) goto loc_82437444;
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82437444
	if (ctx.cr6.eq) goto loc_82437444;
	// addi r29,r31,548
	r29.s64 = r31.s64 + 548;
	// addi r28,r31,588
	r28.s64 = r31.s64 + 588;
loc_82437410:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824344e8
	ctx.lr = 0x82437418;
	sub_824344E8(ctx, base);
	// stw r3,628(r31)
	REX_STORE_U32(r31.u32 + 628, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824344e8
	ctx.lr = 0x82437424;
	sub_824344E8(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82437444
	if (ctx.cr6.gt) goto loc_82437444;
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82437410
	if (!ctx.cr6.eq) goto loc_82437410;
loc_82437444:
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x8243745c
	if (!ctx.cr6.gt) goto loc_8243745C;
loc_82437450:
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
	// b 0x82437464
	goto loc_82437464;
loc_8243745C:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r26,632(r31)
	REX_STORE_U32(r31.u32 + 632, r26.u32);
loc_82437464:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82437528
	if (ctx.cr6.eq) goto loc_82437528;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// lwz r10,636(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 636);
	// add r24,r30,r24
	r24.u64 = r30.u64 + r24.u64;
	// lwz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 528);
	// subf r8,r11,r25
	ctx.r8.u64 = r25.u64 - ctx.r11.u64;
	// subf r23,r30,r23
	r23.u64 = r23.u64 - r30.u64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82437528
	if (ctx.cr6.lt) goto loc_82437528;
	// lwz r10,544(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 544);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82436af0
	ctx.lr = 0x824374A8;
	sub_82436AF0(ctx, base);
	// lwz r25,524(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r26,544(r31)
	REX_STORE_U32(r31.u32 + 544, r26.u32);
	// mr r24,r26
	r24.u64 = r26.u64;
	// b 0x82437528
	goto loc_82437528;
loc_824374BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,512(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 512);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,520
	ctx.r4.s64 = r31.s64 + 520;
	// bl 0x8244a320
	ctx.lr = 0x824374D0;
	sub_8244A320(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82437528
	goto loc_82437528;
loc_824374D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82436da8
	ctx.lr = 0x824374E0;
	sub_82436DA8(ctx, base);
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82437518
	if (ctx.cr6.eq) goto loc_82437518;
	// lwz r3,512(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 512);
	// bl 0x82445c40
	ctx.lr = 0x824374F4;
	sub_82445C40(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x824344e8
	ctx.lr = 0x82437504;
	sub_824344E8(ctx, base);
	// stw r3,628(r31)
	REX_STORE_U32(r31.u32 + 628, ctx.r3.u32);
	// addi r3,r31,588
	ctx.r3.s64 = r31.s64 + 588;
	// bl 0x824344e8
	ctx.lr = 0x82437510;
	sub_824344E8(ctx, base);
	// stw r3,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r3.u32);
	// b 0x82437528
	goto loc_82437528;
loc_82437518:
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r23
	r23.u64 = ctx.r11.u64 & r23.u64;
loc_82437528:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x82437550
	if (ctx.cr6.lt) goto loc_82437550;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bgt cr6,0x824371fc
	if (ctx.cr6.gt) goto loc_824371FC;
	// b 0x82437550
	goto loc_82437550;
loc_8243753C:
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,14
	r27.u64 = r27.u64 | 14;
	// b 0x82437550
	goto loc_82437550;
loc_82437548:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// ori r27,r27,16389
	r27.u64 = r27.u64 | 16389;
loc_82437550:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82437574
	if (ctx.cr6.eq) goto loc_82437574;
	// lwz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 544);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82436af0
	ctx.lr = 0x82437570;
	sub_82436AF0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82437574:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82443B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82443B90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443BB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82442a58
	ctx.lr = 0x82443BC8;
	sub_82442A58(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443BE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82447000) {
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
	// bl 0x822d4e60
	ctx.lr = 0x82447008;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r26,360(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lhz r21,0(r5)
	r21.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r25,428(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// li r19,0
	r19.s64 = 0;
	// lhz r24,34(r30)
	r24.u64 = REX_LOAD_U16(r30.u32 + 34);
	// li r29,0
	r29.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82447064
	if (!ctx.cr6.eq) goto loc_82447064;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
loc_82447064:
	// lwz r11,424(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82447074
	if (ctx.cr6.eq) goto loc_82447074;
	// li r24,6
	r24.s64 = 6;
loc_82447074:
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x824471e8
	if (!ctx.cr6.gt) goto loc_824471E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_82447090:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x824470f0
	if (!ctx.cr6.gt) goto loc_824470F0;
loc_8244709C:
	// lwz r11,524(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lhz r5,110(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 110);
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824470B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,432(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 432);
	// lwz r8,148(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 148);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mullw r11,r31,r9
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// stfsx f12,r6,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x8244709c
	if (ctx.cr6.lt) goto loc_8244709C;
loc_824470F0:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,432(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 432);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82447118
	if (ctx.cr6.eq) goto loc_82447118;
	// addi r11,r21,-1
	ctx.r11.s64 = r21.s64 + -1;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824471dc
	if (!ctx.cr6.eq) goto loc_824471DC;
loc_82447118:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,428(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 428);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82464090
	ctx.lr = 0x82447128;
	sub_82464090(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82447200
	if (ctx.cr6.gt) goto loc_82447200;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824471d4
	if (!ctx.cr6.gt) goto loc_824471D4;
loc_82447144:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x824471bc
	if (!ctx.cr6.gt) goto loc_824471BC;
loc_82447150:
	// lwz r11,432(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 432);
	// lwz r10,148(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 148);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82447184
	if (!ctx.cr6.lt) goto loc_82447184;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82447194
	goto loc_82447194;
loc_82447184:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82447194:
	// lwz r11,520(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 520);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824471AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// blt cr6,0x82447150
	if (ctx.cr6.lt) goto loc_82447150;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824471BC:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82447144
	if (ctx.cr6.lt) goto loc_82447144;
loc_824471D4:
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// li r29,0
	r29.s64 = 0;
loc_824471DC:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// blt cr6,0x82447090
	if (ctx.cr6.lt) goto loc_82447090;
loc_824471E8:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// sth r22,0(r18)
	REX_STORE_U16(r18.u32 + 0, r22.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
loc_82447200:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82453BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// bl 0x822d4f2c
	ctx.lr = 0x82453C04;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f25,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f25.f64 = double(temp.f32);
	// lfs f28,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(f31.f64, f25.f64);
	// bge cr6,0x82453c38
	if (!ctx.cr6.lt) goto loc_82453C38;
	// fdivs f27,f0,f31
	f27.f64 = double(float(ctx.f0.f64 / f31.f64));
	// b 0x82453c3c
	goto loc_82453C3C;
loc_82453C38:
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
loc_82453C3C:
	// fsubs f12,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f28.f64 - f27.f64));
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f30,-6032(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
	// lfs f0,1980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f13,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f26,f9,f0
	f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82453C78;
	sub_822D5B48(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfd f29,4000(r8)
	f29.u64 = REX_LOAD_U64(ctx.r8.u32 + 4000);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82453C8C;
	sub_822D5B48(ctx, base);
	// fmuls f7,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(f27.f64 * f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f0,16260(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82453CA8;
	sub_822D5B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82453CB8;
	sub_822D5B48(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,16680(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16680);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82453d18
	if (!ctx.cr6.lt) goto loc_82453D18;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82453CD8;
	sub_822D4D68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(f28.f64 - f31.f64));
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f13,f28
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f13.f64, -f28.f64)));
	// fsubs f10,f28,f13
	ctx.f10.f64 = double(float(f28.f64 - ctx.f13.f64));
	// fnmsubs f9,f13,f31,f28
	ctx.f9.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -f28.f64)));
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmsubs f5,f7,f0,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fdivs f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f12.f64));
	// stfs f2,36(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// b 0x82453d1c
	goto loc_82453D1C;
loc_82453D18:
	// stfs f25,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
loc_82453D1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f78
	ctx.lr = 0x82453D28;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C828) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8245C830;
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
loc_8245C848:
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
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8245c86c
	if (!ctx.cr6.eq) goto loc_8245C86C;
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
	// bne 0x8245c848
	if (!ctx.cr0.eq) goto loc_8245C848;
	// b 0x8245c874
	goto loc_8245C874;
loc_8245C86C:
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8245C874:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r28,r11,7712
	r28.s64 = ctx.r11.s64 + 7712;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x824d438c
	ctx.lr = 0x8245C884;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// bne cr6,0x8245c894
	if (!ctx.cr6.eq) goto loc_8245C894;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x8245c8a0
	goto loc_8245C8A0;
loc_8245C894:
	// addi r11,r30,5
	ctx.r11.s64 = r30.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
loc_8245C8A0:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x824d437c
	ctx.lr = 0x8245C8AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8245E1C0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8245f810
	ctx.lr = 0x8245E200;
	sub_8245F810(ctx, base);
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
	ctx.lr = 0x8245E21C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8245E9E8) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x8245E9F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// beq cr6,0x8245ea1c
	if (ctx.cr6.eq) goto loc_8245EA1C;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EA1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245EA1C:
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,7712
	r25.s64 = ctx.r11.s64 + 7712;
	// bne cr6,0x8245ea44
	if (!ctx.cr6.eq) goto loc_8245EA44;
	// addi r31,r29,28
	r31.s64 = r29.s64 + 28;
	// addi r30,r29,68
	r30.s64 = r29.s64 + 68;
	// b 0x8245ea80
	goto loc_8245EA80;
loc_8245EA44:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8245ea5c
	if (!ctx.cr6.eq) goto loc_8245EA5C;
	// addi r31,r29,88
	r31.s64 = r29.s64 + 88;
	// addi r30,r29,128
	r30.s64 = r29.s64 + 128;
	// b 0x8245ea80
	goto loc_8245EA80;
loc_8245EA5C:
	// bl 0x824d419c
	ctx.lr = 0x8245EA60;
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
	// bl 0x8242c3b0
	ctx.lr = 0x8245EA78;
	sub_8242C3B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
loc_8245EA80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8245ea94
	if (!ctx.cr6.eq) goto loc_8245EA94;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245ebc4
	goto loc_8245EBC4;
loc_8245EA94:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// beq cr6,0x8245eaf4
	if (ctx.cr6.eq) goto loc_8245EAF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_8245EAF4:
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8245e7e8
	ctx.lr = 0x8245EB04;
	sub_8245E7E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8245eb1c
	if (ctx.cr0.eq) goto loc_8245EB1C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 148);
	// bl 0x82475868
	ctx.lr = 0x8245EB18;
	sub_82475868(ctx, base);
	// b 0x8245eb4c
	goto loc_8245EB4C;
loc_8245EB1C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8245eb54
	if (ctx.cr6.eq) goto loc_8245EB54;
	// addic r11,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r11.s64 = r26.s64 + -1;
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// subfe r11,r11,r26
	temp.u8 = (~ctx.r11.u32 + r26.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x8245f9d8
	ctx.lr = 0x8245EB4C;
	sub_8245F9D8(ctx, base);
loc_8245EB4C:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8245ebc4
	goto loc_8245EBC4;
loc_8245EB54:
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
	// bl 0x8242c3b0
	ctx.lr = 0x8245EB6C;
	sub_8242C3B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8245eb80
	if (!ctx.cr0.eq) goto loc_8245EB80;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245ebbc
	goto loc_8245EBBC;
loc_8245EB80:
	// addic r11,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r11.s64 = r26.s64 + -1;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// subfe r11,r11,r26
	temp.u8 = (~ctx.r11.u32 + r26.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x8245f9d8
	ctx.lr = 0x8245EBAC;
	sub_8245F9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245ebc4
	if (!ctx.cr0.lt) goto loc_8245EBC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x8245EBBC;
	sub_82473600(ctx, base);
loc_8245EBBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245EBC4;
	sub_82473600(ctx, base);
loc_8245EBC4:
	// cmpwi cr6,r26,-2
	ctx.cr6.compare<int32_t>(r26.s32, -2, ctx.xer);
	// beq cr6,0x8245ebe0
	if (ctx.cr6.eq) goto loc_8245EBE0;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EBE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245EBE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824658F0) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82465670
	sub_82465670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82465AB0) {
	REX_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lhz r11,34(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r6,r4,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82465AD0:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r9,424(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r7,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// sth r7,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r7.u16);
	// lhz r4,34(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82465ad0
	if (ctx.cr6.lt) goto loc_82465AD0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82467130) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x82467138;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467178
	if (ctx.cr6.eq) goto loc_82467178;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82467178
	if (ctx.cr6.gt) goto loc_82467178;
	// lis r26,-32764
	r26.s64 = -2147221504;
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82467178:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82467188
	if (!ctx.cr6.eq) goto loc_82467188;
	// stw r25,380(r31)
	REX_STORE_U32(r31.u32 + 380, r25.u32);
loc_82467188:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824676ec
	if (ctx.cr6.eq) goto loc_824676EC;
	// li r24,1
	r24.s64 = 1;
	// li r23,11
	r23.s64 = 11;
	// li r17,3
	r17.s64 = 3;
	// li r21,4
	r21.s64 = 4;
	// li r18,5
	r18.s64 = 5;
	// li r19,6
	r19.s64 = 6;
	// li r20,7
	r20.s64 = 7;
	// li r22,9
	r22.s64 = 9;
loc_824671B4:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x824676e0
	if (ctx.cr6.gt) goto loc_824676E0;
	// lis r12,-32186
	ctx.r12.s64 = -2109341696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29148
	ctx.r12.s64 = ctx.r12.s64 + 29148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824673A8;
	case 1:
		goto loc_82467208;
	case 2:
		goto loc_824673FC;
	case 3:
		goto loc_82467428;
	case 4:
		goto loc_82467440;
	case 5:
		goto loc_82467478;
	case 6:
		goto loc_824674C4;
	case 7:
		goto loc_82467500;
	case 8:
		goto loc_82467550;
	case 9:
		goto loc_82467584;
	case 10:
		goto loc_824675D4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82467208:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467388
	if (ctx.cr6.eq) goto loc_82467388;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82467388
	if (ctx.cr6.gt) goto loc_82467388;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82467244
	if (!ctx.cr6.gt) goto loc_82467244;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82467234:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82467234
	if (ctx.cr6.gt) goto loc_82467234;
loc_82467244:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82467260
	if (!ctx.cr6.gt) goto loc_82467260;
loc_82467250:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82467250
	if (ctx.cr6.gt) goto loc_82467250;
loc_82467260:
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// addi r29,r27,224
	r29.s64 = r27.s64 + 224;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246e538
	ctx.lr = 0x82467274;
	sub_8246E538(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467290;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// slw r9,r24,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// bl 0x824658f8
	ctx.lr = 0x824672C0;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 236);
	// divw r7,r10,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// blt cr6,0x82467720
	if (ctx.cr6.lt) goto loc_82467720;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82467720
	if (ctx.cr6.gt) goto loc_82467720;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82467720
	if (ctx.cr6.lt) goto loc_82467720;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82467720
	if (ctx.cr6.gt) goto loc_82467720;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82467380
	if (ctx.cr6.eq) goto loc_82467380;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8246731C:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r10,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,424(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// sth r30,-2(r6)
	REX_STORE_U16(ctx.r6.u32 + -2, r30.u16);
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// sth r25,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r25.u16);
	// lwz r4,424(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r25,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r25.u16);
	// lwz r6,424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8246731c
	if (ctx.cr6.lt) goto loc_8246731C;
loc_82467380:
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_82467388:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82467380
	if (!ctx.cr6.gt) goto loc_82467380;
	// stw r24,52(r27)
	REX_STORE_U32(r27.u32 + 52, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82465ab0
	ctx.lr = 0x824673A4;
	sub_82465AB0(ctx, base);
	// b 0x824676e0
	goto loc_824676E0;
loc_824673A8:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824673f8
	if (ctx.cr6.eq) goto loc_824673F8;
	// addi r30,r31,608
	r30.s64 = r31.s64 + 608;
	// lwz r4,616(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 616);
	// addi r29,r27,224
	r29.s64 = r27.s64 + 224;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x824673CC;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,704(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824673f8
	if (ctx.cr6.eq) goto loc_824673F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 616);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x82319440
	ctx.lr = 0x824673F8;
	sub_82319440(ctx, base);
loc_824673F8:
	// stw r17,52(r27)
	REX_STORE_U32(r27.u32 + 52, r17.u32);
loc_824673FC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82467420
	if (!ctx.cr6.gt) goto loc_82467420;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82465b08
	ctx.lr = 0x82467414;
	sub_82465B08(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
loc_82467420:
	// stw r25,436(r27)
	REX_STORE_U32(r27.u32 + 436, r25.u32);
	// stw r21,52(r27)
	REX_STORE_U32(r27.u32 + 52, r21.u32);
loc_82467428:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8246d090
	ctx.lr = 0x82467430;
	sub_8246D090(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// stw r18,52(r27)
	REX_STORE_U32(r27.u32 + 52, r18.u32);
loc_82467440:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467470
	if (ctx.cr6.eq) goto loc_82467470;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246745C;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r11.u8);
loc_82467470:
	// stw r19,52(r27)
	REX_STORE_U32(r27.u32 + 52, r19.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_82467478:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x824674b4
	if (!ctx.cr6.gt) goto loc_824674B4;
	// stw r25,372(r31)
	REX_STORE_U32(r31.u32 + 372, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246749C;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824674bc
	if (!ctx.cr6.eq) goto loc_824674BC;
loc_824674B4:
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_824674BC:
	// stw r20,52(r27)
	REX_STORE_U32(r27.u32 + 52, r20.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_824674C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824674D4;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r8.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_82467500:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82467524
	if (!ctx.cr6.gt) goto loc_82467524;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82467514:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82467514
	if (ctx.cr6.gt) goto loc_82467514;
loc_82467524:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82467534;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// stw r22,52(r27)
	REX_STORE_U32(r27.u32 + 52, r22.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_82467550:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82467560;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r9.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_82467584:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824675a8
	if (!ctx.cr6.gt) goto loc_824675A8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82467598:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82467598
	if (ctx.cr6.gt) goto loc_82467598;
loc_824675A8:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824675B8;
	sub_824658F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82467708
	if (ctx.cr6.lt) goto loc_82467708;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x824676e0
	goto loc_824676E0;
loc_824675D4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x824676dc
	if (!ctx.cr6.gt) goto loc_824676DC;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824676dc
	if (ctx.cr6.eq) goto loc_824676DC;
	// lwz r11,164(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824676dc
	if (!ctx.cr6.eq) goto loc_824676DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464878
	ctx.lr = 0x82467600;
	sub_82464878(ctx, base);
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpd cr6,r28,r11
	ctx.cr6.compare<int64_t>(r28.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x824676d4
	if (ctx.cr6.gt) goto loc_824676D4;
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82467714
	if (ctx.cr6.eq) goto loc_82467714;
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82467714
	if (ctx.cr6.eq) goto loc_82467714;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467644
	if (ctx.cr6.eq) goto loc_82467644;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x82467660
	goto loc_82467660;
loc_82467644:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246765c
	if (ctx.cr6.eq) goto loc_8246765C;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82467660
	goto loc_82467660;
loc_8246765C:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82467660:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82461da0
	ctx.lr = 0x8246766C;
	sub_82461DA0(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82467690
	if (!ctx.cr6.gt) goto loc_82467690;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82467694
	goto loc_82467694;
loc_82467690:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82467694:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x824676c8
	if (ctx.cr6.lt) goto loc_824676C8;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x824676bc
	if (!ctx.cr6.lt) goto loc_824676BC;
	// ld r10,184(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 184);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r8.u64);
	// b 0x824676c8
	goto loc_824676C8;
loc_824676BC:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	// std r10,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r10.u64);
loc_824676C8:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x824676d8
	if (!ctx.cr6.lt) goto loc_824676D8;
loc_824676D4:
	// std r25,184(r27)
	REX_STORE_U64(r27.u32 + 184, r25.u64);
loc_824676D8:
	// stw r25,160(r27)
	REX_STORE_U32(r27.u32 + 160, r25.u32);
loc_824676DC:
	// stw r25,52(r27)
	REX_STORE_U32(r27.u32 + 52, r25.u32);
loc_824676E0:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824671b4
	if (!ctx.cr6.eq) goto loc_824671B4;
loc_824676EC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82467708
	if (!ctx.cr6.eq) goto loc_82467708;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 380);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r9.u32);
loc_82467708:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82467714:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// std r11,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r11.u64);
	// b 0x824676d8
	goto loc_824676D8;
loc_82467720:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_824800D8) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-11584
	ctx.r9.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// mulli r10,r11,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x82480120
	if (ctx.cr6.eq) goto loc_82480120;
	// cmplwi cr6,r4,32768
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32768, ctx.xer);
	// bne cr6,0x82480148
	if (!ctx.cr6.eq) goto loc_82480148;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82480148
	goto loc_82480148;
loc_82480120:
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// li r5,-128
	ctx.r5.s64 = -128;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stb r9,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
loc_82480148:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8248015c
	if (!ctx.cr6.eq) goto loc_8248015C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
loc_8248015C:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82489F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82489F78;
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15984
	r30.s64 = ctx.r3.s64 + 15984;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824907f0
	ctx.lr = 0x82489F8C;
	sub_824907F0(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r28,r31,22432
	r28.s64 = r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,5108(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 5108);
	// bl 0x8248a7b8
	ctx.lr = 0x82489FA0;
	sub_8248A7B8(ctx, base);
	// lhz r10,16036(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 16036);
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
	// bl 0x82494008
	ctx.lr = 0x82489FC4;
	sub_82494008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a0d8
	if (!ctx.cr6.eq) goto loc_8248A0D8;
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
	// bl 0x824d02d8
	ctx.lr = 0x82489FEC;
	sub_824D02D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a0d8
	if (!ctx.cr6.eq) goto loc_8248A0D8;
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
	// bl 0x824bca68
	ctx.lr = 0x8248A014;
	sub_824BCA68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a0d8
	if (!ctx.cr6.eq) goto loc_8248A0D8;
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
	// bl 0x824a4af8
	ctx.lr = 0x8248A03C;
	sub_824A4AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8248a0d8
	if (!ctx.cr6.eq) goto loc_8248A0D8;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8248a0b4
	if (ctx.cr6.eq) goto loc_8248A0B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// bl 0x824b93b0
	ctx.lr = 0x8248A05C;
	sub_824B93B0(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x824b94d8
	ctx.lr = 0x8248A088;
	sub_824B94D8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x824b94d8
	ctx.lr = 0x8248A0B4;
	sub_824B94D8(ctx, base);
loc_8248A0B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8248ab00
	ctx.lr = 0x8248A0C0;
	sub_8248AB00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, ctx.r10.u32);
	// stw r11,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, ctx.r11.u32);
loc_8248A0D8:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824A2E88) {
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
loc_824A2E9C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a2ed4
	if (ctx.cr6.lt) goto loc_824A2ED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x824A2EB8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x824a2e9c
	if (ctx.cr6.eq) goto loc_824A2E9C;
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
loc_824A2ED4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
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

DEFINE_REX_FUNC(sub_824A6278) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
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
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vsldoi v5,v1,v1,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 8));
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_load_si128((simde__m128i*)v72.u8));
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v6,v3,v3,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 8));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v7,v2,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v4,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi v8,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
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
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vspltish v9,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x6)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vspltish v30,8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x8)));
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vslh v1,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v4,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vperm v6,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vperm v7,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v3,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v28,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v28,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v30,v26
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v30,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubuhm v29,v31,v28
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v4,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubuhm v5,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vaddshs v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v10,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v11,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v12,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v10,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v10,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B2E88) {
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
	// bl 0x822d4e78
	ctx.lr = 0x824B2E90;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r31,-32161
	r31.s64 = -2107703296;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r29,r1,-144
	r29.s64 = ctx.r1.s64 + -144;
	// lvx128 v59,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-128
	r28.s64 = ctx.r1.s64 + -128;
	// lvx128 v58,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// lvx128 v55,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-128
	r26.s64 = ctx.r1.s64 + -128;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r8,5104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5104);
	// vperm128 v61,v58,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// vperm128 v60,v56,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// addi r25,r1,-96
	r25.s64 = ctx.r1.s64 + -96;
	// stvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-96
	r24.s64 = ctx.r1.s64 + -96;
	// stvx128 v62,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r8,r30
	ctx.r8.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// vperm128 v54,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r28,1
	r28.s64 = 1;
	// vperm128 v53,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v52,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r30,r8,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stvx128 v60,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v51,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v51,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// and r29,r30,r10
	r29.u64 = r30.u64 & ctx.r10.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// stvx128 v54,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r27,r28,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// stvx128 v53,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v52,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r10,r28,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r28.u32 << (r29.u8 & 0x3F));
	// lwz r26,-144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// lwz r27,-96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r31,r5,r6
	r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r29,-128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// add r30,r8,r6
	r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r28,-112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// stw r26,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r26.u32);
	// stwx r29,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r29.u32);
	// stwx r28,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, r28.u32);
	// stwx r27,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r27.u32);
	// bne cr6,0x824b2fbc
	if (!ctx.cr6.eq) goto loc_824B2FBC;
	// lwz r29,-140(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r28,-124(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r27,-108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r26,-92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r27,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r27.u32);
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
loc_824B2FBC:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x824b30b0
	if (!ctx.cr6.eq) goto loc_824B30B0;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// addi r30,r1,-128
	r30.s64 = ctx.r1.s64 + -128;
	// lvx128 v50,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// lvx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r25,r1,-144
	r25.s64 = ctx.r1.s64 + -144;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v49,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-128
	r28.s64 = ctx.r1.s64 + -128;
	// vperm128 v62,v47,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// rlwinm r26,r3,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v46,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v45,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v62,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-140(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r8,-144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stwux r8,r5,r26
	ea = ctx.r5.u32 + r26.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stvx128 v45,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-124(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r31,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r31.u32);
	// lwz r31,-128(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stwx r31,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r31.u32);
	// stw r30,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// lvx128 v43,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v41,v42,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v62,v43,v44,v4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v63,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v40,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v39,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r4,-144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stwux r4,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stvx128 v39,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,-124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r3,-128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stwx r3,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_824B30B0:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_824D1528) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// addi r10,r10,17488
	ctx.r10.s64 = ctx.r10.s64 + 17488;
loc_824D1544:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,180(r11)
	REX_STORE_U32(ctx.r11.u32 + 180, ctx.r9.u32);
	// stwu r10,160(r11)
	ea = 160 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d1544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D1544;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14120
	ctx.r3.s64 = ctx.r11.s64 + 14120;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D1680) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,7920
	ctx.r11.s64 = r31.s64 + 7920;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D16A0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21556
	ctx.r11.s64 = ctx.r11.s64 + 21556;
	// stw r11,7920(r31)
	REX_STORE_U32(r31.u32 + 7920, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1880) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8240
	ctx.r11.s64 = r31.s64 + 8240;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D18A0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21620
	ctx.r11.s64 = ctx.r11.s64 + 21620;
	// stw r11,8240(r31)
	REX_STORE_U32(r31.u32 + 8240, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1AC0) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8604
	ctx.r11.s64 = r31.s64 + 8604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1AE0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21692
	ctx.r11.s64 = ctx.r11.s64 + 21692;
	// stw r11,8604(r31)
	REX_STORE_U32(r31.u32 + 8604, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1D28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27144
	ctx.r9.s64 = ctx.r11.s64 + -27144;
	// addi r11,r10,-23324
	ctx.r11.s64 = ctx.r10.s64 + -23324;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D1E90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26880
	ctx.r9.s64 = ctx.r11.s64 + -26880;
	// addi r11,r10,-22856
	ctx.r11.s64 = ctx.r10.s64 + -22856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2070) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-22232
	ctx.r10.s64 = ctx.r10.s64 + -22232;
	// lwz r11,-27144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -27144);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2100) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-21080
	ctx.r10.s64 = ctx.r10.s64 + -21080;
	// lwz r11,-28516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28516);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2810) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14416
	ctx.r3.s64 = ctx.r11.s64 + 14416;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2938) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r31,3
	r31.s64 = 3;
	// addi r30,r11,-9448
	r30.s64 = ctx.r11.s64 + -9448;
loc_824D2958:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c9f70
	ctx.lr = 0x824D2960;
	sub_821C9F70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,120
	r30.s64 = r30.s64 + 120;
	// bge 0x824d2958
	if (!ctx.cr0.lt) goto loc_824D2958;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14472
	ctx.r3.s64 = ctx.r11.s64 + 14472;
	// bl 0x822d5848
	ctx.lr = 0x824D2978;
	sub_822D5848(ctx, base);
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

DEFINE_REX_FUNC(sub_824D3040) {
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
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x824D3060;
	sub_822D5870(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15648
	ctx.r3.s64 = ctx.r11.s64 + 15648;
	// bl 0x822d5848
	ctx.lr = 0x824D306C;
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

DEFINE_REX_FUNC(sub_824D32C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// b 0x823caea0
	sub_823CAEA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3338) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,21304
	r31.s64 = ctx.r11.s64 + 21304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x822d5870
	ctx.lr = 0x824D3360;
	sub_822D5870(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x822d4fa0
	ctx.lr = 0x824D3374;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D3384;
	sub_822D5870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
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

DEFINE_REX_FUNC(sub_824D3C48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26324
	ctx.r3.s64 = ctx.r11.s64 + 26324;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3DA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29652
	ctx.r3.s64 = ctx.r11.s64 + 29652;
	// b 0x8225a4e8
	sub_8225A4E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F00) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000213
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4050) {
	REX_FUNC_PROLOGUE();
	// .long 0x200025e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D41B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100fd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4330) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010099
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D44B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b6
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4630) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101d4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D47B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001ec
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4930) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010195
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4AB0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100ce
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

