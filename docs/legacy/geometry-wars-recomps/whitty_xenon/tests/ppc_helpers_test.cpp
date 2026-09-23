// Unit tests for register save/restore helper detection.
//
// A wrong address here is handed straight to the recompiler, which then
// mistranslates every function that saves non-volatile registers - which is
// most of them. So the scan is checked for the ways it could go wrong: matching
// inside data, matching at an unaligned offset, and confusing the two members
// of a pair whose encodings differ by one bit.
#include "whitty_xenon/pe.h"
#include "whitty_xenon/ppc_helpers.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

void put_le16(std::vector<uint8_t>& buffer, std::size_t offset, uint16_t value) {
    buffer[offset + 0] = static_cast<uint8_t>(value);
    buffer[offset + 1] = static_cast<uint8_t>(value >> 8);
}

void put_le32(std::vector<uint8_t>& buffer, std::size_t offset, uint32_t value) {
    buffer[offset + 0] = static_cast<uint8_t>(value);
    buffer[offset + 1] = static_cast<uint8_t>(value >> 8);
    buffer[offset + 2] = static_cast<uint8_t>(value >> 16);
    buffer[offset + 3] = static_cast<uint8_t>(value >> 24);
}

constexpr uint32_t kPeOffset = 0x108;
constexpr uint32_t kOptionalSize = 0xE0;
constexpr uint32_t kTextRva = 0x1000;
constexpr uint32_t kDataRva = 0x3000;
constexpr uint32_t kSectionSize = 0x2000;
constexpr uint32_t kImageBase = 0x82000000;

// An image with one executable section and one data section, so a match in
// data can be distinguished from a match in code.
std::vector<uint8_t> make_image() {
    std::vector<uint8_t> image(0x8000, 0);
    image[0] = 'M';
    image[1] = 'Z';
    put_le32(image, 0x3C, kPeOffset);
    put_le32(image, kPeOffset, 0x00004550);
    const std::size_t coff = kPeOffset + 4;
    put_le16(image, coff + 0x00, kMachinePowerPCBE);
    put_le16(image, coff + 0x02, 2);
    put_le16(image, coff + 0x10, static_cast<uint16_t>(kOptionalSize));
    const std::size_t optional = coff + 0x14;
    put_le32(image, optional + 0x38, 0x8000); // size of image

    std::size_t entry = optional + kOptionalSize;
    const char* text = ".text";
    std::memcpy(&image[entry], text, std::strlen(text));
    put_le32(image, entry + 0x08, kSectionSize);
    put_le32(image, entry + 0x0C, kTextRva);
    put_le32(image, entry + 0x24, 0x60000020u); // executable
    entry += 0x28;
    const char* data = ".data";
    std::memcpy(&image[entry], data, std::strlen(data));
    put_le32(image, entry + 0x08, kSectionSize);
    put_le32(image, entry + 0x0C, kDataRva);
    put_le32(image, entry + 0x24, 0xC0000040u); // writable data
    return image;
}

void write_bytes(std::vector<uint8_t>& image, std::size_t offset,
                 const std::vector<uint8_t>& bytes) {
    std::memcpy(&image[offset], bytes.data(), bytes.size());
}

const std::vector<uint8_t> kRestGpr{0xE9, 0xC1, 0xFF, 0x68};
const std::vector<uint8_t> kSaveGpr{0xF9, 0xC1, 0xFF, 0x68};
const std::vector<uint8_t> kRestFpr{0xC9, 0xCC, 0xFF, 0x70};
const std::vector<uint8_t> kSaveFpr{0xD9, 0xCC, 0xFF, 0x70};
const std::vector<uint8_t> kRestVmx14{0x39, 0x60, 0xFE, 0xE0,
                                      0x7D, 0xCB, 0x60, 0xCE};
const std::vector<uint8_t> kSaveVmx14{0x39, 0x60, 0xFE, 0xE0,
                                      0x7D, 0xCB, 0x61, 0xCE};
const std::vector<uint8_t> kRestVmx64{0x39, 0x60, 0xFC, 0x00,
                                      0x10, 0x0B, 0x60, 0xCB};
const std::vector<uint8_t> kSaveVmx64{0x39, 0x60, 0xFC, 0x00,
                                      0x10, 0x0B, 0x61, 0xCB};

pe_info parse(const std::vector<uint8_t>& image) {
    pe_info info;
    std::string error;
    assert(parse_pe(image.data(), image.size(), info, error));
    return info;
}

void test_finds_all_eight() {
    std::vector<uint8_t> image = make_image();
    write_bytes(image, kTextRva + 0x00, kSaveGpr);
    write_bytes(image, kTextRva + 0x50, kRestGpr);
    write_bytes(image, kTextRva + 0x100, kSaveFpr);
    write_bytes(image, kTextRva + 0x14C, kRestFpr);
    write_bytes(image, kTextRva + 0x200, kSaveVmx14);
    write_bytes(image, kTextRva + 0x498, kRestVmx14);
    write_bytes(image, kTextRva + 0x600, kSaveVmx64);
    write_bytes(image, kTextRva + 0x898, kRestVmx64);

    const pe_info info = parse(image);
    ppc_helper_functions helpers;
    std::string error;
    assert(find_ppc_helpers(image.data(), image.size(), kImageBase, info,
                            helpers, error));
    assert(helpers.found_count() == 8);
    assert(helpers.has_core_helpers());
    assert(helpers.has_vmx_helpers());
    assert(helpers.savegprlr_14 == kImageBase + kTextRva + 0x00);
    assert(helpers.restgprlr_14 == kImageBase + kTextRva + 0x50);
    assert(helpers.savefpr_14 == kImageBase + kTextRva + 0x100);
    assert(helpers.restfpr_14 == kImageBase + kTextRva + 0x14C);
}

void test_pairs_are_not_confused() {
    // Each pair differs by a single bit in one byte (0x60 vs 0x61 for the VMX
    // pairs, 0xE9 vs 0xF9 for the GPR pair). Placing only one of each proves
    // the scan is not matching the wrong member.
    std::vector<uint8_t> image = make_image();
    write_bytes(image, kTextRva + 0x00, kRestGpr);
    write_bytes(image, kTextRva + 0x40, kRestVmx14);
    write_bytes(image, kTextRva + 0x80, kSaveVmx64);

    const pe_info info = parse(image);
    ppc_helper_functions helpers;
    std::string error;
    assert(find_ppc_helpers(image.data(), image.size(), kImageBase, info,
                            helpers, error));
    assert(helpers.restgprlr_14 == kImageBase + kTextRva + 0x00);
    assert(helpers.savegprlr_14 == 0);
    assert(helpers.restvmx_14 == kImageBase + kTextRva + 0x40);
    assert(helpers.savevmx_14 == 0);
    assert(helpers.savevmx_64 == kImageBase + kTextRva + 0x80);
    assert(helpers.restvmx_64 == 0);
    assert(helpers.found_count() == 3);
    assert(!helpers.has_core_helpers());
    assert(!helpers.has_vmx_helpers());
}

void test_ignores_matches_in_data() {
    // The same bytes in a data section are a texture or a string, not a
    // function. Matching there would hand the recompiler a bogus address.
    std::vector<uint8_t> image = make_image();
    write_bytes(image, kDataRva + 0x100, kRestGpr);
    write_bytes(image, kDataRva + 0x200, kSaveFpr);

    const pe_info info = parse(image);
    ppc_helper_functions helpers;
    std::string error;
    assert(find_ppc_helpers(image.data(), image.size(), kImageBase, info,
                            helpers, error));
    assert(helpers.found_count() == 0);
}

void test_ignores_unaligned_matches() {
    // PowerPC instructions are 4-byte aligned, so a sequence straddling that
    // boundary is data inside another instruction, not a function start.
    std::vector<uint8_t> image = make_image();
    write_bytes(image, kTextRva + 0x22, kRestGpr); // deliberately misaligned
    const pe_info info = parse(image);
    ppc_helper_functions helpers;
    std::string error;
    assert(find_ppc_helpers(image.data(), image.size(), kImageBase, info,
                            helpers, error));
    assert(helpers.restgprlr_14 == 0);
}

void test_keeps_the_first_match() {
    // Inlined copies of a helper appear throughout a title; the function
    // itself is the first one in the code.
    std::vector<uint8_t> image = make_image();
    write_bytes(image, kTextRva + 0x40, kRestGpr);
    write_bytes(image, kTextRva + 0x400, kRestGpr);
    const pe_info info = parse(image);
    ppc_helper_functions helpers;
    std::string error;
    assert(find_ppc_helpers(image.data(), image.size(), kImageBase, info,
                            helpers, error));
    assert(helpers.restgprlr_14 == kImageBase + kTextRva + 0x40);
}

void test_toml_output() {
    ppc_helper_functions helpers;
    helpers.restgprlr_14 = 0x827E3540;
    helpers.savegprlr_14 = 0x827E34F0;
    const std::string toml = helpers_to_toml(helpers);
    assert(toml.find("restgprlr_14_address = 0x827E3540") != std::string::npos);
    assert(toml.find("savegprlr_14_address = 0x827E34F0") != std::string::npos);
    // Helpers a title does not use are omitted rather than emitted as zero,
    // which the recompiler would take as a real address.
    assert(toml.find("restvmx_64_address") == std::string::npos);
    assert(helpers_to_toml(ppc_helper_functions{}).empty());
}

void test_rejects_bad_input() {
    ppc_helper_functions helpers;
    std::string error;
    const std::vector<uint8_t> image = make_image();
    const pe_info info = parse(image);

    assert(!find_ppc_helpers(nullptr, 0, kImageBase, info, helpers, error));
    assert(!error.empty());

    // An image whose sections are all data has nothing to scan.
    pe_info data_only = info;
    for (pe_section& section : data_only.sections)
        section.characteristics = 0xC0000040u;
    error.clear();
    assert(!find_ppc_helpers(image.data(), image.size(), kImageBase, data_only,
                             helpers, error));
    assert(!error.empty());
}

} // namespace

int main() {
    test_finds_all_eight();
    test_pairs_are_not_confused();
    test_ignores_matches_in_data();
    test_ignores_unaligned_matches();
    test_keeps_the_first_match();
    test_toml_output();
    test_rejects_bad_input();
    std::printf("ppc_helpers_test: all checks passed\n");
    return 0;
}
