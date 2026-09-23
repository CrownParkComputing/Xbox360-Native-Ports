// Unit tests for PE header parsing and layout derivation.
//
// The layout produced here indexes the recompiler's dispatch table, so an
// error in it offsets every indirect call by a constant - a failure whose
// symptoms say nothing about its cause. The offsets are therefore checked
// against a header built byte by byte, including the one that actually bit:
// the COFF header begins after the 4-byte "PE\0\0" signature, so its field
// offsets are measured from there and not from the signature.
#include "whitty_xenon/pe.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

void put_le16(std::vector<uint8_t>& buffer, std::size_t offset, uint16_t value) {
    if (buffer.size() < offset + 2) buffer.resize(offset + 2, 0);
    buffer[offset + 0] = static_cast<uint8_t>(value);
    buffer[offset + 1] = static_cast<uint8_t>(value >> 8);
}

void put_le32(std::vector<uint8_t>& buffer, std::size_t offset, uint32_t value) {
    if (buffer.size() < offset + 4) buffer.resize(offset + 4, 0);
    buffer[offset + 0] = static_cast<uint8_t>(value);
    buffer[offset + 1] = static_cast<uint8_t>(value >> 8);
    buffer[offset + 2] = static_cast<uint8_t>(value >> 16);
    buffer[offset + 3] = static_cast<uint8_t>(value >> 24);
}

constexpr uint32_t kPeOffset = 0x108; // where a real title puts it
constexpr uint32_t kOptionalSize = 0xE0;
constexpr uint32_t kExecutable = 0x20000000u;
constexpr uint32_t kWritable = 0x80000000u;
constexpr uint32_t kInitialisedData = 0x40000040u;

struct section_spec {
    const char* name;
    uint32_t rva;
    uint32_t virtual_size;
    uint32_t characteristics;
};

std::vector<uint8_t> make_pe(const std::vector<section_spec>& sections,
                             uint32_t entry_rva = 0x007F2030,
                             uint32_t size_of_image = 0x0129C000) {
    std::vector<uint8_t> image(0x800, 0);
    image[0] = 'M';
    image[1] = 'Z';
    put_le32(image, 0x3C, kPeOffset);

    put_le32(image, kPeOffset, 0x00004550); // "PE\0\0"
    const std::size_t coff = kPeOffset + 4;
    put_le16(image, coff + 0x00, kMachinePowerPCBE);
    put_le16(image, coff + 0x02, static_cast<uint16_t>(sections.size()));
    put_le16(image, coff + 0x10, static_cast<uint16_t>(kOptionalSize));

    const std::size_t optional = coff + 0x14;
    put_le16(image, optional + 0x00, 0x010B); // PE32
    put_le32(image, optional + 0x10, entry_rva);
    put_le32(image, optional + 0x20, 0x10000); // section alignment
    put_le32(image, optional + 0x38, size_of_image);

    std::size_t entry = optional + kOptionalSize;
    for (const section_spec& section : sections) {
        std::memcpy(&image[entry], section.name, std::strlen(section.name));
        put_le32(image, entry + 0x08, section.virtual_size);
        put_le32(image, entry + 0x0C, section.rva);
        put_le32(image, entry + 0x10, section.virtual_size); // raw size
        put_le32(image, entry + 0x24, section.characteristics);
        entry += 0x28;
    }
    return image;
}

void test_parses_headers_and_sections() {
    const std::vector<uint8_t> image = make_pe({
        {".rdata", 0x00000600, 0x001AFA34, kInitialisedData},
        {".text", 0x001F0000, 0x00B4451C, kExecutable | 0x40000000u},
        {".data", 0x00D50400, 0x002D63EC, kWritable | 0x40000040u},
    });

    pe_info info;
    std::string error;
    assert(parse_pe(image.data(), image.size(), info, error));
    assert(error.empty());

    // Machine must be big-endian PowerPC; anything else is not an Xbox 360
    // image and the rest of the pipeline would be meaningless.
    assert(info.machine == kMachinePowerPCBE);
    assert(info.entry_point_rva == 0x007F2030u);
    assert(info.size_of_image == 0x0129C000u);
    assert(info.section_alignment == 0x10000u);
    assert(info.sections.size() == 3);

    assert(info.sections[0].name == ".rdata");
    assert(!info.sections[0].executable());
    assert(info.sections[1].name == ".text");
    assert(info.sections[1].executable());
    assert(info.sections[1].virtual_address == 0x001F0000u);
    assert(info.sections[1].virtual_size == 0x00B4451Cu);
    assert(info.sections[2].name == ".data");
    assert(info.sections[2].writable());
    assert(!info.sections[2].executable());

    const pe_section* code = info.code_section();
    assert(code && code->name == ".text");
}

void test_coff_offsets_are_measured_from_after_the_signature() {
    // Regression test. Reading the COFF fields relative to the signature
    // instead of relative to the header start shifts everything by four bytes:
    // the section count is then read out of the timestamp, which produced an
    // implausible count on a real title rather than anything obviously wrong.
    const std::vector<uint8_t> image = make_pe({
        {".text", 0x1000, 0x2000, kExecutable},
    });
    // Put a large value where a four-byte shift would read the count from.
    std::vector<uint8_t> shifted = image;
    put_le32(shifted, kPeOffset + 4 + 0x04, 0x4AFBF59Bu); // timestamp

    pe_info info;
    std::string error;
    assert(parse_pe(shifted.data(), shifted.size(), info, error));
    // The count comes from the right place, so the timestamp does not matter.
    assert(info.sections.size() == 1);
    assert(info.machine == kMachinePowerPCBE);
}

void test_layout_spans_every_executable_section() {
    // A real title can carry more than one executable section - Alien Breed has
    // a second for its Bink video decoder - and a recompiled function in the
    // later one still needs a dispatch slot.
    const std::vector<uint8_t> image = make_pe({
        {".text", 0x001F0000, 0x00B4451C, kExecutable},
        {"BINK", 0x00D34600, 0x0000FD14, kExecutable},
        {".data", 0x00D50400, 0x00100000, kWritable},
    });
    pe_info info;
    std::string error;
    assert(parse_pe(image.data(), image.size(), info, error));

    uint32_t first = 0;
    uint32_t end = 0;
    assert(info.executable_span(first, end));
    assert(first == 0x001F0000u);
    assert(end == 0x00D34600u + 0x0000FD14u);

    ppc_image_layout layout;
    assert(make_image_layout(info, 0x82000000u, info.size_of_image, layout, error));
    assert(layout.image_base == 0x82000000u);
    assert(layout.code_base == 0x821F0000u);
    // The span reaches the end of the last executable section, so a function
    // in BINK is still addressable.
    assert(layout.contains_code(0x821F0000u));
    assert(layout.contains_code(0x82D34600u));
    assert(!layout.contains_code(0x821EFFFCu));
    // Non-executable data past the span is not code.
    assert(!layout.contains_code(0x82D50400u));
}

void test_layout_rounds_code_size_to_instructions() {
    // A section's virtual size need not be a multiple of four, but the table
    // is indexed per instruction slot.
    const std::vector<uint8_t> image = make_pe({
        {".text", 0x1000, 0x1001, kExecutable},
    });
    pe_info info;
    std::string error;
    assert(parse_pe(image.data(), image.size(), info, error));
    ppc_image_layout layout;
    assert(make_image_layout(info, 0x82000000u, info.size_of_image, layout, error));
    assert(layout.code_size == 0x1004u);
    assert(layout.code_size % 4 == 0);
}

void test_layout_uses_the_container_image_size() {
    // Regression test, and the bug is instructive. The dispatch table lives at
    // image_base + image_size, and the recompiler emits its own PPC_IMAGE_SIZE
    // from the XEX container - which is smaller than the PE's SizeOfImage.
    // Using the PE value put our table 2 MiB above the one generated code reads
    // from, so every indirect call would have found a null slot, with nothing
    // in the symptoms to say why. Verified against XenonRecomp's emitted
    // PPC_IMAGE_SIZE of 0x1060000 for a title whose PE says 0x129C000.
    const std::vector<uint8_t> image = make_pe({
        {".text", 0x001F0000, 0x00B54314, kExecutable},
    });
    pe_info info;
    std::string error;
    assert(parse_pe(image.data(), image.size(), info, error));
    assert(info.size_of_image == 0x0129C000u); // what the PE claims

    ppc_image_layout layout;
    // The container's value is what the recompiler uses.
    assert(make_image_layout(info, 0x82000000u, 0x01060000u, layout, error));
    assert(layout.image_size == 0x01060000u);
    assert(layout.table_base() == 0x83060000u);
    // Which is not where the PE's SizeOfImage would have put it.
    assert(layout.table_base() != 0x82000000u + 0x0129C000u);
}

void test_rejects_malformed_images() {
    pe_info info;
    std::string error;

    assert(!parse_pe(nullptr, 0, info, error));
    assert(!error.empty());

    // Not a PE at all.
    std::vector<uint8_t> not_pe(0x100, 0);
    error.clear();
    assert(!parse_pe(not_pe.data(), not_pe.size(), info, error));
    assert(error.find("MZ") != std::string::npos);

    // MZ present but the PE signature is missing.
    std::vector<uint8_t> bad_signature = make_pe({{".text", 0x1000, 0x100,
                                                   kExecutable}});
    put_le32(bad_signature, kPeOffset, 0);
    error.clear();
    assert(!parse_pe(bad_signature.data(), bad_signature.size(), info, error));
    assert(!error.empty());

    // A section count that would walk far past the end of the image.
    std::vector<uint8_t> many = make_pe({{".text", 0x1000, 0x100,
                                          kExecutable}});
    put_le16(many, kPeOffset + 4 + 0x02, 500);
    error.clear();
    assert(!parse_pe(many.data(), many.size(), info, error));
    assert(!error.empty());

    // A plausible count that still runs off the end of the buffer.
    std::vector<uint8_t> truncated = make_pe({{".text", 0x1000, 0x100,
                                               kExecutable}});
    put_le16(truncated, kPeOffset + 4 + 0x02, 90);
    error.clear();
    assert(!parse_pe(truncated.data(), truncated.size(), info, error));
    assert(!error.empty());
}

void test_layout_rejects_inconsistent_images() {
    std::string error;
    ppc_image_layout layout;

    // No executable section at all.
    const std::vector<uint8_t> data_only = make_pe({
        {".data", 0x1000, 0x1000, kWritable},
    });
    pe_info info;
    assert(parse_pe(data_only.data(), data_only.size(), info, error));
    error.clear();
    assert(!make_image_layout(info, 0x82000000u, info.size_of_image, layout, error));
    assert(!error.empty());

    // Code that runs past the end of the image it claims to be in.
    const std::vector<uint8_t> oversized = make_pe(
        {{".text", 0x1000, 0x100000, kExecutable}}, 0x1000, 0x2000);
    assert(parse_pe(oversized.data(), oversized.size(), info, error));
    error.clear();
    assert(!make_image_layout(info, 0x82000000u, info.size_of_image, layout, error));
    assert(!error.empty());

    // An image base of zero would put the code at a null address.
    const std::vector<uint8_t> normal = make_pe({
        {".text", 0x1000, 0x1000, kExecutable},
    });
    assert(parse_pe(normal.data(), normal.size(), info, error));
    error.clear();
    assert(!make_image_layout(info, 0, info.size_of_image, layout, error));
    assert(!error.empty());
}

} // namespace

int main() {
    test_parses_headers_and_sections();
    test_coff_offsets_are_measured_from_after_the_signature();
    test_layout_spans_every_executable_section();
    test_layout_rounds_code_size_to_instructions();
    test_layout_uses_the_container_image_size();
    test_rejects_malformed_images();
    test_layout_rejects_inconsistent_images();
    std::printf("pe_test: all checks passed\n");
    return 0;
}
