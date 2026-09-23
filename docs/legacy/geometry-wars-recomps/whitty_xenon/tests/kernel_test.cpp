// Unit tests for the kernel export table and requirement resolution.
//
// The point of this layer is legibility during bring-up, so the tests check the
// things that make a failure readable: that ordinals resolve to the right
// names, that an unknown one still produces something actionable, and that the
// missing list is ordered rather than arbitrary.
#include "whitty_xenon/kernel.h"

#include <cassert>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

// Builds an import library the way decode_imports() would leave it.
xex_import_library make_library(const char* name,
                               const std::vector<uint16_t>& ordinals) {
    xex_import_library library;
    library.name = name;
    uint32_t address = 0x82000100u;
    for (uint16_t ordinal : ordinals) {
        xex_import entry;
        entry.address = address;
        entry.ordinal = ordinal;
        entry.record_type = 1;
        library.imports.push_back(entry);
        address += 0x10;
    }
    return library;
}

void test_library_name_mapping() {
    assert(kernel_library_from_import_name("xboxkrnl.exe") ==
           kernel_library::xboxkrnl);
    assert(kernel_library_from_import_name("xam.xex") == kernel_library::xam);
    // Case should not decide whether a title's imports get named.
    assert(kernel_library_from_import_name("XBOXKRNL.EXE") ==
           kernel_library::xboxkrnl);
    assert(kernel_library_from_import_name("XAM.xex") == kernel_library::xam);
    assert(kernel_library_from_import_name("xbdm.xex") ==
           kernel_library::unknown);

    assert(std::string(kernel_library_name(kernel_library::xboxkrnl)) ==
           "xboxkrnl.exe");
    assert(std::string(kernel_library_name(kernel_library::xam)) == "xam.xex");
}

void test_known_ordinals_resolve_to_names() {
    // Spot checks against the platform's fixed ordinal numbering. These are the
    // ordinals a real title was observed importing.
    const kernel_export* fill =
        find_kernel_export(kernel_library::xboxkrnl, 294);
    assert(fill && std::string(fill->name) == "RtlFillMemoryUlong");
    assert(fill->is_function);

    const kernel_export* bugcheck =
        find_kernel_export(kernel_library::xboxkrnl, 83);
    assert(bugcheck && std::string(bugcheck->name) == "KeBugCheckEx");

    const kernel_export* process =
        find_kernel_export(kernel_library::xboxkrnl, 102);
    assert(process && std::string(process->name) == "KeGetCurrentProcessType");

    const kernel_export* profile = find_kernel_export(kernel_library::xam, 538);
    assert(profile &&
           std::string(profile->name) == "XamUserWriteProfileSettings");

    // The same ordinal means different things in different libraries.
    const kernel_export* krnl_538 =
        find_kernel_export(kernel_library::xboxkrnl, 538);
    assert(!krnl_538 || std::string(krnl_538->name) !=
                            "XamUserWriteProfileSettings");

    // An ordinal we have no name for is reported as absent, not invented.
    assert(find_kernel_export(kernel_library::xboxkrnl, 60000) == nullptr);
    assert(find_kernel_export(kernel_library::unknown, 1) == nullptr);
    assert(kernel_export_count() > 2000);
}

void test_registry_tracks_what_is_implemented() {
    kernel_registry registry;
    assert(registry.implemented_total() == 0);
    assert(!registry.is_implemented(kernel_library::xboxkrnl, 294));

    registry.implement(kernel_library::xboxkrnl, 294);
    assert(registry.is_implemented(kernel_library::xboxkrnl, 294));
    assert(registry.implemented_total() == 1);
    // Registering twice must not double-count.
    registry.implement(kernel_library::xboxkrnl, 294);
    assert(registry.implemented_total() == 1);
    // Libraries are independent namespaces.
    assert(!registry.is_implemented(kernel_library::xam, 294));
}

void test_resolution_reports_names_and_gaps() {
    const std::vector<xex_import_library> libraries{
        make_library("xboxkrnl.exe", {294, 83}),
        make_library("xam.xex", {538}),
    };

    kernel_registry registry;
    registry.implement(kernel_library::xboxkrnl, 294);

    const kernel_requirements requirements = registry.resolve(libraries);
    assert(requirements.total() == 3);
    assert(requirements.implemented_count() == 1);
    assert(requirements.missing_count() == 2);

    // Each requirement carries the name and where the thunk lives.
    assert(requirements.requirements[0].name == "RtlFillMemoryUlong");
    assert(requirements.requirements[0].implemented);
    assert(requirements.requirements[0].address == 0x82000100u);
    assert(requirements.requirements[1].name == "KeBugCheckEx");
    assert(!requirements.requirements[1].implemented);
    assert(requirements.requirements[2].library == kernel_library::xam);
    assert(requirements.requirements[2].name == "XamUserWriteProfileSettings");

    // The worklist names what is missing, and only what is missing.
    const std::vector<std::string> missing = requirements.missing_names();
    assert(missing.size() == 2);
    assert(missing[0] == "xboxkrnl.exe!KeBugCheckEx");
    assert(missing[1] == "xam.xex!XamUserWriteProfileSettings");

    assert(requirements.summary() ==
           "3 kernel imports: 1 implemented, 2 missing");
}

void test_missing_list_is_ordered() {
    // A stable order makes two bring-up runs comparable; arbitrary order makes
    // the diff between them useless.
    const std::vector<xex_import_library> libraries{
        make_library("xboxkrnl.exe", {294, 83, 102}),
    };
    kernel_registry registry;
    const std::vector<std::string> missing =
        registry.resolve(libraries).missing_names();
    assert(missing.size() == 3);
    // Sorted by ordinal: 83 KeBugCheckEx, 102 KeGetCurrentProcessType,
    // 294 RtlFillMemoryUlong.
    assert(missing[0] == "xboxkrnl.exe!KeBugCheckEx");
    assert(missing[1] == "xboxkrnl.exe!KeGetCurrentProcessType");
    assert(missing[2] == "xboxkrnl.exe!RtlFillMemoryUlong");
}

void test_uncatalogued_ordinal_is_still_actionable() {
    // If a title imports something we have no name for, the report must still
    // identify it well enough to act on.
    const std::vector<xex_import_library> libraries{
        make_library("xboxkrnl.exe", {60000}),
    };
    kernel_registry registry;
    const kernel_requirements requirements = registry.resolve(libraries);
    assert(requirements.requirements[0].name.empty());
    const std::vector<std::string> missing = requirements.missing_names();
    assert(missing.size() == 1);
    assert(missing[0] == "xboxkrnl.exe!ordinal_60000");
}

void test_unknown_library_does_not_lose_its_imports() {
    // An unrecognised library still contributes requirements, so a title using
    // one is not silently reported as fully satisfied.
    const std::vector<xex_import_library> libraries{
        make_library("xbdm.xex", {1, 2}),
    };
    kernel_registry registry;
    const kernel_requirements requirements = registry.resolve(libraries);
    assert(requirements.total() == 2);
    assert(requirements.missing_count() == 2);
    const std::vector<std::string> missing = requirements.missing_names();
    assert(missing[0] == "unknown!ordinal_1");
}

void test_empty_input() {
    kernel_registry registry;
    const kernel_requirements requirements = registry.resolve({});
    assert(requirements.total() == 0);
    assert(requirements.missing_count() == 0);
    assert(requirements.missing_names().empty());
    assert(requirements.summary() ==
           "0 kernel imports: 0 implemented, 0 missing");
}

} // namespace

int main() {
    test_library_name_mapping();
    test_known_ordinals_resolve_to_names();
    test_registry_tracks_what_is_implemented();
    test_resolution_reports_names_and_gaps();
    test_missing_list_is_ordered();
    test_uncatalogued_ordinal_is_still_actionable();
    test_unknown_library_does_not_lose_its_imports();
    test_empty_input();
    std::printf("kernel_test: all checks passed\n");
    return 0;
}
