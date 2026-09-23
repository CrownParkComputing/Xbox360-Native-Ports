// ppc_function_table.h - the indirect-call dispatch table XenonRecomp expects.
//
// A `bctr`/`bctrl` through a computed address (function pointers, vtables,
// CRT initializer tables - Alien Breed's startup walks one of these within
// its first few functions) is translated by XenonRecomp into
// PPC_CALL_INDIRECT_FUNC(addr), which expands (see the generated
// ppc_context.h) to a raw pointer read at:
//
//   base + PPC_IMAGE_BASE + PPC_IMAGE_SIZE + (addr - PPC_CODE_BASE) * 2
//
// one 8-byte native PPCFunc* slot per 4-byte-aligned code address, covering
// the whole code region, immediately past the mapped image. `base` is the
// same host pointer every recompiled function receives (whitty_xenon's
// guest_memory reserves the full 4 GiB address space, so this is simply
// another region within that one reservation). This builds that table once
// from PPCFuncMappings[] - the array XenonRecomp emits with one entry per
// recompiled function, sentinel-terminated by a {0, nullptr} entry.
#pragma once

#include "whitty_xenon/memory.h"

#include <string>

// Commits the table's address range and fills every slot PPCFuncMappings[]
// names. Must run after guest_memory::initialize() and before any indirect
// call executes; the image need not be loaded first.
bool build_ppc_function_table(whitty_xenon::guest_memory& memory,
                              std::string& error);
