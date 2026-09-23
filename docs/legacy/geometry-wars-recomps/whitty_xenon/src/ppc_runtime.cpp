#include "whitty_xenon/ppc_runtime.h"

#include <cstring>

namespace whitty_xenon {
namespace {

constexpr uint32_t kInstructionSize = 4;

} // namespace

bool ppc_function_table::initialize(guest_memory& memory,
                                    const ppc_image_layout& layout,
                                    std::string& error) {
    if (!memory.initialized()) {
        error = "guest memory is not initialized";
        return false;
    }
    if (layout.code_size == 0) {
        error = "image layout has an empty code section";
        return false;
    }
    if (layout.code_size % kInstructionSize != 0) {
        error = "code size is not a whole number of instructions";
        return false;
    }
    if (layout.code_base % kInstructionSize != 0) {
        error = "code base is not instruction aligned";
        return false;
    }
    const uint64_t bytes = layout.table_bytes();
    if (static_cast<uint64_t>(layout.table_base()) + bytes >
        kAddressSpaceSize) {
        error = "indirect call table does not fit in the guest address space";
        return false;
    }

    if (!memory.commit(layout.table_base(), static_cast<uint32_t>(bytes),
                       error))
        return false;
    // Null every slot: an indirect call to an address that was never
    // recompiled must be detectable, not a jump into stale bytes.
    if (!memory.zero_block(layout.table_base(),
                           static_cast<uint32_t>(bytes))) {
        error = "could not clear the indirect call table";
        return false;
    }

    m_memory = &memory;
    m_layout = layout;
    m_populated = 0;
    return true;
}

bool ppc_function_table::set(uint32_t address, ppc_function function,
                             std::string& error) {
    if (!m_memory) {
        error = "function table is not initialized";
        return false;
    }
    if (!m_layout.contains_code(address)) {
        error = "function address lies outside the code section";
        return false;
    }
    if (address % kInstructionSize != 0) {
        error = "function address is not instruction aligned";
        return false;
    }

    const uint64_t offset = slot_offset(address);
    const uint32_t slot =
        static_cast<uint32_t>(m_layout.table_base() + offset);
    void* host = m_memory->host(slot, sizeof(ppc_function));
    if (!host) {
        error = "function table slot is not committed";
        return false;
    }
    // Host pointers are stored in native byte order: the recompiled code reads
    // them straight back as pointers, it does not byte-swap them like guest
    // data.
    ppc_function existing = nullptr;
    std::memcpy(&existing, host, sizeof(existing));
    std::memcpy(host, &function, sizeof(function));
    if (!existing && function) ++m_populated;
    if (existing && !function) --m_populated;
    return true;
}

std::size_t ppc_function_table::install(
    const std::vector<ppc_function_mapping>& mappings, std::string& error) {
    std::size_t installed = 0;
    for (const ppc_function_mapping& mapping : mappings) {
        if (!set(mapping.guest_address, mapping.host, error)) return installed;
        ++installed;
    }
    return installed;
}

ppc_function ppc_function_table::get(uint32_t address) const noexcept {
    if (!m_memory || !m_layout.contains_code(address)) return nullptr;
    if (address % kInstructionSize != 0) return nullptr;
    const uint32_t slot =
        static_cast<uint32_t>(m_layout.table_base() + slot_offset(address));
    const void* host = m_memory->host(slot, sizeof(ppc_function));
    if (!host) return nullptr;
    ppc_function function = nullptr;
    std::memcpy(&function, host, sizeof(function));
    return function;
}

} // namespace whitty_xenon
