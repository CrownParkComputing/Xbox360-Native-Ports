// Split/Second — SKIPPER.DLL (DLC/content loader) host overrides.
//
// These are strong definitions that replace the weak aliases emitted by
// DEFINE_REX_FUNC in the generated skipper sources, so the containment below
// survives a re-codegen. It previously lived as a hand edit inside
// generated/skipper/splitsecond_recomp.9.cpp and was silently reverted by the
// regen in commit e056618.
//
// Compiled into the splitsecond_SKIPPER module (hidden visibility) via
// target_sources() in the top-level CMakeLists.txt.

#include <rex/hook.h>
#include <rex/logging.h>

// sub_980DDBD8 — start routine of skipper's content-processing thread.
//
// With no DLC device mounted, this subsystem walks an object graph whose
// buffers were never allocated: it produced a storm of ~17,000 "read/write of
// guest 0x00000000" faults per boot and hung the title before the engine
// handoff. No-oping the thread entry takes the storm to zero and the game
// boots through to the title screen, menus and a race. The subsystem is
// absent-DLC content processing and is not needed to boot — this is the
// "no downloadable content" path, the same outcome the graceful DLC-check
// path produces (see docs/STATUS.md).
REX_HOOK_RAW(sub_980DDBD8) {
  (void)base;
  static bool logged = false;
  if (!logged) {
    logged = true;
    REXLOG_INFO("[skipper] content-processing thread entry stubbed (no DLC)");
  }
  ctx.r3.u64 = 0;
}
