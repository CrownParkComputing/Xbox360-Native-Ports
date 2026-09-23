// kernel.h - the Xbox 360 kernel surface a title depends on.
//
// A statically recompiled title calls out to xboxkrnl.exe and xam.xex through
// its import thunks. This layer answers two questions:
//
//   what does this title need?      - resolve_imports() names every ordinal
//   what do we not implement yet?   - the report lists them, by name
//
// Naming matters more than it looks. An unimplemented ordinal that fails as
// "call to unregistered function at 0x00000000" costs an afternoon; the same
// failure reported as "xboxkrnl.exe!NtCreateFile is not implemented" costs a
// minute. Bring-up is a long grind of exactly these, so the grind is made
// legible from the start.
#pragma once

#include "whitty_xenon/imports.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

enum class kernel_library : uint8_t {
    xboxkrnl,
    xam,
    unknown,
};

const char* kernel_library_name(kernel_library library) noexcept;
// Maps an import-library name ("xboxkrnl.exe", "xam.xex") onto the enum.
kernel_library kernel_library_from_import_name(const std::string& name) noexcept;

// A known platform export. `name` is stable across consoles for a given
// (library, ordinal) pair.
struct kernel_export {
    kernel_library library{kernel_library::unknown};
    uint16_t ordinal{};
    const char* name{""};
    bool is_function{};
};

// Looks up a platform export. Returns nullptr when the ordinal is not one we
// have a name for, which is itself worth reporting - it usually means a title
// is using a library or ordinal range we have not catalogued.
const kernel_export* find_kernel_export(kernel_library library,
                                        uint16_t ordinal) noexcept;
std::size_t kernel_export_count() noexcept;

// One resolved import: what the title asked for, and whether we can service it.
struct kernel_requirement {
    kernel_library library{kernel_library::unknown};
    uint16_t ordinal{};
    std::string name;     // "" when the ordinal is not catalogued
    uint32_t address{};   // the import record in guest memory
    bool implemented{};
};

// What a title needs, and how much of it we have.
struct kernel_requirements {
    std::vector<kernel_requirement> requirements;

    std::size_t total() const noexcept { return requirements.size(); }
    std::size_t implemented_count() const noexcept;
    std::size_t missing_count() const noexcept;
    // Missing entries, named, sorted by library then ordinal - the worklist.
    std::vector<std::string> missing_names() const;
    // Human-readable summary for logs and for the bring-up loop.
    std::string summary() const;
};

// Registry of what the runtime can currently service. Handlers are added as
// the kernel is built out; until then everything reports as missing rather
// than silently returning zero, which would produce a title that runs and
// misbehaves instead of one that says what it is waiting for.
class kernel_registry {
public:
    // A handler is identified by name for now; the calling convention arrives
    // with the CPU layer.
    void implement(kernel_library library, uint16_t ordinal) noexcept;
    bool is_implemented(kernel_library library, uint16_t ordinal) const noexcept;
    std::size_t implemented_total() const noexcept { return m_implemented.size(); }

    // Resolves everything a title imports against this registry.
    kernel_requirements resolve(
        const std::vector<xex_import_library>& libraries) const;

private:
    struct key {
        kernel_library library;
        uint16_t ordinal;
        bool operator==(const key& other) const noexcept {
            return library == other.library && ordinal == other.ordinal;
        }
    };
    std::vector<key> m_implemented;
};

} // namespace whitty_xenon
