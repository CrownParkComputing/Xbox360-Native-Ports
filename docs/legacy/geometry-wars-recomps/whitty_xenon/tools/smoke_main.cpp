// smoke_main.cpp - link-and-initialise check for the recompiled title.
//
// Brings the runtime up exactly as a real launch would - guest address space,
// heaps, decrypted image mapped at its base, kernel installed - and reports
// what it found. It deliberately does NOT call the guest entry point: this is a
// build/link/initialise check, not a run.
#include "whitty_xenon/image.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/xex.h"

#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

int main(int argc, char** argv) {
    const char* path = argc > 1 ? argv[1] : nullptr;
    if (!path) { std::fprintf(stderr, "usage: smoke <title.xex>\n"); return 1; }
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    if (!in) { std::fprintf(stderr, "cannot read %s\n", path); return 1; }
    std::vector<uint8_t> file(static_cast<size_t>(in.tellg()));
    in.seekg(0);
    in.read(reinterpret_cast<char*>(file.data()),
            static_cast<std::streamsize>(file.size()));

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::fprintf(stderr, "parse_xex: %s\n", error.c_str()); return 1;
    }
    guest_memory memory;
    if (!memory.initialize(error)) {
        std::fprintf(stderr, "memory: %s\n", error.c_str()); return 1;
    }
    xex_image_load_result loaded;
    if (!load_xex_image(file.data(), file.size(), info, memory, loaded, error)) {
        std::fprintf(stderr, "load: %s\n", error.c_str()); return 1;
    }
    guest_heap heap;
    if (!heap.initialize(memory, 0x40000000, 0x08000000, error)) {
        std::fprintf(stderr, "heap: %s\n", error.c_str()); return 1;
    }
    kernel_state kernel(memory, heap);
    install_kernel(&kernel);

    std::vector<xex_import_library> libraries;
    parse_xex_imports(file.data(), file.size(), info, libraries, error);
    decode_imports(memory, libraries);
    kernel_registry registry;
    register_kernel_handlers(registry);
    const kernel_requirements needs = registry.resolve(libraries);

    std::printf("whitty_xenon smoke: recompiled CPU + runtime linked\n");
    std::printf("  title id     %08X\n", info.title_id);
    std::printf("  image base   %08X  size %08X\n", loaded.image_base,
                info.image_size);
    std::printf("  entry point  %08X (%s)\n", info.entry_point,
                memory.committed(info.entry_point, 4) ? "mapped"
                                                      : "NOT MAPPED");
    std::printf("  PE header    %s\n", loaded.has_pe_header ? "present" : "missing");
    std::printf("  kernel       %s\n", needs.summary().c_str());
    std::printf("  guest entry point NOT invoked (link/init check only)\n");
    install_kernel(nullptr);
    return 0;
}
