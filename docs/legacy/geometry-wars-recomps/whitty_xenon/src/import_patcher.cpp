#include "whitty_xenon/import_patcher.h"

#include "whitty_xenon/kernel.h"

#include <unordered_map>

namespace whitty_xenon {
namespace {

// An ordinal we have no catalogue entry for at all - matches Xenia's own
// value for an unresolved import.
constexpr uint32_t kUnresolvedValueSentinel = 0xF00DF00Du;

// Unknown kernel variables get a block this size rather than a bare pointer
// cell; see make_variable_storage.
constexpr uint32_t kVariableBlockSize = 256;

uint32_t alloc_zeroed(kernel_state& kernel, uint32_t size) {
    const uint32_t address = kernel.heap().allocate(size, 8);
    if (address != 0) kernel.memory().zero_block(address, size);
    return address;
}

void write_bytes(kernel_state& kernel, uint32_t address, const char* bytes,
                 std::size_t count) {
    for (std::size_t i = 0; i < count; ++i)
        kernel.memory().write_u8(address + static_cast<uint32_t>(i),
                                 static_cast<uint8_t>(bytes[i]));
}

// Allocates and fills backing storage for one kernel variable ordinal. Values
// match what Xenia's kernel initialises - Xenia is the behavioural oracle for
// the whole effort, and these are what a title observes on real hardware.
uint32_t make_variable_storage(kernel_state& kernel, kernel_library library,
                               uint16_t ordinal) {
    if (library == kernel_library::xboxkrnl) {
        switch (ordinal) {
            case 342: { // XboxHardwareInfo: flags(u32) + cpu count(u8) + pad.
                const uint32_t address = alloc_zeroed(kernel, 16);
                if (address) {
                    kernel.memory().write_u32(address + 0, 0x20); // flags
                    kernel.memory().write_u8(address + 4, 6); // cpu count
                }
                return address;
            }
            case 403: { // XexExecutableModuleHandle: a module handle cell,
                // left null. Alien Breed's startup checks for a null handle
                // and takes the early-exit path rather than inspecting a
                // module structure this runtime does not populate yet.
                return alloc_zeroed(kernel, 4);
            }
            case 430: { // ExLoadedCommandLine: the title's command line.
                constexpr char kText[] = "\"default.xex\"";
                const uint32_t address = alloc_zeroed(kernel, sizeof(kText));
                if (address) write_bytes(kernel, address, kText, sizeof(kText));
                return address;
            }
            case 431: // ExLoadedImageName: the title's image path.
                return alloc_zeroed(kernel, 256);
            case 12: { // ExConsoleGameRegion: all-region, as Xenia reports.
                const uint32_t address = alloc_zeroed(kernel, kVariableBlockSize);
                if (address) kernel.memory().write_u32(address, 0xFFFFFFFFu);
                return address;
            }
            case 89: // KeDebugMonitorData: a pointer to the debug monitor
                     // block. There is none, and the title branches on this
                     // being null before calling through it, so the block
                     // stays zeroed.
                return alloc_zeroed(kernel, kVariableBlockSize);
            default:
                break;
        }
    }
    // Anything else we know by name but have no specific value for: a real,
    // zero-initialised block - distinct from every other ordinal's and safe to
    // dereference. Deliberately generous rather than pointer-sized: several of
    // these name kernel structures the title writes into, and a 4-byte cell is
    // silently overrun by the first such write, corrupting whatever the
    // allocator placed next (observed as KeDebugMonitorData reading back as
    // 0xFFFFFFFF and the title then dereferencing it). Xenia allocates real
    // blocks for the same reason.
    return alloc_zeroed(kernel, kVariableBlockSize);
}

} // namespace

void patch_import_variables(kernel_state& kernel,
                            const std::vector<xex_import_library>& libraries) {
    guest_memory& memory = kernel.memory();
    // One backing cell per (library, ordinal), even if its value record
    // somehow appears more than once.
    std::unordered_map<uint32_t, uint32_t> storage;

    for (const xex_import_library& library : libraries) {
        const kernel_library klib = kernel_library_from_import_name(library.name);
        for (uint32_t address : library.record_addresses) {
            if (!memory.committed(address, 4)) continue;
            const uint32_t value = memory.read_u32(address);
            const uint8_t record_type =
                static_cast<uint8_t>((value >> 24) & 0xFFu);
            if (record_type != 0) continue; // thunk record: leave untouched
            const uint16_t ordinal = static_cast<uint16_t>(value & 0xFFFFu);

            const kernel_export* exported = find_kernel_export(klib, ordinal);
            if (!exported) {
                memory.write_u32(address, kUnresolvedValueSentinel);
                continue;
            }
            if (exported->is_function) {
                // A REAL, callable answer when one exists: if the title's own
                // code also calls this ordinal directly anywhere,
                // register_import_thunks (must run BEFORE this - see
                // run_title.cpp) has already recorded the guest address of
                // the compiled thunk XenonRecomp generated for it - a jump
                // there correctly reaches our implementation. Titles that
                // read a function import's value cell as a pointer and CALL
                // through it (Geometry Wars 2 does, on an optional/
                // version-gated API) are why this can't be an arbitrary
                // sentinel: a previous version wrote 0xDEADC0DE here on the
                // theory that nothing dereferences it, and one title's own
                // guest code proved that theory wrong with a SIGSEGV at
                // exactly that address. With no compiled thunk to hand back
                // (the title never calls this ordinal directly, only reads
                // its value), NULL is correct: standard "this optional API is
                // not present" answer, safe for a guest null-check to see.
                memory.write_u32(address, kernel.import_thunk(klib, ordinal));
                continue;
            }
            const uint32_t key =
                (static_cast<uint32_t>(klib) << 16) | ordinal;
            auto it = storage.find(key);
            uint32_t backing = it != storage.end() ? it->second : 0;
            if (backing == 0) {
                backing = make_variable_storage(kernel, klib, ordinal);
                storage[key] = backing;
            }
            memory.write_u32(address, backing);
        }
    }
}

void register_import_thunks(kernel_state& kernel,
                            const std::vector<xex_import_library>& libraries) {
    for (const xex_import_library& library : libraries) {
        const kernel_library klib = kernel_library_from_import_name(library.name);
        for (const xex_import& entry : library.imports)
            kernel.set_import_thunk(klib, entry.ordinal, entry.address);
    }
}

} // namespace whitty_xenon
