#include "ppc_function_table.h"

#include "ppc_config.h"
#include "ppc_context.h"

using namespace whitty_xenon;

bool build_ppc_function_table(guest_memory& memory, std::string& error) {
    constexpr uint64_t kAddressSpaceSize = 0x100000000ull;
    const uint64_t table_base =
        static_cast<uint64_t>(PPC_IMAGE_BASE) + PPC_IMAGE_SIZE;
    const uint64_t table_size = static_cast<uint64_t>(PPC_CODE_SIZE) * 2;
    if (table_base + table_size > kAddressSpaceSize) {
        error = "PPC function table would run past the guest address space";
        return false;
    }
    if (!memory.commit(static_cast<uint32_t>(table_base),
                       static_cast<uint32_t>(table_size), error))
        return false;

    uint8_t* base = memory.host_unchecked(0);
    for (PPCFuncMapping* mapping = PPCFuncMappings; mapping->host != nullptr;
         ++mapping) {
        const uint64_t offset =
            (static_cast<uint64_t>(static_cast<uint32_t>(mapping->guest)) -
             PPC_CODE_BASE) *
            2;
        // A raw native pointer store, not a byte-swapped guest write: this
        // slot is read back by generated C++ as PPCFunc*, host-native.
        PPCFunc** slot =
            reinterpret_cast<PPCFunc**>(base + table_base + offset);
        *slot = mapping->host;
    }
    return true;
}
