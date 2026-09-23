// ppc_runtime.h - where statically recompiled PowerPC code plugs in.
//
// XenonRecomp translates each guest function into a native one with the
// signature `void(PPCContext&, uint8_t* base)`, where `base` is the guest
// address space and every memory access is `base + guest_address` with a byte
// swap. That is exactly the model guest_memory provides, so the recompiled code
// can run directly against it with no translation layer in between.
//
// Indirect branches are the part that needs setting up. Rather than hashing a
// guest address at every call, the recompiler indexes a flat table of host
// function pointers that lives in the guest address space immediately after the
// image, at `(address - code_base) * 2` bytes into it - one pointer per
// instruction slot. This builds and owns that table.
#pragma once

#include "whitty_xenon/memory.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

// The recompiled code's register file. Opaque here: this layer only stores and
// dispatches function pointers, and the layout belongs to the generated code.
struct ppc_context;

// Structurally identical to XenonRecomp's PPCFunc.
using ppc_function = void (*)(ppc_context& ctx, uint8_t* base);

// One entry of the generated address -> native function table.
struct ppc_function_mapping {
    uint32_t guest_address{};
    ppc_function host{nullptr};
};

// Where the image and its code section sit. These come from the container and
// from the recompiler's generated header, and they must agree - the table index
// is computed from code_base, so a mismatch silently points every indirect call
// at the wrong slot.
struct ppc_image_layout {
    uint32_t image_base{};
    uint32_t image_size{};
    uint32_t code_base{};
    uint32_t code_size{};

    // The lookup table is placed directly after the image.
    uint32_t table_base() const noexcept { return image_base + image_size; }
    // One host pointer per 4-byte instruction slot: (size / 4) * 8 == size * 2.
    uint64_t table_bytes() const noexcept {
        return static_cast<uint64_t>(code_size) * 2;
    }
    bool contains_code(uint32_t address) const noexcept {
        return address >= code_base &&
               static_cast<uint64_t>(address) - code_base < code_size;
    }
};

// Builds and owns the indirect-call table inside guest memory.
class ppc_function_table {
public:
    // Commits the table region and clears it. Every slot starts null so an
    // indirect call to an address that was never recompiled is detectable
    // rather than a jump into whatever happened to be there.
    bool initialize(guest_memory& memory, const ppc_image_layout& layout,
                    std::string& error);

    // Installs one mapping. Rejects addresses outside the code section and
    // misaligned ones, since both indicate the layout is wrong rather than the
    // individual entry.
    bool set(uint32_t address, ppc_function function, std::string& error);

    // Installs a generated mapping table, stopping at the first bad entry.
    // Returns the number installed.
    std::size_t install(const std::vector<ppc_function_mapping>& mappings,
                        std::string& error);

    // nullptr when the address has no recompiled function.
    ppc_function get(uint32_t address) const noexcept;

    std::size_t populated() const noexcept { return m_populated; }
    const ppc_image_layout& layout() const noexcept { return m_layout; }
    bool initialized() const noexcept { return m_memory != nullptr; }

private:
    // Byte offset of an address's slot within the table.
    uint64_t slot_offset(uint32_t address) const noexcept {
        return (static_cast<uint64_t>(address) - m_layout.code_base) * 2;
    }

    guest_memory* m_memory{nullptr};
    ppc_image_layout m_layout{};
    std::size_t m_populated{0};
};

} // namespace whitty_xenon
