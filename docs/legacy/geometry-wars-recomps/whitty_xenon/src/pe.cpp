#include "whitty_xenon/pe.h"

#include <cstring>

namespace whitty_xenon {
namespace {

constexpr uint16_t kDosMagic = 0x5A4D;      // 'MZ', little-endian in the file
constexpr uint32_t kPeSignature = 0x00004550; // 'PE\0\0'
constexpr std::size_t kDosLfanewOffset = 0x3C;
// Offsets within the COFF header, which begins immediately after the 4-byte
// "PE\0\0" signature - not from the signature itself.
constexpr std::size_t kCoffMachineOffset = 0x00;
constexpr std::size_t kCoffSectionCountOffset = 0x02;
constexpr std::size_t kCoffOptionalSizeOffset = 0x10;
constexpr std::size_t kCoffHeaderSize = 0x14;
constexpr std::size_t kOptionalEntryPointOffset = 0x10;
constexpr std::size_t kOptionalSectionAlignOffset = 0x20;
constexpr std::size_t kOptionalSizeOfImageOffset = 0x38;
constexpr std::size_t kSectionHeaderSize = 0x28;
constexpr std::size_t kSectionNameSize = 8;

constexpr uint32_t kSectionExecutable = 0x20000000u;
constexpr uint32_t kSectionWritable = 0x80000000u;

// PE headers are little-endian even in an Xbox 360 image: the file format is
// unchanged, only the code inside it is big-endian PowerPC.
bool read_le16(const uint8_t* data, std::size_t size, std::size_t offset,
               uint16_t& value) noexcept {
    if (offset + 2 > size) return false;
    std::memcpy(&value, data + offset, sizeof(value));
    return true;
}

bool read_le32(const uint8_t* data, std::size_t size, std::size_t offset,
               uint32_t& value) noexcept {
    if (offset + 4 > size) return false;
    std::memcpy(&value, data + offset, sizeof(value));
    return true;
}

} // namespace

bool pe_section::executable() const noexcept {
    return (characteristics & kSectionExecutable) != 0;
}

bool pe_section::writable() const noexcept {
    return (characteristics & kSectionWritable) != 0;
}

const pe_section* pe_info::code_section() const noexcept {
    for (const pe_section& section : sections)
        if (section.executable()) return &section;
    return nullptr;
}

bool pe_info::executable_span(uint32_t& first_rva,
                              uint32_t& end_rva) const noexcept {
    bool found = false;
    for (const pe_section& section : sections) {
        if (!section.executable() || section.virtual_size == 0) continue;
        const uint32_t start = section.virtual_address;
        const uint32_t end = start + section.virtual_size;
        if (!found) {
            first_rva = start;
            end_rva = end;
            found = true;
            continue;
        }
        if (start < first_rva) first_rva = start;
        if (end > end_rva) end_rva = end;
    }
    return found;
}

bool parse_pe(const uint8_t* image, std::size_t size, pe_info& info,
              std::string& error) {
    info = pe_info{};
    if (!image || size < 0x40) {
        error = "image is too small to be a PE";
        return false;
    }

    uint16_t dos_magic = 0;
    read_le16(image, size, 0, dos_magic);
    if (dos_magic != kDosMagic) {
        error = "image does not start with an MZ header";
        return false;
    }

    uint32_t pe_offset = 0;
    if (!read_le32(image, size, kDosLfanewOffset, pe_offset)) {
        error = "truncated DOS header";
        return false;
    }
    uint32_t signature = 0;
    if (!read_le32(image, size, pe_offset, signature) ||
        signature != kPeSignature) {
        error = "missing PE signature";
        return false;
    }

    const std::size_t coff = static_cast<std::size_t>(pe_offset) + 4;
    uint16_t section_count = 0;
    uint16_t optional_size = 0;
    if (!read_le16(image, size, coff + kCoffMachineOffset, info.machine) ||
        !read_le16(image, size, coff + kCoffSectionCountOffset,
                   section_count) ||
        !read_le16(image, size, coff + kCoffOptionalSizeOffset,
                   optional_size)) {
        error = "truncated COFF header";
        return false;
    }
    // A corrupt count would otherwise drive a long walk over garbage.
    if (section_count > 96) {
        error = "implausible section count";
        return false;
    }

    const std::size_t optional = coff + kCoffHeaderSize;
    if (optional_size >= kOptionalSizeOfImageOffset + 4) {
        read_le32(image, size, optional + kOptionalEntryPointOffset,
                  info.entry_point_rva);
        read_le32(image, size, optional + kOptionalSectionAlignOffset,
                  info.section_alignment);
        read_le32(image, size, optional + kOptionalSizeOfImageOffset,
                  info.size_of_image);
    }

    const std::size_t table = optional + optional_size;
    for (uint16_t index = 0; index < section_count; ++index) {
        const std::size_t entry = table + index * kSectionHeaderSize;
        if (entry + kSectionHeaderSize > size) {
            error = "section table runs past the end of the image";
            return false;
        }
        pe_section section;
        // Section names are 8 bytes and only null-terminated when shorter.
        const char* raw = reinterpret_cast<const char*>(image + entry);
        std::size_t length = 0;
        while (length < kSectionNameSize && raw[length] != '\0') ++length;
        section.name.assign(raw, length);

        read_le32(image, size, entry + 0x08, section.virtual_size);
        read_le32(image, size, entry + 0x0C, section.virtual_address);
        read_le32(image, size, entry + 0x10, section.raw_size);
        read_le32(image, size, entry + 0x24, section.characteristics);
        info.sections.push_back(std::move(section));
    }

    if (info.sections.empty()) {
        error = "image has no sections";
        return false;
    }
    return true;
}

bool make_image_layout(const pe_info& info, uint32_t image_base,
                       uint32_t image_size, ppc_image_layout& layout,
                       std::string& error) {
    layout = ppc_image_layout{};
    uint32_t first_rva = 0;
    uint32_t end_rva = 0;
    if (!info.executable_span(first_rva, end_rva)) {
        error = "image has no executable section";
        return false;
    }
    if (image_base == 0) {
        error = "image base is zero";
        return false;
    }

    layout.image_base = image_base;
    // The container's size, not the PE's SizeOfImage - see the header.
    layout.image_size = image_size;
    // Span every executable section rather than just the first: a title can
    // have more than one, and a recompiled function in a later one still needs
    // a dispatch slot. The span costs almost nothing - the sections are
    // adjacent in practice.
    layout.code_base = image_base + first_rva;
    // Round up to whole instructions: a section's virtual size need not be a
    // multiple of four, but the table is indexed per instruction slot.
    layout.code_size = ((end_rva - first_rva) + 3u) & ~3u;

    if (layout.image_size == 0) {
        error = "image reports a zero size";
        return false;
    }
    if (layout.code_size == 0) {
        error = "executable section is empty";
        return false;
    }
    // The code must lie inside the image, or the table index is meaningless.
    if (static_cast<uint64_t>(first_rva) + layout.code_size >
        static_cast<uint64_t>(layout.image_size)) {
        error = "executable section runs past the end of the image";
        return false;
    }
    return true;
}

} // namespace whitty_xenon
