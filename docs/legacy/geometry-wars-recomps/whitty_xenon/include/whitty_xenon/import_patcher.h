// import_patcher.h - resolves XEX import placeholders into usable values.
//
// Every import gets one "value" record (record_type 0) in the image, and a
// callable one also gets a "thunk" record (record_type 1) immediately after
// it - the real Xbox 360 XEX2 import layout, where a title that only *calls*
// an import needs just the thunk and one that also (or only) takes its
// *address* reads the value record.
//
// XenonRecomp resolves every `bl` to a thunk address into a direct call to
// `__imp__<Name>` at compile time, and maps computed calls to the same
// address through its own function table, so thunk records are never read as
// data and are left untouched here. Value records are not so lucky: left as
// the loader found them, a value record holds the raw ordinal descriptor
// word, and guest code that dereferences it - which Alien Breed's own
// startup code does, for XexExecutableModuleHandle - reads whatever unmapped
// address that small integer happens to name.
//
// This patches every value record to what a real loader would have left
// there. Behaviour matches Xenia's XexModule::SetupLibraryImports: a
// function's value record becomes an ignored sentinel (nothing follows it -
// calls go through the thunk), a variable's becomes the guest address of
// real backing storage, and an unrecognised ordinal becomes a different,
// still-inert sentinel.
#pragma once

#include "whitty_xenon/imports.h"
#include "whitty_xenon/kernel_state.h"

namespace whitty_xenon {

// Patches every import's value record. Call after load_xex_image() (the
// records must be committed); decode_imports() need not have run first, since
// this walks record_addresses directly. Idempotent.
void patch_import_variables(kernel_state& kernel,
                            const std::vector<xex_import_library>& libraries);

// Records each function import's thunk address on the kernel, keyed by
// (library, ordinal), so XexGetProcedureAddress can hand it back for an
// ordinal the title also imports statically - the same address XenonRecomp
// already resolves direct calls to. Call after decode_imports().
void register_import_thunks(kernel_state& kernel,
                            const std::vector<xex_import_library>& libraries);

} // namespace whitty_xenon
