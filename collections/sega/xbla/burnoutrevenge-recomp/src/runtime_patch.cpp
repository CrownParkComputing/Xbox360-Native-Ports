// Runtime patch: replace the codegen-generated __savegprlr_N and __restgprlr_N
// helpers with empty bodies. Those two pairs account for ~9% of all profile
// samples per the recomp_perf note - every prologue and epilogue of every
// recompiled function calls them to spill/restore PPC non-volatile registers
// to memory. The actual registers are not used across the call boundary in
// practice (they're preserved in the prologue/epilogue by convention); with
// strong empty definitions, the linker resolves all direct callers to these
// stubs, the prologue/epilogue becomes a single tail-call, and the host CPU
// keeps the registers in host registers anyway.
//
// Strong definitions (not weak) take precedence over the codegen's
// `__attribute__((weak, alias("__imp__name")))` so the stub wins.
#include <cstdint>
namespace rex { struct PPCContext; }
extern "C" {
#define EMPTY(name) void name(rex::PPCContext&, uint8_t*) {}
EMPTY(__savegprlr_14)  EMPTY(__restgprlr_14)
EMPTY(__savegprlr_15)  EMPTY(__restgprlr_15)
EMPTY(__savegprlr_16)  EMPTY(__restgprlr_16)
EMPTY(__savegprlr_17)  EMPTY(__restgprlr_17)
EMPTY(__savegprlr_18)  EMPTY(__restgprlr_18)
EMPTY(__savegprlr_19)  EMPTY(__restgprlr_19)
EMPTY(__savegprlr_20)  EMPTY(__restgprlr_20)
EMPTY(__savegprlr_21)  EMPTY(__restgprlr_21)
EMPTY(__savegprlr_22)  EMPTY(__restgprlr_22)
EMPTY(__savegprlr_23)  EMPTY(__restgprlr_23)
EMPTY(__savegprlr_24)  EMPTY(__restgprlr_24)
EMPTY(__savegprlr_25)  EMPTY(__restgprlr_25)
EMPTY(__savegprlr_26)  EMPTY(__restgprlr_26)
EMPTY(__savegprlr_27)  EMPTY(__restgprlr_27)
EMPTY(__savegprlr_28)  EMPTY(__restgprlr_28)
EMPTY(__savegprlr_29)  EMPTY(__restgprlr_29)
EMPTY(__savegprlr_30)  EMPTY(__restgprlr_30)
EMPTY(__savegprlr_31)  EMPTY(__restgprlr_31)
#undef EMPTY
}
