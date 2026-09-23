// kernel_worklist - what the real title still needs from the kernel.
//
// Reads a title's XEX, resolves its import table against the handlers the
// runtime currently registers, and prints the remaining worklist by name. This
// is the bring-up loop's measuring stick: implement a batch, re-run, watch the
// number fall. Named ordinals come from the platform export table, so an entry
// reads "KeWaitForSingleObject" rather than "xboxkrnl.exe:299".
#include "whitty_xenon/image.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/xex.h"

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

std::vector<uint8_t> read_file(const char* path) {
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    std::vector<uint8_t> data;
    if (!in) return data;
    std::streamsize n = in.tellg();
    in.seekg(0);
    data.resize(static_cast<size_t>(n));
    if (!in.read(reinterpret_cast<char*>(data.data()), n)) data.clear();
    return data;
}

} // namespace

int main(int argc, char** argv) {
    const char* path = argc > 1 ? argv[1] : std::getenv("WHITTY_XEX_ALIENBREED");
    if (!path || !*path) {
        std::fprintf(stderr,
                     "usage: kernel_worklist <title.xex>  (or set "
                     "WHITTY_XEX_ALIENBREED)\n");
        return 1;
    }
    std::vector<uint8_t> file = read_file(path);
    if (file.empty()) {
        std::fprintf(stderr, "could not read %s\n", path);
        return 1;
    }

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::fprintf(stderr, "parse_xex: %s\n", error.c_str());
        return 1;
    }
    // The import records live in the loaded image, so the body has to be
    // decrypted and mapped before the ordinals can be read out of them.
    guest_memory memory;
    if (!memory.initialize(error)) {
        std::fprintf(stderr, "guest memory: %s\n", error.c_str());
        return 1;
    }
    xex_image_load_result loaded;
    if (!load_xex_image(file.data(), file.size(), info, memory, loaded, error)) {
        std::fprintf(stderr, "load_xex_image: %s\n", error.c_str());
        return 1;
    }
    std::vector<xex_import_library> libraries;
    if (!parse_xex_imports(file.data(), file.size(), info, libraries, error)) {
        std::fprintf(stderr, "parse_xex_imports: %s\n", error.c_str());
        return 1;
    }
    decode_imports(memory, libraries);

    kernel_registry registry;
    register_kernel_handlers(registry);
    const kernel_requirements needs = registry.resolve(libraries);

    std::printf("%s\n", needs.summary().c_str());
    std::printf("\nremaining worklist (%zu):\n", needs.missing_count());
    int column = 0;
    for (const std::string& name : needs.missing_names()) {
        std::printf("  %-42s", name.c_str());
        if (++column % 2 == 0) std::printf("\n");
    }
    if (column % 2) std::printf("\n");
    return 0;
}
