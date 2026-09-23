#include "hydrothunder_funcs.21.h"

DEFINE_REX_FUNC(sub_82121380) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82121388;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-2
	ctx.r9.s64 = -2;
	// ori r31,r4,15
	r31.u64 = ctx.r4.u64 | 15;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821213ac
	if (!ctx.cr6.gt) goto loc_821213AC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x821213d8
	goto loc_821213D8;
loc_821213AC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r8,r31,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? r31.u32 / ctx.r8.u32 : 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821213d8
	if (!ctx.cr6.gt) goto loc_821213D8;
	// subfic r8,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r8.u64 = static_cast<uint64_t>(-2) - ctx.r10.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821213d8
	if (!ctx.cr6.gt) goto loc_821213D8;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_821213D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x82121690
	ctx.lr = 0x821213E4;
	sub_82121690(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82121414
	if (ctx.cr6.eq) goto loc_82121414;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82121404
	if (ctx.cr6.lt) goto loc_82121404;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82121408
	goto loc_82121408;
loc_82121404:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82121408:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82121414;
	sub_826A1E70(ctx, base);
loc_82121414:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82121424;
	sub_82120AC0(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// stw r28,16(r30)
	REX_STORE_U32(r30.u32 + 16, r28.u32);
	// blt cr6,0x8212143c
	if (ctx.cr6.lt) goto loc_8212143C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8212143C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r28
	REX_STORE_U8(r30.u32 + r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212C770) {
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
	ctx.lr = 0x8212C778;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C79C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfd f13,24(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 24);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fsub f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 - ctx.f13.f64;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lbz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 32);
	// stfd f1,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.f1.u64);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// lfsx f11,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f31,f11,f13,f12
	f31.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// beq 0x8212c80c
	if (ctx.cr0.eq) goto loc_8212C80C;
	// lbz r9,34(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 34);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8212c80c
	if (ctx.cr0.eq) goto loc_8212C80C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,34(r30)
	REX_STORE_U8(r30.u32 + 34, ctx.r11.u8);
	// b 0x8212c818
	goto loc_8212C818;
loc_8212C80C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c818
	if (ctx.cr6.eq) goto loc_8212C818;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_8212C818:
	// lbz r11,33(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212c82c
	if (ctx.cr0.eq) goto loc_8212C82C;
	// lfs f13,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	f31.f64 = double(float(f31.f64 * ctx.f13.f64));
loc_8212C82C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212c83c
	if (ctx.cr6.eq) goto loc_8212C83C;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_8212C83C:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r31,r30,44
	r31.s64 = r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8212fcf0
	ctx.lr = 0x8212C850;
	sub_8212FCF0(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x8212C860;
	sub_8228CA78(ctx, base);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x8212c8bc
	if (!ctx.cr6.gt) goto loc_8212C8BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8212c894
	if (!ctx.cr6.lt) goto loc_8212C894;
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
	ctx.lr = 0x8212C894;
	sub_821231D0(ctx, base);
loc_8212C894:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8212C8AC;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8212fcf0
	ctx.lr = 0x8212C8BC;
	sub_8212FCF0(ctx, base);
loc_8212C8BC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8212c914
	goto loc_8212C914;
loc_8212C8C8:
	// lbz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212c90c
	if (ctx.cr0.eq) goto loc_8212C90C;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8212c904
	goto loc_8212C904;
loc_8212C8E4:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C8FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8212C904:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212c8e4
	if (!ctx.cr6.eq) goto loc_8212C8E4;
loc_8212C90C:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8212C914:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212c8c8
	if (!ctx.cr6.eq) goto loc_8212C8C8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c9d8
	if (ctx.cr6.eq) goto loc_8212C9D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C93C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8212c9d8
	if (ctx.cr0.eq) goto loc_8212C9D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23772
	ctx.r4.s64 = ctx.r11.s64 + -23772;
	// bl 0x82125d00
	ctx.lr = 0x8212C964;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212c9d8
	if (!ctx.cr0.eq) goto loc_8212C9D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212c9d8
	if (ctx.cr6.eq) goto loc_8212C9D8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-23760
	r28.s64 = ctx.r11.s64 + -23760;
loc_8212C998:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8212c9b0
	if (ctx.cr6.lt) goto loc_8212C9B0;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_8212C9B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C9C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212c998
	if (!ctx.cr6.eq) goto loc_8212C998;
loc_8212C9D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82144E90) {
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
	ctx.lr = 0x82144E98;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfd f13,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsub f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 - ctx.f13.f64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfd f0,296(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 296);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82144f34
	if (!ctx.cr6.eq) goto loc_82144F34;
	// lfs f0,1204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1204);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f0,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f0,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.f0.u64);
	// b 0x82144f48
	goto loc_82144F48;
loc_82144F34:
	// fmul f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f1,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,12
	ctx.r12.s64 = 12;
	// stfiwx f0,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82144F48:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82145020
	if (!ctx.cr0.gt) goto loc_82145020;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x82145020
	if (ctx.cr6.gt) goto loc_82145020;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82145020
	if (!ctx.cr6.eq) goto loc_82145020;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bge cr6,0x82145010
	if (!ctx.cr6.lt) goto loc_82145010;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82144f8c
	if (ctx.cr6.eq) goto loc_82144F8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82145020
	if (ctx.cr6.gt) goto loc_82145020;
loc_82144F8C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,128(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 128);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8217f4b0
	ctx.lr = 0x82144FA8;
	sub_8217F4B0(ctx, base);
	// stw r30,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r29,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, r29.u32);
	// lwz r30,6152(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// bctrl 
	ctx.lr = 0x82144FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r10,2000
	ctx.r10.s64 = 2000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// b 0x82145020
	goto loc_82145020;
loc_82145010:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82145290
	ctx.lr = 0x82145018;
	sub_82145290(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82145020:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821454a8
	ctx.lr = 0x82145028;
	sub_821454A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821518C0) {
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
	ctx.lr = 0x821518C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// mulli r9,r10,80
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821519c4
	if (ctx.cr6.eq) goto loc_821519C4;
loc_821518F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8215190c
	if (ctx.cr6.eq) goto loc_8215190C;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821518f0
	if (!ctx.cr6.eq) goto loc_821518F0;
	// b 0x821519c4
	goto loc_821519C4;
loc_8215190C:
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8215191c
	if (ctx.cr0.lt) goto loc_8215191C;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82151934
	if (ctx.cr6.lt) goto loc_82151934;
loc_8215191C:
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
	ctx.lr = 0x82151934;
	sub_821231D0(ctx, base);
loc_82151934:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r9,r29,80
	ctx.r9.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(80));
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r30,-8
	ctx.r9.s64 = r30.s64 + -8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82151950:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82151950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82151950;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821519c0
	if (!ctx.cr6.gt) goto loc_821519C0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82151988
	if (ctx.cr6.gt) goto loc_82151988;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82151988:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821519c0
	if (!ctx.cr6.gt) goto loc_821519C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,80
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// bl 0x8269d1d0
	ctx.lr = 0x8215199C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r11,80
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821519B0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821519B8;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821519C0:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_821519C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8215A760) {
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
	ctx.lr = 0x8215A768;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8215a818
	if (ctx.cr6.eq) goto loc_8215A818;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(r29.u32, r29.u32, ctx.xer);
	// beq cr6,0x8215a7d8
	if (ctx.cr6.eq) goto loc_8215A7D8;
	// subf r27,r31,r29
	r27.u64 = r29.u64 - r31.u64;
	// li r28,-1
	r28.s64 = -1;
loc_8215A794:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120b20
	ctx.lr = 0x8215A7A8;
	sub_82120B20(ctx, base);
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82120b20
	ctx.lr = 0x8215A7C0;
	sub_82120B20(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// bne cr6,0x8215a794
	if (!ctx.cr6.eq) goto loc_8215A794;
loc_8215A7D8:
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8215a814
	if (ctx.cr6.eq) goto loc_8215A814;
loc_8215A7E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82120ac0
	ctx.lr = 0x8215A7F8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215A808;
	sub_82120AC0(ctx, base);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8215a7e8
	if (!ctx.cr6.eq) goto loc_8215A7E8;
loc_8215A814:
	// stw r31,4(r26)
	REX_STORE_U32(r26.u32 + 4, r31.u32);
loc_8215A818:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8215EDE8) {
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
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215ee2c
	if (ctx.cr6.eq) goto loc_8215EE2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215EE2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EE2C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215ee78
	if (!ctx.cr6.eq) goto loc_8215EE78;
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215ee58
	if (ctx.cr6.eq) goto loc_8215EE58;
	// bl 0x8215d238
	ctx.lr = 0x8215EE58;
	sub_8215D238(ctx, base);
loc_8215EE58:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215ee78
	if (!ctx.cr6.eq) goto loc_8215EE78;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215eeac
	goto loc_8215EEAC;
loc_8215EE78:
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// bne cr6,0x8215ee90
	if (!ctx.cr6.eq) goto loc_8215EE90;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8215EE90:
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
	// beq 0x8215eea8
	if (ctx.cr0.eq) goto loc_8215EEA8;
	// bl 0x8215d170
	ctx.lr = 0x8215EEA8;
	sub_8215D170(ctx, base);
loc_8215EEA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215EEAC:
	// stb r11,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821680E8) {
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
	ctx.lr = 0x821680F0;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x82123288
	ctx.lr = 0x82168108;
	sub_82123288(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821233a0
	ctx.lr = 0x82168110;
	sub_821233A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82168120;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216813C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8216814C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212a538
	ctx.lr = 0x82168154;
	sub_8212A538(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,23360
	ctx.r4.s64 = ctx.r11.s64 + 23360;
	// bl 0x82120600
	ctx.lr = 0x82168164;
	sub_82120600(ctx, base);
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82168194;
	sub_82120AC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82168294
	if (ctx.cr6.eq) goto loc_82168294;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r25,r28,28
	r25.s64 = r28.s64 + 28;
	// addi r27,r11,23408
	r27.s64 = ctx.r11.s64 + 23408;
	// addi r26,r10,23368
	r26.s64 = ctx.r10.s64 + 23368;
loc_821681B8:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821681cc
	if (ctx.cr6.lt) goto loc_821681CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821681CC:
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_821681D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821681d4
	if (!ctx.cr0.eq) goto loc_821681D4;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826a5b08
	ctx.lr = 0x821681F0;
	sub_826A5B08(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x821681FC;
	sub_82120600(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
	// lwz r24,32(r28)
	r24.u64 = REX_LOAD_U32(r28.u32 + 32);
	// bl 0x82120a20
	ctx.lr = 0x82168214;
	sub_82120A20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x82168230
	if (ctx.cr6.eq) goto loc_82168230;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,149
	ctx.r5.s64 = 149;
	// bl 0x821231d0
	ctx.lr = 0x82168230;
	sub_821231D0(ctx, base);
loc_82168230:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216824c
	if (ctx.cr0.eq) goto loc_8216824C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8216824C;
	sub_82120AC0(ctx, base);
loc_8216824C:
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120600
	ctx.lr = 0x82168258;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821208c0
	ctx.lr = 0x82168264;
	sub_821208C0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82120b20
	ctx.lr = 0x82168274;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82168284;
	sub_82120AC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821681b8
	if (!ctx.cr6.eq) goto loc_821681B8;
loc_82168294:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212a5b0
	ctx.lr = 0x8216829C;
	sub_8212A5B0(ctx, base);
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821682B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821682C0;
	sub_82120AC0(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821759F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82175A00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82175ab8
	if (!ctx.cr6.lt) goto loc_82175AB8;
	// addi r28,r3,24
	r28.s64 = ctx.r3.s64 + 24;
loc_82175A20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8216fab8
	ctx.lr = 0x82175A2C;
	sub_8216FAB8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,65520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65520, ctx.xer);
	// blt cr6,0x82175aac
	if (ctx.cr6.lt) goto loc_82175AAC;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// beq cr6,0x82175ab8
	if (ctx.cr6.eq) goto loc_82175AB8;
	// cmplwi cr6,r11,65533
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65533, ctx.xer);
	// bne cr6,0x82175a74
	if (!ctx.cr6.eq) goto loc_82175A74;
	// lbz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 12);
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lbz r11,13(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 13);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,14(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 14);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// lbz r11,15(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 15);
	// b 0x82175aa8
	goto loc_82175AA8;
loc_82175A74:
	// cmplwi cr6,r11,65529
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65529, ctx.xer);
	// bgt cr6,0x82175aac
	if (ctx.cr6.gt) goto loc_82175AAC;
	// addis r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -65536;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bl 0x8228ca78
	ctx.lr = 0x82175A8C;
	sub_8228CA78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// lbz r11,3(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
loc_82175AA8:
	// stb r11,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r11.u8);
loc_82175AAC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82175a20
	if (ctx.cr6.lt) goto loc_82175A20;
loc_82175AB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217AD28) {
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
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8217ad84
	goto loc_8217AD84;
loc_8217AD48:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8217AD54:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8217ad78
	if (ctx.cr0.eq) goto loc_8217AD78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217ad54
	if (ctx.cr6.eq) goto loc_8217AD54;
loc_8217AD78:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8217ae0c
	if (ctx.cr0.eq) goto loc_8217AE0C;
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_8217AD84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217ad48
	if (!ctx.cr6.eq) goto loc_8217AD48;
	// b 0x8217ae08
	goto loc_8217AE08;
loc_8217AD90:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217ADA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217adfc
	if (ctx.cr0.eq) goto loc_8217ADFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217ADC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217ae18
	goto loc_8217AE18;
loc_8217ADC4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8217ADD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8217adf4
	if (ctx.cr0.eq) goto loc_8217ADF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217add0
	if (ctx.cr6.eq) goto loc_8217ADD0;
loc_8217ADF4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8217ae0c
	if (ctx.cr0.eq) goto loc_8217AE0C;
loc_8217ADFC:
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217adc4
	if (!ctx.cr6.eq) goto loc_8217ADC4;
loc_8217AE08:
	// li r31,0
	r31.s64 = 0;
loc_8217AE0C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217ad90
	if (!ctx.cr6.eq) goto loc_8217AD90;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217AE18:
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

DEFINE_REX_FUNC(sub_821835F0) {
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
	ctx.lr = 0x821835F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,31732
	ctx.r10.s64 = ctx.r10.s64 + 31732;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r29,6168(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,28(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lbz r11,705(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218362c
	if (ctx.cr0.eq) goto loc_8218362C;
	// bl 0x8216d9e8
	ctx.lr = 0x8218362C;
	sub_8216D9E8(ctx, base);
loc_8218362C:
	// lwz r27,32(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x82183674
	goto loc_82183674;
loc_8218363C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82183670
	if (!ctx.cr6.eq) goto loc_82183670;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x82183660;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82183674
	goto loc_82183674;
loc_82183670:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82183674:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// bne cr6,0x8218363c
	if (!ctx.cr6.eq) goto loc_8218363C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149cd8
	ctx.lr = 0x82183688;
	sub_82149CD8(ctx, base);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821836b4
	goto loc_821836B4;
loc_82183694:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821836AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821836B4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82183694
	if (!ctx.cr6.eq) goto loc_82183694;
	// lwz r3,252(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821836cc
	if (ctx.cr6.eq) goto loc_821836CC;
	// bl 0x82149220
	ctx.lr = 0x821836CC;
	sub_82149220(ctx, base);
loc_821836CC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821836D4;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821836e4
	if (ctx.cr0.eq) goto loc_821836E4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821836E4;
	sub_8269CE98(ctx, base);
loc_821836E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8218CC78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8218CC80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821d3ac0
	ctx.lr = 0x8218CC94;
	sub_821D3AC0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218CCB4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8218ccb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218CCB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8218CCD8;
	sub_826A1E70(ctx, base);
	// lfs f9,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// std r8,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f8,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// std r9,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r9.u64);
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82192830) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// ble cr6,0x8219287c
	if (!ctx.cr6.gt) goto loc_8219287C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8228ca78
	ctx.lr = 0x82192878;
	sub_8228CA78(ctx, base);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_8219287C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// ble cr6,0x82192894
	if (!ctx.cr6.gt) goto loc_82192894;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8228ca78
	ctx.lr = 0x82192890;
	sub_8228CA78(ctx, base);
	// stfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82192894:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// ble cr6,0x821928ac
	if (!ctx.cr6.gt) goto loc_821928AC;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8228ca78
	ctx.lr = 0x821928A8;
	sub_8228CA78(ctx, base);
	// stfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_821928AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_82196B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196DC8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8215fb50
	ctx.lr = 0x82196DF0;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82196e68
	if (ctx.cr0.eq) goto loc_82196E68;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82196e68
	if (ctx.cr6.eq) goto loc_82196E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82196e68
	if (ctx.cr0.eq) goto loc_82196E68;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196e68
	if (ctx.cr6.eq) goto loc_82196E68;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196E68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82196E68:
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

DEFINE_REX_FUNC(sub_8219D2E0) {
	REX_FUNC_PROLOGUE();
	// ld r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D800) {
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
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219d84c
	if (ctx.cr6.eq) goto loc_8219D84C;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f5f8
	ctx.lr = 0x8219D838;
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
	ctx.lr = 0x8219D84C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D84C:
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

DEFINE_REX_FUNC(sub_821A05D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15456
	ctx.r3.s64 = ctx.r11.s64 + -15456;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0750) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_821A0774:
	// lfs f12,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r9,256
	ctx.r8.s64 = ctx.r9.s64 + 256;
	// lfs f13,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f13,f0,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,88(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a0774
	if (!ctx.cr6.eq) goto loc_821A0774;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A69C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821A69D0;
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
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821d7f08
	ctx.lr = 0x821A69E8;
	sub_821D7F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,96(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821eafc8
	ctx.lr = 0x821A69F8;
	sub_821EAFC8(ctx, base);
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821A6A0C;
	sub_821626C0(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 144);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821a6a2c
	goto loc_821A6A2C;
loc_821A6A18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821ebbd0
	ctx.lr = 0x821A6A24;
	sub_821EBBD0(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 144);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821A6A2C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a6a18
	if (!ctx.cr6.eq) goto loc_821A6A18;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A8950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A8958;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,93(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 93);
	// b 0x821a89b0
	goto loc_821A89B0;
loc_821A8974:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821a89e8
	ctx.lr = 0x821A8980;
	sub_821A89E8(ctx, base);
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x821a8d60
	ctx.lr = 0x821A8990;
	sub_821A8D60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821A89A0;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A89A8;
	sub_8269CE98(ctx, base);
	// lbz r11,93(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 93);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821A89B0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8974
	if (ctx.cr0.eq) goto loc_821A8974;
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
	ctx.lr = 0x821A89E0;
	sub_8269CE98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821AC750) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x821AC764;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ac774
	if (ctx.cr0.eq) goto loc_821AC774;
	// bl 0x821ac7b8
	ctx.lr = 0x821AC770;
	sub_821AC7B8(ctx, base);
	// b 0x821ac778
	goto loc_821AC778;
loc_821AC774:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AC778:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ADD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821ADDA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821ADDB0;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
	// addi r10,r10,-23812
	ctx.r10.s64 = ctx.r10.s64 + -23812;
	// addi r9,r9,-23772
	ctx.r9.s64 = ctx.r9.s64 + -23772;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// bl 0x822f6280
	ctx.lr = 0x821ADDE0;
	sub_822F6280(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ade04
	if (ctx.cr0.eq) goto loc_821ADE04;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821ADDFC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ade08
	goto loc_821ADE08;
loc_821ADE04:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821ADE08:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x821ADE18;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821ADE20;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ade3c
	if (ctx.cr0.eq) goto loc_821ADE3C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821ADE34;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ade40
	goto loc_821ADE40;
loc_821ADE3C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821ADE40:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x821ADE4C;
	sub_821D3988(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x821ADE54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ade90
	if (ctx.cr0.eq) goto loc_821ADE90;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// addi r10,r10,12480
	ctx.r10.s64 = ctx.r10.s64 + 12480;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// b 0x821ade94
	goto loc_821ADE94;
loc_821ADE90:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821ADE94:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x821ADEA0;
	sub_821D3988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B5288) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822f6280
	ctx.lr = 0x821B529C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b52ac
	if (ctx.cr0.eq) goto loc_821B52AC;
	// bl 0x821b52c0
	ctx.lr = 0x821B52A8;
	sub_821B52C0(ctx, base);
	// b 0x821b52b0
	goto loc_821B52B0;
loc_821B52AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B52B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B61E8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,300(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821b62c0
	if (ctx.cr6.eq) goto loc_821B62C0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B6218:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821b6218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6218;
	// lwa r8,140(r3)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 140));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lwa r9,136(r3)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 136));
	// lfs f13,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lfs f10,296(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ld r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// ld r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f9,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8218d918
	ctx.lr = 0x821B6298;
	sub_8218D918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218db40
	ctx.lr = 0x821B62A0;
	sub_8218DB40(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,6168(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149f18
	ctx.lr = 0x821B62B4;
	sub_82149F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B62C0;
	sub_82149E08(ctx, base);
loc_821B62C0:
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

DEFINE_REX_FUNC(sub_821BE2D8) {
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
	ctx.lr = 0x821BE2EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821be2fc
	if (ctx.cr0.eq) goto loc_821BE2FC;
	// bl 0x821be310
	ctx.lr = 0x821BE2F8;
	sub_821BE310(ctx, base);
	// b 0x821be300
	goto loc_821BE300;
loc_821BE2FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BE300:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF3D0) {
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
	ctx.lr = 0x821BF3E4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bf3f4
	if (ctx.cr0.eq) goto loc_821BF3F4;
	// bl 0x821bf408
	ctx.lr = 0x821BF3F0;
	sub_821BF408(ctx, base);
	// b 0x821bf3f8
	goto loc_821BF3F8;
loc_821BF3F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF3F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0320) {
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
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x821c0728
	ctx.lr = 0x821C0344;
	sub_821C0728(ctx, base);
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

DEFINE_REX_FUNC(sub_821C2EB0) {
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
	// lwz r11,168(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c2ee4
	if (ctx.cr6.eq) goto loc_821C2EE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C2EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C2EE4:
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

DEFINE_REX_FUNC(sub_821C4A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C4A40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,136
	r30.s64 = ctx.r3.s64 + 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e33d8
	ctx.lr = 0x821C4A54;
	sub_821E33D8(ctx, base);
	// addi r29,r31,448
	r29.s64 = r31.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e4980
	ctx.lr = 0x821C4A60;
	sub_821E4980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e30b8
	ctx.lr = 0x821C4A68;
	sub_821E30B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e4548
	ctx.lr = 0x821C4A70;
	sub_821E4548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c53a8
	ctx.lr = 0x821C4A78;
	sub_821C53A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c5410
	ctx.lr = 0x821C4A80;
	sub_821C5410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C6AB0) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x821C6AB8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca0
	ctx.lr = 0x821C6AC0;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b818
	ctx.lr = 0x821C6AE0;
	sub_8216B818(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821678f0
	ctx.lr = 0x821C6AEC;
	sub_821678F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x821678f0
	ctx.lr = 0x821C6AF8;
	sub_821678F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x821678f0
	ctx.lr = 0x821C6B04;
	sub_821678F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// bl 0x821bf1e8
	ctx.lr = 0x821C6B10;
	sub_821BF1E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// ble cr6,0x821c6b48
	if (!ctx.cr6.gt) goto loc_821C6B48;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821c6b48
	if (!ctx.cr6.eq) goto loc_821C6B48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b818
	ctx.lr = 0x821C6B40;
	sub_8216B818(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_821C6B48:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmr f26,f31
	f26.f64 = f31.f64;
	// ble cr6,0x821c6b78
	if (!ctx.cr6.gt) goto loc_821C6B78;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821c6b78
	if (!ctx.cr6.eq) goto loc_821C6B78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821678f0
	ctx.lr = 0x821C6B74;
	sub_821678F0(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
loc_821C6B78:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-15288
	ctx.r4.s64 = ctx.r11.s64 + -15288;
	// bl 0x82121ec8
	ctx.lr = 0x821C6B88;
	sub_82121EC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r24,r11,-17108
	r24.s64 = ctx.r11.s64 + -17108;
	// bne 0x821c6bac
	if (!ctx.cr0.eq) goto loc_821C6BAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,-17048
	ctx.r3.s64 = ctx.r11.s64 + -17048;
	// li r5,348
	ctx.r5.s64 = 348;
	// bl 0x821231d0
	ctx.lr = 0x821C6BAC;
	sub_821231D0(ctx, base);
loc_821C6BAC:
	// lwz r11,384(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c6dc4
	if (ctx.cr6.eq) goto loc_821C6DC4;
	// lwz r30,96(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821c6be4
	if (ctx.cr6.eq) goto loc_821C6BE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,-16928
	ctx.r3.s64 = ctx.r11.s64 + -16928;
	// li r5,354
	ctx.r5.s64 = 354;
	// bl 0x821231d0
	ctx.lr = 0x821C6BE4;
	sub_821231D0(ctx, base);
loc_821C6BE4:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x821C6BEC;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// beq 0x821c6c4c
	if (ctx.cr0.eq) goto loc_821C6C4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f30,24(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// addi r11,r11,15456
	ctx.r11.s64 = ctx.r11.s64 + 15456;
	// stfs f30,32(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r27,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stb r29,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r29.u8);
	// stw r27,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r27.u32);
	// stw r27,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x821c6c50
	goto loc_821C6C50;
loc_821C6C4C:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_821C6C50:
	// stfs f28,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821e9910
	ctx.lr = 0x821C6C60;
	sub_821E9910(ctx, base);
	// stfs f27,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stb r28,20(r31)
	REX_STORE_U8(r31.u32 + 20, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821e9910
	ctx.lr = 0x821C6C74;
	sub_821E9910(ctx, base);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x821c6c90
	if (!ctx.cr6.gt) goto loc_821C6C90;
	// fdivs f0,f30,f29
	ctx.f0.f64 = double(float(f30.f64 / f29.f64));
	// stfs f0,392(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 392, temp.u32);
	// stb r29,388(r26)
	REX_STORE_U8(r26.u32 + 388, r29.u8);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// b 0x821c6cd8
	goto loc_821C6CD8;
loc_821C6C90:
	// lwz r30,384(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 384);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821c6ccc
	if (!ctx.cr6.gt) goto loc_821C6CCC;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
loc_821C6CA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821C6CB4;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821357c8
	ctx.lr = 0x821C6CBC;
	sub_821357C8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c6ca8
	if (ctx.cr6.lt) goto loc_821C6CA8;
loc_821C6CCC:
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
	// stw r27,32(r30)
	REX_STORE_U32(r30.u32 + 32, r27.u32);
	// stw r27,44(r30)
	REX_STORE_U32(r30.u32 + 44, r27.u32);
loc_821C6CD8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,384(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 384);
	// bl 0x821e9778
	ctx.lr = 0x821C6CE4;
	sub_821E9778(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x821c6d58
	if (ctx.cr6.eq) goto loc_821C6D58;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-15384
	ctx.r4.s64 = ctx.r11.s64 + -15384;
	// bl 0x82121ec8
	ctx.lr = 0x821C6CFC;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c6d18
	if (!ctx.cr0.eq) goto loc_821C6D18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// li r5,377
	ctx.r5.s64 = 377;
	// bl 0x821231d0
	ctx.lr = 0x821C6D18;
	sub_821231D0(ctx, base);
loc_821C6D18:
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c6d3c
	if (ctx.cr6.eq) goto loc_821C6D3C;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C6D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C6D3C:
	// stw r25,36(r31)
	REX_STORE_U32(r31.u32 + 36, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C6D58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C6D58:
	// addi r11,r26,116
	ctx.r11.s64 = r26.s64 + 116;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bl 0x821e9910
	ctx.lr = 0x821C6D6C;
	sub_821E9910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821357c8
	ctx.lr = 0x821C6D74;
	sub_821357C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17144
	ctx.r4.s64 = ctx.r11.s64 + -17144;
	// bl 0x82120600
	ctx.lr = 0x821C6D84;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,140(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 140);
	// bl 0x821dd040
	ctx.lr = 0x821C6D90;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r27.u32);
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
	ctx.lr = 0x821C6DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821C6DC4;
	sub_82120AC0(ctx, base);
loc_821C6DC4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r27,0(r23)
	REX_STORE_U32(r23.u32 + 0, r27.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cec
	ctx.lr = 0x821C6DD8;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821DE608) {
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
	ctx.lr = 0x821DE610;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bge cr6,0x821de638
	if (!ctx.cr6.lt) goto loc_821DE638;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821de80c
	goto loc_821DE80C;
loc_821DE638:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,-2544
	r27.s64 = ctx.r10.s64 + -2544;
	// li r30,0
	r30.s64 = 0;
	// add r25,r11,r27
	r25.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r29,r11,r25
	r29.u64 = ctx.r11.u64 + r25.u64;
	// add r26,r11,r29
	r26.u64 = ctx.r11.u64 + r29.u64;
	// ble cr6,0x821de680
	if (!ctx.cr6.gt) goto loc_821DE680;
	// addi r28,r27,-4
	r28.s64 = r27.s64 + -4;
loc_821DE660:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE66C;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de660
	if (ctx.cr6.lt) goto loc_821DE660;
loc_821DE680:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821de6b0
	if (!ctx.cr6.gt) goto loc_821DE6B0;
	// addi r28,r29,-4
	r28.s64 = r29.s64 + -4;
loc_821DE690:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE69C;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de690
	if (ctx.cr6.lt) goto loc_821DE690;
loc_821DE6B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f2,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lfs f1,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821deb30
	ctx.lr = 0x821DE6D0;
	sub_821DEB30(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821de700
	if (!ctx.cr6.gt) goto loc_821DE700;
	// addi r28,r26,-4
	r28.s64 = r26.s64 + -4;
loc_821DE6E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfsu f31,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	r28.u32 = ea;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE6F0;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de6e0
	if (ctx.cr6.lt) goto loc_821DE6E0;
loc_821DE700:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821de730
	if (!ctx.cr6.gt) goto loc_821DE730;
	// addi r28,r29,-4
	r28.s64 = r29.s64 + -4;
loc_821DE710:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE71C;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de710
	if (ctx.cr6.lt) goto loc_821DE710;
loc_821DE730:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f2,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lfs f1,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821deb30
	ctx.lr = 0x821DE750;
	sub_821DEB30(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821de780
	if (!ctx.cr6.gt) goto loc_821DE780;
	// addi r28,r26,-4
	r28.s64 = r26.s64 + -4;
loc_821DE760:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfsu f31,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	r28.u32 = ea;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE770;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfs f31,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de760
	if (ctx.cr6.lt) goto loc_821DE760;
loc_821DE780:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821de7b0
	if (!ctx.cr6.gt) goto loc_821DE7B0;
	// addi r28,r29,-4
	r28.s64 = r29.s64 + -4;
loc_821DE790:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE79C;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de790
	if (ctx.cr6.lt) goto loc_821DE790;
loc_821DE7B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f2,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lfs f1,8(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821deb30
	ctx.lr = 0x821DE7D0;
	sub_821DEB30(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821de800
	if (!ctx.cr6.gt) goto loc_821DE800;
	// addi r29,r26,-4
	r29.s64 = r26.s64 + -4;
loc_821DE7E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfsu f31,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	r29.u32 = ea;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821DE7F0;
	sub_821AFA30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfs f31,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821de7e0
	if (ctx.cr6.lt) goto loc_821DE7E0;
loc_821DE800:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,12(r24)
	REX_STORE_U8(r24.u32 + 12, ctx.r11.u8);
loc_821DE80C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821EF7E0) {
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
	ctx.lr = 0x821EF7E8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r31,r11,16492
	r31.s64 = ctx.r11.s64 + 16492;
	// addi r30,r10,1624
	r30.s64 = ctx.r10.s64 + 1624;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EF810;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x821EF81C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821EF820;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120d70
	ctx.lr = 0x821EF82C;
	sub_82120D70(ctx, base);
	// li r26,-1
	r26.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120b20
	ctx.lr = 0x821EF844;
	sub_82120B20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,16512
	ctx.r4.s64 = ctx.r11.s64 + 16512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120c08
	ctx.lr = 0x821EF858;
	sub_82120C08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EF864;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x821EF870;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821EF874;
	sub_8215FA30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EF884;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x8215f338
	ctx.lr = 0x821EF890;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ef8a4
	if (!ctx.cr6.eq) goto loc_821EF8A4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821ef8a8
	goto loc_821EF8A8;
loc_821EF8A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EF8A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x821ef8c0
	if (ctx.cr0.eq) goto loc_821EF8C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16552
	ctx.r4.s64 = ctx.r11.s64 + 16552;
	// b 0x821ef8c8
	goto loc_821EF8C8;
loc_821EF8C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16560
	ctx.r4.s64 = ctx.r11.s64 + 16560;
loc_821EF8C8:
	// bl 0x82121928
	ctx.lr = 0x821EF8CC;
	sub_82121928(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x821EF8E0;
	sub_82121DD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r27,r11,16568
	r27.s64 = ctx.r11.s64 + 16568;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82125d00
	ctx.lr = 0x821EF8F4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821ef938
	if (!ctx.cr0.eq) goto loc_821EF938;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EF908;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x821EF914;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821EF918;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x821EF92C;
	sub_82121DD0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82121928
	ctx.lr = 0x821EF938;
	sub_82121928(ctx, base);
loc_821EF938:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821EF948;
	sub_82120AC0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FAB38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,24968
	ctx.r4.s64 = ctx.r11.s64 + 24968;
	// bl 0x8215f670
	ctx.lr = 0x821FAB5C;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FAB64;
	sub_8215F5F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FAB6C;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stb r10,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821FBC30) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fbc6c
	if (ctx.cr6.eq) goto loc_821FBC6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25544
	ctx.r3.s64 = ctx.r10.s64 + 25544;
	// li r5,533
	ctx.r5.s64 = 533;
	// bl 0x821231d0
	ctx.lr = 0x821FBC6C;
	sub_821231D0(ctx, base);
loc_821FBC6C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25604
	ctx.r4.s64 = ctx.r11.s64 + 25604;
	// bl 0x82120600
	ctx.lr = 0x821FBC7C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821FBC8C;
	sub_82180E18(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821FBCA0;
	sub_82120AC0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fbcb4
	if (!ctx.cr6.eq) goto loc_821FBCB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821fbd18
	goto loc_821FBD18;
loc_821FBCB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBCC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	r30.s64 = 1;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBCF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821fbd04
	if (!ctx.cr6.eq) goto loc_821FBD04;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821fbd08
	goto loc_821FBD08;
loc_821FBD04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FBD08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fbd14
	if (ctx.cr0.eq) goto loc_821FBD14;
	// stb r30,28(r31)
	REX_STORE_U8(r31.u32 + 28, r30.u8);
loc_821FBD14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821FBD18:
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

DEFINE_REX_FUNC(sub_822036F0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82203824
	if (ctx.cr6.eq) goto loc_82203824;
	// lfs f0,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x822038e8
	if (ctx.cr6.gt) goto loc_822038E8;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lwz r10,6100(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6100);
	// lwz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// blt cr6,0x82203750
	if (ctx.cr6.lt) goto loc_82203750;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82203750:
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
	ctx.lr = 0x8220376C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82203814
	if (!ctx.cr0.eq) goto loc_82203814;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,14600
	ctx.r4.s64 = ctx.r10.s64 + 14600;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822fbf60
	ctx.lr = 0x8220379C;
	sub_822FBF60(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbe20
	ctx.lr = 0x822037A4;
	sub_822FBE20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,29692
	ctx.r4.s64 = ctx.r11.s64 + 29692;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a0568
	ctx.lr = 0x822037B8;
	sub_826A0568(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6300(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6300);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822037D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r8,36(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
loc_82203814:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x822038e8
	goto loc_822038E8;
loc_82203824:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822038e8
	if (ctx.cr6.eq) goto loc_822038E8;
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822038e8
	if (!ctx.cr0.eq) goto loc_822038E8;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r31,44
	ctx.r11.s64 = r31.s64 + 44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// beq cr6,0x8220385c
	if (ctx.cr6.eq) goto loc_8220385C;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8220385C:
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r7,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82203874
	if (ctx.cr6.gt) goto loc_82203874;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
loc_82203874:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// beq cr6,0x822038c4
	if (ctx.cr6.eq) goto loc_822038C4;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822038b4
	if (ctx.cr6.gt) goto loc_822038B4;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_822038B4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne 0x822038c4
	if (!ctx.cr0.eq) goto loc_822038C4;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_822038C4:
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822038dc
	if (ctx.cr6.eq) goto loc_822038DC;
	// lwz r10,52(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822038e8
	if (!ctx.cr6.lt) goto loc_822038E8;
loc_822038DC:
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lfs f0,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
loc_822038E8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

DEFINE_REX_FUNC(sub_82212990) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14092
	ctx.r3.s64 = ctx.r11.s64 + -14092;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212CC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x82212CEC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// bl 0x8216bc98
	ctx.lr = 0x82212CFC;
	sub_8216BC98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82215018) {
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
	// lbz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82215094
	if (!ctx.cr0.eq) goto loc_82215094;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215094
	if (ctx.cr6.eq) goto loc_82215094;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82215094
	if (ctx.cr6.eq) goto loc_82215094;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// addi r4,r9,-7920
	ctx.r4.s64 = ctx.r9.s64 + -7920;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221506C;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82215070;
	sub_8215F990(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82215094
	if (!ctx.cr6.lt) goto loc_82215094;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// bl 0x822166e8
	ctx.lr = 0x82215094;
	sub_822166E8(ctx, base);
loc_82215094:
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

DEFINE_REX_FUNC(sub_8221C378) {
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
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,32576
	ctx.r10.s64 = ctx.r10.s64 + 32576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x8221C3C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c3f4
	if (ctx.cr0.eq) goto loc_8221C3F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-22448
	ctx.r10.s64 = ctx.r10.s64 + -22448;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8221c3f8
	goto loc_8221C3F8;
loc_8221C3F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221C3F8:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7a50
	ctx.lr = 0x8221C404;
	sub_822E7A50(ctx, base);
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

DEFINE_REX_FUNC(sub_82222940) {
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
	ctx.lr = 0x82222948;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// mr r22,r18
	r22.u64 = r18.u64;
	// bl 0x82178268
	ctx.lr = 0x82222968;
	sub_82178268(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r18,112(r31)
	REX_STORE_U32(r31.u32 + 112, r18.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// addi r8,r11,-24732
	ctx.r8.s64 = ctx.r11.s64 + -24732;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// li r10,200
	ctx.r10.s64 = 200;
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// addi r17,r31,160
	r17.s64 = r31.s64 + 160;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r21,r31,128
	r21.s64 = r31.s64 + 128;
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r19,r31,136
	r19.s64 = r31.s64 + 136;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stb r11,143(r31)
	REX_STORE_U8(r31.u32 + 143, ctx.r11.u8);
	// stb r10,142(r31)
	REX_STORE_U8(r31.u32 + 142, ctx.r10.u8);
	// addi r29,r31,140
	r29.s64 = r31.s64 + 140;
	// stb r18,141(r31)
	REX_STORE_U8(r31.u32 + 141, r18.u8);
	// addi r28,r31,144
	r28.s64 = r31.s64 + 144;
	// stb r11,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r11.u8);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x822229E4;
	sub_822E6DF0(ctx, base);
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f31,256(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// addi r16,r31,268
	r16.s64 = r31.s64 + 268;
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// addi r27,r31,252
	r27.s64 = r31.s64 + 252;
	// stfs f31,264(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82222A04;
	sub_822E6DF0(ctx, base);
	// stfs f31,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// addi r15,r31,376
	r15.s64 = r31.s64 + 376;
	// stfs f31,368(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// addi r26,r31,360
	r26.s64 = r31.s64 + 360;
	// stfs f31,372(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82222A24;
	sub_822E6DF0(ctx, base);
	// stfs f31,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// addi r14,r31,484
	r14.s64 = r31.s64 + 484;
	// stfs f31,476(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// addi r25,r31,468
	r25.s64 = r31.s64 + 468;
	// stfs f31,480(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82222A44;
	sub_822E6DF0(ctx, base);
	// stfs f31,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// stfs f31,580(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 580, temp.u32);
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// stfs f31,584(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 584, temp.u32);
	// addi r24,r31,576
	r24.s64 = r31.s64 + 576;
	// stfs f31,588(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 588, temp.u32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x822e6df0
	ctx.lr = 0x82222A64;
	sub_822E6DF0(ctx, base);
	// stfs f31,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// stfs f31,688(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// addi r3,r31,700
	ctx.r3.s64 = r31.s64 + 700;
	// stfs f31,692(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 692, temp.u32);
	// addi r23,r31,684
	r23.s64 = r31.s64 + 684;
	// stfs f31,696(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 696, temp.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x822e6df0
	ctx.lr = 0x82222A84;
	sub_822E6DF0(ctx, base);
	// addi r11,r31,793
	ctx.r11.s64 = r31.s64 + 793;
	// stb r18,792(r31)
	REX_STORE_U8(r31.u32 + 792, r18.u8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r18,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r18.u8);
	// addi r3,r31,796
	ctx.r3.s64 = r31.s64 + 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x8226b010
	ctx.lr = 0x82222AA4;
	sub_8226B010(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x82222AAC;
	sub_822F6280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82222adc
	if (ctx.cr0.eq) goto loc_82222ADC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x82222AC4;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r22,1
	r22.s64 = 1;
	// bl 0x821d13f8
	ctx.lr = 0x82222AD8;
	sub_821D13F8(ctx, base);
	// b 0x82222ae0
	goto loc_82222AE0;
loc_82222ADC:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82222AE0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82222AF4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r22,31
	ctx.r11.u64 = r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222b10
	if (ctx.cr0.eq) goto loc_82222B10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r22,r22,0,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82222B10;
	sub_82120AC0(ctx, base);
loc_82222B10:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82222B18;
	sub_822F6280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82222b48
	if (ctx.cr0.eq) goto loc_82222B48;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x82222B30;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// ori r22,r22,2
	r22.u64 = r22.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x82222B44;
	sub_82196BA8(ctx, base);
	// b 0x82222b4c
	goto loc_82222B4C;
loc_82222B48:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82222B4C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82222B5C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r22,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222b78
	if (ctx.cr0.eq) goto loc_82222B78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// rlwinm r22,r22,0,31,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82222B78;
	sub_82120AC0(ctx, base);
loc_82222B78:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82222B80;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82222bb0
	if (ctx.cr0.eq) goto loc_82222BB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x82222B98;
	sub_82120600(ctx, base);
	// addi r5,r31,132
	ctx.r5.s64 = r31.s64 + 132;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r22,r22,4
	r22.u64 = r22.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82222BAC;
	sub_82196BA8(ctx, base);
	// b 0x82222bb4
	goto loc_82222BB4;
loc_82222BB0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82222BB4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82222BC4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222be0
	if (ctx.cr0.eq) goto loc_82222BE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// rlwinm r22,r22,0,30,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82222BE0;
	sub_82120AC0(ctx, base);
loc_82222BE0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82222BE8;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82222c18
	if (ctx.cr0.eq) goto loc_82222C18;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x82222C00;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r22,r22,8
	r22.u64 = r22.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82222C14;
	sub_82196BA8(ctx, base);
	// b 0x82222c1c
	goto loc_82222C1C;
loc_82222C18:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82222C1C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82222C2C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222c48
	if (ctx.cr0.eq) goto loc_82222C48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r22,r22,0,29,27
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82222C48;
	sub_82120AC0(ctx, base);
loc_82222C48:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82222C50;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82222c80
	if (ctx.cr0.eq) goto loc_82222C80;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// bl 0x82120600
	ctx.lr = 0x82222C68;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r22,r22,16
	r22.u64 = r22.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x82222C7C;
	sub_8219D708(ctx, base);
	// b 0x82222c84
	goto loc_82222C84;
loc_82222C80:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82222C84:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82222C94;
	sub_82145710(ctx, base);
	// rlwinm. r11,r22,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222cb0
	if (ctx.cr0.eq) goto loc_82222CB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r22,r22,0,28,26
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82222CB0;
	sub_82120AC0(ctx, base);
loc_82222CB0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-27196
	ctx.r4.s64 = ctx.r11.s64 + -27196;
	// bl 0x82120600
	ctx.lr = 0x82222CC0;
	sub_82120600(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82222CD0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x82222CE0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// bl 0x82120600
	ctx.lr = 0x82222CF0;
	sub_82120600(ctx, base);
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82222D00;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82120ac0
	ctx.lr = 0x82222D10;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-25080
	ctx.r4.s64 = ctx.r11.s64 + -25080;
	// bl 0x82120600
	ctx.lr = 0x82222D20;
	sub_82120600(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82222D30;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82222D40;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82120600
	ctx.lr = 0x82222D50;
	sub_82120600(ctx, base);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82222D60;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82120ac0
	ctx.lr = 0x82222D70;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-24860
	ctx.r4.s64 = ctx.r11.s64 + -24860;
	// bl 0x82120600
	ctx.lr = 0x82222D80;
	sub_82120600(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82222D90;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82120ac0
	ctx.lr = 0x82222DA0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-27136
	ctx.r4.s64 = ctx.r11.s64 + -27136;
	// bl 0x82120600
	ctx.lr = 0x82222DB0;
	sub_82120600(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82222DC0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82222DD0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-25068
	ctx.r4.s64 = ctx.r11.s64 + -25068;
	// bl 0x82120600
	ctx.lr = 0x82222DE0;
	sub_82120600(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82222DF0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x82222E00;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-25056
	ctx.r4.s64 = ctx.r11.s64 + -25056;
	// bl 0x82120600
	ctx.lr = 0x82222E10;
	sub_82120600(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82222E20;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x82222E30;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-25044
	ctx.r4.s64 = ctx.r11.s64 + -25044;
	// bl 0x82120600
	ctx.lr = 0x82222E40;
	sub_82120600(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82222E50;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82120ac0
	ctx.lr = 0x82222E60;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-25028
	ctx.r4.s64 = ctx.r11.s64 + -25028;
	// bl 0x82120600
	ctx.lr = 0x82222E70;
	sub_82120600(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822e7f20
	ctx.lr = 0x82222E80;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82120ac0
	ctx.lr = 0x82222E90;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-24848
	ctx.r4.s64 = ctx.r11.s64 + -24848;
	// bl 0x82120600
	ctx.lr = 0x82222EA0;
	sub_82120600(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82222EB0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82120ac0
	ctx.lr = 0x82222EC0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-24828
	ctx.r4.s64 = ctx.r11.s64 + -24828;
	// bl 0x82120600
	ctx.lr = 0x82222ED0;
	sub_82120600(ctx, base);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x822e7f20
	ctx.lr = 0x82222EE0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82120ac0
	ctx.lr = 0x82222EF0;
	sub_82120AC0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82222EF8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82222f28
	if (ctx.cr0.eq) goto loc_82222F28;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-25012
	ctx.r4.s64 = ctx.r11.s64 + -25012;
	// bl 0x82120600
	ctx.lr = 0x82222F10;
	sub_82120600(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r22,r22,32
	r22.u64 = r22.u64 | 32;
	// bl 0x82191600
	ctx.lr = 0x82222F24;
	sub_82191600(ctx, base);
	// b 0x82222f2c
	goto loc_82222F2C;
loc_82222F28:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82222F2C:
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82222F3C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r22,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222f54
	if (ctx.cr0.eq) goto loc_82222F54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82120ac0
	ctx.lr = 0x82222F54;
	sub_82120AC0(ctx, base);
loc_82222F54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82222F64;
	sub_82120600(ctx, base);
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226b670
	ctx.lr = 0x82222F78;
	sub_8226B670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82120ac0
	ctx.lr = 0x82222F88;
	sub_82120AC0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x82222F90;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82222ff8
	if (ctx.cr0.eq) goto loc_82222FF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r18,8(r30)
	REX_STORE_U32(r30.u32 + 8, r18.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82222FBC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222fe8
	if (ctx.cr0.eq) goto loc_82222FE8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,13560
	ctx.r10.s64 = ctx.r10.s64 + 13560;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82222fec
	goto loc_82222FEC;
loc_82222FE8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82222FEC:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82222ffc
	goto loc_82222FFC;
loc_82222FF8:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_82222FFC:
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82223008;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x82223010;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223028
	if (ctx.cr0.eq) goto loc_82223028;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82223ff0
	ctx.lr = 0x82223020;
	sub_82223FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222302c
	goto loc_8222302C;
loc_82223028:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_8222302C:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82223038;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82223040;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223060
	if (ctx.cr0.eq) goto loc_82223060;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82223058;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82223064
	goto loc_82223064;
loc_82223060:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_82223064:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82223070;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82223078;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822230ac
	if (ctx.cr0.eq) goto loc_822230AC;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,13288
	ctx.r6.s64 = ctx.r11.s64 + 13288;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x822230A4;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822230b0
	goto loc_822230B0;
loc_822230AC:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_822230B0:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822230C8;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822230D0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223104
	if (ctx.cr0.eq) goto loc_82223104;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-27904
	ctx.r4.s64 = ctx.r10.s64 + -27904;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,13320
	ctx.r6.s64 = ctx.r11.s64 + 13320;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x822230FC;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82223108
	goto loc_82223108;
loc_82223104:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82223108:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82223120;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82223128;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222315c
	if (ctx.cr0.eq) goto loc_8222315C;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-27892
	ctx.r4.s64 = ctx.r10.s64 + -27892;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,13360
	ctx.r6.s64 = ctx.r11.s64 + 13360;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x82223154;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82223160
	goto loc_82223160;
loc_8222315C:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82223160:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82223178;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82223180;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822231b4
	if (ctx.cr0.eq) goto loc_822231B4;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-25000
	ctx.r4.s64 = ctx.r10.s64 + -25000;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r11,8184
	ctx.r6.s64 = ctx.r11.s64 + 8184;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x822231AC;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822231b8
	goto loc_822231B8;
loc_822231B4:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_822231B8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822231D0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822231D8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223208
	if (ctx.cr0.eq) goto loc_82223208;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-24808
	ctx.r4.s64 = ctx.r10.s64 + -24808;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r11,13536
	ctx.r6.s64 = ctx.r11.s64 + 13536;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x82223204;
	sub_8221C420(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
loc_82223208:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r18)
	REX_STORE_U32(r18.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82223220;
	sub_82264568(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213de8
	ctx.lr = 0x8222322C;
	sub_82213DE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8225F790) {
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
	ctx.lr = 0x8225F7BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8225f7e8
	if (!ctx.cr6.eq) goto loc_8225F7E8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F7E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f82c
	goto loc_8225F82C;
loc_8225F7E8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6320);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F800;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225f814
	if (!ctx.cr0.eq) goto loc_8225F814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b238
	ctx.lr = 0x8225F810;
	sub_8225B238(ctx, base);
	// b 0x8225f82c
	goto loc_8225F82C;
loc_8225F814:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8225f82c
	if (!ctx.cr6.eq) goto loc_8225F82C;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225F82C;
	sub_8225B1C8(ctx, base);
loc_8225F82C:
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

DEFINE_REX_FUNC(sub_82263A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82263A80;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82263A98;
	sub_8215F1B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,24552
	r29.s64 = ctx.r11.s64 + 24552;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82263AA8;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82263AAC;
	sub_8215F9E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8215f1b0
	ctx.lr = 0x82263ABC;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82263AC4;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82263AC8;
	sub_8215F9E0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82263ad8
	if (ctx.cr6.lt) goto loc_82263AD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82263AD8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82266160) {
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
	ctx.lr = 0x82266168;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82266210
	if (!ctx.cr6.lt) goto loc_82266210;
	// li r29,-1
	r29.s64 = -1;
loc_8226618C:
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ble cr6,0x822661b8
	if (!ctx.cr6.gt) goto loc_822661B8;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_822661A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822661a8
	if (ctx.cr6.lt) goto loc_822661A8;
loc_822661B8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120b20
	ctx.lr = 0x822661CC;
	sub_82120B20(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r9,r8,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82266218
	if (ctx.cr6.lt) goto loc_82266218;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8226618c
	if (ctx.cr6.lt) goto loc_8226618C;
loc_82266210:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226624c
	goto loc_8226624C;
loc_82266218:
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120b20
	ctx.lr = 0x82266230;
	sub_82120B20(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
loc_8226624C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8226CA98) {
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
	// li r31,0
	r31.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// bl 0x8226c870
	ctx.lr = 0x8226CAC4;
	sub_8226C870(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226caec
	if (ctx.cr0.eq) goto loc_8226CAEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8226CADC;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226CAE0;
	sub_8215F270(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215efb0
	ctx.lr = 0x8226CAE8;
	sub_8215EFB0(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_8226CAEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CAF4;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82270480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82270488;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16692
	ctx.r4.s64 = ctx.r11.s64 + -16692;
	// bl 0x8215f670
	ctx.lr = 0x822704AC;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x822704B0;
	sub_8215F270(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-17788
	ctx.r4.s64 = ctx.r11.s64 + -17788;
	// bl 0x82120600
	ctx.lr = 0x822704C0;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822704E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270510
	if (ctx.cr0.eq) goto loc_82270510;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82270514
	if (!ctx.cr0.eq) goto loc_82270514;
loc_82270510:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82270514:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82120ac0
	ctx.lr = 0x82270528;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82270574
	if (ctx.cr0.eq) goto loc_82270574;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8226ff98
	ctx.lr = 0x82270540;
	sub_8226FF98(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227055C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82270560:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82270568;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82270574:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x82270560
	goto loc_82270560;
}

DEFINE_REX_FUNC(sub_82276428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82276430;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,362(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 362);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822764c0
	if (ctx.cr0.eq) goto loc_822764C0;
	// lbz r11,360(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 360);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822764c0
	if (ctx.cr0.eq) goto loc_822764C0;
	// lwz r4,324(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822764a0
	if (ctx.cr6.eq) goto loc_822764A0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r29,6184(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6184);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82151118
	ctx.lr = 0x82276470;
	sub_82151118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8227649c
	if (ctx.cr0.eq) goto loc_8227649C;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82151278
	ctx.lr = 0x8227649C;
	sub_82151278(ctx, base);
loc_8227649C:
	// stw r28,324(r30)
	REX_STORE_U32(r30.u32 + 324, r28.u32);
loc_822764A0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,328(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 328);
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822764BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r28,360(r30)
	REX_STORE_U8(r30.u32 + 360, r28.u8);
loc_822764C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8227BC10) {
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
	ctx.lr = 0x8227BC18;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,368(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 368);
	// li r27,1
	r27.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, r27.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfd f0,136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// stfd f0,160(r3)
	REX_STORE_U64(ctx.r3.u32 + 160, ctx.f0.u64);
	// beq 0x8227bebc
	if (ctx.cr0.eq) goto loc_8227BEBC;
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
	ctx.lr = 0x8227BC5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BC70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bebc
	if (ctx.cr0.eq) goto loc_8227BEBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r31,r28,304
	r31.s64 = r28.s64 + 304;
	// addi r30,r11,-7936
	r30.s64 = ctx.r11.s64 + -7936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8227BCA8;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215f200
	ctx.lr = 0x8227BCB0;
	sub_8215F200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-7880
	r29.s64 = ctx.r11.s64 + -7880;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8227BCC0;
	sub_8215F670(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8226e3f8
	ctx.lr = 0x8227BCCC;
	sub_8226E3F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bebc
	if (ctx.cr0.eq) goto loc_8227BEBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8227BCE0;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215f200
	ctx.lr = 0x8227BCE8;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8227BCF0;
	sub_8215F670(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f200
	ctx.lr = 0x8227BCF8;
	sub_8215F200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-7860
	ctx.r4.s64 = ctx.r11.s64 + -7860;
	// bl 0x8215f338
	ctx.lr = 0x8227BD04;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x8227BD0C;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8227bd28
	if (ctx.cr0.eq) goto loc_8227BD28;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r10,320(r28)
	REX_STORE_U32(r28.u32 + 320, ctx.r10.u32);
	// b 0x8227bd2c
	goto loc_8227BD2C;
loc_8227BD28:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8227BD2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bebc
	if (ctx.cr0.eq) goto loc_8227BEBC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227b138
	ctx.lr = 0x8227BD3C;
	sub_8227B138(ctx, base);
	// lwz r11,340(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227bebc
	if (!ctx.cr6.eq) goto loc_8227BEBC;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BD68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227beb4
	if (ctx.cr0.eq) goto loc_8227BEB4;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8227BD78;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8227bdd0
	if (ctx.cr0.eq) goto loc_8227BDD0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,3972
	ctx.r11.s64 = ctx.r11.s64 + 3972;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8227BDAC;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8227BDB8;
	sub_8269D1B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// b 0x8227bdd4
	goto loc_8227BDD4;
loc_8227BDD0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8227BDD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,296(r28)
	REX_STORE_U32(r28.u32 + 296, ctx.r11.u32);
	// bne cr6,0x8227bdf8
	if (!ctx.cr6.eq) goto loc_8227BDF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// addi r3,r10,-1024
	ctx.r3.s64 = ctx.r10.s64 + -1024;
	// li r5,1291
	ctx.r5.s64 = 1291;
	// bl 0x821231d0
	ctx.lr = 0x8227BDF8;
	sub_821231D0(ctx, base);
loc_8227BDF8:
	// lwz r29,296(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 296);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8227beb4
	if (ctx.cr6.eq) goto loc_8227BEB4;
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// li r3,48
	ctx.r3.s64 = 48;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8227be58
	if (!ctx.cr6.gt) goto loc_8227BE58;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// bl 0x822f6280
	ctx.lr = 0x8227BE1C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227be3c
	if (ctx.cr0.eq) goto loc_8227BE3C;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r30,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r30.u64);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// std r30,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, r30.u64);
	// b 0x8227be40
	goto loc_8227BE40;
loc_8227BE3C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8227BE40:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227beac
	if (ctx.cr6.eq) goto loc_8227BEAC;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// b 0x8227be94
	goto loc_8227BE94;
loc_8227BE58:
	// bl 0x822f6280
	ctx.lr = 0x8227BE5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227be7c
	if (ctx.cr0.eq) goto loc_8227BE7C;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r30,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r30.u64);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// std r30,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, r30.u64);
	// b 0x8227be80
	goto loc_8227BE80;
loc_8227BE7C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8227BE80:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227beac
	if (ctx.cr6.eq) goto loc_8227BEAC;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
loc_8227BE94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82264638
	ctx.lr = 0x8227BEA0;
	sub_82264638(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8228dec0
	ctx.lr = 0x8227BEAC;
	sub_8228DEC0(ctx, base);
loc_8227BEAC:
	// lwz r3,296(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 296);
	// bl 0x8228ddd0
	ctx.lr = 0x8227BEB4;
	sub_8228DDD0(ctx, base);
loc_8227BEB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8227BEBC;
	sub_8215F0F0(ctx, base);
loc_8227BEBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8228BFD0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8228C004;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8228C010;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x8228C02C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82120ac0
	ctx.lr = 0x8228C03C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82120ac0
	ctx.lr = 0x8228C04C;
	sub_82120AC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8228c08c
	if (!ctx.cr6.lt) goto loc_8228C08C;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8269d1d0
	ctx.lr = 0x8228C064;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8228C078;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8228C080;
	sub_8269D1B8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8228C08C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228c0b0
	ctx.lr = 0x8228C094;
	sub_8228C0B0(ctx, base);
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

DEFINE_REX_FUNC(sub_82290498) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,4584
	ctx.r11.s64 = ctx.r11.s64 + 4584;
	// addi r10,r10,4552
	ctx.r10.s64 = ctx.r10.s64 + 4552;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bl 0x821eced8
	ctx.lr = 0x822904CC;
	sub_821ECED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,4500
	ctx.r11.s64 = ctx.r11.s64 + 4500;
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

DEFINE_REX_FUNC(sub_82292CE8) {
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
	ctx.lr = 0x82292CF0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_82292D04:
	// add r10,r26,r25
	ctx.r10.u64 = r26.u64 + r25.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r30,r26
	r30.u64 = r26.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82292D44:
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
	// rlwinm r27,r30,4,0,27
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82292d58
	goto loc_82292D58;
loc_82292D50:
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82292D58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// bl 0x82290cb0
	ctx.lr = 0x82292D64;
	sub_82290CB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82292d50
	if (!ctx.cr0.eq) goto loc_82292D50;
	// rlwinm r27,r31,4,0,27
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82292d7c
	goto loc_82292D7C;
loc_82292D74:
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82292D7C:
	// add r4,r27,r29
	ctx.r4.u64 = r27.u64 + r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82290cb0
	ctx.lr = 0x82292D88;
	sub_82290CB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82292d74
	if (!ctx.cr0.eq) goto loc_82292D74;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bgt cr6,0x82292e0c
	if (ctx.cr6.gt) goto loc_82292E0C;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r31,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r27,8(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// ldx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// stdx r10,r11,r29
	REX_STORE_U64(ctx.r11.u32 + r29.u32, ctx.r10.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stdx r9,r11,r8
	REX_STORE_U64(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u64);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// ble cr6,0x82292d44
	if (!ctx.cr6.gt) goto loc_82292D44;
loc_82292E0C:
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(r26.s32, r31.s32, ctx.xer);
	// bge cr6,0x82292e28
	if (!ctx.cr6.lt) goto loc_82292E28;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82292ce8
	ctx.lr = 0x82292E28;
	sub_82292CE8(ctx, base);
loc_82292E28:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// bge cr6,0x82292e38
	if (!ctx.cr6.lt) goto loc_82292E38;
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x82292d04
	goto loc_82292D04;
loc_82292E38:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822A2518) {
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
	ctx.lr = 0x822A2520;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A253C:
	// lfdu f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a253c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A253C;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r26,-8
	ctx.r10.s64 = r26.s64 + -8;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A255C:
	// lfdu f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a255c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A255C;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// addi r10,r26,56
	ctx.r10.s64 = r26.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A257C:
	// lfdu f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a257c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A257C;
	// lwz r11,96(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 96);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// lis r24,-32126
	r24.s64 = -2105409536;
	// li r23,0
	r23.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,100(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 100);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// lwz r27,100(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r29,104(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 104);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x822a26d4
	if (ctx.cr6.lt) goto loc_822A26D4;
	// ble cr6,0x822a268c
	if (!ctx.cr6.gt) goto loc_822A268C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a268c
	if (!ctx.cr6.lt) goto loc_822A268C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a25f0
	if (ctx.cr6.eq) goto loc_822A25F0;
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x822c1a70
	ctx.lr = 0x822A25E8;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822a25f4
	goto loc_822A25F4;
loc_822A25F0:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822A25F4:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a2648
	if (!ctx.cr6.gt) goto loc_822A2648;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_822A260C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a2638
	if (ctx.cr6.eq) goto loc_822A2638;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A262C:
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x822a262c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A262C;
loc_822A2638:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x822a260c
	if (!ctx.cr0.eq) goto loc_822A260C;
loc_822A2648:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a2680
	if (ctx.cr6.eq) goto loc_822A2680;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a267c
	if (ctx.cr0.eq) goto loc_822A267C;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A267C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A267C:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822A2680:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r22,16(r30)
	REX_STORE_U8(r30.u32 + 16, r22.u8);
loc_822A268C:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a26d4
	if (!ctx.cr6.lt) goto loc_822A26D4;
	// rlwinm r7,r27,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r6,r27,r29
	ctx.r6.u64 = r29.u64 - r27.u64;
loc_822A269C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a26c8
	if (ctx.cr0.eq) goto loc_822A26C8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A26BC:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x822a26bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A26BC;
loc_822A26C8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// bne 0x822a269c
	if (!ctx.cr0.eq) goto loc_822A269C;
loc_822A26D4:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2780
	if (ctx.cr6.eq) goto loc_822A2780;
	// lwz r10,112(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 112);
	// ble cr6,0x822a2780
	if (!ctx.cr6.gt) goto loc_822A2780;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_822A26F0:
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A2708:
	// lfdu f0,8(r7)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r7.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822a2708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A2708;
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r7,r10,-8
	ctx.r7.s64 = ctx.r10.s64 + -8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A2730:
	// lfdu f0,8(r7)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r7.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822a2730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A2730;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,68(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// stw r8,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r8,72(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// bne 0x822a26f0
	if (!ctx.cr0.eq) goto loc_822A26F0;
loc_822A2780:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r29,108(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 108);
	// lwz r27,140(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// std r23,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r23.u64);
	// blt cr6,0x822a2890
	if (ctx.cr6.lt) goto loc_822A2890;
	// ble cr6,0x822a2854
	if (!ctx.cr6.gt) goto loc_822A2854;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a2854
	if (!ctx.cr6.lt) goto loc_822A2854;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a27c8
	if (ctx.cr6.eq) goto loc_822A27C8;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x822A27C0;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822a27cc
	goto loc_822A27CC;
loc_822A27C8:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822A27CC:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a2810
	if (!ctx.cr6.gt) goto loc_822A2810;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822A27E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a2800
	if (ctx.cr6.eq) goto loc_822A2800;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
loc_822A2800:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x822a27e0
	if (!ctx.cr0.eq) goto loc_822A27E0;
loc_822A2810:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a2848
	if (ctx.cr6.eq) goto loc_822A2848;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a2844
	if (ctx.cr0.eq) goto loc_822A2844;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A2844;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A2844:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822A2848:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r22,16(r30)
	REX_STORE_U8(r30.u32 + 16, r22.u8);
loc_822A2854:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a2890
	if (!ctx.cr6.lt) goto loc_822A2890;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r27,r29
	ctx.r9.u64 = r29.u64 - r27.u64;
loc_822A2864:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a2884
	if (ctx.cr0.eq) goto loc_822A2884;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
loc_822A2884:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x822a2864
	if (!ctx.cr0.eq) goto loc_822A2864;
loc_822A2890:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2924
	if (ctx.cr6.eq) goto loc_822A2924;
	// lwz r10,116(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 116);
	// ble cr6,0x822a2924
	if (!ctx.cr6.gt) goto loc_822A2924;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_822A28B0:
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lhz r8,18(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// lhz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r8.u16);
	// lhz r8,22(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 148);
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r8,14(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lhzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// sth r9,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, ctx.r9.u16);
	// bdnz 0x822a28b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A28B0;
loc_822A2924:
	// lwz r11,120(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 120);
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// lwz r29,124(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 124);
	// lwz r27,164(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x822a2a50
	if (ctx.cr6.lt) goto loc_822A2A50;
	// ble cr6,0x822a2a04
	if (!ctx.cr6.gt) goto loc_822A2A04;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a2a04
	if (!ctx.cr6.lt) goto loc_822A2A04;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2968
	if (ctx.cr6.eq) goto loc_822A2968;
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822c1a70
	ctx.lr = 0x822A2960;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822a296c
	goto loc_822A296C;
loc_822A2968:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822A296C:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a29c0
	if (!ctx.cr6.gt) goto loc_822A29C0;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822A2980:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a29b0
	if (ctx.cr6.eq) goto loc_822A29B0;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// std r8,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r8,24(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
loc_822A29B0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x822a2980
	if (!ctx.cr0.eq) goto loc_822A2980;
loc_822A29C0:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a29f8
	if (ctx.cr6.eq) goto loc_822A29F8;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a29f4
	if (ctx.cr0.eq) goto loc_822A29F4;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A29F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A29F4:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822A29F8:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r22,16(r30)
	REX_STORE_U8(r30.u32 + 16, r22.u8);
loc_822A2A04:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a2a50
	if (!ctx.cr6.lt) goto loc_822A2A50;
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r9,r27,r29
	ctx.r9.u64 = r29.u64 - r27.u64;
loc_822A2A14:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a2a44
	if (ctx.cr0.eq) goto loc_822A2A44;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r5,16(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// ld r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// std r5,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
loc_822A2A44:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x822a2a14
	if (!ctx.cr0.eq) goto loc_822A2A14;
loc_822A2A50:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2af4
	if (ctx.cr6.eq) goto loc_822A2AF4;
	// lwz r10,128(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 128);
	// ble cr6,0x822a2af4
	if (!ctx.cr6.gt) goto loc_822A2AF4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_822A2A70:
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r8,30(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r8.u16);
	// lhz r8,34(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 34);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// lhz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r8,26(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lhz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r8.u16);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwzu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r9,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// bdnz 0x822a2a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A2A70;
loc_822A2AF4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822CD730) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822CD738;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,19888(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19888);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r28,19888(r3)
	REX_STORE_U32(ctx.r3.u32 + 19888, r28.u32);
	// bne 0x822cd7d8
	if (!ctx.cr0.eq) goto loc_822CD7D8;
	// lwz r3,19896(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd774
	if (ctx.cr6.eq) goto loc_822CD774;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19896(r31)
	REX_STORE_U32(r31.u32 + 19896, ctx.r11.u32);
loc_822CD774:
	// lwz r3,19940(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd788
	if (ctx.cr6.eq) goto loc_822CD788;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD788;
	sub_823F0350(ctx, base);
loc_822CD788:
	// lwz r3,19920(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd79c
	if (ctx.cr6.eq) goto loc_822CD79C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD79C;
	sub_823F0350(ctx, base);
loc_822CD79C:
	// lwz r3,19908(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd7b0
	if (ctx.cr6.eq) goto loc_822CD7B0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD7B0;
	sub_823F0350(ctx, base);
loc_822CD7B0:
	// addi r30,r31,19888
	r30.s64 = r31.s64 + 19888;
	// li r29,1
	r29.s64 = 1;
loc_822CD7B8:
	// addi r30,r30,-9936
	r30.s64 = r30.s64 + -9936;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cd690
	ctx.lr = 0x822CD7C4;
	sub_822CD690(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x822cd7b8
	if (!ctx.cr0.lt) goto loc_822CD7B8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x822CD7D8;
	sub_823F0350(ctx, base);
loc_822CD7D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822D20F8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d1d28
	ctx.lr = 0x822D212C;
	sub_822D1D28(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// bl 0x822c5fd8
	ctx.lr = 0x822D21B8;
	sub_822C5FD8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r9,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822DA6D8) {
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
	ctx.lr = 0x822DA6E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822da70c
	if (!ctx.cr6.eq) goto loc_822DA70C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r6,164(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 164);
	// lwz r5,172(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// addi r4,r11,9424
	ctx.r4.s64 = ctx.r11.s64 + 9424;
	// bl 0x822da3f0
	ctx.lr = 0x822DA70C;
	sub_822DA3F0(ctx, base);
loc_822DA70C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,9552
	ctx.r4.s64 = ctx.r11.s64 + 9552;
	// bl 0x822da3f0
	ctx.lr = 0x822DA71C;
	sub_822DA3F0(ctx, base);
	// lwz r29,116(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 116);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822da778
	if (ctx.cr6.eq) goto loc_822DA778;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,9684
	r27.s64 = ctx.r11.s64 + 9684;
loc_822DA730:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822da76c
	if (!ctx.cr6.gt) goto loc_822DA76C;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_822DA744:
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzu r11,8(r31)
	ea = 8 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r6,r11,8
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFFF;
	// bl 0x822da3f0
	ctx.lr = 0x822DA75C;
	sub_822DA3F0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822da744
	if (ctx.cr6.lt) goto loc_822DA744;
loc_822DA76C:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822da730
	if (!ctx.cr6.eq) goto loc_822DA730;
loc_822DA778:
	// lwz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822da7a4
	if (!ctx.cr6.eq) goto loc_822DA7A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,9704
	ctx.r4.s64 = ctx.r11.s64 + 9704;
	// bl 0x822da3f0
	ctx.lr = 0x822DA794;
	sub_822DA3F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,9848
	ctx.r4.s64 = ctx.r11.s64 + 9848;
	// bl 0x822da3f0
	ctx.lr = 0x822DA7A4;
	sub_822DA3F0(ctx, base);
loc_822DA7A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822E0C58) {
	REX_FUNC_PROLOGUE();
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x822e0c68
	if (!ctx.cr6.lt) goto loc_822E0C68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822E0C68:
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// bne cr6,0x822e0c7c
	if (!ctx.cr6.eq) goto loc_822E0C7C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_822E0C7C:
	// cmpd cr6,r3,r4
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r4.s64, ctx.xer);
	// blt cr6,0x822e0c90
	if (ctx.cr6.lt) goto loc_822E0C90;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_822E0C90:
	// lis r11,0
	ctx.r11.s64 = 0;
	// tdllei r4,0
	if (ctx.r4.s64 == 0ll || ctx.r4.u64 < 0ull) ppc_trap(ctx, base, 0);
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mulld r10,r3,r11
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r11.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r4
	ctx.r10.s64 = (ctx.r4.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r4.s64 == -1)) ? ctx.r10.s64 / ctx.r4.s64 : 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// tdlgei r11,-1
	if (ctx.r11.s64 == -1ll || ctx.r11.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E3A28) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-318(r10)
	REX_STORE_U8(ctx.r10.u32 + -318, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E3A90) {
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
	// bl 0x826a08a0
	ctx.lr = 0x822E3AA8;
	sub_826A08A0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32728
	ctx.r11.u64 = ctx.r11.u64 | 32728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e3ac4
	if (!ctx.cr6.lt) goto loc_822E3AC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a08a0
	ctx.lr = 0x822E3AC0;
	sub_826A08A0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
loc_822E3AC4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-25732(r10)
	REX_STORE_U32(ctx.r10.u32 + -25732, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822E60A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x822e60e0
	if (ctx.cr6.eq) goto loc_822E60E0;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r7,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_822E60E0:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E7710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822E7718;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwzx r28,r29,r31
	r28.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x822e75a8
	ctx.lr = 0x822E7738;
	sub_822E75A8(ctx, base);
	// andc r28,r3,r28
	r28.u64 = ctx.r3.u64 & ~r28.u64;
	// stwx r3,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r3.u32);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e775c
	if (ctx.cr0.eq) goto loc_822E775C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26824
	ctx.r4.s64 = ctx.r11.s64 + -26824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E775C;
	sub_822E7908(ctx, base);
loc_822E775C:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7778
	if (ctx.cr0.eq) goto loc_822E7778;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7778;
	sub_822E7908(ctx, base);
loc_822E7778:
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7794
	if (ctx.cr0.eq) goto loc_822E7794;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26808
	ctx.r4.s64 = ctx.r11.s64 + -26808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7794;
	sub_822E7908(ctx, base);
loc_822E7794:
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e77b0
	if (ctx.cr0.eq) goto loc_822E77B0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26800
	ctx.r4.s64 = ctx.r11.s64 + -26800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E77B0;
	sub_822E7908(ctx, base);
loc_822E77B0:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e77cc
	if (ctx.cr0.eq) goto loc_822E77CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26792
	ctx.r4.s64 = ctx.r11.s64 + -26792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E77CC;
	sub_822E7908(ctx, base);
loc_822E77CC:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e77e8
	if (ctx.cr0.eq) goto loc_822E77E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26780
	ctx.r4.s64 = ctx.r11.s64 + -26780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E77E8;
	sub_822E7908(ctx, base);
loc_822E77E8:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7804
	if (ctx.cr0.eq) goto loc_822E7804;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26772
	ctx.r4.s64 = ctx.r11.s64 + -26772;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7804;
	sub_822E7908(ctx, base);
loc_822E7804:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7820
	if (ctx.cr0.eq) goto loc_822E7820;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26764
	ctx.r4.s64 = ctx.r11.s64 + -26764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7820;
	sub_822E7908(ctx, base);
loc_822E7820:
	// rlwinm. r11,r28,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e783c
	if (ctx.cr0.eq) goto loc_822E783C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26756
	ctx.r4.s64 = ctx.r11.s64 + -26756;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E783C;
	sub_822E7908(ctx, base);
loc_822E783C:
	// rlwinm. r11,r28,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7858
	if (ctx.cr0.eq) goto loc_822E7858;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26748
	ctx.r4.s64 = ctx.r11.s64 + -26748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7858;
	sub_822E7908(ctx, base);
loc_822E7858:
	// rlwinm. r11,r28,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7874
	if (ctx.cr0.eq) goto loc_822E7874;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26736
	ctx.r4.s64 = ctx.r11.s64 + -26736;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7874;
	sub_822E7908(ctx, base);
loc_822E7874:
	// rlwinm. r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7890
	if (ctx.cr0.eq) goto loc_822E7890;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26720
	ctx.r4.s64 = ctx.r11.s64 + -26720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7890;
	sub_822E7908(ctx, base);
loc_822E7890:
	// rlwinm. r11,r28,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e78ac
	if (ctx.cr0.eq) goto loc_822E78AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26704
	ctx.r4.s64 = ctx.r11.s64 + -26704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E78AC;
	sub_822E7908(ctx, base);
loc_822E78AC:
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e78c8
	if (ctx.cr0.eq) goto loc_822E78C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26688
	ctx.r4.s64 = ctx.r11.s64 + -26688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E78C8;
	sub_822E7908(ctx, base);
loc_822E78C8:
	// rlwinm. r11,r28,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e78e4
	if (ctx.cr0.eq) goto loc_822E78E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26668
	ctx.r4.s64 = ctx.r11.s64 + -26668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E78E4;
	sub_822E7908(ctx, base);
loc_822E78E4:
	// rlwinm. r11,r28,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7900
	if (ctx.cr0.eq) goto loc_822E7900;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26652
	ctx.r4.s64 = ctx.r11.s64 + -26652;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7908
	ctx.lr = 0x822E7900;
	sub_822E7908(ctx, base);
loc_822E7900:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F6440) {
	REX_FUNC_PROLOGUE();
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F64A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,532
	ctx.r3.s64 = ctx.r11.s64 + 532;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F6578) {
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
	// bl 0x82130e88
	ctx.lr = 0x822F6594;
	sub_82130E88(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x822F659C;
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

DEFINE_REX_FUNC(sub_822F6EBC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822f6700
	ctx.lr = 0x822F6ED4;
	sub_822F6700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F77D8) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f7864
	if (!ctx.cr6.eq) goto loc_822F7864;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f780c
	if (ctx.cr6.eq) goto loc_822F780C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f7810
	goto loc_822F7810;
loc_822F780C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F7810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7864
	if (ctx.cr6.eq) goto loc_822F7864;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F782C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f7868
	if (!ctx.cr0.eq) goto loc_822F7868;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7848
	if (ctx.cr6.eq) goto loc_822F7848;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f784c
	goto loc_822F784C;
loc_822F7848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F784C:
	// bl 0x82330040
	ctx.lr = 0x822F7850;
	sub_82330040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f7868
	if (!ctx.cr0.eq) goto loc_822F7868;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_822F7864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F7868:
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

DEFINE_REX_FUNC(sub_822FBB40) {
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
	ctx.lr = 0x822FBB48;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822fbb70
	if (ctx.cr6.eq) goto loc_822FBB70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_822FBB70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332540
	ctx.lr = 0x822FBB78;
	sub_82332540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBB90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbbf0
	if (!ctx.cr0.eq) goto loc_822FBBF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBBB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbbf0
	if (!ctx.cr0.eq) goto loc_822FBBF0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822fbbd0
	if (ctx.cr6.eq) goto loc_822FBBD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822FBBD0;
	sub_826A1E70(ctx, base);
loc_822FBBD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fbbec
	if (ctx.cr6.eq) goto loc_822FBBEC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332188
	ctx.lr = 0x822FBBE8;
	sub_82332188(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_822FBBEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FBBF0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822FF968) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ff9b8
	if (ctx.cr6.eq) goto loc_822FF9B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x822ff980
	if (!ctx.cr6.eq) goto loc_822FF980;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822FF980:
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822ff9a8
	goto loc_822FF9A8;
loc_822FF998:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822ff9b4
	if (ctx.cr6.eq) goto loc_822FF9B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822FF9A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ff998
	if (!ctx.cr6.eq) goto loc_822FF998;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_822FF9B4:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_822FF9B8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822ff9cc
	if (ctx.cr6.eq) goto loc_822FF9CC;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_822FF9CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82301590) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r31,r3,112
	r31.s64 = ctx.r3.s64 + 112;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x823015d8
	if (ctx.cr6.eq) goto loc_823015D8;
loc_823015B4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823015CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x823015b4
	if (!ctx.cr6.eq) goto loc_823015B4;
loc_823015D8:
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

DEFINE_REX_FUNC(sub_82303598) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x823035A0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x823035c0
	if (!ctx.cr6.lt) goto loc_823035C0;
loc_823035B8:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8230399c
	goto loc_8230399C;
loc_823035C0:
	// lwz r11,148(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823035d4
	if (!ctx.cr6.eq) goto loc_823035D4;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x8230399c
	goto loc_8230399C;
loc_823035D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823035b8
	if (ctx.cr6.eq) goto loc_823035B8;
	// lwz r11,136(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 136);
	// addi r31,r18,136
	r31.s64 = r18.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r11,-4
	r24.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823035f4
	if (!ctx.cr6.eq) goto loc_823035F4;
loc_823035F0:
	// li r24,0
	r24.s64 = 0;
loc_823035F4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
	// bne cr6,0x82303604
	if (!ctx.cr6.eq) goto loc_82303604;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82303604:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82303998
	if (ctx.cr6.eq) goto loc_82303998;
	// addi r20,r24,17
	r20.s64 = r24.s64 + 17;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82331668
	ctx.lr = 0x8230361C;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303630
	if (!ctx.cr0.eq) goto loc_82303630;
	// lwz r11,280(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 280);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82303644
	if (ctx.cr6.eq) goto loc_82303644;
loc_82303630:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823035f0
	if (ctx.cr6.eq) goto loc_823035F0;
	// addi r24,r11,-4
	r24.s64 = ctx.r11.s64 + -4;
	// b 0x823035f4
	goto loc_823035F4;
loc_82303644:
	// lwz r11,60(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 60);
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82303920
	if (!ctx.cr6.gt) goto loc_82303920;
	// li r21,0
	r21.s64 = 0;
loc_82303658:
	// lwz r11,68(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 68);
	// lwzx r28,r21,r11
	r28.u64 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8230390c
	if (ctx.cr6.eq) goto loc_8230390C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822fcb30
	ctx.lr = 0x82303670;
	sub_822FCB30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230390c
	if (ctx.cr0.eq) goto loc_8230390C;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230390c
	if (!ctx.cr6.gt) goto loc_8230390C;
	// li r23,0
	r23.s64 = 0;
loc_82303690:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r31,0
	r31.s64 = 0;
	// lwzx r26,r11,r23
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230c818
	ctx.lr = 0x823036A8;
	sub_8230C818(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823036e4
	if (!ctx.cr0.eq) goto loc_823036E4;
	// lwz r4,32(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823036e8
	if (ctx.cr6.eq) goto loc_823036E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331480
	ctx.lr = 0x823036C4;
	sub_82331480(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823314c8
	ctx.lr = 0x823036D0;
	sub_823314C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230c818
	ctx.lr = 0x823036DC;
	sub_8230C818(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823036e8
	if (ctx.cr0.eq) goto loc_823036E8;
loc_823036E4:
	// li r31,1
	r31.s64 = 1;
loc_823036E8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823038f4
	if (ctx.cr0.eq) goto loc_823038F4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7a88
	ctx.lr = 0x823036F8;
	sub_822F7A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303710
	if (ctx.cr0.eq) goto loc_82303710;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r25,56(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82303714
	goto loc_82303714;
loc_82303710:
	// li r25,0
	r25.s64 = 0;
loc_82303714:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82303724
	if (ctx.cr6.eq) goto loc_82303724;
	// lwz r27,8(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 8);
	// b 0x8230372c
	goto loc_8230372C;
loc_82303724:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8230372C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8230373c
	if (ctx.cr6.eq) goto loc_8230373C;
	// lwz r31,16(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 16);
	// b 0x82303744
	goto loc_82303744;
loc_8230373C:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82303744:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230c800
	ctx.lr = 0x8230374C;
	sub_8230C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82303814
	if (ctx.cr0.eq) goto loc_82303814;
	// li r30,0
	r30.s64 = 0;
	// ble cr6,0x823037d4
	if (!ctx.cr6.gt) goto loc_823037D4;
loc_82303760:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823037a0
	if (ctx.cr6.eq) goto loc_823037A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823037c4
	if (ctx.cr6.eq) goto loc_823037C4;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303788
	if (ctx.cr6.eq) goto loc_82303788;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8230378c
	goto loc_8230378C;
loc_82303788:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8230378C:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x823037c4
	if (!ctx.cr6.eq) goto loc_823037C4;
	// lhz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823037c4
	if (ctx.cr0.eq) goto loc_823037C4;
loc_823037A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823037c4
	if (ctx.cr6.eq) goto loc_823037C4;
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823037BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230399c
	if (!ctx.cr0.eq) goto loc_8230399C;
loc_823037C4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// blt cr6,0x82303760
	if (ctx.cr6.lt) goto loc_82303760;
loc_823037D4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230dcf8
	ctx.lr = 0x823037E0;
	sub_8230DCF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230399c
	if (!ctx.cr0.eq) goto loc_8230399C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230d308
	ctx.lr = 0x823037F8;
	sub_8230D308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230399c
	if (!ctx.cr0.eq) goto loc_8230399C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7960
	ctx.lr = 0x82303810;
	sub_822F7960(ctx, base);
	// b 0x823038f4
	goto loc_823038F4;
loc_82303814:
	// li r29,0
	r29.s64 = 0;
	// ble cr6,0x823038f4
	if (!ctx.cr6.gt) goto loc_823038F4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82303820:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82303860
	if (ctx.cr6.eq) goto loc_82303860;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823038e4
	if (ctx.cr6.eq) goto loc_823038E4;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303848
	if (ctx.cr6.eq) goto loc_82303848;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8230384c
	goto loc_8230384C;
loc_82303848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230384C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x823038e4
	if (!ctx.cr6.eq) goto loc_823038E4;
	// lhz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823038e4
	if (ctx.cr0.eq) goto loc_823038E4;
loc_82303860:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823038e4
	if (ctx.cr6.eq) goto loc_823038E4;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230387C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230399c
	if (!ctx.cr0.eq) goto loc_8230399C;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823038e4
	if (ctx.cr0.eq) goto loc_823038E4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f78f8
	ctx.lr = 0x8230389C;
	sub_822F78F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823038e4
	if (ctx.cr0.eq) goto loc_823038E4;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8230da08
	ctx.lr = 0x823038CC;
	sub_8230DA08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303988
	if (!ctx.cr0.eq) goto loc_82303988;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7960
	ctx.lr = 0x823038E4;
	sub_822F7960(ctx, base);
loc_823038E4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82303820
	if (ctx.cr6.lt) goto loc_82303820;
loc_823038F4:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82303690
	if (ctx.cr6.lt) goto loc_82303690;
loc_8230390C:
	// lwz r11,60(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 60);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82303658
	if (ctx.cr6.lt) goto loc_82303658;
loc_82303920:
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r3,-32129
	ctx.r3.s64 = -2105606144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,4384
	ctx.r5.s64 = ctx.r6.s64 + 4384;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// li r6,4197
	ctx.r6.s64 = 4197;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
	// stw r11,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r11.u32);
	// stw r8,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r8.u32);
	// lwz r11,276(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 276);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,1012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82303980;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230399c
	goto loc_8230399C;
loc_82303988:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x8230399c
	goto loc_8230399C;
loc_82303998:
	// li r3,23
	ctx.r3.s64 = 23;
loc_8230399C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823241D0) {
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
	ctx.lr = 0x823241D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// b 0x82324224
	goto loc_82324224;
loc_823241F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// bne cr6,0x82324200
	if (!ctx.cr6.eq) goto loc_82324200;
	// li r29,0
	r29.s64 = 0;
loc_82324200:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324220
	if (ctx.cr6.eq) goto loc_82324220;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82331668
	ctx.lr = 0x82324218;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82324238
	if (ctx.cr0.eq) goto loc_82324238;
loc_82324220:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82324224:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823241f0
	if (!ctx.cr6.eq) goto loc_823241F0;
	// li r3,91
	ctx.r3.s64 = 91;
loc_82324230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82324238:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// bl 0x82304040
	ctx.lr = 0x82324248;
	sub_82304040(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// li r11,36
	ctx.r11.s64 = 36;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82324230
	goto loc_82324230;
}

DEFINE_REX_FUNC(sub_82328FA8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82329008
	if (!ctx.cr6.lt) goto loc_82329008;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,-8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// blr 
	return;
loc_82329008:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B160) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,8160
	ctx.r10.s64 = ctx.r10.s64 + 8160;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232C9D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232C9D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,68
	ctx.r6.s64 = 68;
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x8232C9F8;
	sub_82331A00(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232ca1c
	if (ctx.cr6.eq) goto loc_8232CA1C;
	// bl 0x82331458
	ctx.lr = 0x8232CA08;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x8232CA1C;
	sub_82331A00(ctx, base);
loc_8232CA1C:
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// lwz r31,48(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x8232ca58
	goto loc_8232CA58;
loc_8232CA28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8232ca38
	if (!ctx.cr6.eq) goto loc_8232CA38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232CA38:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ca64
	if (!ctx.cr0.eq) goto loc_8232CA64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8232CA58:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8232ca28
	if (!ctx.cr6.eq) goto loc_8232CA28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232CA64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8232F810) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232F818;
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
	ctx.lr = 0x8232F830;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f84c
	if (!ctx.cr6.eq) goto loc_8232F84C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82338ae0
	ctx.lr = 0x8232F84C;
	sub_82338AE0(ctx, base);
loc_8232F84C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82330658) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82330668
	if (!ctx.cr6.eq) goto loc_82330668;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82330668:
	// b 0x8233f968
	sub_8233F968(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82331180) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82330a38
	sub_82330A38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82332580) {
	REX_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82332680) {
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
	// bl 0x82341280
	ctx.lr = 0x82332698;
	sub_82341280(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8700
	ctx.r9.s64 = ctx.r10.s64 + 8700;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82338C70) {
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
	ctx.lr = 0x82338C78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,22(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 22);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82338cac
	if (!ctx.cr6.eq) goto loc_82338CAC;
	// bl 0x82338328
	ctx.lr = 0x82338CA4;
	sub_82338328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82338de8
	if (!ctx.cr6.eq) goto loc_82338DE8;
loc_82338CAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82356988
	ctx.lr = 0x82338CBC;
	sub_82356988(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82338d14
	if (!ctx.cr6.eq) goto loc_82338D14;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82338ce4
	if (ctx.cr6.eq) goto loc_82338CE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823314a0
	ctx.lr = 0x82338CE4;
	sub_823314A0(ctx, base);
loc_82338CE4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82338cf8
	if (ctx.cr6.eq) goto loc_82338CF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82338CF8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82338de4
	if (ctx.cr6.eq) goto loc_82338DE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_82338D14:
	// cmpwi cr6,r28,68
	ctx.cr6.compare<int32_t>(r28.s32, 68, ctx.xer);
	// bne cr6,0x82338de4
	if (!ctx.cr6.eq) goto loc_82338DE4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82356898
	ctx.lr = 0x82338D2C;
	sub_82356898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82338d84
	if (!ctx.cr6.eq) goto loc_82338D84;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82338d54
	if (ctx.cr6.eq) goto loc_82338D54;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823314a0
	ctx.lr = 0x82338D54;
	sub_823314A0(ctx, base);
loc_82338D54:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82338d68
	if (ctx.cr6.eq) goto loc_82338D68;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82338D68:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82338de4
	if (ctx.cr6.eq) goto loc_82338DE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_82338D84:
	// cmpwi cr6,r28,68
	ctx.cr6.compare<int32_t>(r28.s32, 68, ctx.xer);
	// bne cr6,0x82338de4
	if (!ctx.cr6.eq) goto loc_82338DE4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82356910
	ctx.lr = 0x82338D9C;
	sub_82356910(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82338de4
	if (!ctx.cr6.eq) goto loc_82338DE4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82338dc0
	if (ctx.cr6.eq) goto loc_82338DC0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823314a0
	ctx.lr = 0x82338DC0;
	sub_823314A0(ctx, base);
loc_82338DC0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82338dd4
	if (ctx.cr6.eq) goto loc_82338DD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82338DD4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82338de4
	if (ctx.cr6.eq) goto loc_82338DE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82338DE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82338DE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82348CA0) {
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
	ctx.lr = 0x82348CA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82348cd4
	if (!ctx.cr6.eq) goto loc_82348CD4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_82348CD4:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82348cf8
	if (!ctx.cr6.eq) goto loc_82348CF8;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82348cf8
	if (ctx.cr6.eq) goto loc_82348CF8;
loc_82348CEC:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_82348CF8:
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82348cec
	if (ctx.cr6.eq) goto loc_82348CEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1740
	ctx.r3.s64 = ctx.r11.s64 + 1740;
	// bl 0x8235d5e0
	ctx.lr = 0x82348D18;
	sub_8235D5E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82348e20
	if (!ctx.cr6.eq) goto loc_82348E20;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82348d38
	if (ctx.cr6.eq) goto loc_82348D38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a6a80
	ctx.lr = 0x82348D34;
	sub_823A6A80(ctx, base);
	// b 0x82348d3c
	goto loc_82348D3C;
loc_82348D38:
	// bl 0x823a4908
	ctx.lr = 0x82348D3C;
	sub_823A4908(ctx, base);
loc_82348D3C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e7e0
	ctx.lr = 0x82348D48;
	sub_8233E7E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r3,20848
	ctx.r11.s64 = ctx.r3.s64 + 20848;
	// lwz r10,20848(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20848);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82348d70
	if (!ctx.cr6.eq) goto loc_82348D70;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82348d74
	if (ctx.cr6.eq) goto loc_82348D74;
loc_82348D70:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82348D74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348d88
	if (ctx.cr6.eq) goto loc_82348D88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82334ca0
	ctx.lr = 0x82348D88;
	sub_82334CA0(ctx, base);
loc_82348D88:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,20848(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20848);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,20816
	ctx.r10.s64 = ctx.r10.s64 + 20816;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82348dfc
	if (ctx.cr6.eq) goto loc_82348DFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82348e00
	goto loc_82348E00;
loc_82348DFC:
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
loc_82348E00:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e820
	ctx.lr = 0x82348E0C;
	sub_8233E820(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82348e1c
	if (ctx.cr6.eq) goto loc_82348E1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82348E1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82348E20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82351DC0) {
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
	ctx.lr = 0x82351DC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351e34
	if (ctx.cr6.eq) goto loc_82351E34;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82351e34
	if (ctx.cr6.eq) goto loc_82351E34;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x82351e00
	if (!ctx.cr6.eq) goto loc_82351E00;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82351E00:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82351e34
	if (ctx.cr6.eq) goto loc_82351E34;
loc_82351E08:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351e1c
	if (!ctx.cr6.eq) goto loc_82351E1C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82351E1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82351dc0
	ctx.lr = 0x82351E24;
	sub_82351DC0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82351e08
	if (!ctx.cr6.eq) goto loc_82351E08;
loc_82351E34:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,21816(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351e7c
	if (ctx.cr6.eq) goto loc_82351E7C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82351e7c
	if (ctx.cr6.eq) goto loc_82351E7C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82351e7c
	if (ctx.cr6.eq) goto loc_82351E7C;
loc_82351E5C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,21816(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 21816);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8234ea18
	ctx.lr = 0x82351E70;
	sub_8234EA18(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x82351e5c
	if (!ctx.cr6.eq) goto loc_82351E5C;
loc_82351E7C:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351f00
	if (ctx.cr6.eq) goto loc_82351F00;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351ee0
	if (ctx.cr6.eq) goto loc_82351EE0;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82351ee0
	if (ctx.cr6.eq) goto loc_82351EE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82351EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351f04
	if (ctx.cr6.eq) goto loc_82351F04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82351ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// b 0x82351f04
	goto loc_82351F04;
loc_82351EE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351f00
	if (ctx.cr6.eq) goto loc_82351F00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82351EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
loc_82351F00:
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
loc_82351F04:
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,9776
	r28.s64 = ctx.r11.s64 + 9776;
	// beq cr6,0x82351f34
	if (ctx.cr6.eq) goto loc_82351F34;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82351F34;
	sub_82330D00(ctx, base);
loc_82351F34:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351fd0
	if (ctx.cr6.eq) goto loc_82351FD0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351f54
	if (!ctx.cr6.eq) goto loc_82351F54;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82351F54:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82334300
	ctx.lr = 0x82351F60;
	sub_82334300(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351fb4
	if (ctx.cr6.eq) goto loc_82351FB4;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82351fb4
	if (ctx.cr6.eq) goto loc_82351FB4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82351fb4
	if (ctx.cr6.eq) goto loc_82351FB4;
	// b 0x82351f88
	goto loc_82351F88;
loc_82351F84:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82351F88:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351f9c
	if (!ctx.cr6.eq) goto loc_82351F9C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82351F9C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82351be0
	ctx.lr = 0x82351FA4;
	sub_82351BE0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82351f84
	if (!ctx.cr6.eq) goto loc_82351F84;
loc_82351FB4:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r6,177
	ctx.r6.s64 = 177;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82351FD0;
	sub_82330D00(ctx, base);
loc_82351FD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,1176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1176);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82351fe8
	if (!ctx.cr6.eq) goto loc_82351FE8;
	// stw r26,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r26.u32);
loc_82351FE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,187
	ctx.r6.s64 = 187;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235202C;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823608F8) {
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
	ctx.lr = 0x82360900;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823609ac
	if (ctx.cr6.eq) goto loc_823609AC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82331a00
	ctx.lr = 0x82360934;
	sub_82331A00(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r8,22056(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 22056);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// lwz r28,1200(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 1200);
	// bne cr6,0x8236094c
	if (!ctx.cr6.eq) goto loc_8236094C;
	// li r28,6
	r28.s64 = 6;
loc_8236094C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823609ac
	if (!ctx.cr6.gt) goto loc_823609AC;
	// li r30,0
	r30.s64 = 0;
loc_82360964:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82360994
	if (ctx.cr6.eq) goto loc_82360994;
	// lwz r11,1196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82331a00
	ctx.lr = 0x82360994;
	sub_82331A00(ctx, base);
loc_82360994:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82360964
	if (ctx.cr6.lt) goto loc_82360964;
loc_823609AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82365D10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82365d20
	if (!ctx.cr6.eq) goto loc_82365D20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365D20:
	// b 0x823658d8
	sub_823658D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82367398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823673A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	r29.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r29,16428
	r29.s64 = r29.s64 + 16428;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82367400
	if (!ctx.cr6.gt) goto loc_82367400;
	// bl 0x823669c0
	ctx.lr = 0x823673C8;
	sub_823669C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82367400
	if (!ctx.cr6.gt) goto loc_82367400;
	// li r31,32
	r31.s64 = 32;
loc_823673E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82366cf8
	ctx.lr = 0x823673E8;
	sub_82366CF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823673e0
	if (ctx.cr6.lt) goto loc_823673E0;
loc_82367400:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823674e4
	if (!ctx.cr6.eq) goto loc_823674E4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82367548
	if (!ctx.cr6.gt) goto loc_82367548;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
loc_82367454:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f6,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f2,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fsubs f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fadds f10,f5,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fsubs f8,f3,f1
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fadds f6,f1,f3
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fsubs f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfsu f3,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfsu f2,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f5,4(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsu f8,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsu f6,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82367454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367454;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823674E4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82367548
	if (!ctx.cr6.gt) goto loc_82367548;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236750C:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfsu f5,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f6,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8236750c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236750C;
loc_82367548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8237CDC0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ca4
	ctx.lr = 0x8237CDD4;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,564(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f8,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f8.f64 = double(temp.f32);
	// fmr f27,f8
	f27.f64 = ctx.f8.f64;
	// beq cr6,0x8237cff0
	if (ctx.cr6.eq) goto loc_8237CFF0;
	// lbz r9,608(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 608);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237cec4
	if (ctx.cr6.eq) goto loc_8237CEC4;
	// lwz r11,624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lbz r10,684(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 684);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237cec4
	if (!ctx.cr6.eq) goto loc_8237CEC4;
	// lwz r10,548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8237cec4
	if (ctx.cr6.eq) goto loc_8237CEC4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,512(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8237ce5c
	if (!ctx.cr6.gt) goto loc_8237CE5C;
	// lfs f13,552(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8237ce5c
	if (ctx.cr6.gt) goto loc_8237CE5C;
	// lfs f12,516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,520(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmadds f13,f9,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// b 0x8237ce60
	goto loc_8237CE60;
loc_8237CE5C:
	// lfs f13,516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
loc_8237CE60:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8237ce78
	if (!ctx.cr6.eq) goto loc_8237CE78;
	// lfs f0,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8237ce78
	if (!ctx.cr6.lt) goto loc_8237CE78;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8237CE78:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,536
	ctx.r11.s64 = r31.s64 + 536;
	// stw r10,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r10.u32);
	// lfs f12,544(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 540);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// beq cr6,0x8237cec0
	if (ctx.cr6.eq) goto loc_8237CEC0;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// beq cr6,0x8237cec0
	if (ctx.cr6.eq) goto loc_8237CEC0;
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fdivs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fdivs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// stfs f6,552(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 552, temp.u32);
	// b 0x8237cec4
	goto loc_8237CEC4;
loc_8237CEC0:
	// stfs f8,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 552, temp.u32);
loc_8237CEC4:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lfs f0,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lfs f13,512(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8237cf78
	if (ctx.cr6.lt) goto loc_8237CF78;
loc_8237CEE8:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8237cf78
	if (!ctx.cr6.lt) goto loc_8237CF78;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237cf20
	if (!ctx.cr6.eq) goto loc_8237CF20;
	// lfs f0,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8237cf20
	if (!ctx.cr6.gt) goto loc_8237CF20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237cf70
	if (ctx.cr6.eq) goto loc_8237CF70;
	// lwz r10,624(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lbz r8,684(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 684);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237cf70
	if (!ctx.cr6.eq) goto loc_8237CF70;
loc_8237CF20:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,512(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,552(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 552, temp.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r8.u32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lfs f10,512(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 512);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x8237cee8
	if (!ctx.cr6.lt) goto loc_8237CEE8;
	// b 0x8237cf78
	goto loc_8237CF78;
loc_8237CF70:
	// lfs f0,524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 552, temp.u32);
loc_8237CF78:
	// lwz r10,548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8237cf94
	if (ctx.cr6.lt) goto loc_8237CF94;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f27,f8
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f8.f64;
	// stb r11,564(r31)
	REX_STORE_U8(r31.u32 + 564, ctx.r11.u8);
	// b 0x8237cff0
	goto loc_8237CFF0;
loc_8237CF94:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8237cfcc
	if (!ctx.cr6.gt) goto loc_8237CFCC;
	// lfs f13,516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,520(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,552(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 552);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmadds f0,f9,f10,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f13.f64)));
	// b 0x8237cfd0
	goto loc_8237CFD0;
loc_8237CFCC:
	// lfs f0,516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
loc_8237CFD0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8237cfe8
	if (!ctx.cr6.eq) goto loc_8237CFE8;
	// lfs f13,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8237cfe8
	if (!ctx.cr6.lt) goto loc_8237CFE8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8237CFE8:
	// lfs f13,560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8237CFF0:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r5,576(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 576);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r3,577(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 577);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r4,580(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 580);
	// lwz r9,612(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 612);
	// lwz r7,676(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 676);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lwz r5,680(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 680);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfs f11,9768(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9768);
	ctx.f11.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f12,19088(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19088);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// lfs f0,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// lfs f13,444(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// lfs f10,3820(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3820);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lfs f9,15200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15200);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f11,f7,f3
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f30,f2,f10
	f30.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f29,f12,f1
	f29.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f28,f11,f9
	f28.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// blt cr6,0x8237d0f0
	if (ctx.cr6.lt) goto loc_8237D0F0;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19076);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x826a14e0
	ctx.lr = 0x8237D0E0;
	sub_826A14E0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,600(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 600);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// b 0x8237d0f4
	goto loc_8237D0F4;
loc_8237D0F0:
	// fmr f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f8.f64;
loc_8237D0F4:
	// fadds f12,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 + f28.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19056);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,8312(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + f29.f64));
	// fadds f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 + f27.f64));
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - f30.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x8269f778
	ctx.lr = 0x8237D120;
	sub_8269F778(ctx, base);
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8237D148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// fmuls f1,f7,f31
	ctx.f1.f64 = double(float(ctx.f7.f64 * f31.f64));
	// bl 0x8234e480
	ctx.lr = 0x8237D158;
	sub_8234E480(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2cf0
	ctx.lr = 0x8237D168;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A4020) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a4030
	if (!ctx.cr6.eq) goto loc_823A4030;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A4030:
	// b 0x823a3e68
	sub_823A3E68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A56B8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x823a5710
	if (ctx.cr6.eq) goto loc_823A5710;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823a5710
	if (!ctx.cr6.gt) goto loc_823A5710;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
loc_823A56D0:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x823a5700
	if (!ctx.cr6.gt) goto loc_823A5700;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_823A56E4:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823a5718
	if (!ctx.cr6.eq) goto loc_823A5718;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823a56e4
	if (ctx.cr6.lt) goto loc_823A56E4;
loc_823A5700:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823a56d0
	if (ctx.cr6.lt) goto loc_823A56D0;
loc_823A5710:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A5718:
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A9598) {
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
	ctx.lr = 0x823A95A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r25,0
	r25.s64 = 0;
	// lwz r28,192(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823a96d8
	if (ctx.cr6.gt) goto loc_823A96D8;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27160
	ctx.r12.s64 = ctx.r12.s64 + -27160;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A9668;
	case 1:
		goto loc_823A9618;
	case 2:
		goto loc_823A962C;
	case 3:
		goto loc_823A9640;
	case 4:
		goto loc_823A9654;
	case 5:
		goto loc_823A9654;
	case 6:
		goto loc_823A9668;
	case 7:
		goto loc_823A9668;
	case 8:
		goto loc_823A9668;
	case 9:
		goto loc_823A9668;
	case 10:
		goto loc_823A9668;
	case 11:
		goto loc_823A9668;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A9618:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A962C:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A9640:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A9654:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A9668:
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27008
	ctx.r12.s64 = ctx.r12.s64 + -27008;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A96D0;
	case 1:
		goto loc_823A96D8;
	case 2:
		goto loc_823A96D8;
	case 3:
		goto loc_823A96D8;
	case 4:
		goto loc_823A96D8;
	case 5:
		goto loc_823A96D8;
	case 6:
		goto loc_823A96B0;
	case 7:
		goto loc_823A96B8;
	case 8:
		goto loc_823A96C0;
	case 9:
		goto loc_823A96C8;
	case 10:
		goto loc_823A96C8;
	case 11:
		goto loc_823A96C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A96B0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A96B8:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A96C0:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823a96d4
	goto loc_823A96D4;
loc_823A96C8:
	// li r27,1
	r27.s64 = 1;
	// b 0x823a96d8
	goto loc_823A96D8;
loc_823A96D0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_823A96D4:
	// mullw r27,r10,r11
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_823A96D8:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a9704
	if (ctx.cr6.eq) goto loc_823A9704;
	// mullw r5,r27,r29
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823A96F8;
	sub_823EF5F0(ctx, base);
loc_823A96F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A96FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A9704:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r23,-1
	r23.s64 = -1;
	// lwz r10,900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 900);
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a9728
	if (!ctx.cr6.gt) goto loc_823A9728;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823a9734
	if (!ctx.cr6.eq) goto loc_823A9734;
loc_823A9728:
	// lwz r10,896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 896);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823a9804
	if (ctx.cr6.eq) goto loc_823A9804;
loc_823A9734:
	// lwz r30,896(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 896);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// bne cr6,0x823a9744
	if (!ctx.cr6.eq) goto loc_823A9744;
	// lwz r30,48(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_823A9744:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823a97c0
	if (ctx.cr6.eq) goto loc_823A97C0;
	// stw r25,912(r31)
	REX_STORE_U32(r31.u32 + 912, r25.u32);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r10,160(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 160);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bge cr6,0x823a979c
	if (!ctx.cr6.lt) goto loc_823A979C;
loc_823A9764:
	// lwz r9,912(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 912);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,912(r31)
	REX_STORE_U32(r31.u32 + 912, ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// blt cr6,0x823a9764
	if (ctx.cr6.lt) goto loc_823A9764;
loc_823A979C:
	// lwz r9,912(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 912);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x823a92f8
	ctx.lr = 0x823A97B8;
	sub_823A92F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a96fc
	if (!ctx.cr6.eq) goto loc_823A96FC;
loc_823A97C0:
	// lwz r11,896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 896);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823a97d4
	if (!ctx.cr6.eq) goto loc_823A97D4;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_823A97D4:
	// stw r11,892(r31)
	REX_STORE_U32(r31.u32 + 892, ctx.r11.u32);
	// lwz r3,1216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// bl 0x82332598
	ctx.lr = 0x823A97E0;
	sub_82332598(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,1216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239dfd8
	ctx.lr = 0x823A97F4;
	sub_8239DFD8(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r23,896(r31)
	REX_STORE_U32(r31.u32 + 896, r23.u32);
	// stw r10,900(r31)
	REX_STORE_U32(r31.u32 + 900, ctx.r10.u32);
loc_823A9804:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// blt cr6,0x823a983c
	if (ctx.cr6.lt) goto loc_823A983C;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,904(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 904);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823a983c
	if (!ctx.cr6.gt) goto loc_823A983C;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r10,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r10.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r8,400(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// stw r7,904(r31)
	REX_STORE_U32(r31.u32 + 904, ctx.r7.u32);
loc_823A983C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823a96f8
	if (ctx.cr6.eq) goto loc_823A96F8;
loc_823A9844:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a9878
	if (ctx.cr6.eq) goto loc_823A9878;
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a9878
	if (ctx.cr6.eq) goto loc_823A9878;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// b 0x823a989c
	goto loc_823A989C;
loc_823A9878:
	// lwz r11,1216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a9898
	if (ctx.cr6.eq) goto loc_823A9898;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// b 0x823a989c
	goto loc_823A989C;
loc_823A9898:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823A989C:
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 892);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x823a98b4
	if (!ctx.cr6.gt) goto loc_823A98B4;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x823a98c8
	goto loc_823A98C8;
loc_823A98B4:
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// ble cr6,0x823a98c8
	if (!ctx.cr6.gt) goto loc_823A98C8;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_823A98C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,1216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// mullw r5,r10,r27
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239e890
	ctx.lr = 0x823A98DC;
	sub_8239E890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a98ec
	if (ctx.cr6.eq) goto loc_823A98EC;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x823a96fc
	if (!ctx.cr6.eq) goto loc_823A96FC;
loc_823A98EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,892(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 892);
	// divwu r11,r11,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// stw r9,892(r31)
	REX_STORE_U32(r31.u32 + 892, ctx.r9.u32);
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// ble cr6,0x823a9924
	if (!ctx.cr6.gt) goto loc_823A9924;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_823A9924:
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823a9938
	if (!ctx.cr6.eq) goto loc_823A9938;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a994c
	if (ctx.cr6.eq) goto loc_823A994C;
loc_823A9938:
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x823a994c
	if (ctx.cr6.eq) goto loc_823A994C;
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 892);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x823a9acc
	if (!ctx.cr6.gt) goto loc_823A9ACC;
loc_823A994C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a99fc
	if (!ctx.cr6.eq) goto loc_823A99FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823a99fc
	if (ctx.cr6.eq) goto loc_823A99FC;
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 892);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x823a99fc
	if (!ctx.cr6.lt) goto loc_823A99FC;
	// lwz r7,916(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 916);
	// lwz r11,912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 912);
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823a99fc
	if (!ctx.cr6.lt) goto loc_823A99FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,912(r31)
	REX_STORE_U32(r31.u32 + 912, ctx.r11.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,160(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 160);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823a99d8
	if (!ctx.cr6.eq) goto loc_823A99D8;
loc_823A99A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,912(r31)
	REX_STORE_U32(r31.u32 + 912, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823a99b4
	if (ctx.cr6.lt) goto loc_823A99B4;
	// stw r25,912(r31)
	REX_STORE_U32(r31.u32 + 912, r25.u32);
loc_823A99B4:
	// lwz r10,912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 912);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823a9af8
	if (ctx.cr6.eq) goto loc_823A9AF8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a99a0
	if (ctx.cr6.eq) goto loc_823A99A0;
loc_823A99D8:
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823a92f8
	ctx.lr = 0x823A99F0;
	sub_823A92F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a96fc
	if (!ctx.cr6.eq) goto loc_823A96FC;
	// b 0x823a9acc
	goto loc_823A9ACC;
loc_823A99FC:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a9ae0
	if (ctx.cr6.eq) goto loc_823A9AE0;
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a9ae0
	if (ctx.cr6.eq) goto loc_823A9AE0;
	// lwz r30,28(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823a9a98
	if (ctx.cr6.eq) goto loc_823A9A98;
	// stw r25,912(r31)
	REX_STORE_U32(r31.u32 + 912, r25.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r6,160(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 160);
loc_823A9A38:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x823a9a58
	if (ctx.cr6.lt) goto loc_823A9A58;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823a9a7c
	if (!ctx.cr6.eq) goto loc_823A9A7C;
loc_823A9A58:
	// lwz r8,916(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 916);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,912(r31)
	REX_STORE_U32(r31.u32 + 912, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823a9a38
	if (ctx.cr6.lt) goto loc_823A9A38;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A9A7C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r30,r9,r30
	r30.u64 = r30.u64 - ctx.r9.u64;
	// bl 0x823a92f8
	ctx.lr = 0x823A9A90;
	sub_823A92F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a96fc
	if (!ctx.cr6.eq) goto loc_823A96FC;
loc_823A9A98:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,1216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,892(r31)
	REX_STORE_U32(r31.u32 + 892, ctx.r10.u32);
	// bl 0x8239dfd8
	ctx.lr = 0x823A9AB8;
	sub_8239DFD8(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a9acc
	if (!ctx.cr6.gt) goto loc_823A9ACC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_823A9ACC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823a9844
	if (!ctx.cr6.eq) goto loc_823A9844;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A9AE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823a9af8
	if (ctx.cr6.eq) goto loc_823A9AF8;
	// mullw r5,r27,r29
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823A9AF8;
	sub_823EF5F0(ctx, base);
loc_823A9AF8:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823D0F98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32132
	ctx.r9.s64 = ctx.r11.s64 + -32132;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D1908) {
	REX_FUNC_PROLOGUE();
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// bne cr6,0x823d1928
	if (!ctx.cr6.eq) goto loc_823D1928;
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_823D1928:
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2570) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d25c4
	if (ctx.cr6.eq) goto loc_823D25C4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// beq cr6,0x823d259c
	if (ctx.cr6.eq) goto loc_823D259C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x823d25c0
	goto loc_823D25C0;
loc_823D259C:
	// rlwinm r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d25b0
	if (ctx.cr6.eq) goto loc_823D25B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x823d25c0
	goto loc_823D25C0;
loc_823D25B0:
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d25c4
	if (ctx.cr6.eq) goto loc_823D25C4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_823D25C0:
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_823D25C4:
	// rlwinm r11,r4,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d25e0
	if (ctx.cr6.eq) goto loc_823D25E0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r9,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// b 0x823d25f4
	goto loc_823D25F4;
loc_823D25E0:
	// rlwinm r11,r4,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d25f8
	if (ctx.cr6.eq) goto loc_823D25F8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r9,19,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
loc_823D25F4:
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_823D25F8:
	// rlwinm r11,r4,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2618
	if (ctx.cr6.eq) goto loc_823D2618;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r11,r10,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwimi r11,r9,20,5,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// b 0x823d2654
	goto loc_823D2654;
loc_823D2618:
	// rlwinm r11,r4,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2638
	if (ctx.cr6.eq) goto loc_823D2638;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r11,r10,21,10,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwimi r11,r9,21,5,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// b 0x823d2654
	goto loc_823D2654;
loc_823D2638:
	// rlwinm r11,r4,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2658
	if (ctx.cr6.eq) goto loc_823D2658;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r11,r10,26,10,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwimi r11,r9,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
loc_823D2654:
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_823D2658:
	// rlwinm r11,r4,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// bne cr6,0x823d2670
	if (!ctx.cr6.eq) goto loc_823D2670;
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_823D2670:
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// bne cr6,0x823d268c
	if (!ctx.cr6.eq) goto loc_823D268C;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_823D268C:
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d2710
	if (!ctx.cr6.eq) goto loc_823D2710;
	// rlwinm r10,r4,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d26fc
	if (ctx.cr6.eq) goto loc_823D26FC;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d2710
	if (ctx.cr6.eq) goto loc_823D2710;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwimi r11,r9,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f0,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,292(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 292, temp.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,3716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,364(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 364, temp.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stfs f0,288(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 288, temp.u32);
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stfs f0,336(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 336, temp.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D26FC:
	// rlwinm r10,r4,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d2710
	if (ctx.cr6.eq) goto loc_823D2710;
	// rlwimi r11,r9,4,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_823D2710:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DF710) {
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
	ctx.lr = 0x823DF718;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bgt cr6,0x823e012c
	if (ctx.cr6.gt) goto loc_823E012C;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// ble cr6,0x823dfbfc
	if (!ctx.cr6.gt) goto loc_823DFBFC;
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// ble cr6,0x823df9c8
	if (!ctx.cr6.gt) goto loc_823DF9C8;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bne cr6,0x823df88c
	if (!ctx.cr6.eq) goto loc_823DF88C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-44
	ctx.r11.s64 = ctx.r8.s64 + -44;
loc_823DF750:
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// lwz r31,32(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r4,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,24(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,20(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r25,20(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r24,16(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r23,24(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r22,12(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r21,28(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r20,8(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r19,32(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r18,-4(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r17,44(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwz r16,0(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulld r8,r8,r3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r3.u64);
	// lwz r3,40(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r15,36(r5)
	r15.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r14,4(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r31,r30
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * r30.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r31,r29
	r31.s64 = r29.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r31,r27
	r31.s64 = r27.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r31,r25
	r31.s64 = r25.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r24
	ctx.r4.s64 = r24.s32;
	// extsw r31,r23
	r31.s64 = r23.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r22
	ctx.r4.s64 = r22.s32;
	// extsw r31,r21
	r31.s64 = r21.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r20
	ctx.r4.s64 = r20.s32;
	// extsw r31,r19
	r31.s64 = r19.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r18
	ctx.r4.s64 = r18.s32;
	// extsw r31,r17
	r31.s64 = r17.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r16
	ctx.r4.s64 = r16.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r15
	ctx.r4.s64 = r15.s32;
	// extsw r3,r14
	ctx.r3.s64 = r14.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF750;
	// b 0x826a1cd0
	return;
loc_823DF88C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-40
	ctx.r11.s64 = ctx.r8.s64 + -40;
loc_823DF8A4:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// lwz r31,28(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r4,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,16(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r25,20(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r24,12(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r23,24(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r22,8(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r21,28(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r20,-4(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r19,40(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r18,36(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r17,0(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r16,32(r5)
	r16.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// mulld r8,r8,r3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r3.u64);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r31,r30
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * r30.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r31,r29
	r31.s64 = r29.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r31,r27
	r31.s64 = r27.s32;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r8,r4,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r31,r25
	r31.s64 = r25.s32;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulld r7,r4,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r24
	ctx.r4.s64 = r24.s32;
	// extsw r31,r23
	r31.s64 = r23.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r22
	ctx.r4.s64 = r22.s32;
	// extsw r31,r21
	r31.s64 = r21.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r20
	ctx.r4.s64 = r20.s32;
	// extsw r31,r19
	r31.s64 = r19.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r18
	ctx.r4.s64 = r18.s32;
	// extsw r31,r17
	r31.s64 = r17.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * r31.u64);
	// extsw r4,r16
	ctx.r4.s64 = r16.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df8a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF8A4;
	// b 0x826a1cd0
	return;
loc_823DF9C8:
	// bne cr6,0x823dfaf0
	if (!ctx.cr6.eq) goto loc_823DFAF0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-36
	ctx.r11.s64 = ctx.r8.s64 + -36;
loc_823DF9E4:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,12(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r25,20(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r24,8(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r23,24(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r22,-4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r21,36(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r20,0(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r19,32(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r18,28(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r17,4(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r3,r27
	ctx.r3.s64 = r27.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r3,r25
	ctx.r3.s64 = r25.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r24
	ctx.r4.s64 = r24.s32;
	// extsw r3,r23
	ctx.r3.s64 = r23.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r22
	ctx.r4.s64 = r22.s32;
	// extsw r3,r21
	ctx.r3.s64 = r21.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r20
	ctx.r4.s64 = r20.s32;
	// extsw r3,r19
	ctx.r3.s64 = r19.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r18
	ctx.r4.s64 = r18.s32;
	// extsw r3,r17
	ctx.r3.s64 = r17.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823df9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF9E4;
	// b 0x826a1cd0
	return;
loc_823DFAF0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-32
	ctx.r11.s64 = ctx.r8.s64 + -32;
loc_823DFB08:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r25,20(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r24,-4(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r23,32(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,24(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r20,28(r5)
	r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r19,0(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r3,r27
	ctx.r3.s64 = r27.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r3,r25
	ctx.r3.s64 = r25.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r24
	ctx.r4.s64 = r24.s32;
	// extsw r3,r23
	ctx.r3.s64 = r23.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r22
	ctx.r4.s64 = r22.s32;
	// extsw r3,r21
	ctx.r3.s64 = r21.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r20
	ctx.r4.s64 = r20.s32;
	// extsw r3,r19
	ctx.r3.s64 = r19.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dfb08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DFB08;
	// b 0x826a1cd0
	return;
loc_823DFBFC:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// ble cr6,0x823dff58
	if (!ctx.cr6.gt) goto loc_823DFF58;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// ble cr6,0x823dfde4
	if (!ctx.cr6.gt) goto loc_823DFDE4;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x823dfd08
	if (!ctx.cr6.eq) goto loc_823DFD08;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-28
	ctx.r11.s64 = ctx.r8.s64 + -28;
loc_823DFC2C:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,16(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r25,28(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r24,4(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,20(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r22,24(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r21,0(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r3,r27
	ctx.r3.s64 = r27.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r3,r25
	ctx.r3.s64 = r25.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r24
	ctx.r4.s64 = r24.s32;
	// extsw r3,r23
	ctx.r3.s64 = r23.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r22
	ctx.r4.s64 = r22.s32;
	// extsw r3,r21
	ctx.r3.s64 = r21.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dfc2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DFC2C;
	// b 0x826a1cd0
	return;
loc_823DFD08:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-24
	ctx.r11.s64 = ctx.r8.s64 + -24;
loc_823DFD20:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,-4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r27,24(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,20(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r24,4(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,16(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r3,r27
	ctx.r3.s64 = r27.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r3,r25
	ctx.r3.s64 = r25.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r24
	ctx.r4.s64 = r24.s32;
	// extsw r3,r23
	ctx.r3.s64 = r23.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dfd20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DFD20;
	// b 0x826a1cd0
	return;
loc_823DFDE4:
	// bne cr6,0x823dfeac
	if (!ctx.cr6.eq) goto loc_823DFEAC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-20
	ctx.r11.s64 = ctx.r8.s64 + -20;
loc_823DFE00:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,20(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,12(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r26,16(r5)
	r26.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r3,r27
	ctx.r3.s64 = r27.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r26
	ctx.r4.s64 = r26.s32;
	// extsw r3,r25
	ctx.r3.s64 = r25.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dfe00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DFE00;
	// b 0x826a1cd0
	return;
loc_823DFEAC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-16
	ctx.r11.s64 = ctx.r8.s64 + -16;
loc_823DFEC4:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,16(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,12(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r28,8(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// extsw r3,r27
	ctx.r3.s64 = r27.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dfec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DFEC4;
	// b 0x826a1cd0
	return;
loc_823DFF58:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// ble cr6,0x823e0078
	if (!ctx.cr6.gt) goto loc_823E0078;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x823dfffc
	if (!ctx.cr6.eq) goto loc_823DFFFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-12
	ctx.r11.s64 = ctx.r8.s64 + -12;
loc_823DFF80:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,12(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lwz r30,8(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r3,r31
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * r31.u64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// extsw r3,r29
	ctx.r3.s64 = r29.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823dff80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DFF80;
	// b 0x826a1cd0
	return;
loc_823DFFFC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
loc_823E0014:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mulld r8,r4,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// extsw r4,r31
	ctx.r4.s64 = r31.s32;
	// extsw r3,r30
	ctx.r3.s64 = r30.s32;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulld r7,r4,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e0014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E0014;
	// b 0x826a1cd0
	return;
loc_823E0078:
	// bne cr6,0x823e00e0
	if (!ctx.cr6.eq) goto loc_823E00E0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_823E0094:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r8,r4,r8
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r8.u64);
	// mulld r7,r7,r3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srad r7,r8,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r7.s64 = ctx.r8.s64 >> temp.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e0094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E0094;
	// b 0x826a1cd0
	return;
loc_823E00E0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
loc_823E00F8:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// mulld r10,r4,r3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// srad r6,r10,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r6.s64 = ctx.r10.s64 >> temp.u64;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e00f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E00F8;
	// b 0x826a1cd0
	return;
loc_823E012C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823e0508
	if (!ctx.cr6.gt) goto loc_823E0508;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// stw r4,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r4.u32);
	// addi r6,r6,-13
	ctx.r6.s64 = ctx.r6.s64 + -13;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// stw r6,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// stw r9,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
loc_823E0154:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,19
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 19, ctx.xer);
	// bgt cr6,0x823e04e0
	if (ctx.cr6.gt) goto loc_823E04E0;
	// lis r12,-32194
	ctx.r12.s64 = -2109865984;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,376
	ctx.r12.s64 = ctx.r12.s64 + 376;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_823E038C;
	case 1:
		goto loc_823E0374;
	case 2:
		goto loc_823E035C;
	case 3:
		goto loc_823E0344;
	case 4:
		goto loc_823E032C;
	case 5:
		goto loc_823E0314;
	case 6:
		goto loc_823E02FC;
	case 7:
		goto loc_823E02E4;
	case 8:
		goto loc_823E02CC;
	case 9:
		goto loc_823E02B4;
	case 10:
		goto loc_823E029C;
	case 11:
		goto loc_823E0284;
	case 12:
		goto loc_823E026C;
	case 13:
		goto loc_823E0254;
	case 14:
		goto loc_823E023C;
	case 15:
		goto loc_823E0224;
	case 16:
		goto loc_823E020C;
	case 17:
		goto loc_823E01F4;
	case 18:
		goto loc_823E01DC;
	case 19:
		goto loc_823E01C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823E01C8:
	// lwz r10,-124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r9,124(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 124);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// mulld r10,r7,r8
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
loc_823E01DC:
	// lwz r9,-120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -120);
	// lwz r8,120(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 120);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E01F4:
	// lwz r9,-116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -116);
	// lwz r8,116(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 116);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E020C:
	// lwz r9,-112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -112);
	// lwz r8,112(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E0224:
	// lwz r9,-108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r8,108(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E023C:
	// lwz r9,-104(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -104);
	// lwz r8,104(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 104);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E0254:
	// lwz r9,-100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r8,100(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E026C:
	// lwz r9,-96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r8,96(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E0284:
	// lwz r9,-92(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r8,92(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E029C:
	// lwz r9,-88(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r8,88(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E02B4:
	// lwz r9,-84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -84);
	// lwz r8,84(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E02CC:
	// lwz r9,-80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r8,80(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E02E4:
	// lwz r9,-76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -76);
	// lwz r8,76(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E02FC:
	// lwz r9,-72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r8,72(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E0314:
	// lwz r9,-68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r8,68(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E032C:
	// lwz r9,-64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E0344:
	// lwz r9,-60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r8,60(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E035C:
	// lwz r9,-56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -56);
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E0374:
	// lwz r9,-52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// lwz r8,52(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r9,r6,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823E038C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// lwz r7,-12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// lwz r31,12(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mulld r9,r9,r6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r6.u64);
	// lwz r30,-16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r29,16(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r28,-20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r27,20(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r26,-24(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// lwz r25,24(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r24,-28(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r23,28(r5)
	r23.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r22,-32(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + -32);
	// lwz r21,32(r5)
	r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r20,-36(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + -36);
	// lwz r19,36(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r18,-40(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + -40);
	// lwz r17,40(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// mulld r8,r4,r3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r3.u64);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r16,-44(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + -44);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwz r15,-48(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// lwz r14,48(r5)
	r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r4,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// lwz r4,-172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stw r6,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
	// lwz r6,-168(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r31,r7
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * ctx.r7.u64);
	// extsw r7,r29
	ctx.r7.s64 = r29.s32;
	// extsw r31,r30
	r31.s64 = r30.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r7,r27
	ctx.r7.s64 = r27.s32;
	// extsw r31,r28
	r31.s64 = r28.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r7,r25
	ctx.r7.s64 = r25.s32;
	// extsw r31,r26
	r31.s64 = r26.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r7,r23
	ctx.r7.s64 = r23.s32;
	// extsw r31,r24
	r31.s64 = r24.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r7,r21
	ctx.r7.s64 = r21.s32;
	// extsw r31,r22
	r31.s64 = r22.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r7,r19
	ctx.r7.s64 = r19.s32;
	// extsw r31,r20
	r31.s64 = r20.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r7,r17
	ctx.r7.s64 = r17.s32;
	// extsw r31,r18
	r31.s64 = r18.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r7,r31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * r31.u64);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r7,r16
	ctx.r7.s64 = r16.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r3,r7
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r7.u64);
	// extsw r3,r14
	ctx.r3.s64 = r14.s32;
	// extsw r7,r15
	ctx.r7.s64 = r15.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulld r8,r3,r7
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r7.u64);
	// lwz r3,-172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lwz r3,-164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r8,r7,r3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r3.u64);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_823E04E0:
	// ld r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// srad r7,r10,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r7.s64 = ctx.r10.s64 >> temp.u64;
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// stw r9,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r4,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r4.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bne 0x823e0154
	if (!ctx.cr0.eq) goto loc_823E0154;
loc_823E0508:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8243B138) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243B140;
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
	// b 0x8243b164
	goto loc_8243B164;
loc_8243B158:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243b188
	if (ctx.cr6.eq) goto loc_8243B188;
loc_8243B164:
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
	// bl 0x8243a060
	ctx.lr = 0x8243B17C;
	sub_8243A060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243b158
	if (!ctx.cr0.lt) goto loc_8243B158;
	// b 0x8243b18c
	goto loc_8243B18C;
loc_8243B188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243B18C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243D5F8) {
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
	ctx.lr = 0x8243D600;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8243d640
	if (!ctx.cr6.eq) goto loc_8243D640;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243D640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243D640:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8243d674
	if (!ctx.cr6.eq) goto loc_8243D674;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8243d66c
	if (!ctx.cr6.eq) goto loc_8243D66C;
loc_8243D660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8243D66C:
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D674:
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// addic. r10,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r10.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r30,r9,8
	r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x8243d6a8
	if (!ctx.cr0.eq) goto loc_8243D6A8;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D6A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// bne 0x8243d6dc
	if (!ctx.cr0.eq) goto loc_8243D6DC;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D6DC:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,103
	ctx.r8.s64 = 103;
	// lbz r23,0(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r23,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r23.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8243D714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r23,3
	ctx.r4.s64 = r23.s64 + 3;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8243d734
	if (!ctx.cr6.eq) goto loc_8243D734;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// blt cr6,0x8243d734
	if (ctx.cr6.lt) goto loc_8243D734;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// ble cr6,0x8243d754
	if (!ctx.cr6.gt) goto loc_8243D754;
loc_8243D734:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
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
	ctx.lr = 0x8243D754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243D754:
	// stw r23,332(r31)
	REX_STORE_U32(r31.u32 + 332, r23.u32);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8243d888
	if (!ctx.cr6.gt) goto loc_8243D888;
	// addi r22,r31,332
	r22.s64 = r31.s64 + 332;
	// li r20,5
	r20.s64 = 5;
	// li r21,104
	r21.s64 = 104;
loc_8243D770:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8243d798
	if (!ctx.cr6.eq) goto loc_8243D798;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r26,4(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D798:
	// lbz r27,0(r28)
	r27.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addic. r10,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r10.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// bne 0x8243d7c8
	if (!ctx.cr0.eq) goto loc_8243D7C8;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D7B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D7C8:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// lwz r30,220(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8243d808
	if (!ctx.cr6.gt) goto loc_8243D808;
loc_8243D7E8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8243d82c
	if (ctx.cr6.eq) goto loc_8243D82C;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8243d7e8
	if (ctx.cr6.lt) goto loc_8243D7E8;
loc_8243D808:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r20,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r20.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r27.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243D82C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243D82C:
	// srawi r11,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	ctx.r11.s64 = r29.s32 >> 4;
	// stwu r30,4(r22)
	ea = 4 + r22.u32;
	REX_STORE_U32(ea, r30.u32);
	r22.u32 = ea;
	// clrlwi r10,r29,28
	ctx.r10.u64 = r29.u32 & 0xF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r27.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r21,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r21.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D87C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// blt cr6,0x8243d770
	if (ctx.cr6.lt) goto loc_8243D770;
loc_8243D888:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8243d8b0
	if (!ctx.cr6.eq) goto loc_8243D8B0;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D8A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r26,4(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D8B0:
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addic. r10,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r10.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stw r9,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r9.u32);
	// bne 0x8243d8e4
	if (!ctx.cr0.eq) goto loc_8243D8E4;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D8E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// stw r9,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r9.u32);
	// bne 0x8243d918
	if (!ctx.cr0.eq) goto loc_8243D918;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d660
	if (ctx.cr6.eq) goto loc_8243D660;
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8243D918:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r9,105
	ctx.r9.s64 = 105;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// lwz r7,404(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 404);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r5,r8,28
	ctx.r5.u64 = ctx.r8.u32 & 0xF;
	// stw r6,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r5.u32);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r8,412(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 412);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,416(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 416);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,444(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r6.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r8,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82454B90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r10,13260
	ctx.r6.s64 = ctx.r10.s64 + 13260;
	// addi r5,r9,13236
	ctx.r5.s64 = ctx.r9.s64 + 13236;
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r8,13228
	ctx.r4.s64 = ctx.r8.s64 + 13228;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455008) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455568) {
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
	// bl 0x824550e8
	ctx.lr = 0x82455588;
	sub_824550E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245559c
	if (ctx.cr0.eq) goto loc_8245559C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x8245559C;
	sub_823F0350(ctx, base);
loc_8245559C:
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

DEFINE_REX_FUNC(sub_82458200) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82458288
	if (!ctx.cr6.eq) goto loc_82458288;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82458288
	if (!ctx.cr6.eq) goto loc_82458288;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82458288
	if (!ctx.cr6.eq) goto loc_82458288;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82458274
	if (ctx.cr6.lt) goto loc_82458274;
	// beq cr6,0x82458268
	if (ctx.cr6.eq) goto loc_82458268;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8245825c
	if (ctx.cr6.lt) goto loc_8245825C;
	// beq cr6,0x82458250
	if (ctx.cr6.eq) goto loc_82458250;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824582c4
	goto loc_824582C4;
loc_82458250:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14528
	ctx.r4.s64 = ctx.r11.s64 + 14528;
	// b 0x8245827c
	goto loc_8245827C;
loc_8245825C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14512
	ctx.r4.s64 = ctx.r11.s64 + 14512;
	// b 0x8245827c
	goto loc_8245827C;
loc_82458268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14496
	ctx.r4.s64 = ctx.r11.s64 + 14496;
	// b 0x8245827c
	goto loc_8245827C;
loc_82458274:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14480
	ctx.r4.s64 = ctx.r11.s64 + 14480;
loc_8245827C:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458284;
	sub_824555B8(ctx, base);
	// b 0x824582c4
	goto loc_824582C4;
loc_82458288:
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r4,r5,14460
	ctx.r4.s64 = ctx.r5.s64 + 14460;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x824555b8
	ctx.lr = 0x824582C4;
	sub_824555B8(ctx, base);
loc_824582C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245E528) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,2,10,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r9,r11,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245e5a4
	if (!ctx.cr6.eq) goto loc_8245E5A4;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// addi r5,r10,18508
	ctx.r5.s64 = ctx.r10.s64 + 18508;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E594;
	sub_8245DFC0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x8245e5b0
	goto loc_8245E5B0;
loc_8245E5A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,18496
	ctx.r5.s64 = ctx.r11.s64 + 18496;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E5B0;
	sub_8245DFC0(ctx, base);
loc_8245E5B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82474750
	ctx.lr = 0x8245E5B8;
	sub_82474750(ctx, base);
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

DEFINE_REX_FUNC(sub_82464128) {
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
	ctx.lr = 0x82464130;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,23160
	r29.s64 = ctx.r11.s64 + 23160;
	// li r26,0
	r26.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r28,1
	r28.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r29,-128
	ctx.r5.s64 = r29.s64 + -128;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// clrlwi r30,r10,12
	r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// bl 0x8245f158
	ctx.lr = 0x82464194;
	sub_8245F158(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x824641c8
	if (!ctx.cr6.eq) goto loc_824641C8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x8245f158
	ctx.lr = 0x824641C8;
	sub_8245F158(ctx, base);
loc_824641C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824642bc
	if (!ctx.cr6.eq) goto loc_824642BC;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82464218
	if (ctx.cr6.eq) goto loc_82464218;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_824641E0:
	// lwz r9,-16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82464234
	if (!ctx.cr6.eq) goto loc_82464234;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82464234
	if (!ctx.cr6.eq) goto loc_82464234;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82464234
	if (!ctx.cr6.eq) goto loc_82464234;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// blt cr6,0x824641e0
	if (ctx.cr6.lt) goto loc_824641E0;
loc_82464218:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// beq cr6,0x8246423c
	if (ctx.cr6.eq) goto loc_8246423C;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82464244
	goto loc_82464244;
loc_82464234:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824642bc
	goto loc_824642BC;
loc_8246423C:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_82464244:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x82478758
	ctx.lr = 0x82464264;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82464278
	if (!ctx.cr6.eq) goto loc_82464278;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824642bc
	goto loc_824642BC;
loc_82464278:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824642b8
	if (ctx.cr6.eq) goto loc_824642B8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_8246428C:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8246428c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246428C;
loc_824642B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824642BC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8246E350) {
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
	ctx.lr = 0x8246E358;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8246e378
	if (ctx.cr6.eq) goto loc_8246E378;
	// li r31,1
	r31.s64 = 1;
	// b 0x8246e37c
	goto loc_8246E37C;
loc_8246E378:
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 260);
loc_8246E37C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246e528
	if (!ctx.cr6.eq) goto loc_8246E528;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r10,2,10,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFC;
	// clrlwi r3,r10,12
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8246e3d8
	if (ctx.cr0.eq) goto loc_8246E3D8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8246e400
	goto loc_8246E400;
loc_8246E3D8:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8246e528
	if (ctx.cr0.eq) goto loc_8246E528;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8246E400:
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8246e414
	if (ctx.cr6.eq) goto loc_8246E414;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_8246E414:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,352(r30)
	REX_STORE_U32(r30.u32 + 352, ctx.r5.u32);
	// beq cr6,0x8246e4c0
	if (ctx.cr6.eq) goto loc_8246E4C0;
	// subf r5,r9,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_8246E434:
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8246e528
	if (!ctx.cr6.eq) goto loc_8246E528;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8246e474
	if (!ctx.cr6.eq) goto loc_8246E474;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r29,8
	r29.s64 = 524288;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8246e528
	if (!ctx.cr6.eq) goto loc_8246E528;
loc_8246E474:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r29,60(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r29,r29,0,22,22
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8246e4b0
	if (!ctx.cr0.eq) goto loc_8246E4B0;
	// subfic r29,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	r29.u64 = static_cast<uint64_t>(0) - r31.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfe r11,r29,r29
	temp.u8 = (~r29.u32 + r29.u32 < ~r29.u32) | (~r29.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r29.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246e4b0
	if (!ctx.cr0.eq) goto loc_8246E4B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,352(r30)
	REX_STORE_U32(r30.u32 + 352, ctx.r11.u32);
loc_8246E4B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8246e434
	if (ctx.cr6.lt) goto loc_8246E434;
loc_8246E4C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8246e4e0
	if (ctx.cr6.eq) goto loc_8246E4E0;
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8246e4ec
	goto loc_8246E4EC;
loc_8246E4E0:
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// lis r5,8
	ctx.r5.s64 = 524288;
loc_8246E4EC:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x8246d648
	ctx.lr = 0x8246E4F4;
	sub_8246D648(ctx, base);
	// lwz r11,352(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 352);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8246e520
	if (!ctx.cr6.eq) goto loc_8246E520;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4702
	ctx.r5.s64 = 4702;
	// addi r6,r10,28688
	ctx.r6.s64 = ctx.r10.s64 + 28688;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489ce8
	ctx.lr = 0x8246E520;
	sub_82489CE8(ctx, base);
loc_8246E520:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8246e52c
	goto loc_8246E52C;
loc_8246E528:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8246E52C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82478A18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82478A20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,30452
	ctx.r11.s64 = ctx.r11.s64 + 30452;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82478a98
	if (ctx.cr6.eq) goto loc_82478A98;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82478a8c
	if (!ctx.cr6.gt) goto loc_82478A8C;
	// li r30,0
	r30.s64 = 0;
loc_82478A54:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r29,r30,r11
	r29.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82478a78
	if (ctx.cr6.eq) goto loc_82478A78;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x82478A6C;
	sub_82130E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0350
	ctx.lr = 0x82478A78;
	sub_823F0350(ctx, base);
loc_82478A78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82478a54
	if (ctx.cr6.lt) goto loc_82478A54;
loc_82478A8C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823f0350
	ctx.lr = 0x82478A98;
	sub_823F0350(ctx, base);
loc_82478A98:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82478af8
	if (ctx.cr6.eq) goto loc_82478AF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82478aec
	if (!ctx.cr6.gt) goto loc_82478AEC;
	// li r30,0
	r30.s64 = 0;
loc_82478AB8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82478ad8
	if (ctx.cr6.eq) goto loc_82478AD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x82478AD0;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824782b0
	ctx.lr = 0x82478AD8;
	sub_824782B0(ctx, base);
loc_82478AD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82478ab8
	if (ctx.cr6.lt) goto loc_82478AB8;
loc_82478AEC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823f0350
	ctx.lr = 0x82478AF8;
	sub_823F0350(ctx, base);
loc_82478AF8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82478b58
	if (ctx.cr6.eq) goto loc_82478B58;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82478b4c
	if (!ctx.cr6.gt) goto loc_82478B4C;
	// li r30,0
	r30.s64 = 0;
loc_82478B18:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82478b38
	if (ctx.cr6.eq) goto loc_82478B38;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x82478B30;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b20
	ctx.lr = 0x82478B38;
	sub_82477B20(ctx, base);
loc_82478B38:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82478b18
	if (ctx.cr6.lt) goto loc_82478B18;
loc_82478B4C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x82478B58;
	sub_823F0350(ctx, base);
loc_82478B58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824852B0) {
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
	ctx.lr = 0x824852B8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824852d4
	if (ctx.cr0.eq) goto loc_824852D4;
loc_824852CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824856a8
	goto loc_824856A8;
loc_824852D4:
	// li r20,0
	r20.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
	// bl 0x82481098
	ctx.lr = 0x824852E4;
	sub_82481098(ctx, base);
	// lwz r18,12(r29)
	r18.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824852cc
	if (ctx.cr6.eq) goto loc_824852CC;
	// rlwinm r17,r18,2,0,29
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
loc_824852F4:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r17,r17,-4
	r17.s64 = r17.s64 + -4;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
	// lwzx r30,r17,r11
	r30.u64 = REX_LOAD_U32(r17.u32 + ctx.r11.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r5,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82485324
	if (ctx.cr6.eq) goto loc_82485324;
	// lis r10,8304
	ctx.r10.s64 = 544210944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82485694
	if (!ctx.cr6.eq) goto loc_82485694;
loc_82485324:
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8248537c
	if (ctx.cr6.eq) goto loc_8248537C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
loc_82485344:
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r4,r4,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8248537c
	if (ctx.cr0.eq) goto loc_8248537C;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82485344
	if (ctx.cr6.lt) goto loc_82485344;
loc_8248537C:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82485694
	if (ctx.cr6.lt) goto loc_82485694;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824853dc
	if (ctx.cr6.eq) goto loc_824853DC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
loc_824853A4:
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r4,r4,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x824853dc
	if (ctx.cr0.eq) goto loc_824853DC;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824853a4
	if (ctx.cr6.lt) goto loc_824853A4;
loc_824853DC:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82485694
	if (ctx.cr6.lt) goto loc_82485694;
	// clrlwi r22,r5,12
	r22.u64 = ctx.r5.u32 & 0xFFFFF;
	// mr r24,r20
	r24.u64 = r20.u64;
	// divwu. r21,r6,r22
	r21.u64 = uint32_t(r22.u32 ? ctx.r6.u32 / r22.u32 : 0);
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x82485590
	if (ctx.cr0.eq) goto loc_82485590;
	// mr r25,r20
	r25.u64 = r20.u64;
	// rlwinm r23,r22,2,0,29
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_82485400:
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82485578
	if (ctx.cr6.eq) goto loc_82485578;
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82485414:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824774a0
	ctx.lr = 0x82485440;
	sub_824774A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,24640
	ctx.r10.s64 = 1614807040;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82485470
	if (ctx.cr6.eq) goto loc_82485470;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82485470
	if (ctx.cr6.eq) goto loc_82485470;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82485474
	if (!ctx.cr6.eq) goto loc_82485474;
loc_82485470:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82485474:
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_824854A8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824854b8
	if (!ctx.cr6.eq) goto loc_824854B8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x824854dc
	if (ctx.cr6.eq) goto loc_824854DC;
loc_824854B8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824854d8
	if (ctx.cr6.eq) goto loc_824854D8;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x824854a8
	goto loc_824854A8;
loc_824854D8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824854DC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82485570
	if (!ctx.cr6.eq) goto loc_82485570;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82485554
	if (ctx.cr6.eq) goto loc_82485554;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
loc_82485500:
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,92(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x82485554
	if (ctx.cr6.gt) goto loc_82485554;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82485554
	if (!ctx.cr6.eq) goto loc_82485554;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82485544
	if (ctx.cr6.eq) goto loc_82485544;
	// lwzx r11,r27,r5
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82485554
	if (!ctx.cr6.eq) goto loc_82485554;
loc_82485544:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82485500
	if (ctx.cr6.lt) goto loc_82485500;
loc_82485554:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82485570
	if (ctx.cr6.lt) goto loc_82485570;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// blt cr6,0x82485414
	if (ctx.cr6.lt) goto loc_82485414;
loc_82485570:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// blt cr6,0x82485588
	if (ctx.cr6.lt) goto loc_82485588;
loc_82485578:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r25,r23,r25
	r25.u64 = r23.u64 + r25.u64;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(r24.u32, r21.u32, ctx.xer);
	// blt cr6,0x82485400
	if (ctx.cr6.lt) goto loc_82485400;
loc_82485588:
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(r24.u32, r21.u32, ctx.xer);
	// blt cr6,0x82485694
	if (ctx.cr6.lt) goto loc_82485694;
loc_82485590:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485684
	if (!ctx.cr6.gt) goto loc_82485684;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_824855A4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82485668
	if (ctx.cr6.eq) goto loc_82485668;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_824855CC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r7,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	// rlwinm r7,r7,0,7,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bgt cr6,0x82485604
	if (ctx.cr6.gt) goto loc_82485604;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82485604:
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bne cr6,0x82485648
	if (!ctx.cr6.eq) goto loc_82485648;
	// lwz r9,96(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
loc_82485648:
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stw r9,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// bdnz 0x824855cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824855CC;
loc_82485668:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824855a4
	if (ctx.cr6.lt) goto loc_824855A4;
loc_82485684:
	// stw r20,0(r30)
	REX_STORE_U32(r30.u32 + 0, r20.u32);
	// li r19,1
	r19.s64 = 1;
	// stw r20,4(r30)
	REX_STORE_U32(r30.u32 + 4, r20.u32);
	// stw r20,12(r30)
	REX_STORE_U32(r30.u32 + 12, r20.u32);
loc_82485694:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x824852f4
	if (!ctx.cr6.eq) goto loc_824852F4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x824852cc
	if (ctx.cr6.eq) goto loc_824852CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824856A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_824AD9D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824AD9E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824adb40
	if (ctx.cr6.eq) goto loc_824ADB40;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r30,24768
	r30.s64 = 1623195648;
	// lis r4,4352
	ctx.r4.s64 = 285212672;
loc_824ADA08:
	// stw r5,256(r8)
	REX_STORE_U32(ctx.r8.u32 + 256, ctx.r5.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r7,260(r8)
	REX_STORE_U32(ctx.r8.u32 + 260, ctx.r7.u32);
	// beq cr6,0x824adb2c
	if (ctx.cr6.eq) goto loc_824ADB2C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824adb2c
	if (ctx.cr6.eq) goto loc_824ADB2C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bgt cr6,0x824ada90
	if (ctx.cr6.gt) goto loc_824ADA90;
	// beq cr6,0x824adbfc
	if (ctx.cr6.eq) goto loc_824ADBFC;
	// lis r11,24608
	ctx.r11.s64 = 1612709888;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824adbf4
	if (ctx.cr6.eq) goto loc_824ADBF4;
	// lis r11,24624
	ctx.r11.s64 = 1613758464;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824adbec
	if (ctx.cr6.eq) goto loc_824ADBEC;
	// lis r11,24688
	ctx.r11.s64 = 1617952768;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824ada78
	if (ctx.cr6.eq) goto loc_824ADA78;
	// lis r11,24704
	ctx.r11.s64 = 1619001344;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824adab4
	if (!ctx.cr6.eq) goto loc_824ADAB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824adc18
	goto loc_824ADC18;
loc_824ADA78:
	// lhz r11,202(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824adab4
	if (ctx.cr6.eq) goto loc_824ADAB4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824ADA88:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824adc1c
	goto loc_824ADC1C;
loc_824ADA90:
	// lis r11,24784
	ctx.r11.s64 = 1624244224;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824adc14
	if (ctx.cr6.eq) goto loc_824ADC14;
	// lis r11,24848
	ctx.r11.s64 = 1628438528;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824adc0c
	if (ctx.cr6.eq) goto loc_824ADC0C;
	// lis r11,24864
	ctx.r11.s64 = 1629487104;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824adc04
	if (ctx.cr6.eq) goto loc_824ADC04;
loc_824ADAB4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x824aab40
	ctx.lr = 0x824ADABC;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824adacc
	if (!ctx.cr0.eq) goto loc_824ADACC;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824adb2c
	if (!ctx.cr6.eq) goto loc_824ADB2C;
loc_824ADACC:
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824adb2c
	if (ctx.cr6.eq) goto loc_824ADB2C;
	// lwz r10,200(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 200);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,260
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 260, ctx.xer);
	// beq cr6,0x824adb2c
	if (ctx.cr6.eq) goto loc_824ADB2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824adc60
	if (!ctx.cr0.eq) goto loc_824ADC60;
loc_824ADB2C:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ada08
	if (ctx.cr6.lt) goto loc_824ADA08;
loc_824ADB40:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824adbe0
	if (ctx.cr6.eq) goto loc_824ADBE0;
	// lwz r3,24(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
loc_824ADB50:
	// stw r4,256(r8)
	REX_STORE_U32(ctx.r8.u32 + 256, ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,260(r8)
	REX_STORE_U32(ctx.r8.u32 + 260, ctx.r10.u32);
	// beq 0x824adbcc
	if (ctx.cr0.eq) goto loc_824ADBCC;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824adbcc
	if (ctx.cr6.eq) goto loc_824ADBCC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824adbcc
	if (!ctx.cr6.gt) goto loc_824ADBCC;
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,128(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 128);
loc_824ADB8C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824adbb4
	if (!ctx.cr6.eq) goto loc_824ADBB4;
	// lbz r9,111(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 111);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// beq cr6,0x824adc80
	if (ctx.cr6.eq) goto loc_824ADC80;
loc_824ADBB4:
	// lwz r9,260(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 260);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824adb8c
	if (ctx.cr6.lt) goto loc_824ADB8C;
loc_824ADBCC:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824adb50
	if (ctx.cr6.lt) goto loc_824ADB50;
loc_824ADBE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824ADBE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824ADBEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824adc18
	goto loc_824ADC18;
loc_824ADBF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824ada88
	goto loc_824ADA88;
loc_824ADBFC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x824ada88
	goto loc_824ADA88;
loc_824ADC04:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x824adc18
	goto loc_824ADC18;
loc_824ADC0C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x824ada88
	goto loc_824ADA88;
loc_824ADC14:
	// li r11,2
	ctx.r11.s64 = 2;
loc_824ADC18:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824ADC1C:
	// lis r6,-32128
	ctx.r6.s64 = -2105540608;
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,203(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 203);
	// addi r10,r6,-23808
	ctx.r10.s64 = ctx.r6.s64 + -23808;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,16
	r30.s64 = ctx.r10.s64 + 16;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r6,r7,-228
	ctx.r6.s64 = ctx.r7.s64 + -228;
	// li r5,4532
	ctx.r5.s64 = 4532;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// bl 0x82489c30
	ctx.lr = 0x824ADC54;
	sub_82489C30(ctx, base);
loc_824ADC54:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824adbe4
	goto loc_824ADBE4;
loc_824ADC60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// addi r6,r11,-276
	ctx.r6.s64 = ctx.r11.s64 + -276;
	// li r5,4532
	ctx.r5.s64 = 4532;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82489c30
	ctx.lr = 0x824ADC7C;
	sub_82489C30(ctx, base);
	// b 0x824adc54
	goto loc_824ADC54;
loc_824ADC80:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// li r5,4512
	ctx.r5.s64 = 4512;
	// addi r6,r11,-340
	ctx.r6.s64 = ctx.r11.s64 + -340;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82489c30
	ctx.lr = 0x824ADC98;
	sub_82489C30(ctx, base);
	// b 0x824adc54
	goto loc_824ADC54;
}

DEFINE_REX_FUNC(sub_824C0FC8) {
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
	ctx.lr = 0x824C0FD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// bl 0x824c6fc0
	ctx.lr = 0x824C0FE4;
	sub_824C6FC0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c6d60
	ctx.lr = 0x824C0FF4;
	sub_824C6D60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824c1030
	if (!ctx.cr6.eq) goto loc_824C1030;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x824C1008;
	sub_82130E88(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,54
	ctx.r11.s64 = 54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r29,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r29.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824C1030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C1030:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// addi r9,r9,448
	ctx.r9.s64 = ctx.r9.s64 + 448;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// lis r4,-32180
	ctx.r4.s64 = -2108948480;
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// lis r28,-32180
	r28.s64 = -2108948480;
	// lis r27,-32180
	r27.s64 = -2108948480;
	// lis r26,15258
	r26.s64 = 999948288;
	// addi r8,r8,672
	ctx.r8.s64 = ctx.r8.s64 + 672;
	// addi r7,r7,904
	ctx.r7.s64 = ctx.r7.s64 + 904;
	// addi r6,r6,1056
	ctx.r6.s64 = ctx.r6.s64 + 1056;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r5,r5,1208
	ctx.r5.s64 = ctx.r5.s64 + 1208;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,2224
	ctx.r4.s64 = ctx.r4.s64 + 2224;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r3,r3,2720
	ctx.r3.s64 = ctx.r3.s64 + 2720;
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r11,r28,3224
	ctx.r11.s64 = r28.s64 + 3224;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// addi r10,r27,3616
	ctx.r10.s64 = r27.s64 + 3616;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// ori r9,r26,51712
	ctx.r9.u64 = r26.u64 | 51712;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824C5420) {
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
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824447b0
	ctx.lr = 0x824C5444;
	sub_824447B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7468
	ctx.r11.s64 = ctx.r11.s64 + 7468;
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

DEFINE_REX_FUNC(sub_824C6838) {
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
	ctx.lr = 0x824C6840;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// li r28,0
	r28.s64 = 0;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c6970
	if (ctx.cr6.eq) goto loc_824C6970;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x824c6970
	if (!ctx.cr6.eq) goto loc_824C6970;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// b 0x824c6888
	goto loc_824C6888;
loc_824C6880:
	// lwz r5,12(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_824C6888:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824c6880
	if (!ctx.cr6.eq) goto loc_824C6880;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c68fc
	if (ctx.cr6.eq) goto loc_824C68FC;
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_824C68A0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_824C68A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r27,0(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r27,r9
	ctx.r9.u64 = ctx.r9.u64 - r27.u64;
	// beq 0x824c68c8
	if (ctx.cr0.eq) goto loc_824C68C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c68a4
	if (ctx.cr6.eq) goto loc_824C68A4;
loc_824C68C8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824c68f0
	if (!ctx.cr0.eq) goto loc_824C68F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,1
	r29.s64 = 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c68ec
	if (ctx.cr6.lt) goto loc_824C68EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824c68fc
	if (!ctx.cr6.gt) goto loc_824C68FC;
loc_824C68EC:
	// li r28,1
	r28.s64 = 1;
loc_824C68F0:
	// lwzu r11,24(r31)
	ea = 24 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c68a0
	if (!ctx.cr6.eq) goto loc_824C68A0;
loc_824C68FC:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c694c
	if (ctx.cr0.eq) goto loc_824C694C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c6924
	if (ctx.cr0.eq) goto loc_824C6924;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,3000
	ctx.r5.s64 = 3000;
	// addi r6,r11,8036
	ctx.r6.s64 = ctx.r11.s64 + 8036;
	// bl 0x82494e30
	ctx.lr = 0x824C6920;
	sub_82494E30(ctx, base);
	// b 0x824c6970
	goto loc_824C6970;
loc_824C6924:
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c6940
	if (ctx.cr6.eq) goto loc_824C6940;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,7976
	ctx.r6.s64 = ctx.r11.s64 + 7976;
	// b 0x824c6964
	goto loc_824C6964;
loc_824C6940:
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c6978
	goto loc_824C6978;
loc_824C694C:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c695c
	if (!ctx.cr0.eq) goto loc_824C695C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c6978
	goto loc_824C6978;
loc_824C695C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,7940
	ctx.r6.s64 = ctx.r11.s64 + 7940;
loc_824C6964:
	// li r5,3000
	ctx.r5.s64 = 3000;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82494d48
	ctx.lr = 0x824C6970;
	sub_82494D48(ctx, base);
loc_824C6970:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824C6978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824CC928) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CC958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// stw r3,456(r30)
	REX_STORE_U32(r30.u32 + 456, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-15248
	ctx.r8.s64 = ctx.r9.s64 + -15248;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,120(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r6,112(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// stw r5,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lwz r4,316(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 316);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x824cc9cc
	if (!ctx.cr6.eq) goto loc_824CC9CC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r9,r11,-15224
	ctx.r9.s64 = ctx.r11.s64 + -15224;
	// addi r8,r10,-14048
	ctx.r8.s64 = ctx.r10.s64 + -14048;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824CC9C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// b 0x824cc9e8
	goto loc_824CC9E8;
loc_824CC9CC:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r8,r10,-14960
	ctx.r8.s64 = ctx.r10.s64 + -14960;
	// addi r7,r9,-14848
	ctx.r7.s64 = ctx.r9.s64 + -14848;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r7,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r7.u32);
loc_824CC9E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824cc350
	ctx.lr = 0x824CC9F0;
	sub_824CC350(ctx, base);
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

DEFINE_REX_FUNC(sub_824D3818) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-20
	ctx.r10.s64 = ctx.r1.s64 + -20;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824D3828:
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824d3828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D3828;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D49F8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x824D4A00;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a3f64
	ctx.lr = 0x824D4A10;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// vor128 v127,v63,v63
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// vor128 v126,v63,v63
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// vor128 v124,v63,v63
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// lis r29,-128
	r29.s64 = -8388608;
	// bne cr6,0x824d4a8c
	if (!ctx.cr6.eq) goto loc_824D4A8C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vupkd3d128 v63,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v63 = vTemp;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// lvx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4c90
	goto loc_824D4C90;
loc_824D4A8C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r28,r3,28
	r28.s64 = ctx.r3.s64 + 28;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,1
	r30.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	f30.f64 = double(temp.f32);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lvx128 v125,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824D4ACC:
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r10,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d4c80
	if (ctx.cr6.eq) goto loc_824D4C80;
	// lwzx r9,r31,r25
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824d4b00
	if (!ctx.cr6.eq) goto loc_824D4B00;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x824d4b04
	goto loc_824D4B04;
loc_824D4B00:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824D4B04:
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stvx128 v124,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r11,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lvx128 v124,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824d4c08
	if (!ctx.cr6.eq) goto loc_824D4C08;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824d4bbc
	if (ctx.cr6.eq) goto loc_824D4BBC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x824d4bbc
	if (ctx.cr6.eq) goto loc_824D4BBC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx128 v126,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfsx f30,r31,r7
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lvx128 v127,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r31,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// lvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fdivs f0,f31,f13
	ctx.f0.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4c80
	goto loc_824D4C80;
loc_824D4BBC:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r11.u8 & 0x7F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x826a2d40
	ctx.lr = 0x824D4BD4;
	sub_826A2D40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r29,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, r29.u32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v127,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4c80
	goto loc_824D4C80;
loc_824D4C08:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfsx f31,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x824d4c30
	if (ctx.cr6.eq) goto loc_824D4C30;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x824d4c68
	if (!ctx.cr6.eq) goto loc_824D4C68;
loc_824D4C30:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stvx128 v126,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824D4C68:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r29,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, r29.u32);
	// lvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824D4C80:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x824d4acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D4ACC;
	// vmulfp128 v126,v126,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v126.f32, simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v63.f32)));
loc_824D4C90:
	// stvx128 v125,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a41fc
	ctx.lr = 0x824D4CB0;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824EAC18) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r10,19940(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 19940);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,19940(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19940);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lwz r3,19948(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 19948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824EBDE8) {
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
	ctx.lr = 0x824EBDF0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// bne 0x824ebe28
	if (!ctx.cr0.eq) goto loc_824EBE28;
	// lbz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824ebe2c
	if (ctx.cr6.eq) goto loc_824EBE2C;
loc_824EBE28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824EBE2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ec0b8
	if (!ctx.cr0.eq) goto loc_824EC0B8;
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r10,r10,-19672
	ctx.r10.s64 = ctx.r10.s64 + -19672;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eb568
	ctx.lr = 0x824EBE50;
	sub_824EB568(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x824eb648
	ctx.lr = 0x824EBE78;
	sub_824EB648(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,9192
	r28.s64 = ctx.r11.s64 + 9192;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EBE8C;
	sub_824EACE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ebeac
	if (!ctx.cr0.eq) goto loc_824EBEAC;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ebeac
	if (!ctx.cr0.eq) goto loc_824EBEAC;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ebeac
	if (ctx.cr0.eq) goto loc_824EBEAC;
	// li r24,1
	r24.s64 = 1;
loc_824EBEAC:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r26,4
	r26.s64 = 4;
	// addi r30,r10,-19552
	r30.s64 = ctx.r10.s64 + -19552;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x824ebf38
	if (ctx.cr6.lt) goto loc_824EBF38;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	r27.u64 = r25.u64;
	// bne 0x824ebf04
	if (!ctx.cr0.eq) goto loc_824EBF04;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824ebf04
	if (ctx.cr6.eq) goto loc_824EBF04;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 9);
	// bl 0x824ebca0
	ctx.lr = 0x824EBF00;
	sub_824EBCA0(ctx, base);
	// b 0x824ebf38
	goto loc_824EBF38;
loc_824EBF04:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// bl 0x824eb9e0
	ctx.lr = 0x824EBF38;
	sub_824EB9E0(ctx, base);
loc_824EBF38:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x824ebff0
	if (ctx.cr6.lt) goto loc_824EBFF0;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x824ebf64
	if (!ctx.cr0.eq) goto loc_824EBF64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824ebf64
	if (!ctx.cr6.eq) goto loc_824EBF64;
	// li r25,2
	r25.s64 = 2;
loc_824EBF64:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EBF7C;
	sub_824EACE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ebfac
	if (!ctx.cr0.eq) goto loc_824EBFAC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824ebfac
	if (ctx.cr6.eq) goto loc_824EBFAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 10);
	// bl 0x824ebca0
	ctx.lr = 0x824EBFA8;
	sub_824EBCA0(ctx, base);
	// b 0x824ebff0
	goto loc_824EBFF0;
loc_824EBFAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x824ebfc0
	if (ctx.cr6.eq) goto loc_824EBFC0;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_824EBFC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x824eb9e0
	ctx.lr = 0x824EBFF0;
	sub_824EB9E0(ctx, base);
loc_824EBFF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x824ec0b8
	if (ctx.cr6.lt) goto loc_824EC0B8;
	// rlwinm. r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// bne 0x824ec01c
	if (!ctx.cr0.eq) goto loc_824EC01C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824ec01c
	if (!ctx.cr6.eq) goto loc_824EC01C;
	// li r25,3
	r25.s64 = 3;
loc_824EC01C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r30,r11,r27
	r30.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x824eace8
	ctx.lr = 0x824EC034;
	sub_824EACE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ec064
	if (!ctx.cr0.eq) goto loc_824EC064;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824ec064
	if (ctx.cr6.eq) goto loc_824EC064;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x824ebca0
	ctx.lr = 0x824EC060;
	sub_824EBCA0(ctx, base);
	// b 0x824ec0b8
	goto loc_824EC0B8;
loc_824EC064:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// beq cr6,0x824ec080
	if (ctx.cr6.eq) goto loc_824EC080;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x824ec080
	if (!ctx.cr6.eq) goto loc_824EC080;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x824ec088
	goto loc_824EC088;
loc_824EC080:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_824EC088:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x824eb9e0
	ctx.lr = 0x824EC0B8;
	sub_824EB9E0(ctx, base);
loc_824EC0B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82504EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82504F00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82504f20
	if (!ctx.cr0.eq) goto loc_82504F20;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82504f2c
	goto loc_82504F2C;
loc_82504F20:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82504F2C:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82504fa0
	if (!ctx.cr6.gt) goto loc_82504FA0;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r29,r11,27,5,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7d10
	ctx.lr = 0x82504F4C;
	sub_824F7D10(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82504f94
	if (ctx.cr0.eq) goto loc_82504F94;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82504F78;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82504F90;
	sub_824E4308(ctx, base);
	// b 0x82504f9c
	goto loc_82504F9C;
loc_82504F94:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82504F9C:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_82504FA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8250BEF0) {
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
	ctx.lr = 0x8250BEF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r27,r4,16
	r27.s64 = ctx.r4.s64 + 16;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250c094
	if (!ctx.cr0.eq) goto loc_8250C094;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250c094
	if (ctx.cr0.eq) goto loc_8250C094;
loc_8250BF1C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8250c078
	if (!ctx.cr6.eq) goto loc_8250C078;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r4,18(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8250BF38;
	sub_825164C0(ctx, base);
	// lwz r31,4(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne 0x8250c078
	if (!ctx.cr0.eq) goto loc_8250C078;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250c078
	if (ctx.cr0.eq) goto loc_8250C078;
loc_8250BF54:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x8250c078
	if (ctx.cr6.eq) goto loc_8250C078;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8250bffc
	if (!ctx.cr6.eq) goto loc_8250BFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r4,18(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8250BF78;
	sub_825164C0(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8250bffc
	if (!ctx.cr6.eq) goto loc_8250BFFC;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8250BF84:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250bfe8
	if (ctx.cr6.eq) goto loc_8250BFE8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250bfd4
	if (ctx.cr6.eq) goto loc_8250BFD4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8250bfb4
	goto loc_8250BFB4;
loc_8250BFAC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8250BFB4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8250bfac
	if (!ctx.cr6.eq) goto loc_8250BFAC;
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
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
loc_8250BFD4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8250bf84
	if (!ctx.cr6.eq) goto loc_8250BF84;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8250bf84
	goto loc_8250BF84;
loc_8250BFE8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c2288
	ctx.lr = 0x8250BFFC;
	sub_825C2288(ctx, base);
loc_8250BFFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8250c030
	if (ctx.cr6.eq) goto loc_8250C030;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8250c04c
	if (ctx.cr6.eq) goto loc_8250C04C;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250c078
	if (!ctx.cr0.eq) goto loc_8250C078;
	// b 0x8250c06c
	goto loc_8250C06C;
loc_8250C030:
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
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8250c064
	if (!ctx.cr6.eq) goto loc_8250C064;
loc_8250C04C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250c078
	if (!ctx.cr0.eq) goto loc_8250C078;
	// b 0x8250c070
	goto loc_8250C070;
loc_8250C064:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250c078
	if (!ctx.cr6.eq) goto loc_8250C078;
loc_8250C06C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8250C070:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250bf54
	if (!ctx.cr6.eq) goto loc_8250BF54;
loc_8250C078:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250c094
	if (!ctx.cr0.eq) goto loc_8250C094;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250bf1c
	if (!ctx.cr6.eq) goto loc_8250BF1C;
loc_8250C094:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82523730) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82523750
	if (ctx.cr6.lt) goto loc_82523750;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82523754
	if (!ctx.cr6.gt) goto loc_82523754;
loc_82523750:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82523754:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252378c
	if (ctx.cr0.eq) goto loc_8252378C;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252378c
	if (!ctx.cr0.eq) goto loc_8252378C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252378c
	if (ctx.cr6.eq) goto loc_8252378C;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi. r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8252378c
	if (!ctx.cr0.eq) goto loc_8252378C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8252378C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x825237a8
	if (ctx.cr6.lt) goto loc_825237A8;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825237ac
	if (!ctx.cr6.gt) goto loc_825237AC;
loc_825237A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825237AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825237e4
	if (ctx.cr0.eq) goto loc_825237E4;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825237e4
	if (!ctx.cr0.eq) goto loc_825237E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825237e4
	if (ctx.cr6.eq) goto loc_825237E4;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi. r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825237e4
	if (!ctx.cr0.eq) goto loc_825237E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825237E4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82530160) {
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
	ctx.lr = 0x82530168;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r4,44
	r30.s64 = ctx.r4.s64 + 44;
loc_82530180:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825301ec
	if (!ctx.cr6.lt) goto loc_825301EC;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825301b4
	if (ctx.cr6.eq) goto loc_825301B4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825301b8
	if (!ctx.cr6.eq) goto loc_825301B8;
loc_825301B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825301B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825301e0
	if (ctx.cr0.eq) goto loc_825301E0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x825301DC;
	sub_8252DEA8(ctx, base);
	// or r31,r3,r31
	r31.u64 = ctx.r3.u64 | r31.u64;
loc_825301E0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82530180
	goto loc_82530180;
loc_825301EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82530204
	if (ctx.cr6.eq) goto loc_82530204;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8252ffc8
	ctx.lr = 0x82530204;
	sub_8252FFC8(ctx, base);
loc_82530204:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82536980) {
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
	ctx.lr = 0x82536988;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825369a8
	if (!ctx.cr6.eq) goto loc_825369A8;
	// lwz r21,540(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 540);
loc_825369A8:
	// lwz r4,652(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 652);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825369e4
	if (!ctx.cr0.eq) goto loc_825369E4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825369e4
	if (ctx.cr0.eq) goto loc_825369E4;
loc_825369C4:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825369e4
	if (!ctx.cr0.eq) goto loc_825369E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825369c4
	if (!ctx.cr6.eq) goto loc_825369C4;
loc_825369E4:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bne cr6,0x825369f4
	if (!ctx.cr6.eq) goto loc_825369F4;
loc_825369EC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// b 0x82536cc0
	goto loc_82536CC0;
loc_825369F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255db50
	ctx.lr = 0x825369FC;
	sub_8255DB50(ctx, base);
	// subf r27,r23,r31
	r27.u64 = r31.u64 - r23.u64;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82536A08:
	// li r29,0
	r29.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x82536b7c
	if (ctx.cr0.eq) goto loc_82536B7C;
loc_82536A20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a050
	ctx.lr = 0x82536A28;
	sub_8255A050(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r11,25,25,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r30,115
	ctx.cr6.compare<uint32_t>(r30.u32, 115, ctx.xer);
	// beq cr6,0x82536b74
	if (ctx.cr6.eq) goto loc_82536B74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82536A48;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq 0x82536a60
	if (ctx.cr0.eq) goto loc_82536A60;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c2510
	ctx.lr = 0x82536A5C;
	sub_825C2510(ctx, base);
	// b 0x82536b60
	goto loc_82536B60;
loc_82536A60:
	// cmplwi cr6,r30,110
	ctx.cr6.compare<uint32_t>(r30.u32, 110, ctx.xer);
	// bne cr6,0x82536b68
	if (!ctx.cr6.eq) goto loc_82536B68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8255ea00
	ctx.lr = 0x82536A74;
	sub_8255EA00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82536b74
	if (ctx.cr0.eq) goto loc_82536B74;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536af8
	if (ctx.cr0.eq) goto loc_82536AF8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82536A9C;
	sub_82516448(ctx, base);
	// sth r3,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82536ad4
	if (!ctx.cr0.eq) goto loc_82536AD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536ad4
	if (ctx.cr0.eq) goto loc_82536AD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82536ae0
	if (!ctx.cr6.gt) goto loc_82536AE0;
loc_82536AD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82536ADC;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82536AE0:
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
loc_82536AF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r30,r11,13,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82536b20
	if (ctx.cr0.eq) goto loc_82536B20;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
loc_82536B10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82536b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82536B10;
loc_82536B20:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c2288
	ctx.lr = 0x82536B34;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82536b60
	if (ctx.cr6.eq) goto loc_82536B60;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_82536B48:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzu r4,4(r29)
	ea = 4 + r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r5,660(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 660);
	// bl 0x8254f8d8
	ctx.lr = 0x82536B58;
	sub_8254F8D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82536b48
	if (!ctx.cr0.eq) goto loc_82536B48;
loc_82536B60:
	// li r29,1
	r29.s64 = 1;
	// b 0x82536b74
	goto loc_82536B74;
loc_82536B68:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,660(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 660);
	// bl 0x8254f8d8
	ctx.lr = 0x82536B74;
	sub_8254F8D8(ctx, base);
loc_82536B74:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82536a20
	if (!ctx.cr6.eq) goto loc_82536A20;
loc_82536B7C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82536a08
	if (!ctx.cr0.eq) goto loc_82536A08;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825369ec
	if (ctx.cr0.eq) goto loc_825369EC;
	// lwz r10,652(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 652);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82536bc8
	if (!ctx.cr0.eq) goto loc_82536BC8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82536bc8
	if (ctx.cr0.eq) goto loc_82536BC8;
loc_82536BA8:
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82536bc8
	if (!ctx.cr0.eq) goto loc_82536BC8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82536ba8
	if (!ctx.cr6.eq) goto loc_82536BA8;
loc_82536BC8:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// ble cr6,0x82536c5c
	if (!ctx.cr6.gt) goto loc_82536C5C;
	// subf r30,r23,r11
	r30.u64 = ctx.r11.u64 - r23.u64;
loc_82536BD4:
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536bec
	if (ctx.cr0.eq) goto loc_82536BEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82536bf8
	goto loc_82536BF8;
loc_82536BEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82536BF8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
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
	// bne 0x82536c48
	if (!ctx.cr0.eq) goto loc_82536C48;
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
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82536C48;
	sub_824E4308(ctx, base);
loc_82536C48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne 0x82536bd4
	if (!ctx.cr0.eq) goto loc_82536BD4;
loc_82536C5C:
	// lwz r31,540(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 540);
	// addi r30,r26,540
	r30.s64 = r26.s64 + 540;
	// b 0x82536cb4
	goto loc_82536CB4;
loc_82536C68:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536c7c
	if (ctx.cr0.eq) goto loc_82536C7C;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// b 0x82536cb0
	goto loc_82536CB0;
loc_82536C7C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82536C9C;
	sub_824F71B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f7a20
	ctx.lr = 0x82536CB0;
	sub_824F7A20(ctx, base);
loc_82536CB0:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82536CB4:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(r31.u32, r21.u32, ctx.xer);
	// bne cr6,0x82536c68
	if (!ctx.cr6.eq) goto loc_82536C68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82536CC0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8255BCA0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x8255BCA8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255bd58
	if (ctx.cr6.eq) goto loc_8255BD58;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x8255bcec
	if (!ctx.cr6.gt) goto loc_8255BCEC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7c98
	ctx.lr = 0x8255BCE4;
	sub_824F7C98(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x8255bd58
	goto loc_8255BD58;
loc_8255BCEC:
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8255bd10
	if (ctx.cr6.lt) goto loc_8255BD10;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x8255bd54
	goto loc_8255BD54;
loc_8255BD10:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255bd48
	if (ctx.cr6.eq) goto loc_8255BD48;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8255BD40;
	sub_826A2E60(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8255bd54
	goto loc_8255BD54;
loc_8255BD48:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7378
	ctx.lr = 0x8255BD50;
	sub_824F7378(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8255BD54:
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
loc_8255BD58:
	// lwz r31,4(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255be50
	if (!ctx.cr0.eq) goto loc_8255BE50;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8255be50
	if (ctx.cr0.eq) goto loc_8255BE50;
loc_8255BD70:
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r6,r30,16
	ctx.r6.s64 = r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82558598
	ctx.lr = 0x8255BD8C;
	sub_82558598(ctx, base);
	// add r29,r3,r19
	r29.u64 = ctx.r3.u64 + r19.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r6,r30,24
	ctx.r6.s64 = r30.s64 + 24;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82558598
	ctx.lr = 0x8255BDA8;
	sub_82558598(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82558598
	ctx.lr = 0x8255BDC4;
	sub_82558598(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// add r19,r3,r29
	r19.u64 = ctx.r3.u64 + r29.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255be38
	if (ctx.cr0.eq) goto loc_8255BE38;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255be38
	if (!ctx.cr6.eq) goto loc_8255BE38;
	// lwz r11,744(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255be1c
	if (ctx.cr6.eq) goto loc_8255BE1C;
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,32(r23)
	REX_STORE_U32(r23.u32 + 32, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// bl 0x824f72e8
	ctx.lr = 0x8255BE08;
	sub_824F72E8(ctx, base);
	// stw r3,752(r23)
	REX_STORE_U32(r23.u32 + 752, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82583f38
	ctx.lr = 0x8255BE14;
	sub_82583F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r23)
	REX_STORE_U32(r23.u32 + 32, ctx.r11.u32);
loc_8255BE1C:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 36);
	// rlwinm r11,r11,2,11,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFC;
	// stwx r10,r11,r22
	REX_STORE_U32(ctx.r11.u32 + r22.u32, ctx.r10.u32);
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r23)
	REX_STORE_U32(r23.u32 + 36, ctx.r11.u32);
loc_8255BE38:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255be50
	if (!ctx.cr0.eq) goto loc_8255BE50;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255bd70
	if (!ctx.cr6.eq) goto loc_8255BD70;
loc_8255BE50:
	// lwz r31,4(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255bec4
	if (!ctx.cr0.eq) goto loc_8255BEC4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8255bec4
	if (ctx.cr0.eq) goto loc_8255BEC4;
loc_8255BE64:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82552308
	ctx.lr = 0x8255BE7C;
	sub_82552308(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82552308
	ctx.lr = 0x8255BE94;
	sub_82552308(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82552308
	ctx.lr = 0x8255BEAC;
	sub_82552308(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255bec4
	if (!ctx.cr0.eq) goto loc_8255BEC4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255be64
	if (!ctx.cr6.eq) goto loc_8255BE64;
loc_8255BEC4:
	// lwz r31,4(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c1d0
	if (!ctx.cr0.eq) goto loc_8255C1D0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8255c1d0
	if (ctx.cr0.eq) goto loc_8255C1D0;
loc_8255BED8:
	// lwz r26,80(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// addi r25,r31,92
	r25.s64 = r31.s64 + 92;
	// subf r24,r31,r26
	r24.u64 = r26.u64 - r31.u64;
loc_8255BEE8:
	// lwzx r29,r24,r25
	r29.u64 = REX_LOAD_U32(r24.u32 + r25.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8255bfac
	if (ctx.cr6.eq) goto loc_8255BFAC;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255bf2c
	if (ctx.cr0.eq) goto loc_8255BF2C;
	// b 0x8255bf18
	goto loc_8255BF18;
loc_8255BF00:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ae78
	ctx.lr = 0x8255BF0C;
	sub_8250AE78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255bf28
	if (ctx.cr0.eq) goto loc_8255BF28;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_8255BF18:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255bf00
	if (ctx.cr0.eq) goto loc_8255BF00;
	// b 0x8255bf2c
	goto loc_8255BF2C;
loc_8255BF28:
	// li r29,0
	r29.s64 = 0;
loc_8255BF2C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8255bfac
	if (ctx.cr6.eq) goto loc_8255BFAC;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r30,32(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255bf54
	if (ctx.cr6.eq) goto loc_8255BF54;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8255BF54;
	sub_8250B4D8(ctx, base);
loc_8255BF54:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x8255bf9c
	goto loc_8255BF9C;
loc_8255BF6C:
	// lwz r27,12(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255bf98
	if (ctx.cr0.eq) goto loc_8255BF98;
	// lwz r29,32(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 32);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8255BF94;
	sub_8250B4D8(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8255BF98:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8255BF9C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250ae78
	ctx.lr = 0x8255BFA4;
	sub_8250AE78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8255bf6c
	if (!ctx.cr0.eq) goto loc_8255BF6C;
loc_8255BFAC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// ble cr6,0x8255bee8
	if (!ctx.cr6.gt) goto loc_8255BEE8;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c040
	if (ctx.cr0.eq) goto loc_8255C040;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c034
	if (ctx.cr0.eq) goto loc_8255C034;
	// lwz r30,8(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 8);
loc_8255BFD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255c040
	if (ctx.cr6.eq) goto loc_8255C040;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x8255BFEC;
	sub_8250B3D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255c024
	if (ctx.cr0.eq) goto loc_8255C024;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255c024
	if (ctx.cr0.eq) goto loc_8255C024;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8255c018
	if (ctx.cr6.eq) goto loc_8255C018;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8255c01c
	if (!ctx.cr6.eq) goto loc_8255C01C;
loc_8255C018:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255C01C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c02c
	if (!ctx.cr0.eq) goto loc_8255C02C;
loc_8255C024:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// b 0x8255bfd4
	goto loc_8255BFD4;
loc_8255C02C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8255c040
	if (ctx.cr6.eq) goto loc_8255C040;
loc_8255C034:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8255C040:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c058
	if (ctx.cr0.eq) goto loc_8255C058;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8255C058:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c070
	if (ctx.cr0.eq) goto loc_8255C070;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8255C070:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8255c098
	if (ctx.cr6.eq) goto loc_8255C098;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c098
	if (ctx.cr0.eq) goto loc_8255C098;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_8255C098:
	// lwz r10,68(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 68);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwimi r11,r10,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255c158
	if (ctx.cr0.eq) goto loc_8255C158;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwimi r10,r11,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwimi r11,r9,0,10,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r11.u64 & 0x400000);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwimi r11,r10,0,9,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r11.u64 & 0x800000);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,112(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 112);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lwz r10,76(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwimi r10,r11,0,8,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF) | (ctx.r10.u64 & 0x1000000);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwimi r11,r10,0,7,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF) | (ctx.r11.u64 & 0x2000000);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255c138
	if (ctx.cr6.eq) goto loc_8255C138;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bne cr6,0x8255c138
	if (!ctx.cr6.eq) goto loc_8255C138;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_8255C138:
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255c158
	if (ctx.cr6.eq) goto loc_8255C158;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bne cr6,0x8255c158
	if (!ctx.cr6.eq) goto loc_8255C158;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_8255C158:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwimi r9,r11,0,4,4
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,48(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwimi r9,r7,0,6,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000) | (ctx.r9.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r9,48(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r7,r9,0,7,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000) | (ctx.r7.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// lwz r9,68(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 68);
	// rlwimi r9,r8,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lwz r9,68(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 68);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwimi r8,r9,0,1,1
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000) | (ctx.r8.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r8,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// lwz r9,76(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwimi r9,r11,0,4,2
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF) | (ctx.r9.u64 & 0x10000000);
	// stw r9,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c1d0
	if (!ctx.cr0.eq) goto loc_8255C1D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255bed8
	if (!ctx.cr6.eq) goto loc_8255BED8;
loc_8255C1D0:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255c36c
	if (!ctx.cr0.eq) goto loc_8255C36C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255c36c
	if (ctx.cr0.eq) goto loc_8255C36C;
loc_8255C1E8:
	// lwz r28,80(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 80);
	// lwz r29,8(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_8255C1F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8255c27c
	if (ctx.cr6.eq) goto loc_8255C27C;
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255c260
	if (!ctx.cr6.eq) goto loc_8255C260;
	// beq 0x8255c258
	if (ctx.cr0.eq) goto loc_8255C258;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x8255C21C;
	sub_8250B3D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8255c258
	if (ctx.cr0.eq) goto loc_8255C258;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c258
	if (!ctx.cr0.eq) goto loc_8255C258;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255C248;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255c274
	if (ctx.cr6.eq) goto loc_8255C274;
loc_8255C258:
	// lwz r30,80(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 80);
	// b 0x8255c264
	goto loc_8255C264;
loc_8255C260:
	// bne 0x8255c274
	if (!ctx.cr0.eq) goto loc_8255C274;
loc_8255C264:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c6930
	ctx.lr = 0x8255C274;
	sub_825C6930(ctx, base);
loc_8255C274:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x8255c1f0
	goto loc_8255C1F0;
loc_8255C27C:
	// lwz r31,12(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 12);
loc_8255C280:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8255c2b4
	if (ctx.cr6.eq) goto loc_8255C2B4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// beq cr6,0x8255c2ac
	if (ctx.cr6.eq) goto loc_8255C2AC;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c2ac
	if (!ctx.cr0.eq) goto loc_8255C2AC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255C2AC;
	sub_825C69A0(ctx, base);
loc_8255C2AC:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8255c280
	goto loc_8255C280;
loc_8255C2B4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x8255C2C0;
	sub_8250B3D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8255c350
	if (ctx.cr0.eq) goto loc_8255C350;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8255C2E0;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bne cr6,0x8255c304
	if (!ctx.cr6.eq) goto loc_8255C304;
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8255c350
	goto loc_8255C350;
loc_8255C304:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c350
	if (!ctx.cr0.eq) goto loc_8255C350;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
loc_8255C314:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255c338
	if (ctx.cr6.eq) goto loc_8255C338;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255c330
	if (ctx.cr6.eq) goto loc_8255C330;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8255c314
	goto loc_8255C314;
loc_8255C330:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8255c33c
	goto loc_8255C33C;
loc_8255C338:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255C33C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c350
	if (!ctx.cr0.eq) goto loc_8255C350;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8255C350;
	sub_825C69A0(ctx, base);
loc_8255C350:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255c36c
	if (!ctx.cr0.eq) goto loc_8255C36C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255c1e8
	if (!ctx.cr6.eq) goto loc_8255C1E8;
loc_8255C36C:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255c3d4
	if (!ctx.cr0.eq) goto loc_8255C3D4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255c3d4
	if (ctx.cr0.eq) goto loc_8255C3D4;
loc_8255C380:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255c39c
	if (ctx.cr6.eq) goto loc_8255C39C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8255c3a0
	if (!ctx.cr6.eq) goto loc_8255C3A0;
loc_8255C39C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255C3A0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255c3bc
	if (ctx.cr0.eq) goto loc_8255C3BC;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwimi r10,r9,0,6,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF) | (ctx.r10.u64 & 0x4000000);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8255C3BC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255c3d4
	if (!ctx.cr0.eq) goto loc_8255C3D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255c380
	if (!ctx.cr6.eq) goto loc_8255C380;
loc_8255C3D4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_825A6918) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825a6954
	if (ctx.cr6.lt) goto loc_825A6954;
	// beq cr6,0x825a695c
	if (ctx.cr6.eq) goto loc_825A695C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825a6948
	if (ctx.cr6.lt) goto loc_825A6948;
	// bne cr6,0x825a695c
	if (!ctx.cr6.eq) goto loc_825A695C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// b 0x825a695c
	goto loc_825A695C;
loc_825A6948:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,4
	ctx.r3.u64 = ctx.r11.u64 | 4;
	// b 0x825a695c
	goto loc_825A695C;
loc_825A6954:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,12
	ctx.r3.u64 = ctx.r11.u64 | 12;
loc_825A695C:
	// rlwinm r11,r10,24,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825a698c
	if (ctx.cr6.lt) goto loc_825A698C;
	// beq cr6,0x825a6980
	if (ctx.cr6.eq) goto loc_825A6980;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x825a6994
	if (!ctx.cr6.eq) goto loc_825A6994;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// b 0x825a6994
	goto loc_825A6994;
loc_825A6980:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,48
	ctx.r3.u64 = ctx.r11.u64 | 48;
	// b 0x825a6994
	goto loc_825A6994;
loc_825A698C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
loc_825A6994:
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825a69c4
	if (ctx.cr6.lt) goto loc_825A69C4;
	// beq cr6,0x825a69b8
	if (ctx.cr6.eq) goto loc_825A69B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,192
	ctx.r3.u64 = ctx.r11.u64 | 192;
	// blr 
	return;
loc_825A69B8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,128
	ctx.r3.u64 = ctx.r11.u64 | 128;
	// blr 
	return;
loc_825A69C4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r11,64
	ctx.r3.u64 = ctx.r11.u64 | 64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825AF558) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825AF578;
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

DEFINE_REX_FUNC(sub_825B3250) {
	REX_FUNC_PROLOGUE();
	// lwz r3,1488(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_825B3268) {
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
	// lwz r3,2736(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2736);
	// bl 0x825d79a0
	ctx.lr = 0x825B3284;
	sub_825D79A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,1488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B32B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_825B3528) {
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
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3590
	if (ctx.cr0.eq) goto loc_825B3590;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825b3590
	if (!ctx.cr6.eq) goto loc_825B3590;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x826a2e60
	ctx.lr = 0x825B3568;
	sub_826A2E60(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_825B3590:
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

DEFINE_REX_FUNC(sub_825B3DD8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,1536(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1536);
	// bl 0x824f0d40
	ctx.lr = 0x825B3DF4;
	sub_824F0D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b3e20
	if (ctx.cr0.eq) goto loc_825B3E20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-4368
	ctx.r6.s64 = ctx.r11.s64 + -4368;
	// addi r5,r10,-7244
	ctx.r5.s64 = ctx.r10.s64 + -7244;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B3E20;
	sub_824EA978(ctx, base);
loc_825B3E20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B4FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca8
	ctx.lr = 0x825B5000;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16640(r1)
	ea = -16640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,16660(r1)
	REX_STORE_U32(ctx.r1.u32 + 16660, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,16668(r1)
	REX_STORE_U32(ctx.r1.u32 + 16668, ctx.r4.u32);
	// stw r5,16676(r1)
	REX_STORE_U32(ctx.r1.u32 + 16676, ctx.r5.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x825b4030
	ctx.lr = 0x825B5034;
	sub_825B4030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b40e0
	ctx.lr = 0x825B503C;
	sub_825B40E0(ctx, base);
	// stw r29,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b49d0
	ctx.lr = 0x825B504C;
	sub_825B49D0(ctx, base);
	// stw r3,1488(r31)
	REX_STORE_U32(r31.u32 + 1488, ctx.r3.u32);
	// li r27,1
	r27.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// bl 0x826a4760
	ctx.lr = 0x825B5060;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// lwz r31,16660(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 16660);
	// lwz r25,16668(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 16668);
	// li r26,0
	r26.s64 = 0;
	// lwz r24,116(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b51d0
	if (!ctx.cr0.eq) goto loc_825B51D0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,16676(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 16676);
	// bl 0x825de888
	ctx.lr = 0x825B5084;
	sub_825DE888(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq 0x825b50a4
	if (ctx.cr0.eq) goto loc_825B50A4;
	// stb r26,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r26.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825b50a8
	goto loc_825B50A8;
loc_825B50A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825B50A8:
	// bl 0x824f0200
	ctx.lr = 0x825B50AC;
	sub_824F0200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b4408
	ctx.lr = 0x825B50B8;
	sub_825B4408(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825de868
	ctx.lr = 0x825B50C0;
	sub_825DE868(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825B50CC;
	sub_825B3528(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,1620(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1620);
	// lwz r4,1540(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// bl 0x824f0470
	ctx.lr = 0x825B50DC;
	sub_824F0470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b5108
	if (ctx.cr0.eq) goto loc_825B5108;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-4368
	ctx.r6.s64 = ctx.r11.s64 + -4368;
	// addi r5,r10,-9588
	ctx.r5.s64 = ctx.r10.s64 + -9588;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1094
	ctx.r7.s64 = 1094;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5108;
	sub_824EA978(ctx, base);
loc_825B5108:
	// lwz r30,1540(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r29,r11,25636
	r29.s64 = ctx.r11.s64 + 25636;
	// addi r28,r10,-14552
	r28.s64 = ctx.r10.s64 + -14552;
	// beq cr6,0x825b5174
	if (ctx.cr6.eq) goto loc_825B5174;
	// lbz r11,2129(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2129);
	// stw r26,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, r26.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b5174
	if (ctx.cr0.eq) goto loc_825B5174;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-3740
	ctx.r4.s64 = ctx.r11.s64 + -3740;
	// bl 0x82130e88
	ctx.lr = 0x825B5144;
	sub_82130E88(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826a2e60
	ctx.lr = 0x825B5154;
	sub_826A2E60(ctx, base);
	// stw r31,8336(r1)
	REX_STORE_U32(ctx.r1.u32 + 8336, r31.u32);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,1620(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1620);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824ece98
	ctx.lr = 0x825B5170;
	sub_824ECE98(ctx, base);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
loc_825B5174:
	// lwz r30,1544(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825b51d0
	if (ctx.cr6.eq) goto loc_825B51D0;
	// lbz r11,2129(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2129);
	// stw r27,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b51d0
	if (ctx.cr0.eq) goto loc_825B51D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-3760
	ctx.r4.s64 = ctx.r11.s64 + -3760;
	// bl 0x82130e88
	ctx.lr = 0x825B51A0;
	sub_82130E88(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x826a2e60
	ctx.lr = 0x825B51B0;
	sub_826A2E60(ctx, base);
	// stw r31,16560(r1)
	REX_STORE_U32(ctx.r1.u32 + 16560, r31.u32);
	// stw r28,8352(r1)
	REX_STORE_U32(ctx.r1.u32 + 8352, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1624);
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// bl 0x824ece98
	ctx.lr = 0x825B51CC;
	sub_824ECE98(ctx, base);
	// stw r29,8352(r1)
	REX_STORE_U32(ctx.r1.u32 + 8352, r29.u32);
loc_825B51D0:
	// lwz r4,1620(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1620);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b51ec
	if (ctx.cr6.eq) goto loc_825B51EC;
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// lwz r3,1444(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B51EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B51EC:
	// stw r26,1540(r31)
	REX_STORE_U32(r31.u32 + 1540, r26.u32);
	// stw r26,1620(r31)
	REX_STORE_U32(r31.u32 + 1620, r26.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b5210
	if (ctx.cr6.eq) goto loc_825B5210;
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// lwz r3,1444(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B5210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B5210:
	// stw r26,1624(r31)
	REX_STORE_U32(r31.u32 + 1624, r26.u32);
	// stw r26,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, r26.u32);
	// lwz r27,1364(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 1364);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x825b545c
	if (!ctx.cr6.eq) goto loc_825B545C;
	// lbz r11,2025(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2025);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b5258
	if (ctx.cr0.eq) goto loc_825B5258;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b5258
	if (!ctx.cr0.eq) goto loc_825B5258;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b5258
	if (!ctx.cr0.eq) goto loc_825B5258;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b5258
	if (!ctx.cr0.eq) goto loc_825B5258;
	// li r26,2
	r26.s64 = 2;
loc_825B5258:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b52c0
	if (!ctx.cr6.eq) goto loc_825B52C0;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b5288
	if (!ctx.cr0.eq) goto loc_825B5288;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b5288
	if (ctx.cr0.eq) goto loc_825B5288;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b5288
	if (!ctx.cr0.eq) goto loc_825B5288;
	// li r26,3
	r26.s64 = 3;
loc_825B5288:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b52c0
	if (!ctx.cr6.eq) goto loc_825B52C0;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b52b8
	if (ctx.cr0.eq) goto loc_825B52B8;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b52b8
	if (!ctx.cr0.eq) goto loc_825B52B8;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b52b8
	if (!ctx.cr0.eq) goto loc_825B52B8;
	// li r26,4
	r26.s64 = 4;
loc_825B52B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b52f0
	if (ctx.cr6.eq) goto loc_825B52F0;
loc_825B52C0:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b52e8
	if (ctx.cr0.eq) goto loc_825B52E8;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b52e8
	if (!ctx.cr0.eq) goto loc_825B52E8;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b52e8
	if (!ctx.cr0.eq) goto loc_825B52E8;
	// li r26,5
	r26.s64 = 5;
loc_825B52E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b5348
	if (!ctx.cr6.eq) goto loc_825B5348;
loc_825B52F0:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b5318
	if (ctx.cr0.eq) goto loc_825B5318;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b5318
	if (ctx.cr0.eq) goto loc_825B5318;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b5318
	if (!ctx.cr0.eq) goto loc_825B5318;
	// li r26,6
	r26.s64 = 6;
loc_825B5318:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b5348
	if (!ctx.cr6.eq) goto loc_825B5348;
	// lbz r11,2026(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825b5348
	if (!ctx.cr0.eq) goto loc_825B5348;
	// lbz r11,2027(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825b5348
	if (!ctx.cr0.eq) goto loc_825B5348;
	// lbz r11,2028(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b5348
	if (ctx.cr0.eq) goto loc_825B5348;
	// li r26,7
	r26.s64 = 7;
loc_825B5348:
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// lwz r10,1784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x825b5360
	if (ctx.cr6.gt) goto loc_825B5360;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_825B5360:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r9,1860(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// lbz r8,2024(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 2024);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r30,1940(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1940);
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825b5388
	if (ctx.cr0.eq) goto loc_825B5388;
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
loc_825B5388:
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,1700(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1700);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b53e0
	if (ctx.cr0.eq) goto loc_825B53E0;
	// li r4,1978
	ctx.r4.s64 = 1978;
	// bl 0x824f07b0
	ctx.lr = 0x825B53A4;
	sub_824F07B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B53B4;
	sub_824F07B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B53C4;
	sub_824F07B0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B53D4;
	sub_824F07B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// b 0x825b5440
	goto loc_825B5440;
loc_825B53E0:
	// li r4,1979
	ctx.r4.s64 = 1979;
	// bl 0x824f07b0
	ctx.lr = 0x825B53E8;
	sub_824F07B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B53F8;
	sub_824F07B0(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 2029);
	// bl 0x824f07b0
	ctx.lr = 0x825B5408;
	sub_824F07B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B5418;
	sub_824F07B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B5428;
	sub_824F07B0(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2032);
	// bl 0x824f07b0
	ctx.lr = 0x825B5438;
	sub_824F07B0(ctx, base);
	// lbz r5,2030(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 2030);
	// li r4,1989
	ctx.r4.s64 = 1989;
loc_825B5440:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B5448;
	sub_824F07B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x82130e88
	ctx.lr = 0x825B5458;
	sub_82130E88(ctx, base);
	// bl 0x825b3ec0
	ctx.lr = 0x825B545C;
	sub_825B3EC0(ctx, base);
loc_825B545C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825b3ba8
	ctx.lr = 0x825B5468;
	sub_825B3BA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,16640
	ctx.r1.s64 = ctx.r1.s64 + 16640;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825CDB88) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cdc58
	if (!ctx.cr6.lt) goto loc_825CDC58;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20232);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_825CDBEC:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
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
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cdbec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDBEC;
loc_825CDC58:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cdc74
	if (ctx.cr6.eq) goto loc_825CDC74;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CDC74;
	sub_825C73B8(ctx, base);
loc_825CDC74:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cdc90
	if (ctx.cr6.eq) goto loc_825CDC90;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CDC90;
	sub_825C7788(ctx, base);
loc_825CDC90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D0570) {
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
	ctx.lr = 0x825D0578;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// add r25,r11,r5
	r25.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r27,r4,r11
	r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bne cr6,0x825d05f0
	if (!ctx.cr6.eq) goto loc_825D05F0;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r9,224(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x825d05c8
	if (!ctx.cr6.gt) goto loc_825D05C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825D05C8:
	// bl 0x822f6280
	ctx.lr = 0x825D05CC;
	sub_822F6280(ctx, base);
	// stw r3,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d0b24
	if (ctx.cr0.eq) goto loc_825D0B24;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x825D05F0;
	sub_826A2E60(ctx, base);
loc_825D05F0:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r21,0
	r21.s64 = 0;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// subf r8,r10,r27
	ctx.r8.u64 = r27.u64 - ctx.r10.u64;
	// lwz r10,248(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d066c
	if (!ctx.cr6.eq) goto loc_825D066C;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d064c
	if (!ctx.cr6.gt) goto loc_825D064C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825D064C:
	// bl 0x822f6280
	ctx.lr = 0x825D0650;
	sub_822F6280(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0b24
	if (ctx.cr6.eq) goto loc_825D0B24;
	// stw r21,0(r26)
	REX_STORE_U32(r26.u32 + 0, r21.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_825D066C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d082c
	if (!ctx.cr6.eq) goto loc_825D082C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r24,r27,0,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825d069c
	if (!ctx.cr6.lt) goto loc_825D069C;
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x825d06b4
	if (ctx.cr6.gt) goto loc_825D06B4;
loc_825D069C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825d0730
	if (!ctx.cr6.gt) goto loc_825D0730;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d0730
	if (!ctx.cr6.lt) goto loc_825D0730;
loc_825D06B4:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x825d07ec
	if (!ctx.cr6.lt) goto loc_825D07EC;
loc_825D06FC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,256
	r29.s64 = r29.s64 + 256;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d06fc
	if (ctx.cr6.lt) goto loc_825D06FC;
	// b 0x825d07ec
	goto loc_825D07EC;
loc_825D0730:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d078c
	if (!ctx.cr6.lt) goto loc_825D078C;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825d078c
	if (!ctx.cr6.gt) goto loc_825D078C;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D078C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D078C:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d07ec
	if (!ctx.cr6.gt) goto loc_825D07EC;
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825d07ec
	if (!ctx.cr6.lt) goto loc_825D07EC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D07EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D07EC:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825D07F8:
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825d0814
	if (ctx.cr6.lt) goto loc_825D0814;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825d0824
	if (ctx.cr6.lt) goto loc_825D0824;
loc_825D0814:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_825D0824:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825d07f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D07F8;
loc_825D082C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d0848
	if (ctx.cr6.eq) goto loc_825D0848;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82408848
	ctx.lr = 0x825D0844;
	sub_82408848(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_825D0848:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d0864
	if (ctx.cr6.eq) goto loc_825D0864;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825D0860;
	sub_825C7448(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_825D0864:
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r9,r8,r27
	ctx.r9.u64 = r27.u64 - ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d08dc
	if (!ctx.cr6.lt) goto loc_825D08DC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_825D0890:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,0(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 0);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r5,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r9,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 12);
	// addi r23,r23,16
	r23.s64 = r23.s64 + 16;
	// stw r9,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// bne 0x825d0890
	if (!ctx.cr0.eq) goto loc_825D0890;
loc_825D08DC:
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x825d0b24
	if (!ctx.cr6.eq) goto loc_825D0B24;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r28,r10,r9
	r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x825d0ac0
	if (!ctx.cr6.lt) goto loc_825D0AC0;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// rlwinm r27,r27,0,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
loc_825D0954:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - r29.u64;
	// subf r3,r27,r10
	ctx.r3.u64 = ctx.r10.u64 - r27.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x825d09f0
	if (!ctx.cr6.lt) goto loc_825D09F0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d09f0
	if (ctx.cr6.eq) goto loc_825D09F0;
loc_825D0978:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x825d09f0
	if (!ctx.cr6.lt) goto loc_825D09F0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// subfic r11,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r7.u64;
loc_825D099C:
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r5,r30
	r25.u64 = ctx.r5.u64 + r30.u64;
	// add r24,r6,r30
	r24.u64 = ctx.r6.u64 + r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// stwx r6,r5,r30
	REX_STORE_U32(ctx.r5.u32 + r30.u32, ctx.r6.u32);
	// lwz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 4);
	// stw r6,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 8);
	// stw r6,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r6.u32);
	// lwz r6,12(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 12);
	// stw r6,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r6.u32);
	// bne 0x825d099c
	if (!ctx.cr0.eq) goto loc_825D099C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x825d0978
	if (ctx.cr6.lt) goto loc_825D0978;
loc_825D09F0:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x825d0a70
	if (!ctx.cr6.lt) goto loc_825D0A70;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825D0A08:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
loc_825D0A1C:
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r6,r30
	ctx.r3.u64 = ctx.r6.u64 + r30.u64;
	// add r25,r7,r30
	r25.u64 = ctx.r7.u64 + r30.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r6,r7,r30
	REX_STORE_U32(ctx.r7.u32 + r30.u32, ctx.r6.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r7.u32);
	// bne 0x825d0a1c
	if (!ctx.cr0.eq) goto loc_825D0A1C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x825d0a08
	if (ctx.cr6.lt) goto loc_825D0A08;
loc_825D0A70:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d0a8c
	if (!ctx.cr6.eq) goto loc_825D0A8C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d0a90
	if (ctx.cr6.eq) goto loc_825D0A90;
loc_825D0A8C:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_825D0A90:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,256
	r30.s64 = r30.s64 + 256;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d0954
	if (ctx.cr6.lt) goto loc_825D0954;
loc_825D0AC0:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d0b0c
	if (!ctx.cr6.lt) goto loc_825D0B0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d0b0c
	if (!ctx.cr6.eq) goto loc_825D0B0C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d0b0c
	if (!ctx.cr6.eq) goto loc_825D0B0C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r21,4(r26)
	REX_STORE_U32(r26.u32 + 4, r21.u32);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// b 0x825d0b20
	goto loc_825D0B20;
loc_825D0B0C:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x825D0B14;
	sub_8269CE98(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
loc_825D0B20:
	// stw r21,4(r26)
	REX_STORE_U32(r26.u32 + 4, r21.u32);
loc_825D0B24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825F99C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F99C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_825F99D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F99F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825f9a00
	if (ctx.cr6.eq) goto loc_825F9A00;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_825F9A00:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825f99d8
	if (ctx.cr6.lt) goto loc_825F99D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FAB68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825FAB70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// bl 0x825f7460
	ctx.lr = 0x825FAB88;
	sub_825F7460(ctx, base);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fac00
	if (ctx.cr0.eq) goto loc_825FAC00;
	// lwz r11,952(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 952);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r31,96(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fac00
	if (ctx.cr6.eq) goto loc_825FAC00;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825fabc8
	if (!ctx.cr6.lt) goto loc_825FABC8;
loc_825FABBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825fabd4
	goto loc_825FABD4;
loc_825FABC8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825FABD4;
	sub_825F7718(ctx, base);
loc_825FABD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x825fabec
	if (!ctx.cr6.eq) goto loc_825FABEC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7658
	ctx.lr = 0x825FABEC;
	sub_825F7658(ctx, base);
loc_825FABEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825fabbc
	if (ctx.cr6.lt) goto loc_825FABBC;
loc_825FAC00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825FD118) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825FD138;
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

DEFINE_REX_FUNC(sub_82607078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82607090:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82607090
	if (ctx.cr6.lt) goto loc_82607090;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82607CE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82607d2c
	if (!ctx.cr6.eq) goto loc_82607D2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-17184
	ctx.r6.s64 = ctx.r11.s64 + -17184;
	// addi r5,r10,-17068
	ctx.r5.s64 = ctx.r10.s64 + -17068;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,690
	ctx.r7.s64 = 690;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x82607D28;
	sub_824EA978(ctx, base);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
loc_82607D2C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// blt cr6,0x82607d38
	if (ctx.cr6.lt) goto loc_82607D38;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82607D38:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// bgt cr6,0x82607d48
	if (ctx.cr6.gt) goto loc_82607D48;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82607D48:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_8260B778) {
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
	// bl 0x8260b670
	ctx.lr = 0x8260B798;
	sub_8260B670(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260b7a8
	if (ctx.cr0.eq) goto loc_8260B7A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8260B7A8;
	sub_8264C3D0(ctx, base);
loc_8260B7A8:
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

DEFINE_REX_FUNC(sub_8260D0A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8260D0B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260D0D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r30,r31,176
	r30.s64 = r31.s64 + 176;
	// stw r28,532(r31)
	REX_STORE_U32(r31.u32 + 532, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260d0f4
	if (!ctx.cr6.eq) goto loc_8260D0F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260dcf8
	ctx.lr = 0x8260D0F4;
	sub_8260DCF8(ctx, base);
loc_8260D0F4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8260d1a4
	if (ctx.cr6.lt) goto loc_8260D1A4;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// li r5,375
	ctx.r5.s64 = 375;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260D120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260d1a4
	if (ctx.cr0.lt) goto loc_8260D1A4;
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8260ddb8
	ctx.lr = 0x8260D138;
	sub_8260DDB8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260d1a4
	if (ctx.cr0.lt) goto loc_8260D1A4;
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bd18
	ctx.lr = 0x8260D154;
	sub_8260BD18(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260d1a4
	if (ctx.cr0.lt) goto loc_8260D1A4;
	// addi r5,r31,180
	ctx.r5.s64 = r31.s64 + 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bd18
	ctx.lr = 0x8260D170;
	sub_8260BD18(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260d1a4
	if (ctx.cr0.lt) goto loc_8260D1A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16032
	ctx.r3.s64 = r31.s64 + 16032;
	// bl 0x82612560
	ctx.lr = 0x8260D188;
	sub_82612560(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260d1a4
	if (ctx.cr0.lt) goto loc_8260D1A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// b 0x8260d1ac
	goto loc_8260D1AC;
loc_8260D1A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b930
	ctx.lr = 0x8260D1AC;
	sub_8260B930(ctx, base);
loc_8260D1AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260D1C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260D1C8;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82612560) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82612594
	if (ctx.cr6.eq) goto loc_82612594;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x826125f0
	goto loc_826125F0;
loc_82612594:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a2e60
	ctx.lr = 0x826125AC;
	sub_826A2E60(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r11,r11,-3480
	ctx.r11.s64 = ctx.r11.s64 + -3480;
	// addi r10,r10,7168
	ctx.r10.s64 = ctx.r10.s64 + 7168;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f5b58
	ctx.lr = 0x826125E0;
	sub_822F5B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826125f0
	if (ctx.cr0.lt) goto loc_826125F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_826125F0:
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

DEFINE_REX_FUNC(sub_826151F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8261523c
	if (!ctx.cr6.eq) goto loc_8261523C;
	// lhz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
loc_82615218:
	// lhzu r11,20(r9)
	ea = 20 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blt cr6,0x82615218
	if (ctx.cr6.lt) goto loc_82615218;
	// blr 
	return;
loc_8261523C:
	// cmplwi cr6,r10,358
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 358, ctx.xer);
	// beq cr6,0x8261524c
	if (ctx.cr6.eq) goto loc_8261524C;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82615254
	if (!ctx.cr6.eq) goto loc_82615254;
loc_8261524C:
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_82615254:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82615268
	if (!ctx.cr6.eq) goto loc_82615268;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82615268:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82615278
	if (!ctx.cr6.eq) goto loc_82615278;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82615278:
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

DEFINE_REX_FUNC(sub_826189E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826189F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82618a24
	if (ctx.cr6.eq) goto loc_82618A24;
	// lwsync 
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r29.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
loc_82618A24:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82618ae8
	if (ctx.cr6.lt) goto loc_82618AE8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82618ae8
	if (ctx.cr6.eq) goto loc_82618AE8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82618a60
	if (!ctx.cr6.eq) goto loc_82618A60;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82618ab8
	if (ctx.cr6.eq) goto loc_82618AB8;
loc_82618A60:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82618a84
	if (!ctx.cr6.eq) goto loc_82618A84;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82618ab8
	if (ctx.cr6.eq) goto loc_82618AB8;
loc_82618A84:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82618AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82618b10
	goto loc_82618B10;
loc_82618AB8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82618ACC;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82618AE0;
	sub_826A2E60(ctx, base);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// b 0x82618b10
	goto loc_82618B10;
loc_82618AE8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82618AFC;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82618B10;
	sub_826A2E60(ctx, base);
loc_82618B10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826268C0) {
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
	ctx.lr = 0x826268C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,132(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 132);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,128(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826268F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x8262691c
	if (ctx.cr0.eq) goto loc_8262691C;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8262691c
	if (ctx.cr6.eq) goto loc_8262691C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82626720
	ctx.lr = 0x82626910;
	sub_82626720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// b 0x82626920
	goto loc_82626920;
loc_8262691C:
	// stw r29,124(r31)
	REX_STORE_U32(r31.u32 + 124, r29.u32);
loc_82626920:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// li r5,80
	ctx.r5.s64 = 80;
	// std r11,672(r31)
	REX_STORE_U64(r31.u32 + 672, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,680(r31)
	REX_STORE_U64(r31.u32 + 680, ctx.r11.u64);
	// addi r3,r31,576
	ctx.r3.s64 = r31.s64 + 576;
	// bl 0x826a2e60
	ctx.lr = 0x82626948;
	sub_826A2E60(ctx, base);
	// stw r29,664(r31)
	REX_STORE_U32(r31.u32 + 664, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826265f0
	ctx.lr = 0x82626968;
	sub_826265F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82626984
	if (ctx.cr0.lt) goto loc_82626984;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82626988
	if (ctx.cr6.eq) goto loc_82626988;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82626988
	goto loc_82626988;
loc_82626984:
	// stw r27,128(r31)
	REX_STORE_U32(r31.u32 + 128, r27.u32);
loc_82626988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826292F0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,2624
	ctx.r10.s64 = ctx.r10.s64 + 2624;
	// addi r9,r9,2580
	ctx.r9.s64 = ctx.r9.s64 + 2580;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq 0x82629334
	if (ctx.cr0.eq) goto loc_82629334;
	// bl 0x8264c3d0
	ctx.lr = 0x82629334;
	sub_8264C3D0(ctx, base);
loc_82629334:
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

DEFINE_REX_FUNC(sub_8262D450) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8262D458;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bne cr6,0x8262d588
	if (!ctx.cr6.eq) goto loc_8262D588;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8262d588
	if (ctx.cr6.eq) goto loc_8262D588;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8262d500
	if (ctx.cr6.eq) goto loc_8262D500;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8262d614
	if (!ctx.cr6.eq) goto loc_8262D614;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f11,-68(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// bne cr6,0x8262d4dc
	if (!ctx.cr6.eq) goto loc_8262D4DC;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// b 0x8262d614
	goto loc_8262D614;
loc_8262D4DC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f12,-56(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f11,-52(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// b 0x8262d614
	goto loc_8262D614;
loc_8262D500:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// bne cr6,0x8262d544
	if (!ctx.cr6.eq) goto loc_8262D544;
	// ld r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r8,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r8.u64);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r10,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r10,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// b 0x8262d614
	goto loc_8262D614;
loc_8262D544:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,-72(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lfs f0,3804(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,-68(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,-64(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f6,-60(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f6,-52(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// b 0x8262d614
	goto loc_8262D614;
loc_8262D588:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// bne cr6,0x8262d5c8
	if (!ctx.cr6.eq) goto loc_8262D5C8;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// std r7,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r7.u64);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// b 0x8262d614
	goto loc_8262D614;
loc_8262D5C8:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,-76(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lfs f0,8300(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,3804(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8620(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f12,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f7,f12,f0,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f8,-72(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f7,-68(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f9,-64(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f9,-52(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
loc_8262D614:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// lfs f13,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lfs f0,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// rlwinm r31,r11,0,26,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// lvrx128 v61,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v58,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r6,r7
	temp.u32 = ctx.r6.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v0,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor128 v13,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// beq cr6,0x8262d6d8
	if (ctx.cr6.eq) goto loc_8262D6D8;
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(r29.u32, 15, ctx.xer);
	// ble cr6,0x8262d7d8
	if (!ctx.cr6.gt) goto loc_8262D7D8;
loc_8262D688:
	// vmaddfp v12,v0,v5,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v57,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// vmulfp128 v63,v56,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v57,v0,15,1
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 147), 15));
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vor v13,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vrlimi128 v13,v12,15,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 147), 15));
	// beq cr6,0x8262d6b8
	if (ctx.cr6.eq) goto loc_8262D6B8;
	// lvlx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v55
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
loc_8262D6B8:
	// vspltw128 v54,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stvewx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,0,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8262d688
	if (!ctx.cr6.eq) goto loc_8262D688;
loc_8262D6D8:
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(r29.u32, 15, ctx.xer);
	// ble cr6,0x8262d7d8
	if (!ctx.cr6.gt) goto loc_8262D7D8;
	// rlwinm r10,r29,2,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFC0;
	// clrlwi r29,r29,28
	r29.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8262d7d8
	if (ctx.cr6.eq) goto loc_8262D7D8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r8,r10,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// li r31,480
	r31.s64 = 480;
	// li r3,512
	ctx.r3.s64 = 512;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262D718:
	// lvrx128 v53,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v50,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v49,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v48,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r6,r7
	temp.u32 = ctx.r6.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvlx128 v46,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// dcbt r10,r31
	// dcbt r11,r3
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8262d794
	if (ctx.cr6.eq) goto loc_8262D794;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v8,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v7,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v6,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// b 0x8262d7b4
	goto loc_8262D7B4;
loc_8262D794:
	// vaddfp128 v45,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v11,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v44,v45,v0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v8,v45
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v43,v44,v0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v7,v44
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v9,v6,v43
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v13,v43,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v0.f32)));
loc_8262D7B4:
	// stvx128 v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx128 v9,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8262d718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262D718;
loc_8262D7D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262d828
	if (ctx.cr6.eq) goto loc_8262D828;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8262D7E8:
	// vmaddfp v12,v0,v5,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v42,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvlx128 v41,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// vmulfp128 v63,v41,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v42,v0,15,1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 147), 15));
	// vor128 v0,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vor v13,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vrlimi128 v13,v12,15,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 147), 15));
	// beq cr6,0x8262d818
	if (ctx.cr6.eq) goto loc_8262D818;
	// lvlx128 v40,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v40
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v40.f32)));
loc_8262D818:
	// vspltw128 v39,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8262d7e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262D7E8;
loc_8262D828:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82654BC0) {
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
	ctx.lr = 0x82654BC8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82654c0c
	if (ctx.cr0.eq) goto loc_82654C0C;
	// lwz r10,428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82654c0c
	if (ctx.cr6.eq) goto loc_82654C0C;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82654c10
	goto loc_82654C10;
loc_82654C0C:
	// mr r25,r26
	r25.u64 = r26.u64;
loc_82654C10:
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r29,r28,380
	r29.s64 = r28.s64 + 380;
loc_82654C18:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654dc0
	if (ctx.cr6.eq) goto loc_82654DC0;
	// lwz r11,428(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 428);
	// addi r27,r28,424
	r27.s64 = r28.s64 + 424;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654c50
	if (ctx.cr6.eq) goto loc_82654C50;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654c54
	goto loc_82654C54;
loc_82654C50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82654C54:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82654c88
	if (ctx.cr6.eq) goto loc_82654C88;
	// bne 0x82654cdc
	if (!ctx.cr0.eq) goto loc_82654CDC;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// b 0x82654ca4
	goto loc_82654CA4;
loc_82654C88:
	// beq 0x82654cdc
	if (ctx.cr0.eq) goto loc_82654CDC;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_82654CA4:
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654388
	ctx.lr = 0x82654CB0;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82654cdc
	if (ctx.cr0.lt) goto loc_82654CDC;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82654cdc
	if (ctx.cr0.eq) goto loc_82654CDC;
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654CDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r31,r11,r30
	r31.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r31,r25
	ctx.r11.u64 = r31.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82654dc0
	if (ctx.cr0.eq) goto loc_82654DC0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654d28
	if (ctx.cr6.eq) goto loc_82654D28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,161
	ctx.r5.s64 = ctx.r1.s64 + 161;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654d2c
	goto loc_82654D2C;
loc_82654D28:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82654D2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82654dc0
	if (ctx.cr6.lt) goto loc_82654DC0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lwz r3,400(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 400);
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r26,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r26.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// oris r11,r11,65016
	ctx.r11.u64 = ctx.r11.u64 | 4260888576;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,500
	ctx.r7.s64 = 500;
	// stb r10,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r10.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x8265d6d8
	ctx.lr = 0x82654DC0;
	sub_8265D6D8(ctx, base);
loc_82654DC0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82654c18
	if (ctx.cr6.lt) goto loc_82654C18;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826607A0) {
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
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// ori r4,r4,33728
	ctx.r4.u64 = ctx.r4.u64 | 33728;
	// bl 0x8265d838
	ctx.lr = 0x826607C8;
	sub_8265D838(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826607dc
	if (ctx.cr0.eq) goto loc_826607DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660600
	ctx.lr = 0x826607DC;
	sub_82660600(ctx, base);
loc_826607DC:
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

DEFINE_REX_FUNC(sub_826621D8) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
}

DEFINE_REX_FUNC(sub_82662690) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82662698;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 292);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266274c
	if (!ctx.cr0.eq) goto loc_8266274C;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82675ee0
	ctx.lr = 0x826626C4;
	sub_82675EE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826626d8
	if (!ctx.cr0.eq) goto loc_826626D8;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8266279c
	goto loc_8266279C;
loc_826626D8:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// li r7,131
	ctx.r7.s64 = 131;
	// stw r28,73(r31)
	REX_STORE_U32(r31.u32 + 73, r28.u32);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,69(r31)
	REX_STORE_U32(r31.u32 + 69, ctx.r11.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826711d8
	ctx.lr = 0x826626FC;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x82662718;
	sub_826715F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82662754
	if (!ctx.cr0.eq) goto loc_82662754;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662734
	if (!ctx.cr6.eq) goto loc_82662734;
	// li r30,0
	r30.s64 = 0;
	// b 0x82662754
	goto loc_82662754;
loc_82662734:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x82662744;
	sub_82671270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82662754
	goto loc_82662754;
loc_8266274C:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4113
	r30.u64 = r30.u64 | 4113;
loc_82662754:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8266279c
	if (ctx.cr6.eq) goto loc_8266279C;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_82662760:
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
	// bne 0x82662760
	if (!ctx.cr0.eq) goto loc_82662760;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266279c
	if (!ctx.cr6.eq) goto loc_8266279C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266279C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266279C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8266A500) {
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
	ctx.lr = 0x8266A508;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,236(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a534
	if (ctx.cr6.eq) goto loc_8266A534;
	// li r29,0
	r29.s64 = 0;
	// b 0x8266aa1c
	goto loc_8266AA1C;
loc_8266A534:
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r10,232(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 232);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8266a568
	if (!ctx.cr6.eq) goto loc_8266A568;
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266a558
	if (!ctx.cr6.lt) goto loc_8266A558;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8266A558:
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266a568
	if (!ctx.cr6.lt) goto loc_8266A568;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8266A568:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x8266a590
	if (!ctx.cr6.gt) goto loc_8266A590;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,265
	ctx.r3.s64 = 265;
	// bl 0x8265d838
	ctx.lr = 0x8266A57C;
	sub_8265D838(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x8266a590
	if (!ctx.cr0.eq) goto loc_8266A590;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8266aa04
	goto loc_8266AA04;
loc_8266A590:
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a5f4
	if (ctx.cr6.eq) goto loc_8266A5F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r23,-4
	ctx.r9.s64 = r23.s64 + -4;
loc_8266A5A8:
	// lwz r11,188(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 188);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,236(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8266a5e0
	if (ctx.cr6.eq) goto loc_8266A5E0;
loc_8266A5BC:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a5bc
	if (!ctx.cr0.eq) goto loc_8266A5BC;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8266A5E0:
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8266a5a8
	if (ctx.cr6.lt) goto loc_8266A5A8;
loc_8266A5F4:
	// lwz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 232);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a654
	if (ctx.cr6.eq) goto loc_8266A654;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8266A614:
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_8266A61C:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a61c
	if (!ctx.cr0.eq) goto loc_8266A61C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,232(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8266a614
	if (ctx.cr6.lt) goto loc_8266A614;
loc_8266A654:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8266a7a8
	if (ctx.cr6.eq) goto loc_8266A7A8;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r23
	r26.u64 = ctx.r11.u64 + r23.u64;
loc_8266A664:
	// lwzu r27,-4(r26)
	ea = -4 + r26.u32;
	r27.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8266a6a4
	if (ctx.cr6.eq) goto loc_8266A6A4;
	// lwz r11,292(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266a718
	if (!ctx.cr0.eq) goto loc_8266A718;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82666c48
	ctx.lr = 0x8266A68C;
	sub_82666C48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8266a724
	if (ctx.cr0.eq) goto loc_8266A724;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82670eb0
	ctx.lr = 0x8266A6A0;
	sub_82670EB0(ctx, base);
	// b 0x8266a6c4
	goto loc_8266A6C4;
loc_8266A6A4:
	// lwz r31,236(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 236);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8266a718
	if (ctx.cr6.eq) goto loc_8266A718;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826668b8
	ctx.lr = 0x8266A6C4;
	sub_826668B8(ctx, base);
loc_8266A6C4:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8266a71c
	if (ctx.cr0.eq) goto loc_8266A71C;
loc_8266A6CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8266aa04
	if (ctx.cr6.eq) goto loc_8266AA04;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r23
	r31.u64 = ctx.r11.u64 + r23.u64;
loc_8266A6DC:
	// lwzu r3,-4(r31)
	ea = -4 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8266A6E4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a6e4
	if (!ctx.cr0.eq) goto loc_8266A6E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a70c
	if (!ctx.cr6.eq) goto loc_8266A70C;
	// bl 0x82670cd8
	ctx.lr = 0x8266A70C;
	sub_82670CD8(ctx, base);
loc_8266A70C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8266a6dc
	if (!ctx.cr6.eq) goto loc_8266A6DC;
	// b 0x8266aa04
	goto loc_8266AA04;
loc_8266A718:
	// li r31,0
	r31.s64 = 0;
loc_8266A71C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8266a774
	if (!ctx.cr6.eq) goto loc_8266A774;
loc_8266A724:
	// lwz r11,292(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 292);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266a754
	if (ctx.cr0.eq) goto loc_8266A754;
	// lwz r11,172(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 172);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8266a754
	if (!ctx.cr6.lt) goto loc_8266A754;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4120
	ctx.r5.u64 = ctx.r5.u64 | 4120;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82665e68
	ctx.lr = 0x8266A754;
	sub_82665E68(ctx, base);
loc_8266A754:
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4120
	ctx.r5.u64 = ctx.r5.u64 | 4120;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266A76C;
	sub_8266BFC8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266a6cc
	if (!ctx.cr0.eq) goto loc_8266A6CC;
loc_8266A774:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r27
	ea = r27.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r27
	ea = r27.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a774
	if (!ctx.cr0.eq) goto loc_8266A774;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a7a0
	if (!ctx.cr6.eq) goto loc_8266A7A0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266A7A0;
	sub_82670CD8(ctx, base);
loc_8266A7A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8266a664
	if (!ctx.cr6.eq) goto loc_8266A664;
loc_8266A7A8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8266aa00
	if (!ctx.cr6.eq) goto loc_8266AA00;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a8e8
	if (ctx.cr6.eq) goto loc_8266A8E8;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r30,200
	r26.s64 = r30.s64 + 200;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8266A7D4:
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_8266A7DC:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a7dc
	if (!ctx.cr0.eq) goto loc_8266A7DC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,208(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 208);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8266a7d4
	if (ctx.cr6.lt) goto loc_8266A7D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8266a8e8
	if (ctx.cr6.eq) goto loc_8266A8E8;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r23
	r25.u64 = ctx.r11.u64 + r23.u64;
loc_8266A824:
	// lwzu r31,-4(r25)
	ea = -4 + r25.u32;
	r31.u64 = REX_LOAD_U32(ea);
	r25.u32 = ea;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266a8a8
	if (!ctx.cr6.eq) goto loc_8266A8A8;
	// addi r27,r31,188
	r27.s64 = r31.s64 + 188;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82670660
	ctx.lr = 0x8266A848;
	sub_82670660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266a8a8
	if (ctx.cr0.eq) goto loc_8266A8A8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82661d78
	ctx.lr = 0x8266A860;
	sub_82661D78(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8266a6cc
	if (ctx.cr0.lt) goto loc_8266A6CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826707c0
	ctx.lr = 0x8266A874;
	sub_826707C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826707c0
	ctx.lr = 0x8266A880;
	sub_826707C0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lwz r10,428(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 428);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// lwz r11,352(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 352);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,352(r24)
	REX_STORE_U32(r24.u32 + 352, ctx.r11.u32);
	// stw r10,428(r24)
	REX_STORE_U32(r24.u32 + 428, ctx.r10.u32);
	// b 0x8266a8b4
	goto loc_8266A8B4;
loc_8266A8A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826707c0
	ctx.lr = 0x8266A8B4;
	sub_826707C0(ctx, base);
loc_8266A8B4:
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
	// bne 0x8266a8b4
	if (!ctx.cr0.eq) goto loc_8266A8B4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a8e0
	if (!ctx.cr6.eq) goto loc_8266A8E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266A8E0;
	sub_82670CD8(ctx, base);
loc_8266A8E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8266a824
	if (!ctx.cr6.eq) goto loc_8266A824;
loc_8266A8E8:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266aa00
	if (ctx.cr6.eq) goto loc_8266AA00;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r30,212
	r27.s64 = r30.s64 + 212;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8266A90C:
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_8266A914:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266a914
	if (!ctx.cr0.eq) goto loc_8266A914;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,220(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 220);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8266a90c
	if (ctx.cr6.lt) goto loc_8266A90C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8266aa00
	if (ctx.cr6.eq) goto loc_8266AA00;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
loc_8266A95C:
	// lwzu r31,-4(r30)
	ea = -4 + r30.u32;
	r31.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826707c0
	ctx.lr = 0x8266A970;
	sub_826707C0(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// bne 0x8266a9cc
	if (!ctx.cr0.eq) goto loc_8266A9CC;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266a9cc
	if (ctx.cr0.eq) goto loc_8266A9CC;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266a9cc
	if (!ctx.cr0.eq) goto loc_8266A9CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670e18
	ctx.lr = 0x8266A9A0;
	sub_82670E18(ctx, base);
	// lwz r11,356(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 356);
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,356(r24)
	REX_STORE_U32(r24.u32 + 356, ctx.r11.u32);
	// ori r5,r5,4099
	ctx.r5.u64 = ctx.r5.u64 | 4099;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82669f80
	ctx.lr = 0x8266A9C4;
	sub_82669F80(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266a6cc
	if (!ctx.cr0.eq) goto loc_8266A6CC;
loc_8266A9CC:
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
	// bne 0x8266a9cc
	if (!ctx.cr0.eq) goto loc_8266A9CC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a9f8
	if (!ctx.cr6.eq) goto loc_8266A9F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266A9F8;
	sub_82670CD8(ctx, base);
loc_8266A9F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8266a95c
	if (!ctx.cr6.eq) goto loc_8266A95C;
loc_8266AA00:
	// li r29,0
	r29.s64 = 0;
loc_8266AA04:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266aa1c
	if (ctx.cr6.eq) goto loc_8266AA1C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,265
	ctx.r3.s64 = 265;
	// bl 0x8265d850
	ctx.lr = 0x8266AA1C;
	sub_8265D850(ctx, base);
loc_8266AA1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8268BC30) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82794194
	ctx.lr = 0x8268BC4C;
	__imp__XamUserGetDeviceContext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8268bc5c
	if (!ctx.cr0.lt) goto loc_8268BC5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268bc64
	goto loc_8268BC64;
loc_8268BC5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
loc_8268BC64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268DCF8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x8268DD00;
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r23,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r23.u32);
	// stw r23,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r23.u32);
	// mr r19,r23
	r19.u64 = r23.u64;
	// stw r23,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r23.u32);
	// bne cr6,0x8268dfa4
	if (!ctx.cr6.eq) goto loc_8268DFA4;
	// li r22,1
	r22.s64 = 1;
	// lwz r30,68(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 68);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// li r31,72
	r31.s64 = 72;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// addi r20,r28,-36
	r20.s64 = r28.s64 + -36;
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// addi r21,r11,-72
	r21.s64 = ctx.r11.s64 + -72;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
loc_8268DD6C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268ddec
	if (ctx.cr6.eq) goto loc_8268DDEC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,208(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268ddcc
	if (ctx.cr0.eq) goto loc_8268DDCC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8268dda0
	if (ctx.cr6.eq) goto loc_8268DDA0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8268ddd0
	if (ctx.cr6.eq) goto loc_8268DDD0;
loc_8268DDA0:
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82793804
	ctx.lr = 0x8268DDC0;
	__imp__XamUserAreUsersFriends(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268ddd0
	if (!ctx.cr6.eq) goto loc_8268DDD0;
loc_8268DDCC:
	// stwx r23,r21,r31
	REX_STORE_U32(r21.u32 + r31.u32, r23.u32);
loc_8268DDD0:
	// lwzx r11,r20,r31
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x8268dde0
	if (!ctx.cr6.gt) goto loc_8268DDE0;
	// mr r19,r22
	r19.u64 = r22.u64;
loc_8268DDE0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,88
	ctx.cr6.compare<uint32_t>(r31.u32, 88, ctx.xer);
	// blt cr6,0x8268dd6c
	if (ctx.cr6.lt) goto loc_8268DD6C;
loc_8268DDEC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r26,r23
	r26.u64 = r23.u64;
	// addi r25,r11,-72
	r25.s64 = ctx.r11.s64 + -72;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,72
	r31.s64 = 72;
	// lis r24,28672
	r24.s64 = 1879048192;
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_8268DE08:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268de38
	if (ctx.cr6.eq) goto loc_8268DE38;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8268de38
	if (!ctx.cr6.eq) goto loc_8268DE38;
	// lwz r10,204(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8268de3c
	if (!ctx.cr6.eq) goto loc_8268DE3C;
loc_8268DE38:
	// mr r27,r23
	r27.u64 = r23.u64;
loc_8268DE3C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268def0
	if (ctx.cr6.eq) goto loc_8268DEF0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268def0
	if (!ctx.cr6.eq) goto loc_8268DEF0;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268de74
	if (!ctx.cr0.eq) goto loc_8268DE74;
	// bl 0x8268bc30
	ctx.lr = 0x8268DE64;
	sub_8268BC30(ctx, base);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// beq cr6,0x8268de74
	if (ctx.cr6.eq) goto loc_8268DE74;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8268def0
	if (!ctx.cr6.eq) goto loc_8268DEF0;
loc_8268DE74:
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_8268DE7C:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// beq cr6,0x8268dee0
	if (ctx.cr6.eq) goto loc_8268DEE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268dee0
	if (!ctx.cr6.eq) goto loc_8268DEE0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268dedc
	if (ctx.cr0.eq) goto loc_8268DEDC;
	// bl 0x8268bc30
	ctx.lr = 0x8268DEA8;
	sub_8268BC30(ctx, base);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// beq cr6,0x8268dedc
	if (ctx.cr6.eq) goto loc_8268DEDC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8268dedc
	if (ctx.cr6.eq) goto loc_8268DEDC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r4,r31,r3
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r3.u32);
	// bl 0x82689b40
	ctx.lr = 0x8268DED8;
	sub_82689B40(ctx, base);
	// b 0x8268dee0
	goto loc_8268DEE0;
loc_8268DEDC:
	// stwx r23,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, r23.u32);
loc_8268DEE0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x8268de7c
	if (ctx.cr6.lt) goto loc_8268DE7C;
loc_8268DEF0:
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268df2c
	if (ctx.cr6.eq) goto loc_8268DF2C;
	// lwzx r11,r31,r20
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r20.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x8268df2c
	if (ctx.cr6.gt) goto loc_8268DF2C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268df28
	if (ctx.cr6.eq) goto loc_8268DF28;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268df2c
	if (!ctx.cr6.eq) goto loc_8268DF2C;
loc_8268DF28:
	// stfsx f31,r25,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + r31.u32, temp.u32);
loc_8268DF2C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8268df6c
	if (ctx.cr6.eq) goto loc_8268DF6C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268df6c
	if (ctx.cr6.eq) goto loc_8268DF6C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268df68
	if (!ctx.cr0.eq) goto loc_8268DF68;
	// bl 0x8268bc30
	ctx.lr = 0x8268DF58;
	sub_8268BC30(ctx, base);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// beq cr6,0x8268df68
	if (ctx.cr6.eq) goto loc_8268DF68;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8268df6c
	if (!ctx.cr6.eq) goto loc_8268DF6C;
loc_8268DF68:
	// stfsx f30,r25,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r25.u32 + r31.u32, temp.u32);
loc_8268DF6C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi cr6,r31,88
	ctx.cr6.compare<uint32_t>(r31.u32, 88, ctx.xer);
	// blt cr6,0x8268de08
	if (ctx.cr6.lt) goto loc_8268DE08;
	// lwz r3,72(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268DFA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268DFA4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826A0648) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826a0664
	if (ctx.cr6.eq) goto loc_826A0664;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_826A0664:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_826A0668:
	// divwu r10,r3,r5
	ctx.r10.u64 = uint32_t(ctx.r5.u32 ? ctx.r3.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// divwu r3,r3,r5
	ctx.r3.u64 = uint32_t(ctx.r5.u32 ? ctx.r3.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x826a0690
	if (!ctx.cr6.gt) goto loc_826A0690;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x826a0694
	goto loc_826A0694;
loc_826A0690:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_826A0694:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a0668
	if (!ctx.cr6.eq) goto loc_826A0668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826A06B0:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826a06b0
	if (ctx.cr6.lt) goto loc_826A06B0;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_15) {
	REX_FUNC_PROLOGUE();
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
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -136, f15.u64);
	// stfd f16,-128(r12)
	REX_STORE_U64(ctx.r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	REX_STORE_U64(ctx.r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
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

DEFINE_REX_FUNC(__savevmx_29) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_102) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_127) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A4408) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x826adf00
	ctx.lr = 0x826A4424;
	sub_826ADF00(ctx, base);
	// bl 0x826a4220
	ctx.lr = 0x826A4428;
	sub_826A4220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A5384) {
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
	// lwz r29,88(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x826a53bc
	goto loc_826A53BC;
loc_826A53BC:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a53d0
	if (ctx.cr6.eq) goto loc_826A53D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x826A53D0;
	sub_8269E1E0(ctx, base);
loc_826A53D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826a96a8
	ctx.lr = 0x826A53D8;
	sub_826A96A8(ctx, base);
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

DEFINE_REX_FUNC(sub_826A5F28) {
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
	ctx.lr = 0x826A5F30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x826a33d0
	ctx.lr = 0x826A5F48;
	sub_826A33D0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a5f74
	if (ctx.cr0.eq) goto loc_826A5F74;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a5f74
	if (!ctx.cr6.eq) goto loc_826A5F74;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826a5fec
	goto loc_826A5FEC;
loc_826A5F74:
	// bl 0x826a33d0
	ctx.lr = 0x826A5F78;
	sub_826A33D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x826a5fd4
	if (!ctx.cr6.gt) goto loc_826A5FD4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_826A5F8C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbzu r3,1(r28)
	ea = 1 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826A5FA0;
	sub_826A5E90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826a5fcc
	if (!ctx.cr6.eq) goto loc_826A5FCC;
	// bl 0x826a33d0
	ctx.lr = 0x826A5FB0;
	sub_826A33D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x826a5fd4
	if (!ctx.cr6.eq) goto loc_826A5FD4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x826a5e90
	ctx.lr = 0x826A5FCC;
	sub_826A5E90(ctx, base);
loc_826A5FCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x826a5f8c
	if (ctx.cr6.gt) goto loc_826A5F8C;
loc_826A5FD4:
	// bl 0x826a33d0
	ctx.lr = 0x826A5FD8;
	sub_826A33D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a5fec
	if (!ctx.cr6.eq) goto loc_826A5FEC;
	// bl 0x826a33d0
	ctx.lr = 0x826A5FE8;
	sub_826A33D0(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_826A5FEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826ADC30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,29524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826adc7c
	if (!ctx.cr6.eq) goto loc_826ADC7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f2,-3744(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x826adb28
	ctx.lr = 0x826ADC78;
	sub_826ADB28(ctx, base);
	// b 0x826adca0
	goto loc_826ADCA0;
loc_826ADC7C:
	// bl 0x826a33d0
	ctx.lr = 0x826ADC80;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x826adf00
	ctx.lr = 0x826ADC9C;
	sub_826ADF00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_826ADCA0:
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

DEFINE_REX_FUNC(sub_826B06A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,28128
	ctx.r11.s64 = ctx.r11.s64 + 28128;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B114C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
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
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b11bc
	if (ctx.cr6.eq) goto loc_826B11BC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b11b4
	if (ctx.cr6.eq) goto loc_826B11B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,31264
	ctx.r10.s64 = ctx.r10.s64 + 31264;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_826B11B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826b03f0
	ctx.lr = 0x826B11BC;
	sub_826B03F0(ctx, base);
loc_826B11BC:
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

DEFINE_REX_FUNC(sub_826B6330) {
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
	// bl 0x826bc368
	ctx.lr = 0x826B6348;
	sub_826BC368(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826B9168) {
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
	ctx.lr = 0x826B9170;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r29,664(r30)
	REX_STORE_U32(r30.u32 + 664, r29.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r29,668(r30)
	REX_STORE_U32(r30.u32 + 668, r29.u32);
	// lwz r3,672(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 672);
	// bl 0x826c1398
	ctx.lr = 0x826B91A8;
	sub_826C1398(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r7,r10,16389
	ctx.r7.u64 = ctx.r10.u64 | 16389;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// blt cr6,0x826b91d4
	if (ctx.cr6.lt) goto loc_826B91D4;
	// stw r29,676(r30)
	REX_STORE_U32(r30.u32 + 676, r29.u32);
loc_826B91D4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b91f4
	goto loc_826B91F4;
loc_826B91F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826b9204
	if (ctx.cr6.eq) goto loc_826B9204;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_826B9204:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826BD360) {
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
	ctx.lr = 0x826BD368;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// clrldi r27,r27,5
	r27.u64 = r27.u64 & 0x7FFFFFFFFFFFFFF;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bne cr6,0x826bd64c
	if (!ctx.cr6.eq) goto loc_826BD64C;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// bgt cr6,0x826bd590
	if (ctx.cr6.gt) goto loc_826BD590;
	// beq cr6,0x826bd64c
	if (ctx.cr6.eq) goto loc_826BD64C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826bd42c
	if (ctx.cr6.gt) goto loc_826BD42C;
	// beq cr6,0x826bd64c
	if (ctx.cr6.eq) goto loc_826BD64C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826bd3fc
	if (ctx.cr6.eq) goto loc_826BD3FC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826bd620
	if (!ctx.cr6.eq) goto loc_826BD620;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,532(r3)
	REX_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD3FC:
	// lwz r11,540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 540);
	// lis r10,80
	ctx.r10.s64 = 5242880;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r9.u32);
	// ori r5,r10,6
	ctx.r5.u64 = ctx.r10.u64 | 6;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,528(r30)
	REX_STORE_U32(r30.u32 + 528, ctx.r6.u32);
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD42C:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826bd620
	if (!ctx.cr6.eq) goto loc_826BD620;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826c6d18
	ctx.lr = 0x826BD448;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r26,r11,22
	r26.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bne cr6,0x826bd468
	if (!ctx.cr6.eq) goto loc_826BD468;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,167
	r31.u64 = r31.u64 | 167;
	// b 0x826bd630
	goto loc_826BD630;
loc_826BD468:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x826bd630
	if (ctx.cr6.lt) goto loc_826BD630;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// stw r29,588(r30)
	REX_STORE_U32(r30.u32 + 588, r29.u32);
	// li r25,1
	r25.s64 = 1;
	// ori r24,r11,11
	r24.u64 = ctx.r11.u64 | 11;
loc_826BD480:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x826bd630
	if (ctx.cr6.lt) goto loc_826BD630;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bd530
	if (ctx.cr6.eq) goto loc_826BD530;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// bl 0x826c6cf0
	ctx.lr = 0x826BD4A8;
	sub_826C6CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd630
	if (ctx.cr6.lt) goto loc_826BD630;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c71a8
	ctx.lr = 0x826BD4C8;
	sub_826C71A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x826bd4dc
	if (!ctx.cr6.eq) goto loc_826BD4DC;
	// stw r29,588(r30)
	REX_STORE_U32(r30.u32 + 588, r29.u32);
	// b 0x826bd530
	goto loc_826BD530;
loc_826BD4DC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x826bd630
	if (ctx.cr6.lt) goto loc_826BD630;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x826bd504
	if (!ctx.cr6.gt) goto loc_826BD504;
	// stw r25,588(r30)
	REX_STORE_U32(r30.u32 + 588, r25.u32);
loc_826BD504:
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r27.s64, ctx.xer);
	// bge cr6,0x826bd510
	if (!ctx.cr6.lt) goto loc_826BD510;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_826BD510:
	// cmpd cr6,r10,r28
	ctx.cr6.compare<int64_t>(ctx.r10.s64, r28.s64, ctx.xer);
	// ble cr6,0x826bd51c
	if (!ctx.cr6.gt) goto loc_826BD51C;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_826BD51C:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r27,r28
	ctx.r10.u64 = r28.u64 - r27.u64;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x826bd530
	if (!ctx.cr6.gt) goto loc_826BD530;
	// stw r25,588(r30)
	REX_STORE_U32(r30.u32 + 588, r25.u32);
loc_826BD530:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c6d80
	ctx.lr = 0x826BD544;
	sub_826C6D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bne cr6,0x826bd480
	if (!ctx.cr6.eq) goto loc_826BD480;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// bl 0x826c6de8
	ctx.lr = 0x826BD55C;
	sub_826C6DE8(ctx, base);
	// lwz r11,588(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bd580
	if (ctx.cr6.eq) goto loc_826BD580;
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bd578
	if (!ctx.cr6.eq) goto loc_826BD578;
	// stw r25,632(r30)
	REX_STORE_U32(r30.u32 + 632, r25.u32);
loc_826BD578:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// b 0x826bd630
	goto loc_826BD630;
loc_826BD580:
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD590:
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826bd610
	if (ctx.cr6.gt) goto loc_826BD610;
	// beq cr6,0x826bd5f8
	if (ctx.cr6.eq) goto loc_826BD5F8;
	// addis r11,r4,-11
	ctx.r11.s64 = ctx.r4.s64 + -720896;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826bd5d0
	if (ctx.cr0.eq) goto loc_826BD5D0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x826bd620
	if (!ctx.cr6.eq) goto loc_826BD620;
	// lhz r11,624(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 624);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD5D0:
	// lhz r11,626(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 626);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lbz r10,629(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 629);
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lbz r9,628(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 628);
	// stb r9,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD5F8:
	// lwz r11,620(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 620);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD610:
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r9,r11,48
	ctx.r9.u64 = ctx.r11.u64 | 48;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x826bd658
	if (ctx.cr6.eq) goto loc_826BD658;
loc_826BD620:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ori r31,r31,178
	r31.u64 = r31.u64 | 178;
	// bne cr6,0x826bd64c
	if (!ctx.cr6.eq) goto loc_826BD64C;
loc_826BD630:
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826bd64c
	if (ctx.cr6.eq) goto loc_826BD64C;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bd64c
	if (ctx.cr6.eq) goto loc_826BD64C;
	// bl 0x826c6de8
	ctx.lr = 0x826BD64C;
	sub_826C6DE8(ctx, base);
loc_826BD64C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_826BD658:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,620(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 620);
	// lwz r4,616(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 616);
	// bl 0x826a1e70
	ctx.lr = 0x826BD668;
	sub_826A1E70(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826D9CD0) {
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
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826D9D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9e30
	if (ctx.cr6.lt) goto loc_826D9E30;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D9D40;
	sub_826D4080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9e30
	if (ctx.cr6.lt) goto loc_826D9E30;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D9D60;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9e30
	if (ctx.cr6.lt) goto loc_826D9E30;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D9D80;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9e30
	if (ctx.cr6.lt) goto loc_826D9E30;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D9DA0;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9e30
	if (ctx.cr6.lt) goto loc_826D9E30;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D9DC0;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9e30
	if (ctx.cr6.lt) goto loc_826D9E30;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,30472
	ctx.r11.s64 = ctx.r11.s64 + 30472;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_826D9DD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d9df8
	if (!ctx.cr0.eq) goto loc_826D9DF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826d9dd8
	if (!ctx.cr6.eq) goto loc_826D9DD8;
loc_826D9DF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826d9e18
	if (!ctx.cr6.eq) goto loc_826D9E18;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826d9e18
	if (!ctx.cr6.eq) goto loc_826D9E18;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x826d9e24
	if (ctx.cr6.eq) goto loc_826D9E24;
loc_826D9E18:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x826d9e30
	goto loc_826D9E30;
loc_826D9E24:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826D9E30:
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

DEFINE_REX_FUNC(sub_826DFB98) {
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
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dfc88
	if (ctx.cr6.eq) goto loc_826DFC88;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826dfc88
	if (ctx.cr6.eq) goto loc_826DFC88;
loc_826DFBDC:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826DFBF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dfc88
	if (ctx.cr6.lt) goto loc_826DFC88;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dfc1c
	if (ctx.cr6.eq) goto loc_826DFC1C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DFC1C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dfc34
	if (ctx.cr6.eq) goto loc_826DFC34;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_826DFC34:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r8,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r8.u32);
	// bne 0x826dfc5c
	if (!ctx.cr0.eq) goto loc_826DFC5C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_826DFC5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x826c68d8
	ctx.lr = 0x826DFC6C;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dfc88
	if (ctx.cr6.lt) goto loc_826DFC88;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x826dfbdc
	if (!ctx.cr6.eq) goto loc_826DFBDC;
loc_826DFC88:
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

DEFINE_REX_FUNC(sub_826E6288) {
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
	ctx.lr = 0x826E6290;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r5,25
	ctx.r5.s64 = 25;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e62a4
	if (!ctx.cr6.gt) goto loc_826E62A4;
	// li r5,28
	ctx.r5.s64 = 28;
loc_826E62A4:
	// stw r5,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826e62bc
	if (ctx.cr6.gt) goto loc_826E62BC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,-6448
	ctx.r10.s64 = ctx.r10.s64 + -6448;
	// b 0x826e62c4
	goto loc_826E62C4;
loc_826E62BC:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,16552
	ctx.r10.s64 = ctx.r10.s64 + 16552;
loc_826E62C4:
	// stw r10,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f0,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bne cr6,0x826e6394
	if (!ctx.cr6.eq) goto loc_826E6394;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ble cr6,0x826e6540
	if (!ctx.cr6.gt) goto loc_826E6540;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,-240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f0,3720(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
loc_826E631C:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r4,r8,r7
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r8,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f13,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f9,f10,f11,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64)));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f8.u64);
	// lwz r4,-220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x826e6378
	if (ctx.cr6.gt) goto loc_826E6378;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826e631c
	if (ctx.cr6.lt) goto loc_826E631C;
	// b 0x826e6540
	goto loc_826E6540;
loc_826E6378:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,340(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x826e6540
	goto loc_826E6540;
loc_826E6394:
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r8.u32);
	// ble cr6,0x826e6540
	if (!ctx.cr6.gt) goto loc_826E6540;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r26,17
	r26.s64 = 17;
	// li r31,5
	r31.s64 = 5;
	// li r30,12
	r30.s64 = 12;
	// lfs f12,3712(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3712);
	ctx.f12.f64 = double(temp.f32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lfs f13,3804(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// li r4,34
	ctx.r4.s64 = 34;
	// li r14,46
	r14.s64 = 46;
	// li r15,63
	r15.s64 = 63;
	// li r16,86
	r16.s64 = 86;
	// li r28,102
	r28.s64 = 102;
	// li r29,123
	r29.s64 = 123;
	// li r17,149
	r17.s64 = 149;
	// li r18,179
	r18.s64 = 179;
	// li r19,221
	r19.s64 = 221;
	// li r21,512
	r21.s64 = 512;
	// li r23,15
	r23.s64 = 15;
	// li r24,11
	r24.s64 = 11;
	// li r25,37
	r25.s64 = 37;
	// li r20,74
	r20.s64 = 74;
	// li r27,256
	r27.s64 = 256;
	// li r22,128
	r22.s64 = 128;
loc_826E6410:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r7,252(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lwz r10,-236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// andc r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// divw r6,r7,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bgt cr6,0x826e6968
	if (ctx.cr6.gt) goto loc_826E6968;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// ori r7,r8,44100
	ctx.r7.u64 = ctx.r8.u64 | 44100;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826e66ac
	if (ctx.cr6.lt) goto loc_826E66AC;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bne cr6,0x826e6578
	if (!ctx.cr6.eq) goto loc_826E6578;
	// lwz r8,340(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r10,279
	ctx.r10.s64 = 279;
	// std r3,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// li r3,360
	ctx.r3.s64 = 360;
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stwx r26,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r26.u32);
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// ld r3,-208(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r14.u32);
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r15,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r15.u32);
	// stw r16,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r16.u32);
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r28.u32);
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r29.u32);
	// stw r17,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r17.u32);
	// stw r18,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r18.u32);
	// stw r19,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r19.u32);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r21,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r21.u32);
loc_826E64D0:
	// lwz r7,340(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826e6514
	if (!ctx.cr6.gt) goto loc_826E6514;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_826E64E8:
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwz r7,340(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826e64e8
	if (ctx.cr6.lt) goto loc_826E64E8;
loc_826E6514:
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,244(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stw r10,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// stw r6,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r6.u32);
	// blt cr6,0x826e6410
	if (ctx.cr6.lt) goto loc_826E6410;
loc_826E6540:
	// lwz r10,344(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,340(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r8,244(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,308(r3)
	REX_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r7.u32);
	// ble cr6,0x826e6574
	if (!ctx.cr6.gt) goto loc_826E6574;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_826E6568:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e6568
	if (ctx.cr6.lt) goto loc_826E6568;
loc_826E6574:
	// b 0x826a1cd0
	return;
loc_826E6578:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x826e6620
	if (!ctx.cr6.eq) goto loc_826E6620;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,23
	ctx.r8.s64 = 23;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// li r5,51
	ctx.r5.s64 = 51;
	// std r4,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r4.u64);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r3,89
	ctx.r3.s64 = 89;
	// std r9,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r9.u64);
	// li r7,31
	ctx.r7.s64 = 31;
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
	// li r10,110
	ctx.r10.s64 = 110;
	// std r31,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r31.u64);
	// li r9,139
	ctx.r9.s64 = 139;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r6,43
	ctx.r6.s64 = 43;
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// li r31,180
	r31.s64 = 180;
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// stw r3,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r31,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r31.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
	// stw r6,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r20,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r20.u32);
	// ld r5,-208(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// ld r4,-200(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-184(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// stw r27,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r27.u32);
	// ld r31,-176(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E6620:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x826e6968
	if (!ctx.cr6.eq) goto loc_826E6968;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,9
	ctx.r7.s64 = 9;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,26
	ctx.r4.s64 = 26;
	// stwx r30,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r3,45
	ctx.r3.s64 = 45;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// li r8,70
	ctx.r8.s64 = 70;
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r6,-216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// stw r25,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r25.u32);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r22,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r22.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E66AC:
	// cmpwi cr6,r10,32000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32000, ctx.xer);
	// blt cr6,0x826e6894
	if (ctx.cr6.lt) goto loc_826E6894;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bne cr6,0x826e6768
	if (!ctx.cr6.eq) goto loc_826E6768;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r8,16
	ctx.r8.s64 = 16;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r7,6
	ctx.r7.s64 = 6;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r4,29
	ctx.r4.s64 = 29;
	// li r3,41
	ctx.r3.s64 = 41;
	// li r6,13
	ctx.r6.s64 = 13;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r8,101
	ctx.r8.s64 = 101;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r7,141
	ctx.r7.s64 = 141;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// li r10,304
	ctx.r10.s64 = 304;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r5,205
	ctx.r5.s64 = 205;
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// li r4,246
	ctx.r4.s64 = 246;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// li r6,170
	ctx.r6.s64 = 170;
	// li r8,496
	ctx.r8.s64 = 496;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r7,-216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r4,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r20,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r20.u32);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r21,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r21.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E6768:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x826e6808
	if (!ctx.cr6.eq) goto loc_826E6808;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,10
	ctx.r8.s64 = 10;
	// li r7,20
	ctx.r7.s64 = 20;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r5,50
	ctx.r5.s64 = 50;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r4,70
	ctx.r4.s64 = 70;
	// std r9,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r9.u64);
	// li r3,85
	ctx.r3.s64 = 85;
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
	// li r10,152
	ctx.r10.s64 = 152;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r8,248
	ctx.r8.s64 = 248;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r7,-216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r3,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r23.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r28.u32);
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r29.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r8,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stw r27,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r27.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E6808:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x826e6968
	if (!ctx.cr6.eq) goto loc_826E6968;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r7,9
	ctx.r7.s64 = 9;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,25
	ctx.r4.s64 = 25;
	// li r3,35
	ctx.r3.s64 = 35;
	// stwx r24,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r24.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// li r6,124
	ctx.r6.s64 = 124;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r5,-216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r22,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r22.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E6894:
	// cmpwi cr6,r10,22050
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22050, ctx.xer);
	// blt cr6,0x826e6968
	if (ctx.cr6.lt) goto loc_826E6968;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x826e68f4
	if (!ctx.cr6.eq) goto loc_826E68F4;
	// lwz r8,340(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,25
	ctx.r6.s64 = 25;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r14.u32);
	// stw r15,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r15.u32);
	// stw r16,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r16.u32);
	// stw r28,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r28.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// stw r17,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r17.u32);
	// stw r18,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r18.u32);
	// stw r19,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r19.u32);
	// stw r27,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r27.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E68F4:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x826e6968
	if (!ctx.cr6.eq) goto loc_826E6968;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,10
	ctx.r8.s64 = 10;
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r5,43
	ctx.r5.s64 = 43;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r3,89
	ctx.r3.s64 = 89;
	// li r7,23
	ctx.r7.s64 = 23;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r8,110
	ctx.r8.s64 = 110;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r22,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r22.u32);
	// b 0x826e64d0
	goto loc_826E64D0;
loc_826E6968:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lwz r7,-240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r10,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
loc_826E6994:
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x826e69d8
	if (ctx.cr6.gt) goto loc_826E69D8;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// std r10,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r10.u64);
	// lfd f10,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f5.u64);
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x826e6a04
	goto loc_826E6A04;
loc_826E69D8:
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// lwz r14,80(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// divwu r10,r10,r14
	ctx.r10.u64 = uint32_t(r14.u32 ? ctx.r10.u32 / r14.u32 : 0);
	// twllei r14,0
	if (r14.s32 == 0 || r14.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r14,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r14.s64 = ctx.r10.s32 >> 2;
	// addze r14,r14
	temp.s64 = r14.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r14.u32;
	r14.s64 = temp.s64;
	// rlwinm r14,r14,2,0,29
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r14,r10
	r14.u64 = ctx.r10.u64 - r14.u64;
	// subf r10,r14,r10
	ctx.r10.u64 = ctx.r10.u64 - r14.u64;
loc_826E6A04:
	// lwz r14,0(r5)
	r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r14.s32, ctx.xer);
	// ble cr6,0x826e6a18
	if (!ctx.cr6.gt) goto loc_826E6A18;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_826E6A18:
	// lwz r10,-232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826e6a38
	if (!ctx.cr6.lt) goto loc_826E6A38;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r14,0(r5)
	r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e6994
	if (ctx.cr6.lt) goto loc_826E6994;
loc_826E6A38:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r14,46
	r14.s64 = 46;
	// li r4,34
	ctx.r4.s64 = 34;
	// stw r6,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r6.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r8,340(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x826e6514
	goto loc_826E6514;
}

DEFINE_REX_FUNC(sub_8272C9F8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x8272CA00;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r28,128
	r28.s64 = 128;
	// lwz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r27,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r27.s64 = ctx.r10.s32 >> 1;
	// subf r26,r9,r8
	r26.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r25,r27,0,0,29
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8272ce10
	if (!ctx.cr6.gt) goto loc_8272CE10;
	// lis r9,-32640
	ctx.r9.s64 = -2139095040;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r29,r9,32896
	r29.u64 = ctx.r9.u64 | 32896;
loc_8272CA30:
	// lwz r9,60(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// lbzx r30,r8,r9
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8272ca58
	if (!ctx.cr6.eq) goto loc_8272CA58;
	// stwx r29,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r29.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stwx r29,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8272ce08
	goto loc_8272CE08;
loc_8272CA58:
	// clrlwi r9,r30,26
	ctx.r9.u64 = r30.u32 & 0x3F;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8272cc18
	if (!ctx.cr6.eq) goto loc_8272CC18;
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r31,64(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r30,r10,r9
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mullw r31,r30,r26
	r31.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// srawi r31,r31,20
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFFF) != 0);
	r31.s64 = r31.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// blt cr6,0x8272cac8
	if (ctx.cr6.lt) goto loc_8272CAC8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cac8
	if (ctx.cr6.lt) goto loc_8272CAC8;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cac8
	if (!ctx.cr6.lt) goto loc_8272CAC8;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272cad0
	goto loc_8272CAD0;
loc_8272CAC8:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CAD0:
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r30,r10,r9
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mullw r8,r30,r26
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cb38
	if (ctx.cr6.lt) goto loc_8272CB38;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cb38
	if (ctx.cr6.lt) goto loc_8272CB38;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cb38
	if (!ctx.cr6.lt) goto loc_8272CB38;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272cb40
	goto loc_8272CB40;
loc_8272CB38:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CB40:
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r30,r10,r9
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mullw r8,r30,r26
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cba8
	if (ctx.cr6.lt) goto loc_8272CBA8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cba8
	if (ctx.cr6.lt) goto loc_8272CBA8;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cba8
	if (!ctx.cr6.lt) goto loc_8272CBA8;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272cbb0
	goto loc_8272CBB0;
loc_8272CBA8:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CBB0:
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r30,r10,r9
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mullw r8,r30,r26
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cdf8
	if (ctx.cr6.lt) goto loc_8272CDF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cdf8
	if (ctx.cr6.lt) goto loc_8272CDF8;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cdf8
	if (!ctx.cr6.lt) goto loc_8272CDF8;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272ce00
	goto loc_8272CE00;
loc_8272CC18:
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272cc84
	if (ctx.cr6.eq) goto loc_8272CC84;
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r24,r9,r10
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r8,r24,r26
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cc84
	if (ctx.cr6.lt) goto loc_8272CC84;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cc84
	if (ctx.cr6.lt) goto loc_8272CC84;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cc84
	if (!ctx.cr6.lt) goto loc_8272CC84;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272cc8c
	goto loc_8272CC8C;
loc_8272CC84:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CC8C:
	// rlwinm r9,r30,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272cd00
	if (ctx.cr6.eq) goto loc_8272CD00;
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r24,r9,r10
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r8,r24,r26
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cd00
	if (ctx.cr6.lt) goto loc_8272CD00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cd00
	if (ctx.cr6.lt) goto loc_8272CD00;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cd00
	if (!ctx.cr6.lt) goto loc_8272CD00;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272cd08
	goto loc_8272CD08;
loc_8272CD00:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CD08:
	// rlwinm r9,r30,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272cd7c
	if (ctx.cr6.eq) goto loc_8272CD7C;
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r24,r9,r10
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r8,r24,r26
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cd7c
	if (ctx.cr6.lt) goto loc_8272CD7C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cd7c
	if (ctx.cr6.lt) goto loc_8272CD7C;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cd7c
	if (!ctx.cr6.lt) goto loc_8272CD7C;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272cd84
	goto loc_8272CD84;
loc_8272CD7C:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CD84:
	// rlwinm r9,r30,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272cdf8
	if (ctx.cr6.eq) goto loc_8272CDF8;
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r30,r9,r10
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r8,r30,r26
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272cdf8
	if (ctx.cr6.lt) goto loc_8272CDF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272cdf8
	if (ctx.cr6.lt) goto loc_8272CDF8;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272cdf8
	if (!ctx.cr6.lt) goto loc_8272CDF8;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272ce00
	goto loc_8272CE00;
loc_8272CDF8:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CE00:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8272CE08:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// blt cr6,0x8272ca30
	if (ctx.cr6.lt) goto loc_8272CA30;
loc_8272CE10:
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(r25.s32, r27.s32, ctx.xer);
	// beq cr6,0x8272cec4
	if (ctx.cr6.eq) goto loc_8272CEC4;
	// lwz r10,60(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// bge cr6,0x8272cec4
	if (!ctx.cr6.lt) goto loc_8272CEC4;
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,1
	r29.s64 = 1;
loc_8272CE38:
	// rlwinm r9,r11,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// slw r8,r29,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 & r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272ceac
	if (ctx.cr6.eq) goto loc_8272CEAC;
	// lwz r9,68(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r31,12(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwzx r25,r9,r10
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r8,r25,r26
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// blt cr6,0x8272ceac
	if (ctx.cr6.lt) goto loc_8272CEAC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272ceac
	if (ctx.cr6.lt) goto loc_8272CEAC;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272ceac
	if (!ctx.cr6.lt) goto loc_8272CEAC;
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// b 0x8272ceb4
	goto loc_8272CEB4;
loc_8272CEAC:
	// stbx r28,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r28.u8);
	// stbx r28,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r28.u8);
loc_8272CEB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// blt cr6,0x8272ce38
	if (ctx.cr6.lt) goto loc_8272CE38;
loc_8272CEC4:
	// add r3,r27,r3
	ctx.r3.u64 = r27.u64 + ctx.r3.u64;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8274CCD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,14828(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14828);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r9,212(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r5,3808(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3808);
	// lwz r4,3804(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3804);
	// lwz r3,3800(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3800);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// b 0x8274cc48
	sub_8274CC48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8274D518) {
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
	ctx.lr = 0x8274D520;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,3712(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3712);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r9,220(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,3744(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// lwz r30,3804(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3804);
	// lwz r27,608(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 608);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,3748(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// lwz r29,3808(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3808);
	// lwz r28,3728(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3728);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,204(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// srawi r25,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r25.s64 = ctx.r3.s32 >> 1;
	// lwz r3,3800(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r6,3752(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r27,608(r28)
	REX_STORE_U32(r28.u32 + 608, r27.u32);
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// mullw r8,r25,r8
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r24,r4,r8
	r24.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r29,r5,r11
	r29.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r27,r6,r11
	r27.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r25,r7,r8
	r25.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8274d63c
	if (!ctx.cr6.gt) goto loc_8274D63C;
loc_8274D5B4:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x826a1e70
	ctx.lr = 0x8274D5C8;
	sub_826A1E70(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274D5E4;
	sub_826A1E70(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274D604;
	sub_826A1E70(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274D620;
	sub_826A1E70(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8274d5b4
	if (ctx.cr6.lt) goto loc_8274D5B4;
loc_8274D63C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82757FE8) {
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
	ctx.lr = 0x82757FF0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r3,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// beq cr6,0x827585dc
	if (ctx.cr6.eq) goto loc_827585DC;
	// addi r20,r4,8
	r20.s64 = ctx.r4.s64 + 8;
	// lwz r23,256(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r19,r20,-1
	r19.s64 = r20.s64 + -1;
	// addi r15,r20,1
	r15.s64 = r20.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r16,r19,-1
	r16.s64 = r19.s64 + -1;
	// addi r14,r15,1
	r14.s64 = r15.s64 + 1;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// addi r17,r16,-1
	r17.s64 = r16.s64 + -1;
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r16.u32);
	// addi r11,r14,1
	ctx.r11.s64 = r14.s64 + 1;
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r14.u32);
	// addi r18,r17,-1
	r18.s64 = r17.s64 + -1;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r18,-1
	ctx.r9.s64 = r18.s64 + -1;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82758060:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// lbz r25,0(r18)
	r25.u64 = REX_LOAD_U8(r18.u32 + 0);
	// lbz r21,0(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r22,0(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r27,0(r17)
	r27.u64 = REX_LOAD_U8(r17.u32 + 0);
	// lbz r29,0(r16)
	r29.u64 = REX_LOAD_U8(r16.u32 + 0);
	// lbz r31,0(r19)
	r31.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lbz r30,0(r20)
	r30.u64 = REX_LOAD_U8(r20.u32 + 0);
	// lbz r28,0(r15)
	r28.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbz r26,0(r14)
	r26.u64 = REX_LOAD_U8(r14.u32 + 0);
	// lbz r24,0(r8)
	r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bne cr6,0x82758214
	if (!ctx.cr6.eq) goto loc_82758214;
	// subf r10,r22,r24
	ctx.r10.u64 = r24.u64 - r22.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = r26.u64 - r24.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r26,r28
	ctx.r9.u64 = r28.u64 - r26.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r17,r30,r31
	r17.u64 = r31.u64 - r30.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r28,r30
	ctx.r4.u64 = r30.u64 - r28.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r16,r29,r27
	r16.u64 = r27.u64 - r29.u64;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r5,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r6,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// subf r3,r31,r29
	ctx.r3.u64 = r29.u64 - r31.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r4,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// adde r5,r10,r5
	temp.u8 = (ctx.r10.u32 + ctx.r5.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r17,31
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r17.s32 >> 31;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// xor r17,r17,r7
	r17.u64 = r17.u64 ^ ctx.r7.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r7,r7,r17
	ctx.r7.u64 = r17.u64 - ctx.r7.u64;
	// subf r17,r27,r25
	r17.u64 = r25.u64 - r27.u64;
	// subfc r15,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	r15.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// adde r8,r7,r4
	temp.u8 = (ctx.r7.u32 + ctx.r4.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// subf r9,r6,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfc r7,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r9,2
	ctx.r9.s64 = 2;
	// adde r11,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r16,31
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = r16.s32 >> 31;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r3,r16,r5
	ctx.r3.u64 = r16.u64 ^ ctx.r5.u64;
	// lwz r16,116(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r7,r25,r21
	ctx.r7.u64 = r21.u64 - r25.u64;
	// subfc r6,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r11,r5,r4
	temp.u8 = (ctx.r5.u32 + ctx.r4.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r17,31
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = r17.s32 >> 31;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r6,r17,r4
	ctx.r6.u64 = r17.u64 ^ ctx.r4.u64;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// subf r5,r4,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subfc r11,r5,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r4,r3
	temp.u8 = (ctx.r4.u32 + ctx.r3.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// lwz r17,112(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r15,120(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r14,124(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// adde r11,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_82758214:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8275843c
	if (ctx.cr6.lt) goto loc_8275843C;
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8276e940
	ctx.lr = 0x82758250;
	sub_8276E940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275856c
	if (ctx.cr6.eq) goto loc_8275856C;
	// subf r10,r21,r25
	ctx.r10.u64 = r25.u64 - r21.u64;
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82758278
	if (ctx.cr6.lt) goto loc_82758278;
	// mr r21,r25
	r21.u64 = r25.u64;
loc_82758278:
	// subf r10,r22,r24
	ctx.r10.u64 = r24.u64 - r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82758294
	if (ctx.cr6.lt) goto loc_82758294;
	// mr r22,r24
	r22.u64 = r24.u64;
loc_82758294:
	// addi r10,r25,2
	ctx.r10.s64 = r25.s64 + 2;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// add r9,r27,r21
	ctx.r9.u64 = r27.u64 + r21.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + r25.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r4,r29,2
	ctx.r4.s64 = r29.s64 + 2;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r5,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// addi r8,r30,2
	ctx.r8.s64 = r30.s64 + 2;
	// srawi r7,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 4;
	// addi r6,r28,2
	ctx.r6.s64 = r28.s64 + 2;
	// stb r11,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r11.u8);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 + r21.u64;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + r22.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + r24.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + r26.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + r26.u64;
	// lbzx r3,r7,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + r23.u32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// stb r3,0(r17)
	REX_STORE_U8(r17.u32 + 0, ctx.r3.u8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// add r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 + r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + r31.u64;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 + r21.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// add r11,r22,r26
	ctx.r11.u64 = r22.u64 + r26.u64;
	// lbzx r8,r4,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + r23.u32);
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// stb r8,0(r16)
	REX_STORE_U8(r16.u32 + 0, ctx.r8.u8);
	// lbzx r3,r9,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// stb r3,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r3.u8);
	// lbzx r11,r6,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r23.u32);
	// stb r11,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r11.u8);
	// lbzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stb r10,0(r15)
	REX_STORE_U8(r15.u32 + 0, ctx.r10.u8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r24,2
	ctx.r7.s64 = r24.s64 + 2;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r22,r10
	ctx.r10.u64 = r22.u64 + ctx.r10.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbzx r10,r3,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + r23.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stb r10,0(r14)
	REX_STORE_U8(r14.u32 + 0, ctx.r10.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x8275856c
	goto loc_8275856C;
loc_8275843C:
	// subf r5,r30,r31
	ctx.r5.u64 = r31.u64 - r30.u64;
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r10,r28,r29
	ctx.r10.u64 = r29.u64 - r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8275856c
	if (!ctx.cr6.lt) goto loc_8275856C;
	// subf r10,r27,r29
	ctx.r10.u64 = r29.u64 - r27.u64;
	// subf r11,r31,r25
	ctx.r11.u64 = r25.u64 - r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// subf r9,r24,r30
	ctx.r9.u64 = r30.u64 - r24.u64;
	// subf r11,r28,r26
	ctx.r11.u64 = r26.u64 - r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827584e4
	if (!ctx.cr6.lt) goto loc_827584E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827584E4:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8275856c
	if (!ctx.cr6.lt) goto loc_8275856C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// blt cr6,0x827584fc
	if (ctx.cr6.lt) goto loc_827584FC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_827584FC:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// ble 0x82758538
	if (!ctx.cr0.gt) goto loc_82758538;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82758554
	if (!ctx.cr6.gt) goto loc_82758554;
	// b 0x82758550
	goto loc_82758550;
loc_82758538:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82758554
	if (!ctx.cr6.lt) goto loc_82758554;
loc_82758550:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82758554:
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lbzx r8,r10,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r23.u32);
	// stb r8,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// stb r7,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r7.u8);
loc_8275856C:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r17,r17,r11
	r17.u64 = r17.u64 + ctx.r11.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r16,r16,r11
	r16.u64 = r16.u64 + ctx.r11.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// add r14,r14,r11
	r14.u64 = r14.u64 + ctx.r11.u64;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r16.u32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// add r18,r18,r11
	r18.u64 = r18.u64 + ctx.r11.u64;
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r14.u32);
	// add r19,r19,r11
	r19.u64 = r19.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// add r20,r20,r11
	r20.u64 = r20.u64 + ctx.r11.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x82758060
	if (ctx.cr6.lt) goto loc_82758060;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_827585DC:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82758ba0
	if (ctx.cr6.eq) goto loc_82758BA0;
	// addi r19,r4,-1
	r19.s64 = ctx.r4.s64 + -1;
	// lwz r23,256(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r15,r19,-1
	r15.s64 = r19.s64 + -1;
	// addi r14,r11,1
	r14.s64 = ctx.r11.s64 + 1;
	// addi r16,r15,-1
	r16.s64 = r15.s64 + -1;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// addi r11,r14,1
	ctx.r11.s64 = r14.s64 + 1;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// addi r17,r16,-1
	r17.s64 = r16.s64 + -1;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r17,-1
	ctx.r9.s64 = r17.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r20,r19,1
	r20.s64 = r19.s64 + 1;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_82758634:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// lbz r25,0(r17)
	r25.u64 = REX_LOAD_U8(r17.u32 + 0);
	// lbz r21,0(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r22,0(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r27,0(r16)
	r27.u64 = REX_LOAD_U8(r16.u32 + 0);
	// lbz r29,0(r15)
	r29.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbz r31,0(r19)
	r31.u64 = REX_LOAD_U8(r19.u32 + 0);
	// lbz r30,0(r20)
	r30.u64 = REX_LOAD_U8(r20.u32 + 0);
	// lbz r28,1(r20)
	r28.u64 = REX_LOAD_U8(r20.u32 + 1);
	// lbz r26,0(r14)
	r26.u64 = REX_LOAD_U8(r14.u32 + 0);
	// lbz r24,0(r8)
	r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bne cr6,0x827587e4
	if (!ctx.cr6.eq) goto loc_827587E4;
	// subf r10,r22,r24
	ctx.r10.u64 = r24.u64 - r22.u64;
	// lwz r14,116(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = r26.u64 - r24.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r26,r28
	ctx.r9.u64 = r28.u64 - r26.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r18,r30,r31
	r18.u64 = r31.u64 - r30.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r8,r28,r30
	ctx.r8.u64 = r30.u64 - r28.u64;
	// subfc r6,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r16,r31,r29
	r16.u64 = r29.u64 - r31.u64;
	// adde r5,r4,r5
	temp.u8 = (ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// xor r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r11,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r6,r4,r6
	temp.u8 = (ctx.r4.u32 + ctx.r6.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r4,r29,r27
	ctx.r4.u64 = r27.u64 - r29.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r8,r8,r5
	temp.u8 = (ctx.r8.u32 + ctx.r5.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r18,31
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r18.s32 >> 31;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r18,r18,r3
	r18.u64 = r18.u64 ^ ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r3,r3,r18
	ctx.r3.u64 = r18.u64 - ctx.r3.u64;
	// subf r18,r27,r25
	r18.u64 = r25.u64 - r27.u64;
	// subfc r15,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	r15.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// adde r7,r3,r5
	temp.u8 = (ctx.r3.u32 + ctx.r5.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r16,31
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = r16.s32 >> 31;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
	// xor r3,r16,r6
	ctx.r3.u64 = r16.u64 ^ ctx.r6.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// xor r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r5,r25,r21
	ctx.r5.u64 = r21.u64 - r25.u64;
	// subfc r4,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r10,r10,r3
	temp.u8 = (ctx.r10.u32 + ctx.r3.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r18,31
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r18.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r6,r18,r8
	ctx.r6.u64 = r18.u64 ^ ctx.r8.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subfc r10,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r10,r3,r7
	temp.u8 = (ctx.r3.u32 + ctx.r7.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r16,124(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r15,120(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// adde r11,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_827587E4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82758a08
	if (ctx.cr6.lt) goto loc_82758A08;
	// lwz r18,380(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8276e940
	ctx.lr = 0x82758820;
	sub_8276E940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82758b38
	if (ctx.cr6.eq) goto loc_82758B38;
	// subf r11,r21,r25
	ctx.r11.u64 = r25.u64 - r21.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// blt cr6,0x82758844
	if (ctx.cr6.lt) goto loc_82758844;
	// mr r21,r25
	r21.u64 = r25.u64;
loc_82758844:
	// subf r11,r22,r24
	ctx.r11.u64 = r24.u64 - r22.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// blt cr6,0x82758860
	if (ctx.cr6.lt) goto loc_82758860;
	// mr r22,r24
	r22.u64 = r24.u64;
loc_82758860:
	// rlwinm r10,r21,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r25,2
	ctx.r11.s64 = r25.s64 + 2;
	// add r9,r21,r10
	ctx.r9.u64 = r21.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r21
	ctx.r10.u64 = r27.u64 + r21.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + r25.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r29,2
	ctx.r5.s64 = r29.s64 + 2;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// srawi r8,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r7,r30,2
	ctx.r7.s64 = r30.s64 + 2;
	// lbzx r6,r8,r23
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + r23.u32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + r26.u64;
	// addi r3,r28,2
	ctx.r3.s64 = r28.s64 + 2;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// stb r6,0(r17)
	REX_STORE_U8(r17.u32 + 0, ctx.r6.u8);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r6,r9,r21
	ctx.r6.u64 = ctx.r9.u64 + r21.u64;
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbzx r4,r8,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + r23.u32);
	// add r3,r10,r25
	ctx.r3.u64 = ctx.r10.u64 + r25.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// stb r4,0(r16)
	REX_STORE_U8(r16.u32 + 0, ctx.r4.u8);
	// add r11,r22,r26
	ctx.r11.u64 = r22.u64 + r26.u64;
	// lbzx r6,r5,r23
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stb r6,0(r15)
	REX_STORE_U8(r15.u32 + 0, ctx.r6.u8);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lbzx r4,r10,r23
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r23.u32);
	// stb r4,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r4.u8);
	// lbzx r3,r8,r23
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + r23.u32);
	// stb r3,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r3.u8);
	// lbzx r11,r7,r23
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + r23.u32);
	// stb r11,1(r20)
	REX_STORE_U8(r20.u32 + 1, ctx.r11.u8);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r24,2
	ctx.r7.s64 = r24.s64 + 2;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r22,r10
	ctx.r10.u64 = r22.u64 + ctx.r10.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbzx r10,r3,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + r23.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stb r10,0(r14)
	REX_STORE_U8(r14.u32 + 0, ctx.r10.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x82758b38
	goto loc_82758B38;
loc_82758A08:
	// subf r5,r30,r31
	ctx.r5.u64 = r31.u64 - r30.u64;
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r10,r28,r29
	ctx.r10.u64 = r29.u64 - r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82758b38
	if (!ctx.cr6.lt) goto loc_82758B38;
	// subf r10,r27,r29
	ctx.r10.u64 = r29.u64 - r27.u64;
	// subf r11,r31,r25
	ctx.r11.u64 = r25.u64 - r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// subf r9,r24,r30
	ctx.r9.u64 = r30.u64 - r24.u64;
	// subf r11,r28,r26
	ctx.r11.u64 = r26.u64 - r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82758ab0
	if (!ctx.cr6.lt) goto loc_82758AB0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82758AB0:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82758b38
	if (!ctx.cr6.lt) goto loc_82758B38;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// blt cr6,0x82758ac8
	if (ctx.cr6.lt) goto loc_82758AC8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82758AC8:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// ble 0x82758b04
	if (!ctx.cr0.gt) goto loc_82758B04;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82758b20
	if (!ctx.cr6.gt) goto loc_82758B20;
	// b 0x82758b1c
	goto loc_82758B1C;
loc_82758B04:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82758b20
	if (!ctx.cr6.lt) goto loc_82758B20;
loc_82758B1C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82758B20:
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lbzx r8,r10,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r23.u32);
	// stb r8,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// stb r7,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r7.u8);
loc_82758B38:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r16,r16,r11
	r16.u64 = r16.u64 + ctx.r11.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// add r14,r14,r11
	r14.u64 = r14.u64 + ctx.r11.u64;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// add r17,r17,r11
	r17.u64 = r17.u64 + ctx.r11.u64;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// add r19,r19,r11
	r19.u64 = r19.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// add r20,r20,r11
	r20.u64 = r20.u64 + ctx.r11.u64;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x82758634
	if (ctx.cr6.lt) goto loc_82758634;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_82758BA0:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82759020
	if (ctx.cr6.eq) goto loc_82759020;
	// addi r16,r4,16
	r16.s64 = ctx.r4.s64 + 16;
	// lwz r18,256(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r22,r16,-1
	r22.s64 = r16.s64 + -1;
	// addi r15,r16,1
	r15.s64 = r16.s64 + 1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r19,r22,-1
	r19.s64 = r22.s64 + -1;
	// addi r9,r15,1
	ctx.r9.s64 = r15.s64 + 1;
	// addi r20,r19,-1
	r20.s64 = r19.s64 + -1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r21,r20,-1
	r21.s64 = r20.s64 + -1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r8,r21,-1
	ctx.r8.s64 = r21.s64 + -1;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_82758BF0:
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// lbz r23,0(r10)
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r3,r3,r23
	ctx.r3.u64 = r23.u64 - ctx.r3.u64;
	// lbz r24,0(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r25,0(r15)
	r25.u64 = REX_LOAD_U8(r15.u32 + 0);
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// lbz r28,0(r16)
	r28.u64 = REX_LOAD_U8(r16.u32 + 0);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// lbz r31,0(r19)
	r31.u64 = REX_LOAD_U8(r19.u32 + 0);
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// lbz r26,0(r22)
	r26.u64 = REX_LOAD_U8(r22.u32 + 0);
	// subf r7,r23,r24
	ctx.r7.u64 = r24.u64 - r23.u64;
	// lbz r29,0(r20)
	r29.u64 = REX_LOAD_U8(r20.u32 + 0);
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lbz r30,0(r21)
	r30.u64 = REX_LOAD_U8(r21.u32 + 0);
	// subf r4,r24,r25
	ctx.r4.u64 = r25.u64 - r24.u64;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subf r27,r25,r28
	r27.u64 = r28.u64 - r25.u64;
	// adde r8,r6,r8
	temp.u8 = (ctx.r6.u32 + ctx.r8.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r17,r31,r29
	r17.u64 = r29.u64 - r31.u64;
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subfc r9,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r7,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r26,r31
	ctx.r4.u64 = r31.u64 - r26.u64;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r9,2
	ctx.r9.s64 = 2;
	// adde r6,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r27.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r11,r27,r3
	ctx.r11.u64 = r27.u64 ^ ctx.r3.u64;
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r27,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	r27.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// adde r8,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subfc r4,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subf r3,r29,r30
	ctx.r3.u64 = r30.u64 - r29.u64;
	// adde r9,r9,r6
	temp.u8 = (ctx.r9.u32 + ctx.r6.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r17,31
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r17.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r17,r8
	ctx.r6.u64 = r17.u64 ^ ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r9,r28,r26
	ctx.r9.u64 = r26.u64 - r28.u64;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r8,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r10,r30,r27
	ctx.r10.u64 = r27.u64 - r30.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r7,r11,r4
	temp.u8 = (ctx.r11.u32 + ctx.r4.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// subfc r6,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r5,r3,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r5,r4
	temp.u8 = (ctx.r5.u32 + ctx.r4.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// li r10,2
	ctx.r10.s64 = 2;
	// xor r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// adde r10,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// blt cr6,0x82758ea4
	if (ctx.cr6.lt) goto loc_82758EA4;
	// lwz r17,380(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// rlwinm r11,r17,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8276e940
	ctx.lr = 0x82758DAC;
	sub_8276E940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82758fc4
	if (ctx.cr6.eq) goto loc_82758FC4;
	// subf r11,r27,r30
	ctx.r11.u64 = r30.u64 - r27.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x82758dd0
	if (ctx.cr6.lt) goto loc_82758DD0;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82758DD0:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,2
	ctx.r10.s64 = r26.s64 + 2;
	// addi r7,r31,2
	ctx.r7.s64 = r31.s64 + 2;
	// add r8,r29,r27
	ctx.r8.u64 = r29.u64 + r27.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + r29.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + r26.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + r28.u64;
	// lbzx r5,r7,r18
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + r18.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// stb r5,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r5.u8);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// lbzx r8,r3,r18
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + r18.u32);
	// stb r8,0(r20)
	REX_STORE_U8(r20.u32 + 0, ctx.r8.u8);
	// lbzx r7,r10,r18
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r18.u32);
	// stb r7,0(r19)
	REX_STORE_U8(r19.u32 + 0, ctx.r7.u8);
	// lbzx r6,r9,r18
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + r18.u32);
	// stb r6,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r6.u8);
	// b 0x82758fc4
	goto loc_82758FC4;
loc_82758EA4:
	// subf r10,r25,r31
	ctx.r10.u64 = r31.u64 - r25.u64;
	// lwz r8,380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82758fc4
	if (!ctx.cr6.lt) goto loc_82758FC4;
	// subf r10,r29,r31
	ctx.r10.u64 = r31.u64 - r29.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// subf r8,r23,r28
	ctx.r8.u64 = r28.u64 - r23.u64;
	// subf r11,r25,r24
	ctx.r11.u64 = r24.u64 - r25.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r11,r3,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82758f48
	if (!ctx.cr6.lt) goto loc_82758F48;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82758F48:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82758fc4
	if (!ctx.cr6.lt) goto loc_82758FC4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// blt cr6,0x82758f60
	if (ctx.cr6.lt) goto loc_82758F60;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82758F60:
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// ble 0x82758f9c
	if (!ctx.cr0.gt) goto loc_82758F9C;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82758fb8
	if (!ctx.cr6.gt) goto loc_82758FB8;
	// b 0x82758fb4
	goto loc_82758FB4;
loc_82758F9C:
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82758fb8
	if (!ctx.cr6.lt) goto loc_82758FB8;
loc_82758FB4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82758FB8:
	// subf r11,r10,r26
	ctx.r11.u64 = r26.u64 - ctx.r10.u64;
	// lbzx r10,r11,r18
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r18.u32);
	// stb r10,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r10.u8);
loc_82758FC4:
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r21,r21,r11
	r21.u64 = r21.u64 + ctx.r11.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addic. r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// add r20,r20,r11
	r20.u64 = r20.u64 + ctx.r11.u64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r19,r19,r11
	r19.u64 = r19.u64 + ctx.r11.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r22,r22,r11
	r22.u64 = r22.u64 + ctx.r11.u64;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// add r16,r16,r11
	r16.u64 = r16.u64 + ctx.r11.u64;
	// add r15,r15,r11
	r15.u64 = r15.u64 + ctx.r11.u64;
	// bne 0x82758bf0
	if (!ctx.cr0.eq) goto loc_82758BF0;
loc_82759020:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827C9268) {
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
	ctx.lr = 0x827C9270;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,624(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r27,r3,168
	r27.s64 = ctx.r3.s64 + 168;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c92d8
	if (ctx.cr6.lt) goto loc_827C92D8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82731930
	ctx.lr = 0x827C92D0;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9330
	goto loc_827C9330;
loc_827C92D8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c932c
	if (!ctx.cr6.gt) goto loc_827C932C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C92E4:
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
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r25,r27,r3
	r25.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// or r9,r25,r9
	ctx.r9.u64 = r25.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r29
	REX_STORE_U16(ctx.r3.u32 + r29.u32, ctx.r5.u16);
	// bdnz 0x827c92e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C92E4;
loc_827C932C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9330:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9398
	if (!ctx.cr6.eq) goto loc_827C9398;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// std r3,112(r30)
	REX_STORE_U64(r30.u32 + 112, ctx.r3.u64);
	// std r3,96(r30)
	REX_STORE_U64(r30.u32 + 96, ctx.r3.u64);
	// std r3,80(r30)
	REX_STORE_U64(r30.u32 + 80, ctx.r3.u64);
	// std r3,64(r30)
	REX_STORE_U64(r30.u32 + 64, ctx.r3.u64);
	// std r3,48(r30)
	REX_STORE_U64(r30.u32 + 48, ctx.r3.u64);
	// std r3,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r3.u64);
	// std r3,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r3.u64);
	// std r3,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r3.u64);
	// b 0x827c93a4
	goto loc_827C93A4;
loc_827C9398:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827aec08
	ctx.lr = 0x827C93A4;
	sub_827AEC08(ctx, base);
loc_827C93A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,624(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 624);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c93f8
	if (ctx.cr6.lt) goto loc_827C93F8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82731930
	ctx.lr = 0x827C93F0;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9450
	goto loc_827C9450;
loc_827C93F8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c944c
	if (!ctx.cr6.gt) goto loc_827C944C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9404:
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
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// or r9,r28,r9
	ctx.r9.u64 = r28.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r29
	REX_STORE_U16(ctx.r3.u32 + r29.u32, ctx.r5.u16);
	// bdnz 0x827c9404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9404;
loc_827C944C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9450:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c94bc
	if (!ctx.cr6.eq) goto loc_827C94BC;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// std r3,120(r30)
	REX_STORE_U64(r30.u32 + 120, ctx.r3.u64);
	// std r3,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r3.u64);
	// std r3,88(r30)
	REX_STORE_U64(r30.u32 + 88, ctx.r3.u64);
	// std r3,72(r30)
	REX_STORE_U64(r30.u32 + 72, ctx.r3.u64);
	// std r3,56(r30)
	REX_STORE_U64(r30.u32 + 56, ctx.r3.u64);
	// std r3,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r3.u64);
	// std r3,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r3.u64);
	// std r3,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r3.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_827C94BC:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827aec08
	ctx.lr = 0x827C94C8;
	sub_827AEC08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827D38D8) {
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
	ctx.lr = 0x827D38E0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r27,50(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// stw r10,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mullw r10,r27,r5
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// stw r8,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// stw r7,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// lwz r26,348(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r28,284(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r20,292(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// or r21,r9,r4
	r21.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r24,r8,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r7,r24,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-31648
	r25.s64 = ctx.r11.s64 + -31648;
	// rlwinm r30,r21,6,0,25
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lis r6,115
	ctx.r6.s64 = 7536640;
	// lwzx r5,r7,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r29,r6,115
	r29.u64 = ctx.r6.u64 | 115;
	// rlwinm r4,r5,1,15,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// extsh r23,r5
	r23.s64 = ctx.r5.s16;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r22,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	r22.s64 = ctx.r5.s32 >> 16;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// clrlwi r11,r23,30
	ctx.r11.u64 = r23.u32 & 0x3;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// subf r8,r5,r28
	ctx.r8.u64 = r28.u64 - ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - r30.u64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r7,r22,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0x3C;
	// srawi r16,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r16.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r3.s64 = r22.s32 >> 1;
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// rlwinm r11,r3,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF8;
	// lwzx r10,r7,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// add r15,r10,r11
	r15.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r15.u32);
	// beq cr6,0x827d39c4
	if (ctx.cr6.eq) goto loc_827D39C4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827d3298
	ctx.lr = 0x827D39BC;
	sub_827D3298(ctx, base);
	// lwz r23,96(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,100(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_827D39C4:
	// add r11,r27,r24
	ctx.r11.u64 = r27.u64 + r24.u64;
	// lis r27,4
	r27.s64 = 262144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r30,r27
	ctx.r5.u64 = r30.u64 + r27.u64;
	// lwzx r9,r10,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// rlwinm r8,r9,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x10000;
	// extsh r24,r9
	r24.s64 = ctx.r9.s16;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r19,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	r19.s64 = ctx.r9.s32 >> 16;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// clrlwi r11,r24,30
	ctx.r11.u64 = r24.u32 & 0x3;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// subf r3,r9,r28
	ctx.r3.u64 = r28.u64 - ctx.r9.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r19,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3C;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + r29.u64;
	// srawi r14,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r14.s64 = ctx.r10.s32 >> 1;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// srawi r7,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r7.s64 = r19.s32 >> 1;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// rlwinm r10,r7,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r6,0,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r4,0,16,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d3a5c
	if (ctx.cr6.eq) goto loc_827D3A5C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x827d3298
	ctx.lr = 0x827D3A54;
	sub_827D3298(ctx, base);
	// lwz r24,100(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,96(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_827D3A5C:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// rlwinm r30,r21,5,0,26
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwimi r11,r15,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lis r10,59
	ctx.r10.s64 = 3866624;
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// ori r29,r10,59
	r29.u64 = ctx.r10.u64 | 59;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - r30.u64;
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + r29.u64;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3ab8
	if (ctx.cr6.eq) goto loc_827D3AB8;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827d3368
	ctx.lr = 0x827D3AB0;
	sub_827D3368(ctx, base);
	// lwz r16,104(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,108(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_827D3AB8:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// add r5,r30,r27
	ctx.r5.u64 = r30.u64 + r27.u64;
	// rlwimi r11,r26,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r20
	ctx.r9.u64 = r20.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + r29.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3b04
	if (ctx.cr6.eq) goto loc_827D3B04;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827d3368
	ctx.lr = 0x827D3B00;
	sub_827D3368(ctx, base);
	// lwz r14,112(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_827D3B04:
	// lis r27,-32119
	r27.s64 = -2104950784;
	// lhz r8,74(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 74);
	// srawi r7,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	ctx.r7.s64 = r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r9.s64 = r23.s32 >> 2;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r11,14272(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14272);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r29,r10,r17
	r29.u64 = ctx.r10.u64 + r17.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf. r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d3bac
	if (!ctx.cr0.eq) goto loc_827D3BAC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r30,128
	ctx.r10.s64 = r30.s64 + 128;
	// dcbt r10,r29
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3BAC:
	// clrlwi r28,r22,30
	r28.u64 = r22.u32 & 0x3;
	// rlwinm r10,r23,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,14272(r27)
	REX_STORE_U32(r27.u32 + 14272, ctx.r11.u32);
	// clrlwi r26,r23,30
	r26.u64 = r23.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r25,1
	r25.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwzx r4,r5,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x827D3C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827d3c30
	if (ctx.cr6.eq) goto loc_827D3C30;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827826a0
	ctx.lr = 0x827D3C30;
	sub_827826A0(ctx, base);
loc_827D3C30:
	// lwz r11,14272(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14272);
	// srawi r9,r19,2
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x3) != 0);
	ctx.r9.s64 = r19.s32 >> 2;
	// srawi r8,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	ctx.r8.s64 = r24.s32 >> 2;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r9,r17
	r29.u64 = ctx.r9.u64 + r17.u64;
	// subf. r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r26,r10,r18
	r26.u64 = ctx.r10.u64 + r18.u64;
	// rotlwi r30,r10,1
	r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bne 0x827d3cdc
	if (!ctx.cr0.eq) goto loc_827D3CDC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r30,128
	ctx.r10.s64 = r30.s64 + 128;
	// dcbt r10,r29
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3CDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// clrlwi r28,r19,30
	r28.u64 = r19.u32 & 0x3;
	// stw r11,14272(r27)
	REX_STORE_U32(r27.u32 + 14272, ctx.r11.u32);
	// rlwinm r11,r24,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xC;
	// clrlwi r27,r24,30
	r27.u64 = r24.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,241
	ctx.r11.s64 = ctx.r11.s64 + 241;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r11,r3,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827d3d5c
	if (ctx.cr6.eq) goto loc_827D3D5C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827826a0
	ctx.lr = 0x827D3D5C;
	sub_827826A0(ctx, base);
loc_827D3D5C:
	// lis r30,-32119
	r30.s64 = -2104950784;
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// srawi r7,r15,2
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x3) != 0);
	ctx.r7.s64 = r15.s32 >> 2;
	// lwz r23,324(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r9,r16,2
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x3) != 0);
	ctx.r9.s64 = r16.s32 >> 2;
	// lwz r22,332(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r11,14276(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14276);
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + r23.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r22
	r29.u64 = ctx.r10.u64 + r22.u64;
	// subf. r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bne 0x827d3e10
	if (!ctx.cr0.eq) goto loc_827D3E10;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3E10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// clrlwi r28,r15,30
	r28.u64 = r15.u32 & 0x3;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r11,14276(r30)
	REX_STORE_U32(r30.u32 + 14276, ctx.r11.u32);
	// rlwinm r11,r16,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xC;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// clrlwi r27,r16,30
	r27.u64 = r16.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,14276(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14276);
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x827d3eec
	if (!ctx.cr0.eq) goto loc_827D3EEC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r29
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r29
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3EEC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,14276(r30)
	REX_STORE_U32(r30.u32 + 14276, ctx.r11.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r10,14276(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14276);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// srawi r8,r14,2
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r8.s64 = r14.s32 >> 2;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf. r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r3,r9,r23
	ctx.r3.u64 = ctx.r9.u64 + r23.u64;
	// add r29,r9,r22
	r29.u64 = ctx.r9.u64 + r22.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bne 0x827d3fec
	if (!ctx.cr0.eq) goto loc_827D3FEC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r3
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r10,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r3
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r3
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D3FEC:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// clrlwi r28,r7,30
	r28.u64 = ctx.r7.u32 & 0x3;
	// stw r11,14276(r30)
	REX_STORE_U32(r30.u32 + 14276, ctx.r11.u32);
	// rlwinm r11,r14,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xC;
	// clrlwi r27,r14,30
	r27.u64 = r14.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// bctrl 
	ctx.lr = 0x827D4030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,14276(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14276);
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x827d40c0
	if (!ctx.cr0.eq) goto loc_827D40C0;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r29
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r29
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D40C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,14276(r30)
	REX_STORE_U32(r30.u32 + 14276, ctx.r11.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,35(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

