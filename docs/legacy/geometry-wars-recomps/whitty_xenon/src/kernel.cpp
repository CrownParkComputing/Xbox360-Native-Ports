#include "whitty_xenon/kernel.h"

#include <algorithm>
#include <cstdio>

namespace whitty_xenon {
namespace {

// The generated table, materialised once as a sorted-by-library array.
#define WHITTY_KERNEL_EXPORT(library, ordinal, name, is_function) \
    kernel_export{kernel_library::library, static_cast<uint16_t>(ordinal), \
                  name, is_function},
constexpr kernel_export kExports[] = {
#include "whitty_xenon/kernel_exports.inc"
};
#undef WHITTY_KERNEL_EXPORT

constexpr std::size_t kExportCount = sizeof(kExports) / sizeof(kExports[0]);

} // namespace

const char* kernel_library_name(kernel_library library) noexcept {
    switch (library) {
    case kernel_library::xboxkrnl: return "xboxkrnl.exe";
    case kernel_library::xam: return "xam.xex";
    case kernel_library::unknown: break;
    }
    return "unknown";
}

kernel_library kernel_library_from_import_name(
    const std::string& name) noexcept {
    // Titles spell these consistently, but compare case-insensitively so a
    // differently-cased import table does not silently lose its names.
    std::string lowered;
    lowered.reserve(name.size());
    for (char character : name)
        lowered.push_back(static_cast<char>(
            character >= 'A' && character <= 'Z' ? character + 32 : character));
    if (lowered == "xboxkrnl.exe") return kernel_library::xboxkrnl;
    if (lowered == "xam.xex") return kernel_library::xam;
    return kernel_library::unknown;
}

const kernel_export* find_kernel_export(kernel_library library,
                                        uint16_t ordinal) noexcept {
    // The table is small and this runs once per title at load, so a linear
    // scan is not worth indexing away.
    for (std::size_t index = 0; index < kExportCount; ++index) {
        if (kExports[index].library == library &&
            kExports[index].ordinal == ordinal)
            return &kExports[index];
    }
    return nullptr;
}

std::size_t kernel_export_count() noexcept { return kExportCount; }

std::size_t kernel_requirements::implemented_count() const noexcept {
    std::size_t count = 0;
    for (const kernel_requirement& entry : requirements)
        if (entry.implemented) ++count;
    return count;
}

std::size_t kernel_requirements::missing_count() const noexcept {
    return requirements.size() - implemented_count();
}

std::vector<std::string> kernel_requirements::missing_names() const {
    std::vector<const kernel_requirement*> missing;
    for (const kernel_requirement& entry : requirements)
        if (!entry.implemented) missing.push_back(&entry);
    std::sort(missing.begin(), missing.end(),
              [](const kernel_requirement* left,
                 const kernel_requirement* right) {
                  if (left->library != right->library)
                      return left->library < right->library;
                  return left->ordinal < right->ordinal;
              });

    std::vector<std::string> names;
    names.reserve(missing.size());
    for (const kernel_requirement* entry : missing) {
        std::string label = kernel_library_name(entry->library);
        label += '!';
        if (!entry->name.empty()) {
            label += entry->name;
        } else {
            // An uncatalogued ordinal still needs to be actionable.
            char buffer[32];
            std::snprintf(buffer, sizeof(buffer), "ordinal_%u",
                          static_cast<unsigned>(entry->ordinal));
            label += buffer;
        }
        names.push_back(std::move(label));
    }
    return names;
}

std::string kernel_requirements::summary() const {
    char buffer[128];
    std::snprintf(buffer, sizeof(buffer),
                  "%zu kernel imports: %zu implemented, %zu missing",
                  total(), implemented_count(), missing_count());
    return buffer;
}

void kernel_registry::implement(kernel_library library,
                                uint16_t ordinal) noexcept {
    if (is_implemented(library, ordinal)) return;
    m_implemented.push_back(key{library, ordinal});
}

bool kernel_registry::is_implemented(kernel_library library,
                                     uint16_t ordinal) const noexcept {
    const key wanted{library, ordinal};
    for (const key& entry : m_implemented)
        if (entry == wanted) return true;
    return false;
}

kernel_requirements kernel_registry::resolve(
    const std::vector<xex_import_library>& libraries) const {
    kernel_requirements result;
    for (const xex_import_library& library : libraries) {
        const kernel_library kind =
            kernel_library_from_import_name(library.name);
        for (const xex_import& entry : library.imports) {
            kernel_requirement requirement;
            requirement.library = kind;
            requirement.ordinal = entry.ordinal;
            requirement.address = entry.address;
            if (const kernel_export* known =
                    find_kernel_export(kind, entry.ordinal))
                requirement.name = known->name;
            requirement.implemented = is_implemented(kind, entry.ordinal);
            result.requirements.push_back(std::move(requirement));
        }
    }
    return result;
}

} // namespace whitty_xenon
