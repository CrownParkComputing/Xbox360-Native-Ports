// MCLA Complete Edition timing overrides. Generated originals remain intact.
// Equivalent to the Xenia Canary "60 FPS - Game Speed Fix" by illusion/boma:
// https://github.com/xenia-canary/game-patches/blob/main/patches/545407F8%20-%20Midnight%20Club%20Los%20Angeles%20(Complete%20Edition).patch.toml
// Verified original instructions: 821BDB08 bne cr6,821BDBC8; 82419AA0 li r11,2.
// MCLA_60FPS=0 restores the original functions for regression comparisons.
#include "generated/default/midnightclubla_funcs.9.h"
#include "generated/default/midnightclubla_funcs.36.h"
#include "generated/default/midnightclubla_funcs.83.h"

REX_EXTERN(__imp__sub_821BDA90);
REX_EXTERN(__imp__sub_824199B0);

static bool Mcla60FpsEnabled() {
    static const bool enabled = [] {
        const char* value = std::getenv("MCLA_60FPS");
        return !value || std::string_view(value) != "0";
    }();
    return enabled;
}

REX_EXTERN(sub_821BDA90) {
    if (!Mcla60FpsEnabled()) { __imp__sub_821BDA90(ctx, base); return; }
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
loc_821BDA90:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bda90
	if (ctx.cr6.eq) goto loc_821BDA90;
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// lfs f13,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lbz r7,56(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 56);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfs f0,4368(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4368);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,7444(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 7444);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,92(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fsel f7,f1,f1,f8
	ctx.f7.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f8.f64;
	// stfs f7,100(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fmuls f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f7,88(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// 0x821BDB08: use elapsed-time simulation at variable frame rates.
	goto loc_821BDC34;
	// lbz r10,58(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 58);
	// lfs f12,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bdb90
	if (!ctx.cr6.eq) goto loc_821BDB90;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bdb90
	if (!ctx.cr6.eq) goto loc_821BDB90;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bdb58
	if (!ctx.cr6.eq) goto loc_821BDB58;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdb58
	if (ctx.cr6.eq) goto loc_821BDB58;
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_821BDB58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3796);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x821bdc34
	if (ctx.cr6.eq) goto loc_821BDC34;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821bdb80
	if (!ctx.cr6.lt) goto loc_821BDB80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x821bdc34
	goto loc_821BDC34;
loc_821BDB80:
	// fmuls f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x821bdc34
	goto loc_821BDC34;
loc_821BDB90:
	// lfs f11,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// beq cr6,0x821bdc34
	if (ctx.cr6.eq) goto loc_821BDC34;
	// lfs f13,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x821bdc34
	goto loc_821BDC34;
loc_821BDBC8:
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bdbf0
	if (!ctx.cr6.eq) goto loc_821BDBF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3796(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3796);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821bdbf0
	if (!ctx.cr6.eq) goto loc_821BDBF0;
	// lfs f0,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_821BDBF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bdc24
	if (!ctx.cr6.eq) goto loc_821BDC24;
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bdc24
	if (ctx.cr6.eq) goto loc_821BDC24;
	// lfs f13,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_821BDC24:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r11,56(r3)
	REX_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
loc_821BDC34:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// beq cr6,0x821bdc58
	if (ctx.cr6.eq) goto loc_821BDC58;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
loc_821BDC58:
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsel f7,f11,f13,f0
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f6,f9,f12,f0
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsel f0,f5,f8,f7
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsel f3,f4,f8,f6
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f8.f64 : ctx.f6.f64;
	// stfs f3,88(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// beq cr6,0x821bdcc8
	if (ctx.cr6.eq) goto loc_821BDCC8;
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// beq cr6,0x821bdcc8
	if (ctx.cr6.eq) goto loc_821BDCC8;
	// lfs f13,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_821BDCC8:
	// fdivs f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

REX_EXTERN(sub_824199B0) {
    if (!Mcla60FpsEnabled()) { __imp__sub_824199B0(ctx, base); return; }
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823d91f8
	ctx.lr = 0x824199B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82429570
	ctx.lr = 0x824199CC;
	sub_82429570(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241bd08
	ctx.lr = 0x824199D8;
	sub_8241BD08(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82419a60
	if (!ctx.cr6.eq) goto loc_82419A60;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824199fc
	if (!ctx.cr6.gt) goto loc_824199FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412710
	ctx.lr = 0x824199FC;
	sub_82412710(ctx, base);
loc_824199FC:
	// li r11,1401
	ctx.r11.s64 = 1401;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82419A60:
	// lwz r11,13596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419aa8
	if (ctx.cr6.eq) goto loc_82419AA8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82419aa8
	if (ctx.cr6.eq) goto loc_82419AA8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82419aa0
	if (ctx.cr6.eq) goto loc_82419AA0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82419a98
	if (ctx.cr6.eq) goto loc_82419A98;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82419ab0
	if (!ctx.cr6.eq) goto loc_82419AB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82419ab4
	goto loc_82419AB4;
loc_82419A98:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82419ab4
	goto loc_82419AB4;
loc_82419AA0:
	// 0x82419AA0: present every vblank instead of every other vblank.
	ctx.r11.s64 = 1;
	// b 0x82419ab4
	goto loc_82419AB4;
loc_82419AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82419ab4
	goto loc_82419AB4;
loc_82419AB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82419AB4:
	// lwz r10,11852(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11852);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,9,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7F;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// or r30,r11,r29
	r30.u64 = ctx.r11.u64 | r29.u64;
	// ble cr6,0x82419ae4
	if (!ctx.cr6.gt) goto loc_82419AE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412710
	ctx.lr = 0x82419AE0;
	sub_82412710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82419AE4:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,-26600
	ctx.r6.s64 = ctx.r11.s64 + -26600;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82411f68
	ctx.lr = 0x82419AFC;
	sub_82411F68(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x82419b6c
	if (!ctx.cr6.eq) goto loc_82419B6C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82419b1c
	if (!ctx.cr6.gt) goto loc_82419B1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412710
	ctx.lr = 0x82419B1C;
	sub_82412710(ctx, base);
loc_82419B1C:
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82419B6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82429570
	ctx.lr = 0x82419B78;
	sub_82429570(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823d9248
	return;
}
