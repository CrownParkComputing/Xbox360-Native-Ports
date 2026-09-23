// title_probe.cpp - step one and two of bringing up a new title, in one command.
//
// A title arrives as an STFS package. The runtime mounts that directly, but
// XenonRecomp only reads a raw XEX, so one has to be extracted - and everything
// downstream is keyed off values that must come from THAT extraction rather than
// from a file of unknown provenance found in an old tree. This tool does the
// extraction and then answers, in one pass, every question the recompiler
// config asks:
//
//   * is the extracted XEX byte-identical to what the package holds (--compare)
//   * what is the title id, image base, entry point and image size
//   * do the container's own numbers agree with what XenonRecomp already
//     emitted into a generated ppc_config.h (--config) - the check that catches
//     a config pointed at a different copy of the game
//   * where are the eight register save/restore helpers, as a TOML block ready
//     to paste, with the cross-title delta check applied
//   * and the decoded image itself (--image), which find_jump_tables.py reads
//     table contents out of
//
// Every answer is derived from the container handed in. Nothing is taken on
// trust, and a check that fails makes the whole run fail, because each of these
// failures is silent later: a stale XEX recompiles cleanly and crashes on data
// that moved, and a mis-detected helper corrupts non-volatile registers in a
// caller several frames away.
//
// Usage:
//   title_probe <package-or-xex> [--xex PATH] [--image PATH]
//               [--compare PATH] [--config ppc_config.h] [--quiet]
#include "whitty_xenon/image.h"
#include "whitty_xenon/pe.h"
#include "whitty_xenon/ppc_helpers.h"
#include "whitty_xenon/ppc_runtime.h"
#include "whitty_xenon/stfs.h"
#include "whitty_xenon/xex.h"

#include <cinttypes>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

// The helper pairs are emitted by the Xbox 360 toolchain, so the gap between
// each save/restore pair is a property of the toolchain and not of the game.
// Every title checked so far reproduces these exactly, which is the independent
// evidence that the right byte sequences were matched rather than coincidental
// bytes in a texture or a string table.
constexpr uint32_t kExpectedGprDelta = 0x50;
constexpr uint32_t kExpectedFprDelta = 0x4C;
constexpr uint32_t kExpectedVmxDelta = 0x298;

// setjmp and longjmp, by the address-independent part of the CRT copy every
// title carries. XenonRecomp needs both addresses named in the config and does
// not detect them; the consequence of leaving them out is not a failure but a
// wrong program - the longjmp is emitted as an ordinary call, so control never
// unwinds and the caller continues with non-volatile registers restored from a
// stale jmp_buf, which surfaces as an unrelated function crashing on a pointer
// it never computed.
//
// The bytes are taken from Geometry Wars 1, at the two addresses its config
// names. `longjmp`'s first eleven instructions contain no addresses at all;
// `setjmp` matches from its sixth instruction (mflr, mfcr, then stfd f14..f31
// into the buffer), the five before it being the usual patch-hook check, so its
// pattern is offset and the match is walked back. Each pattern occurs exactly
// once in Geometry Wars 1, Geometry Wars 2 and Space Giraffe, at the address each
// config already declared - which is the evidence this is a property of the
// toolchain's CRT rather than of one game. A pattern that matches more than once,
// or not at all, is reported as not found rather than guessed at.
constexpr uint8_t kLongjmpPattern[] = {
    0x7C, 0x08, 0x02, 0xA6, 0x94, 0x21, 0xFF, 0xB0, 0x90, 0x01, 0x00, 0x08,
    0x7C, 0x86, 0x23, 0x78, 0x2C, 0x04, 0x00, 0x00, 0x80, 0x03, 0x01, 0x38,
    0x2C, 0x80, 0x00, 0x00, 0x7C, 0x67, 0x1B, 0x78, 0x38, 0xA0, 0x00, 0x00,
    0x40, 0x82, 0x00, 0x08, 0x38, 0xC0, 0x00, 0x01,
};
constexpr uint8_t kSetjmpPattern[] = {
    0x7C, 0x08, 0x02, 0xA6, 0x7C, 0x80, 0x00, 0x26, 0xD9, 0xC3, 0x00, 0x00,
    0xD9, 0xE3, 0x00, 0x08, 0xDA, 0x03, 0x00, 0x10, 0xDA, 0x23, 0x00, 0x18,
    0xDA, 0x43, 0x00, 0x20, 0xDA, 0x63, 0x00, 0x28, 0xDA, 0x83, 0x00, 0x30,
    0xDA, 0xA3, 0x00, 0x38, 0xDA, 0xC3, 0x00, 0x40, 0xDA, 0xE3, 0x00, 0x48,
    0xDB, 0x03, 0x00, 0x50, 0xDB, 0x23, 0x00, 0x58, 0xDB, 0x43, 0x00, 0x60,
    0xDB, 0x63, 0x00, 0x68, 0xDB, 0x83, 0x00, 0x70, 0xDB, 0xA3, 0x00, 0x78,
    0xDB, 0xC3, 0x00, 0x80, 0xDB, 0xE3, 0x00, 0x88,
};
// How far into `setjmp` its pattern begins.
constexpr uint32_t kSetjmpPatternOffset = 5 * 4;

// Whether a title carries setjmp/longjmp AT ALL, decided structurally rather
// than by the byte patterns above - because "0 matches" is what a title without
// them gives and also what a title built by a different toolchain gives, and
// those need opposite responses. Jetpac Refuelled (584107FB) is the first title
// here with none, and it never emits `mflr r0` either (0 occurrences against
// 3482 of `mflr r12`), so its CRT could not match Geometry Wars' bytes whatever
// it contained.
//
// The shape a jmp_buf save has: setjmp writes the whole non-volatile set -
// f14..f31 and r14..r31 - into the buffer its caller passed, and longjmp reads
// the same set back. That is a run of 18 consecutive loads or stores with an
// ascending register number, and the only other things in an image with that
// shape are the four register-save helpers themselves. So if every such run in
// the image is one of the helpers, there is no setjmp and no longjmp to name.
//
// Two independent register classes both fully accounted for is the same
// standard of evidence as a byte pattern matching exactly once. Runs that are
// NOT a helper are reported instead, because they are where to look by hand.
struct RegisterRun {
    uint32_t address{};
    int first_register{};
    int length{};
    const char* mnemonic{};
};

std::vector<RegisterRun> whole_set_runs(const std::vector<uint8_t>& image,
                                        uint32_t image_base) {
    struct Form { uint32_t opcode; const char* mnemonic; };
    // stfd/lfd carry the FPR half of a jmp_buf; std/ld the GPR half. A title
    // built for a 32-bit ABI would use stw/lwz, so those are included too.
    static const Form forms[] = {
        {54, "stfd"}, {50, "lfd"}, {62, "std"}, {58, "ld"}, {36, "stw"}, {32, "lwz"},
    };
    constexpr int kShortestRun = 12;
    std::vector<RegisterRun> runs;
    const std::size_t words = image.size() / 4;
    auto word_at = [&](std::size_t index) {
        const uint8_t* p = image.data() + index * 4;
        return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) |
               (uint32_t(p[2]) << 8) | uint32_t(p[3]);
    };
    for (const Form& form : forms) {
        std::size_t at = 0;
        while (at < words) {
            if ((word_at(at) >> 26) != form.opcode) {
                ++at;
                continue;
            }
            const std::size_t start = at;
            std::vector<int> registers;
            while (at < words && (word_at(at) >> 26) == form.opcode) {
                registers.push_back(int((word_at(at) >> 21) & 31));
                ++at;
            }
            if (int(registers.size()) < kShortestRun)
                continue;
            bool ascending = true;
            for (std::size_t i = 1; i < registers.size(); ++i)
                if (registers[i] != registers[i - 1] + 1)
                    ascending = false;
            // r0..r13 and f0..f13 are volatile: a run starting there is not a
            // save of the non-volatile set.
            if (!ascending || registers.front() > 14 || registers.back() < 31)
                continue;
            runs.push_back({image_base + uint32_t(start) * 4, registers.front(),
                            int(registers.size()), form.mnemonic});
        }
    }
    return runs;
}

// The one address a pattern occurs at, or 0 if it is absent or ambiguous.
uint32_t single_match(const std::vector<uint8_t>& image, uint32_t image_base,
                      const uint8_t* pattern, std::size_t length,
                      uint32_t pattern_offset, std::size_t& matches) {
    uint32_t found = 0;
    matches = 0;
    if (image.size() < length)
        return 0;
    // 4-byte aligned only: these are instructions, and the same bytes inside a
    // data blob are not a function.
    for (std::size_t at = 0; at + length <= image.size(); at += 4) {
        if (std::memcmp(image.data() + at, pattern, length) != 0)
            continue;
        ++matches;
        found = image_base + static_cast<uint32_t>(at) - pattern_offset;
    }
    return matches == 1 ? found : 0;
}

bool read_whole_file(const std::string& path, std::vector<uint8_t>& out) {
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    if (!in)
        return false;
    out.resize(static_cast<std::size_t>(in.tellg()));
    in.seekg(0);
    in.read(reinterpret_cast<char*>(out.data()),
            static_cast<std::streamsize>(out.size()));
    return true;
}

bool write_whole_file(const std::string& path, const std::vector<uint8_t>& data) {
    std::ofstream out(path, std::ios::binary);
    if (!out)
        return false;
    out.write(reinterpret_cast<const char*>(data.data()),
              static_cast<std::streamsize>(data.size()));
    return out.good();
}

// A content hash to quote in notes and compare between machines. FNV-1a rather
// than md5 because it needs no dependency; the byte-exact --compare is the real
// verification, and md5sum(1) is still there for a second opinion.
uint64_t fnv1a64(const std::vector<uint8_t>& data) {
    uint64_t hash = 1469598103934665603ull;
    for (uint8_t byte : data) {
        hash ^= byte;
        hash *= 1099511628211ull;
    }
    return hash;
}

// Reads one `#define NAME 0x...` out of a generated ppc_config.h. Returns false
// if the macro is absent, which is itself a finding - a config that has no
// PPC_CODE_BASE was not written by XenonRecomp.
bool config_value(const std::string& text, const char* name, uint64_t& out) {
    const std::string needle = std::string("#define ") + name + " ";
    const std::size_t at = text.find(needle);
    if (at == std::string::npos)
        return false;
    out = std::strtoull(text.c_str() + at + needle.size(), nullptr, 0);
    return true;
}

const char* compression_name(xex_compression value) {
    switch (value) {
        case xex_compression::none: return "none";
        case xex_compression::basic: return "basic";
        case xex_compression::normal: return "normal (LZX)";
        case xex_compression::delta: return "delta";
    }
    return "?";
}

const char* encryption_name(xex_encryption value) {
    return value == xex_encryption::none ? "none" : "encrypted";
}

} // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::fprintf(stderr,
                     "usage: title_probe <package-or-xex> [--xex PATH] "
                     "[--image PATH] [--compare PATH] [--config ppc_config.h]\n");
        return 2;
    }
    const std::string input = argv[1];
    std::string xex_out, image_out, compare_to, config_path;
    for (int i = 2; i < argc; ++i) {
        const std::string flag = argv[i];
        const char* value = (i + 1 < argc) ? argv[i + 1] : nullptr;
        if (flag == "--xex" && value) { xex_out = value; ++i; }
        else if (flag == "--image" && value) { image_out = value; ++i; }
        else if (flag == "--compare" && value) { compare_to = value; ++i; }
        else if (flag == "--config" && value) { config_path = value; ++i; }
        else {
            std::fprintf(stderr, "unknown argument: %s\n", flag.c_str());
            return 2;
        }
    }

    int failures = 0;
    std::string error;
    std::vector<uint8_t> file;

    // The container. A package is the shape a title actually ships in; a loose
    // XEX is accepted so the tool can also be pointed at an existing extraction
    // to audit it.
    stfs_package package;
    if (package.open(input, error)) {
        std::printf("package: %s\n", input.c_str());
        std::printf("  title id %08X, %u block(s), %zu director(y|ies)+file(s)\n",
                    package.title_id(), package.total_block_count(),
                    package.entries().size());
        const stfs_entry* executable = package.find("default.xex");
        if (!executable) {
            std::fprintf(stderr, "  no default.xex inside the package\n");
            return 1;
        }
        file.resize(static_cast<std::size_t>(executable->size));
        const uint32_t read = package.read(*executable, file.data(),
                                           static_cast<uint32_t>(file.size()), 0);
        if (read != file.size()) {
            std::fprintf(stderr, "  short read of default.xex: %u of %zu\n",
                         read, file.size());
            return 1;
        }
        std::printf("  default.xex: %zu bytes, fnv1a64 %016" PRIX64 "\n",
                    file.size(), fnv1a64(file));
    } else if (read_whole_file(input, file)) {
        std::printf("loose file: %s\n  %zu bytes, fnv1a64 %016" PRIX64 "\n",
                    input.c_str(), file.size(), fnv1a64(file));
        std::printf("  (not an STFS package: %s)\n", error.c_str());
    } else {
        std::fprintf(stderr, "cannot read %s\n", input.c_str());
        return 1;
    }

    // Byte-exact verification of an extraction. This is the check that says a
    // copy in a project tree is the copy the package holds, and it is worth
    // making explicitly: a recompile of a different build of the same game
    // succeeds and then fails at run time on addresses that moved.
    if (!compare_to.empty()) {
        std::vector<uint8_t> other;
        if (!read_whole_file(compare_to, other)) {
            std::fprintf(stderr, "compare: cannot read %s\n", compare_to.c_str());
            ++failures;
        } else if (other.size() != file.size() ||
                   std::memcmp(other.data(), file.data(), file.size()) != 0) {
            std::printf("  COMPARE FAILED: %s differs (%zu bytes, fnv1a64 "
                        "%016" PRIX64 ")\n",
                        compare_to.c_str(), other.size(), fnv1a64(other));
            ++failures;
        } else {
            std::printf("  compare: %s is byte-identical\n", compare_to.c_str());
        }
    }

    if (!xex_out.empty()) {
        if (!write_whole_file(xex_out, file)) {
            std::fprintf(stderr, "cannot write %s\n", xex_out.c_str());
            return 1;
        }
        std::printf("  wrote %s\n", xex_out.c_str());
    }

    xex_info info;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::fprintf(stderr, "parse_xex: %s\n", error.c_str());
        return 1;
    }
    std::printf("xex: title %08X  base %08X  entry %08X  image_size %08X\n"
                "  compression %s, %s\n",
                info.title_id, info.image_base, info.entry_point,
                info.image_size, compression_name(info.compression),
                encryption_name(info.encryption));

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::retail;
    if (!decode_xex_image(file.data(), file.size(), info, image, key, error)) {
        std::fprintf(stderr, "decode: %s\n", error.c_str());
        return 1;
    }
    std::printf("image: %zu bytes, %s key, starts %c%c, fnv1a64 %016" PRIX64 "\n",
                image.size(), key == xex_key_kind::retail ? "retail" : "devkit",
                image[0], image[1], fnv1a64(image));
    if (image.size() < 2 || image[0] != 'M' || image[1] != 'Z') {
        std::printf("  DECODE SUSPECT: a decoded image starts with 'MZ'\n");
        ++failures;
    }
    if (!image_out.empty()) {
        if (!write_whole_file(image_out, image)) {
            std::fprintf(stderr, "cannot write %s\n", image_out.c_str());
            return 1;
        }
        std::printf("  wrote %s (find_jump_tables.py reads table contents from "
                    "this, at base %08X)\n", image_out.c_str(), info.image_base);
    }

    pe_info pe;
    if (!parse_pe(image.data(), image.size(), pe, error)) {
        std::fprintf(stderr, "parse_pe: %s\n", error.c_str());
        return 1;
    }
    for (const pe_section& section : pe.sections)
        std::printf("  section %-10s va %08X  vsize %08X  raw %08X  exec %d\n",
                    section.name.c_str(), info.image_base + section.virtual_address,
                    section.virtual_size, section.raw_size,
                    static_cast<int>(section.executable()));

    ppc_image_layout layout;
    if (!make_image_layout(pe, info.image_base, info.image_size, layout, error)) {
        std::fprintf(stderr, "make_image_layout: %s\n", error.c_str());
        return 1;
    }
    std::printf("layout: image %08X+%08X  code %08X+%08X  function table %08X\n",
                layout.image_base, layout.image_size, layout.code_base,
                layout.code_size, layout.table_base());

    // The cross-check against generated code. XenonRecomp computes these four
    // numbers itself from the XEX it was pointed at, so agreement here is
    // agreement that the config named this container.
    if (!config_path.empty()) {
        std::string text;
        std::vector<uint8_t> raw;
        if (!read_whole_file(config_path, raw)) {
            std::fprintf(stderr, "config: cannot read %s\n", config_path.c_str());
            ++failures;
        } else {
            text.assign(raw.begin(), raw.end());
            struct { const char* name; uint64_t ours; } checks[] = {
                {"PPC_IMAGE_BASE", layout.image_base},
                {"PPC_IMAGE_SIZE", layout.image_size},
                {"PPC_CODE_BASE",  layout.code_base},
                {"PPC_CODE_SIZE",  layout.code_size},
            };
            for (const auto& check : checks) {
                uint64_t theirs = 0;
                if (!config_value(text, check.name, theirs)) {
                    std::printf("  config: %s absent\n", check.name);
                    ++failures;
                } else if (theirs != check.ours) {
                    std::printf("  CONFIG MISMATCH: %s is 0x%" PRIX64
                                " but this image gives 0x%" PRIX64 "\n",
                                check.name, theirs, check.ours);
                    ++failures;
                } else {
                    std::printf("  config: %-14s 0x%-9" PRIX64 " agrees\n",
                                check.name, theirs);
                }
            }
        }
    }

    ppc_helper_functions helpers;
    if (!find_ppc_helpers(image.data(), image.size(), info.image_base, pe,
                          helpers, error)) {
        std::fprintf(stderr, "find_ppc_helpers: %s\n", error.c_str());
        return 1;
    }
    std::printf("helpers: %zu of 8 found\n", helpers.found_count());
    if (!helpers.has_core_helpers()) {
        std::printf("  MISSING CORE HELPERS: a recompile without these is not "
                    "going to be correct\n");
        ++failures;
    }
    const uint32_t gpr = helpers.restgprlr_14 - helpers.savegprlr_14;
    const uint32_t fpr = helpers.restfpr_14 - helpers.savefpr_14;
    const uint32_t vmx14 = helpers.restvmx_14 - helpers.savevmx_14;
    const uint32_t vmx64 = helpers.restvmx_64 - helpers.savevmx_64;
    std::printf("  deltas: gpr %X fpr %X vmx14 %X vmx64 %X", gpr, fpr, vmx14, vmx64);
    const bool core_ok = gpr == kExpectedGprDelta && fpr == kExpectedFprDelta;
    const bool vmx_ok = !helpers.has_vmx_helpers() ||
                        (vmx14 == kExpectedVmxDelta && vmx64 == kExpectedVmxDelta);
    if (core_ok && vmx_ok) {
        std::printf("  (the expected %X/%X/%X/%X)\n", kExpectedGprDelta,
                    kExpectedFprDelta, kExpectedVmxDelta, kExpectedVmxDelta);
    } else {
        std::printf("\n  DELTA MISMATCH: every title so far gives %X/%X/%X/%X, so "
                    "a different set means the wrong bytes were matched\n",
                    kExpectedGprDelta, kExpectedFprDelta, kExpectedVmxDelta,
                    kExpectedVmxDelta);
        ++failures;
    }
    std::size_t longjmp_matches = 0, setjmp_matches = 0;
    const uint32_t longjmp_address =
        single_match(image, info.image_base, kLongjmpPattern,
                     sizeof(kLongjmpPattern), 0, longjmp_matches);
    const uint32_t setjmp_address =
        single_match(image, info.image_base, kSetjmpPattern,
                     sizeof(kSetjmpPattern), kSetjmpPatternOffset,
                     setjmp_matches);
    std::printf("setjmp/longjmp: %zu and %zu match(es) of the known CRT copy\n",
                setjmp_matches, longjmp_matches);
    if (setjmp_address == 0 || longjmp_address == 0) {
        // Before demanding they be found by hand, establish whether there is
        // anything to find. Every run of consecutive whole-non-volatile-set
        // loads or stores in the image is either one of the four helpers or a
        // jmp_buf; if there is no third kind, this title has no setjmp.
        const std::vector<RegisterRun> runs = whole_set_runs(image, info.image_base);
        std::vector<RegisterRun> unexplained;
        for (const RegisterRun& run : runs) {
            if (run.address == helpers.savefpr_14 || run.address == helpers.restfpr_14 ||
                run.address == helpers.savegprlr_14 || run.address == helpers.restgprlr_14)
                continue;
            unexplained.push_back(run);
        }
        if (unexplained.empty() && runs.size() >= 2) {
            std::printf("  ABSENT, not merely unmatched: every run of consecutive "
                        "f14..f31 / r14..r31 saves or restores in the image (%zu of "
                        "them) is one of the four register-save helpers, so there is "
                        "no jmp_buf anywhere and nothing to name in the config.\n",
                        runs.size());
        } else {
            std::printf("  NOT FOUND UNAMBIGUOUSLY - find them by hand before "
                        "recompiling, and do not leave them out: see "
                        "docs/BRINGUP.md step 2\n");
            for (const RegisterRun& run : unexplained)
                std::printf("  candidate: %08X  %s of %d registers from %d\n",
                            run.address, run.mnemonic, run.length, run.first_register);
            ++failures;
        }
    }

    std::printf("\n# paste into the [main] block of <title>_recomp.toml\n%s",
                helpers_to_toml(helpers).c_str());
    if (longjmp_address != 0)
        std::printf("longjmp_address = 0x%08X\n", longjmp_address);
    if (setjmp_address != 0)
        std::printf("setjmp_address = 0x%08X\n", setjmp_address);

    if (failures) {
        std::fprintf(stderr, "\n%d check(s) failed\n", failures);
        return 1;
    }
    return 0;
}
