// run_title.cpp - start the recompiled title and report where it stops.
//
// This is the bring-up harness. It brings the runtime up exactly as a launch
// would - address space, heaps, decrypted image mapped at its base, a guest
// stack, the kernel installed - then calls the recompiled entry point
// (XenonRecomp names it `_xstart`) with a PPCContext.
//
// The title will run until it calls a kernel import that is not implemented
// yet. Each unimplemented import prints its own name and, if
// WHITTY_STOP_ON_UNIMPLEMENTED is set, stops there. That call order is the real
// bring-up worklist: it says which import the title wants *next*, which the
// static import table cannot.
#include "whitty_xenon/audio.h"
#include "whitty_xenon/file_system.h"
#include "whitty_xenon/stfs.h"
#include "whitty_xenon/image.h"
#include "whitty_xenon/import_patcher.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/input.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/mmio.h"
#include "whitty_xenon/thread_environment.h"
#include "whitty_xenon/apu/xma.h"
#include "whitty_xenon/apu/xma_pcm_cache.h"
#include "whitty_xenon/gpu/cabinet.h"
#include "whitty_xenon/gpu/overlay_toggles.h"
#include "whitty_xenon/gpu/cabinet_facts.h"
#include "whitty_xenon/gpu/command_processor.h"
#include "whitty_xenon/gpu/frame_selection.h"
#include "whitty_xenon/gpu/mmio.h"
#include "whitty_xenon/gpu/overlay.h"
#include "whitty_xenon/gpu/present_panes.h"
#include "whitty_xenon/gpu/spectrum.h"
#include "whitty_xenon/gpu/text_panel.h"
#include "whitty_xenon/system_ui.h"
#include "whitty_xenon/gpu/render_target.h"
#include "whitty_xenon/gpu/ring_buffer.h"
#include "whitty_xenon/gpu/shader_program.h"
#include "whitty_xenon/gpu/shader_translator.h"
#include "whitty_xenon/gpu/texture_read.h"
#ifdef WHITTY_HAVE_VULKAN
#include "whitty_xenon/gpu/vulkan/frame_renderer.h"
#endif
#ifdef WHITTY_HAVE_SDL
// Before SDL's Vulkan header, so its handle types are the real ones rather
// than SDL's forward declarations.
#include <vulkan/vulkan.h>

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#endif
#ifdef WHITTY_ANDROID
// The window, and the buttons on the machine holding it. Everything Android in
// this harness goes through these declarations - the surface is a std::function
// the backend already asked for, and the pad is the input_provider the kernel
// already asked for, so there is no Android branch below beyond fetching them.
#include "whitty_android.h"
#endif
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/xex.h"

#include "ppc_config.h"
#include "ppc_context.h"
#include "ppc_function_table.h"

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <csignal>
#include <cmath>
#include <cstring>
#include <dlfcn.h>
#include <cstdint>
// glibc's backtrace(3). Bionic grew <execinfo.h> at API 33, so the header being
// PRESENT is not the question - a build targeting anything earlier sees the
// header and no declarations, which is a compile error rather than a fallback.
// Both conditions, therefore. Without it the fault report loses its frame list
// and keeps the address and the commit state, which is the half that says
// WHERE and the half a phone can still print to logcat.
#if __has_include(<execinfo.h>) && \
    (!defined(__ANDROID__) || __ANDROID_API__ >= 33)
#define WHITTY_HAVE_BACKTRACE 1
#include <execinfo.h>
#endif
#if defined(__aarch64__)
#include <ucontext.h>
#endif
#include <unistd.h>
#include <cstdio>
#include <memory>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <string>
#include <system_error>
#include <thread>
#include <vector>

// Declared exactly as XenonRecomp declares it, so the linkage matches.
PPC_EXTERN_FUNC(_xstart);

using namespace whitty_xenon;

namespace {

// The guest stack. The title's entry point expects a usable stack in r1; PPC
// calling convention wants it 16-byte aligned with a back-chain word of zero.
constexpr uint32_t kStackBase = 0x70000000;
constexpr uint32_t kStackSize = 0x00100000; // 1 MiB
// The main heap the title's allocator draws from: the console's 64 KiB-page
// virtual region, which is where MEM_LARGE_PAGES allocations land.
constexpr uint32_t kHeapBase = 0x40000000;
// Everything from the base of the 64 KiB-page region up to the guest stack.
// The console's is far larger than the 128 MiB this started at, and a title
// sizes its pools against the console's: Alien Breed's package alone is 425
// MiB and it streams most of it in. An allocator that runs out here returns
// zero, which titles do not check, so the shortfall surfaces as a null or
// stale pointer somewhere with no connection to the allocation.
constexpr uint32_t kHeapSize = kStackBase - kHeapBase;
static_assert(kHeapBase + kHeapSize == kStackBase,
              "the title heap must run up to, and not into, the guest stack");
// The console's *other* virtual region, 4 KiB pages below 0x40000000, which is
// where an allocation without MEM_LARGE_PAGES has to come from. A title's own
// allocator tells the two apart by the top bits of the pointer, so this is not
// interchangeable with the heap above. Starts one page up so nothing can be
// handed out at guest address zero.
constexpr uint32_t kSmallHeapBase = 0x00010000;
constexpr uint32_t kSmallHeapSize = 0x0FFF0000; // up to 0x10000000
// Physical memory, for the GPU command ring and buffers. It starts one page
// above the alias base so that no allocation can have physical address zero:
// these addresses are handed to hardware and read back by guest code that
// null-checks them, and on the console the bottom of physical memory belongs
// to the kernel anyway.
constexpr uint32_t kPhysBase = 0xA0010000;
// The rest of the 512 MiB physical window. The console's physical memory is
// the console's RAM, and a title sizes its pools against that - Geometry Wars
// asks for 66 MiB of it in one go and frees none of it, so anything smaller
// just moves the failure. Nothing is spent until pages are touched: the region
// is backed by a sparse object, so the size here costs address space only.
constexpr uint32_t kPhysSize = kPhysicalAliasSize - 0x10000;

std::vector<uint8_t> read_file(const char* path) {
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    std::vector<uint8_t> data;
    if (!in) return data;
    data.resize(static_cast<size_t>(in.tellg()));
    in.seekg(0);
    if (!in.read(reinterpret_cast<char*>(data.data()),
                 static_cast<std::streamsize>(data.size())))
        data.clear();
    return data;
}

} // namespace

extern void whitty_xenon_report_import_calls(int top);


// --- guest fault reporting -------------------------------------------------
// Set up before the title starts and left in place: the handler only reports,
// then restores the default action and returns so the fault is re-taken and
// the process dies exactly as it would have.
namespace {
guest_memory* fault_memory = nullptr;
uint8_t* fault_base = nullptr;

void write_all(const char* text) {
    const std::size_t length = std::strlen(text);
    ssize_t written = ::write(STDERR_FILENO, text, length);
    (void)written;
}

void report_guest_fault(int signal_number, siginfo_t* info, void* context) {
    char line[256];
    const uint8_t* address = static_cast<const uint8_t*>(info->si_addr);
    if (fault_memory != nullptr && address >= fault_base &&
        address < fault_base + kAddressSpaceSize) {
        const uint32_t guest =
            static_cast<uint32_t>(address - fault_base);
        const bool is_committed = fault_memory->committed(guest, 1);
        if (is_physical_alias(guest))
            std::snprintf(line, sizeof(line),
                          "\nguest fault: %s at %08X - physical memory, "
                          "offset %08X, page %s\n",
                          signal_number == SIGBUS ? "SIGBUS" : "SIGSEGV", guest,
                          guest & kPhysicalOffsetMask,
                          is_committed ? "committed" : "NOT committed");
        else
            std::snprintf(line, sizeof(line),
                          "\nguest fault: %s at %08X - page %s\n",
                          signal_number == SIGBUS ? "SIGBUS" : "SIGSEGV", guest,
                          is_committed ? "committed" : "NOT committed");
    } else {
        std::snprintf(line, sizeof(line),
                      "\nhost fault: signal %d at %p (outside guest memory)\n",
                      signal_number, info->si_addr);
    }
    write_all(line);

    // Who faulted. The recompiled CPU is ordinary host functions named after
    // the guest addresses they came from, and a kernel handler is a named C++
    // function, so a host backtrace answers the only question that matters
    // here: was it guest code dereferencing a null it computed itself, or one
    // of our handlers dereferencing a guest pointer the title left null. The
    // frames come out as `binary(+0xoffset)`, which `addr2line -Cfe <binary>`
    // turns into a name and a line.
#ifdef WHITTY_HAVE_BACKTRACE
    void* frames[32];
    const int depth = ::backtrace(frames, 32);
    write_all("guest fault: host backtrace\n");
    ::backtrace_symbols_fd(frames, depth, STDERR_FILENO);
#else
    // Said rather than silently skipped: a fault report with no frames looks
    // like a truncated one, and the difference between "the stack was not
    // walked" and "the stack was empty" is the whole value of the report.
    write_all("guest fault: no host backtrace (no execinfo on this libc)\n");
    // bionic (Android) has no execinfo, but the faulting PC is sitting right
    // there in the ucontext the kernel handed the handler - on arm64 it needs
    // no library at all, just the mcontext layout. `addr2line -Cfe <the
    // unstripped binary>` on this address names the exact recompiled
    // function (or kernel handler) that was running, which is the whole
    // reason this fault report exists on a platform gdb cannot attach to.
#if defined(__aarch64__)
    if (context != nullptr) {
        const auto* uc = static_cast<const ucontext_t*>(context);
        std::snprintf(line, sizeof(line), "guest fault: host PC %016llx\n",
                     static_cast<unsigned long long>(uc->uc_mcontext.pc));
        write_all(line);
        // The PC alone names nothing: the executable is PIE, so it needs its
        // load base. dladdr gives the nearest exported symbol AND the module
        // base in one call, and recompiled guest functions - ordinary host
        // functions named sub_XXXXXXXX - are exported, so on a good day this
        // is the answer outright and addr2line is not needed at all.
        const uintptr_t pc = static_cast<uintptr_t>(uc->uc_mcontext.pc);
        Dl_info symbol_info {};
        if (::dladdr(reinterpret_cast<const void*>(pc), &symbol_info) != 0 &&
            symbol_info.dli_fname != nullptr) {
            const uintptr_t module_base =
                reinterpret_cast<uintptr_t>(symbol_info.dli_fbase);
            std::snprintf(line, sizeof(line),
                          "guest fault: module %s base %016lx, PC offset "
                          "0x%lx%s%s%s\n",
                          symbol_info.dli_fname, module_base, pc - module_base,
                          symbol_info.dli_sname != nullptr ? " nearest " : "",
                          symbol_info.dli_sname != nullptr
                              ? symbol_info.dli_sname
                              : "",
                          symbol_info.dli_saddr != nullptr ? "" : "");
            write_all(line);
        }
    }
#endif
#endif

    struct sigaction restore {};
    restore.sa_handler = SIG_DFL;
    ::sigaction(signal_number, &restore, nullptr);
}

void install_guest_fault_reporter(guest_memory& memory) {
    fault_memory = &memory;
    fault_base = memory.host_unchecked(0);
    struct sigaction action {};
    action.sa_sigaction = report_guest_fault;
    action.sa_flags = SA_SIGINFO;
    ::sigemptyset(&action.sa_mask);
    ::sigaction(SIGSEGV, &action, nullptr);
    ::sigaction(SIGBUS, &action, nullptr);
}

// Runs recompiled guest code, and comes back when the guest is done with it OR
// when the guest ended its own thread inside it.
//
// ExTerminateThread does not return on the console, so the handler unwinds
// rather than returning into code that was compiled on that promise. Every
// place the host enters guest code - the entry point, a thread, an interrupt
// callback, the audio render driver - therefore has to be ready for the unwind
// to arrive here instead of a return, or it leaves the process by
// std::terminate.
bool run_guest(PPCFunc* entry, PPCContext& ctx, uint8_t* base) {
    try {
        entry(ctx, base);
    } catch (const guest_thread_terminated&) {
        return true;
    }
    return false;
}

// Everything one frame gave the GPU, printed. A decoded command stream and a
// renderable frame are not the same thing: the stream can be walked perfectly
// and still leave a shader unparsed, a vertex buffer unaddressed or a render
// target undescribed. This says which, on a real frame, rather than leaving it
// to be discovered a pixel at a time.
void dump_frame(const gpu::command_processor& cp, guest_memory& memory,
                uint64_t frame) {
    std::printf("\n=== frame %llu ===\n", static_cast<unsigned long long>(frame));
    std::printf("  %zu draw(s), %zu shader(s) bound so far\n",
                cp.draws().size(), cp.shaders().size());

    for (std::size_t i = 0; i < cp.shaders().size(); ++i) {
        const gpu::shader_upload& upload = cp.shaders()[i];
        const char* kind =
            upload.kind == gpu::shader_kind::vertex ? "vertex" : "pixel";
        gpu::shader_program program;
        std::string error;
        if (!parse_shader(upload.microcode.data(), upload.microcode.size(),
                          program, error)) {
            std::printf("  shader %zu (%s, %zu dwords) at %08X: PARSE FAILED - "
                        "%s\n",
                        i, kind, upload.microcode.size(), upload.address,
                        error.c_str());
            continue;
        }
        std::size_t alu = 0;
        std::size_t texture_fetches = 0;
        // Instructions the translator does not handle are skipped, not
        // reported - so a shader can translate "successfully" and still be
        // missing the multiply that positions its geometry.
        std::size_t unsupported = 0;
        // And WHICH ones. A count says a shader is incomplete; the opcode
        // numbers say what to go and implement, which is the difference
        // between a known gap and a hunt.
        std::string missing_ops;
        const auto note_missing = [&missing_ops](const char* slot,
                                                 uint32_t opcode) {
            char entry[32];
            std::snprintf(entry, sizeof(entry), " %s%u", slot, opcode);
            if (missing_ops.find(entry) == std::string::npos)
                missing_ops += entry;
        };
        std::size_t exports = 0;
        std::string vertex_fetches;
        for (const gpu::shader_exec_block& block : program.exec_blocks) {
            for (const gpu::shader_instruction& instruction :
                 block.instructions) {
                switch (instruction.kind) {
                    case gpu::instruction_kind::alu: {
                        ++alu;
                        if (instruction.alu.is_export) {
                            ++exports;
                            // Which export index: 62 is position, 0-15 are
                            // interpolators the pixel shader reads. A vertex
                            // shader that never exports 62 has no position at
                            // all, which renders as undefined rather than as
                            // nothing.
                            char entry[32];
                            std::snprintf(entry, sizeof(entry), " export%u",
                                          instruction.alu.vector_dest);
                            vertex_fetches += entry;
                        }
                        // The two slots are counted separately, and a scalar
                        // slot of retain_prev means "no scalar operation" -
                        // counting that as unsupported flags almost every
                        // instruction in every shader and says nothing.
                        if (!gpu::shader_translator::is_supported_vector_op(
                                instruction.alu.vector_opcode)) {
                            ++unsupported;
                            note_missing("vec", static_cast<uint32_t>(
                                                    instruction.alu.vector_opcode));
                        }
                        if (instruction.alu.scalar_opcode !=
                                gpu::alu_scalar_opcode::retain_prev &&
                            !gpu::shader_translator::is_supported_scalar_op(
                                instruction.alu.scalar_opcode)) {
                            ++unsupported;
                            note_missing("scl", static_cast<uint32_t>(
                                                    instruction.alu.scalar_opcode));
                        }
                        break;
                    }
                    case gpu::instruction_kind::texture_fetch: {
                        ++texture_fetches;
                        // Named the same way the vfetch below is, because the
                        // registers and the swizzles are what decide whether
                        // three samples land in three places or on top of one
                        // another. A shader that samples three planes into one
                        // register - each fetch writing its own components and
                        // keeping the rest - reads identically to three
                        // independent samples until these are printed.
                        char entry[96];
                        std::snprintf(
                            entry, sizeof(entry),
                            " tfetch(c%u, r%u.%02X -> r%u.%03X)",
                            instruction.texture.fetch_constant_index,
                            instruction.texture.src_reg,
                            instruction.texture.src_swizzle,
                            instruction.texture.dst_reg,
                            instruction.texture.dst_swizzle);
                        vertex_fetches += entry;
                        break;
                    }
                    case gpu::instruction_kind::vertex_fetch: {
                        // The slot is named here; what it points at is
                        // per-draw state, so it is resolved with each draw
                        // below rather than against whatever the registers
                        // hold once the frame is over.
                        char entry[64];
                        std::snprintf(entry, sizeof(entry),
                                      " vfetch(slot %u, stride %u, format %u)",
                                      instruction.vertex.const_index,
                                      instruction.vertex.stride,
                                      instruction.vertex.format);
                        vertex_fetches += entry;
                        break;
                    }
                }
            }
        }
        gpu::shader_translator translator;
        const std::vector<uint32_t> spirv = translator.translate(
            program, 32,
            upload.kind == gpu::shader_kind::vertex ? gpu::shader_type::vertex
                                                    : gpu::shader_type::pixel);
        // A texture fetch the translator declined to emit is invisible in every
        // other number here: the tfetch is counted as present, the SPIR-V is
        // valid, and the draw runs - it just samples nothing. Say so.
        char skipped[64] = "";
        if (translator.skipped_texture_fetches() != 0)
            std::snprintf(skipped, sizeof(skipped), " (%zu NOT SAMPLED)",
                          translator.skipped_texture_fetches());
        // Control flow whose meaning was dropped, and WHICH. This is the one
        // number on the line that no other number implies: a loop whose body
        // runs once, or a branch both of whose sides run, has exactly the same
        // alu / tfetch / UNSUPPORTED counts as a shader that is correct. Every
        // other field here would read "0 UNSUPPORTED" and mean it.
        std::string dropped_cf;
        const uint32_t dropped_mask =
            translator.untranslated_control_flow_opcodes();
        for (uint32_t op = 0; op < 16; ++op) {
            if ((dropped_mask & (1u << op)) == 0) continue;
            static const char* const names[16] = {
                "nop",     "exec",    "exece",   "cexec",   "cexece", "cexecp",
                "cexecpe", "loop",    "endloop", "call",    "ret",    "jmp",
                "alloc",   "cexecpc", "cexecpce", "vsdone"};
            dropped_cf += " ";
            dropped_cf += names[op];
        }
        char cf_field[96];
        std::snprintf(cf_field, sizeof(cf_field), ", %zu CF DROPPED%s",
                      translator.untranslated_control_flow(),
                      dropped_cf.c_str());
        std::printf("  shader %zu (%s, %zu dwords) at %08X: %zu exec block(s), "
                    "%zu alu (%zu export, %zu UNSUPPORTED%s)%s, %zu tfetch%s -> "
                    "%zu SPIR-V words%s\n",
                    i, kind, upload.microcode.size(), upload.address,
                    program.exec_blocks.size(), alu, exports, unsupported,
                    missing_ops.c_str(), cf_field, texture_fetches, skipped,
                    spirv.size(), vertex_fetches.c_str());
        // WHITTY_DUMP_EXPORTS=1 lists every export instruction with BOTH its
        // write masks and both its destination fields.
        //
        // The count above says a shader has seven exports. It cannot say which
        // COMPONENTS they write, and on an export that is the whole question:
        // an export is written by the vector half and the scalar half
        // together, each taking the components its own mask names, and a
        // component both masks name is the constant 1 rather than either
        // result (Xenia, ucode.h, GetVectorOpResultWriteMask and friends).
        // A component NEITHER names is left alone.
        //
        // So an interpolator can arrive with one component never written, the
        // pixel shader can use that component as a texture coordinate, and the
        // surface smears one row of texels down the screen - with every
        // counter in this runtime reporting a clean translation. That is
        // Jetpac's terrain. Counting exports could not have shown it; naming
        // their masks does. It is the same lesson as the fetch swizzles in
        // docs/BRINGUP.md: a diagnostic that names an instruction without its
        // operands cannot show you an operand bug.
        if (std::getenv("WHITTY_DUMP_EXPORTS") != nullptr) {
            const auto bits = [](uint32_t mask) {
                std::string out;
                for (int c = 0; c < 4; ++c)
                    out += (mask & (1u << c)) ? "xyzw"[c] : '_';
                return out;
            };
            for (const gpu::shader_exec_block& block : program.exec_blocks)
                for (const gpu::shader_instruction& one : block.instructions) {
                    if (one.kind != gpu::instruction_kind::alu) continue;
                    if (!one.alu.is_export) continue;
                    const uint32_t v = one.alu.vector_write_mask;
                    const uint32_t s = one.alu.scalar_write_mask;
                    std::printf("      export %2u: vector .%s scalar .%s"
                                " (vector-op .%s, scalar-op .%s, const1 .%s)"
                                " scalar_dest %u\n",
                                one.alu.vector_dest, bits(v).c_str(),
                                bits(s).c_str(), bits(v & ~s).c_str(),
                                bits(s & ~v).c_str(), bits(v & s).c_str(),
                                one.alu.scalar_dest);
                }
        }
        // WHITTY_DUMP_CF=1 lists the control-flow program itself. The counter
        // above says how much was dropped; this says what SHAPE it was, which
        // is the difference between "there are loops here" and knowing whether
        // they nest, which decides whether a structured translation is even
        // possible.
        if (std::getenv("WHITTY_DUMP_CF") != nullptr) {
            const auto& cfs = program.control_flow.instructions;
            for (std::size_t n = 0; n < cfs.size(); ++n) {
                const gpu::cf_instruction& cf = cfs[n];
                if (cf.opcode == gpu::cf_opcode::nop) continue;
                std::printf("      cf %2zu: op %2u", n,
                            static_cast<uint32_t>(cf.opcode));
                if (gpu::is_exec_opcode(cf.opcode))
                    std::printf(" exec addr %u count %u seq %03X",
                                cf.exec_address, cf.exec_count,
                                cf.exec_sequence);
                if (gpu::is_bool_conditional_exec(cf.opcode))
                    std::printf(" if b%u == %d", cf.bool_address,
                                cf.condition ? 1 : 0);
                if (gpu::is_predicated_exec(cf.opcode))
                    std::printf(" if p0 == %d", cf.condition ? 1 : 0);
                if (cf.opcode == gpu::cf_opcode::loop_start)
                    std::printf(" loop i%u skip-to %u%s", cf.loop_id,
                                cf.loop_address, cf.loop_is_repeat ? " repeat"
                                                                   : "");
                if (cf.opcode == gpu::cf_opcode::loop_end)
                    std::printf(" endloop i%u body-at %u%s", cf.loop_id,
                                cf.loop_address,
                                cf.loop_predicated_break ? " break-on-p0" : "");
                if (cf.opcode == gpu::cf_opcode::cond_jmp ||
                    cf.opcode == gpu::cf_opcode::cond_call)
                    std::printf(" -> %u%s", cf.jump_address,
                                cf.is_unconditional ? " always"
                                : cf.is_predicated
                                    ? (cf.condition ? " if p0" : " if !p0")
                                    : (cf.condition ? " if b" : " if !b"));
                std::printf("\n");
            }
        }
        for (const gpu::vertex_input& input : translator.vertex_inputs())
            std::printf("      input %u: slot %u, +%u dwords, stride %u, "
                        "format %u, %u component(s)\n",
                        input.location, input.fetch_slot, input.offset_dwords,
                        input.stride_dwords, input.format, input.components);
        // Written out so the modules can be put through Khronos spirv-val -
        // these are the title's real shaders, which is a stronger check than
        // any synthetic module.
        if (const char* dir = std::getenv("WHITTY_SPIRV_DIR")) {
            char path[512];
            std::snprintf(path, sizeof(path), "%s/shader_%02zu_%s.spv", dir, i,
                          kind);
            std::ofstream out(path, std::ios::binary);
            out.write(reinterpret_cast<const char*>(spirv.data()),
                      static_cast<std::streamsize>(spirv.size() * 4));
        }
    }

    // The vfetch slots each vertex shader reads, so a draw can be asked what
    // its own state made of them, and the vertex stride each implies.
    std::vector<std::vector<uint8_t>> shader_vfetch_slots(cp.shaders().size());
    std::vector<uint32_t> vertex_strides(cp.shaders().size(), 0);
    std::vector<std::vector<uint8_t>> shader_texture_slots(cp.shaders().size());
    for (std::size_t i = 0; i < cp.shaders().size(); ++i) {
        gpu::shader_program program;
        std::string error;
        if (!parse_shader(cp.shaders()[i].microcode.data(),
                          cp.shaders()[i].microcode.size(), program, error))
            continue;
        uint32_t stride = 0;
        for (const gpu::shader_exec_block& block : program.exec_blocks) {
            for (const gpu::shader_instruction& instruction :
                 block.instructions) {
                if (instruction.kind == gpu::instruction_kind::texture_fetch)
                    shader_texture_slots[i].push_back(
                        instruction.texture.fetch_constant_index);
                if (instruction.kind == gpu::instruction_kind::vertex_fetch) {
                    shader_vfetch_slots[i].push_back(
                        instruction.vertex.const_index);
                    if (!instruction.vertex.is_mini_fetch)
                        stride = instruction.vertex.stride * 4;
                }
            }
        }
        vertex_strides[i] = stride;
    }

    if (cp.draws().empty()) return;
    // The render target is per-draw state, so it is read off a real draw
    // rather than off whatever the registers happen to hold at the boundary.
    const gpu::draw_record& last = cp.draws().back();
    const gpu::color_render_target target =
        decode_color_render_target(last.state, 0);
    std::printf("  render target 0: pitch %u, EDRAM tile %u, format %u, "
                "exp bias %d, %ux MSAA\n",
                target.pitch_pixels, target.edram_base_tiles,
                static_cast<unsigned>(target.format), target.exp_bias,
                1u << static_cast<unsigned>(target.samples));
    // The viewport transform. A Xenos vertex shader may export coordinates
    // that are already scaled, with these saying how to get from them to clip
    // space - so a renderer that ignores them draws geometry the size of the
    // numbers in the vertex buffer.
    std::printf("  viewport: scale (%g, %g, %g) offset (%g, %g, %g), "
                "VTE_CNTL %08X\n",
                last.state.get_float(0x210F), last.state.get_float(0x2111),
                last.state.get_float(0x2113), last.state.get_float(0x2110),
                last.state.get_float(0x2112), last.state.get_float(0x2114),
                last.state.get(gpu::reg::pa_cl_vte_cntl));

    // The two banks a shader's CONTROL FLOW reads, over the whole frame. A
    // loop constant of zero means that loop runs NO iterations, which looks
    // identical in every other number to a loop that was never translated -
    // and is the one way implementing loops can leave a shader worse than
    // dropping them did. So they are printed, not assumed.
    // Read over EVERY draw, not off the frame's last state: these are per-draw
    // registers, so one draw's zero says nothing about the frame.
    {
        uint32_t bool_any[gpu::kBoolConstantDwords] = {};
        uint32_t loop_max[gpu::kLoopConstantDwords] = {};
        uint32_t loop_seen[gpu::kLoopConstantDwords] = {};
        for (const gpu::draw_record& draw : cp.draws()) {
            for (uint32_t i = 0; i < gpu::kBoolConstantDwords; ++i)
                bool_any[i] |=
                    draw.state.get(gpu::reg::shader_constant_bool_000_031 + i);
            for (uint32_t i = 0; i < gpu::kLoopConstantDwords; ++i) {
                const uint32_t word =
                    draw.state.get(gpu::reg::shader_constant_loop_00 + i);
                const uint32_t count = word & 0xFF;
                if (count != 0) ++loop_seen[i];
                if (count > loop_max[i]) loop_max[i] = count;
            }
        }
        std::string bools, loops;
        for (uint32_t i = 0; i < gpu::kBoolConstantDwords; ++i) {
            if (bool_any[i] == 0) continue;
            char entry[40];
            std::snprintf(entry, sizeof(entry), " b[%u..%u] set:%08X", i * 32,
                          i * 32 + 31, bool_any[i]);
            bools += entry;
        }
        for (uint32_t i = 0; i < gpu::kLoopConstantDwords; ++i) {
            if (loop_max[i] == 0 && loop_seen[i] == 0) continue;
            char entry[64];
            std::snprintf(entry, sizeof(entry),
                          " i%u: up to %u iteration(s), non-zero in %u draw(s)",
                          i, loop_max[i], loop_seen[i]);
            loops += entry;
        }
        std::printf("  control-flow constants over %zu draw(s): bool%s%s\n"
                    "    loop%s%s\n",
                    cp.draws().size(), bools.empty() ? " (all clear)" : "",
                    bools.c_str(),
                    loops.empty() ? " (every loop constant is zero - every "
                                    "loop in this frame runs 0 iterations)"
                                  : "",
                    loops.c_str());
    }

    const std::size_t shown = cp.draws().size();
    for (std::size_t i = 0; i < shown; ++i) {
        const gpu::draw_record& draw = cp.draws()[i];
        std::string buffers;
        if (draw.vertex_shader >= 0) {
            for (uint8_t slot :
                 shader_vfetch_slots[static_cast<std::size_t>(
                     draw.vertex_shader)]) {
                const gpu::vertex_fetch_constant fetch =
                    decode_vertex_fetch_constant(draw.state, slot);
                // Type 3 is a vertex fetch; anything else means the slot was
                // never set up, and the address that comes with it is not a
                // vertex buffer.
                // A fetch constant holds the GPU's physical address, like
                // everything else the command stream carries.
                const uint32_t address =
                    gpu::command_processor::physical_to_virtual(
                        fetch.base_address);
                char entry[128];
                std::snprintf(entry, sizeof(entry),
                              "\n      slot %u -> %08X + %u bytes, type %u%s",
                              slot, address, fetch.size_bytes, fetch.type,
                              fetch.type == 3
                                  ? (memory.committed(address, fetch.size_bytes)
                                         ? " (committed)"
                                         : " (NOT COMMITTED)")
                                  : " (NOT A VERTEX FETCH)");
                buffers += entry;

                // What the vertex buffer actually holds. The single most
                // decisive fact about a mis-placed draw is the range of its
                // coordinates: clip space is about -1..1, window space runs to
                // the render target's size, and anything else is a decode bug.
                // Guest floats are big-endian, which read_u32 already undoes.
                if (fetch.type == 3 &&
                    memory.committed(address, fetch.size_bytes)) {
                    buffers += "\n        vertices:";
                    const uint32_t stride =
                        vertex_strides[static_cast<std::size_t>(
                            draw.vertex_shader)];
                    // First three and last three. A draw whose geometry is
                    // cut off has data that either stops early or is there and
                    // unused, and only the tail distinguishes the two.
                    const uint32_t count = draw.index_count;
                    const uint32_t sample[6] = {0, 1, 2,
                                                count > 3 ? count - 3 : 0,
                                                count > 2 ? count - 2 : 0,
                                                count > 1 ? count - 1 : 0};
                    for (uint32_t si = 0; si < 6 && stride != 0; ++si) {
                        const uint32_t v = sample[si];
                        if (si == 3) buffers += " ...";
                        const uint32_t at = address + v * stride;
                        if (!memory.committed(at, 8)) break;
                        const uint32_t bits_x = memory.read_u32(at);
                        const uint32_t bits_y = memory.read_u32(at + 4);
                        // Z as well as X and Y. Two vertices of a quad can share
                        // x and y and differ only in z - a plane laid out in X/Z
                        // with y as its displacement is exactly that - and
                        // printing two components makes those look like a
                        // degenerate, zero-area triangle when they are nothing
                        // of the kind.
                        const uint32_t bits_z = memory.read_u32(at + 8);
                        float x, y, z;
                        std::memcpy(&x, &bits_x, sizeof(x));
                        std::memcpy(&y, &bits_y, sizeof(y));
                        std::memcpy(&z, &bits_z, sizeof(z));
                        char coords[64];
                        std::snprintf(coords, sizeof(coords), " (%g, %g, %g)", x,
                                      y, z);
                        buffers += coords;
                    }
                    // Every position in the buffer, reduced to the two facts
                    // that separate bad data from a bad pipeline: how far the
                    // coordinates reach, and whether any of them is not a
                    // number. A title that transforms on the CPU writes clip
                    // space here, so a single NaN or a coordinate in the
                    // millions is a guest arithmetic fault - and it is
                    // invisible in a three-vertex sample.
                    {
                        const uint32_t records =
                            stride == 0 ? 0 : fetch.size_bytes / stride;
                        uint32_t nonfinite = 0;
                        float reach = 0.0f;
                        for (uint32_t v = 0; v < records; ++v) {
                            const uint32_t at = address + v * stride;
                            if (!memory.committed(at, 12)) break;
                            for (uint32_t k = 0; k < 3; ++k) {
                                const uint32_t bits = memory.read_u32(at + k * 4);
                                float f;
                                std::memcpy(&f, &bits, sizeof(f));
                                if (!std::isfinite(f)) {
                                    ++nonfinite;
                                    continue;
                                }
                                const float m = f < 0.0f ? -f : f;
                                if (m > reach) reach = m;
                            }
                        }
                        // The highest index this draw reaches, against how
                        // many records the fetch constant actually describes.
                        // An index past the end is not a subtle error: the
                        // vertex comes back as zeroes, and the triangle it
                        // belongs to is flung across the screen.
                        uint32_t high = 0;
                        for (uint32_t index : draw.indices)
                            if (index > high) high = index;
                        char span[160];
                        std::snprintf(span, sizeof(span),
                                      "\n        %u record(s), highest index "
                                      "%u%s, reach %g%s",
                                      records, high,
                                      (records != 0 && high >= records)
                                          ? " PAST THE END"
                                          : "",
                                      reach,
                                      nonfinite != 0 ? " NOT A NUMBER" : "");
                        buffers += span;
                    }
                    // WHITTY_DUMP_VERTEX=<draw> adds the first vertex as raw
                    // dwords, so an attribute that is not the position can be
                    // decoded by hand against the input layout printed above.
                    //
                    // A packed colour is the case that needs it: a vertex alpha
                    // multiplying a surface decides whether that surface is
                    // visible at all, and it reaches the shader through a
                    // k_8_8_8_8 whose four bytes are meaningful individually.
                    // Printing the decoded float tells you what we think it is;
                    // printing the dword tells you what the title actually
                    // wrote, and only the second can show the two disagreeing.
                    if (const char* which =
                            std::getenv("WHITTY_DUMP_VERTEX");
                        which != nullptr &&
                        (std::strcmp(which, "all") == 0 ||
                         std::strtoul(which, nullptr, 10) == i) &&
                        memory.committed(address, stride)) {
                        buffers += "\n        vertex 0 dwords:";
                        for (uint32_t d = 0; d * 4 + 4 <= stride; ++d) {
                            char raw[24];
                            std::snprintf(raw, sizeof(raw), " [%u]=%08X", d,
                                          memory.read_u32(address + d * 4));
                            buffers += raw;
                        }
                    }
                }
            }
        }
        // The textures this draw's pixel shader samples. If one of these
        // addresses is where an earlier draw resolved to, that pass's output is
        // this pass's input - which is exactly how a glow is built.
        std::string textures;
        if (draw.pixel_shader >= 0) {
            for (uint8_t slot :
                 shader_texture_slots[static_cast<std::size_t>(
                     draw.pixel_shader)]) {
                const gpu::texture_fetch_constant tex =
                    decode_texture_fetch_constant(draw.state, slot);
                // The endianness and the swizzle decide which byte of a texel
                // becomes which channel, and both are silent when wrong - a
                // swapped texture still draws - so they are printed alongside
                // the address rather than left to be guessed at.
                static const char* const kChannel = "rgba01??";
                char swizzle[5] = {
                    kChannel[(tex.swizzle >> 0) & 0x7],
                    kChannel[(tex.swizzle >> 3) & 0x7],
                    kChannel[(tex.swizzle >> 6) & 0x7],
                    kChannel[(tex.swizzle >> 9) & 0x7], '\0'};
                // What the texture actually decodes to. An address, a format
                // and a size say a texture COULD be read; only the texels say
                // whether the pitch, tiling and channel order landed on the
                // pixels the title meant - and a flat black one is invisible in
                // a screenshot but obvious here.
                const gpu::host_texture decoded = read_texture(memory, tex);
                char pixels[192] = " NOT DECODED";
                if (decoded.valid) {
                    const std::size_t middle =
                        ((decoded.height / 2) * decoded.width +
                         decoded.width / 2) * 4;
                    // The ALPHA CHANNEL, summarised, because a sprite that
                    // never appears and a sprite drawn as a rectangle are the
                    // same question asked twice: did the cut-out reach the
                    // output. Two texels cannot answer it - a sprite sheet's
                    // texel (0,0) is transparent by construction - so this
                    // reports the distribution: how much of the texture is
                    // fully opaque, how much fully clear, and the extremes.
                    // A mask that decoded correctly is mostly 00 and FF; one
                    // that is flat, or all mid-range, is a mask that did not.
                    const std::size_t texels =
                        static_cast<std::size_t>(decoded.width) *
                        decoded.height;
                    uint32_t opaque = 0, clear = 0, lo = 255, hi = 0;
                    uint64_t total = 0;
                    for (std::size_t t = 0; t < texels; ++t) {
                        const uint8_t a = decoded.rgba[t * 4 + 3];
                        if (a == 255) ++opaque;
                        if (a == 0) ++clear;
                        if (a < lo) lo = a;
                        if (a > hi) hi = a;
                        total += a;
                    }
                    std::snprintf(pixels, sizeof(pixels),
                                  " texels %02X%02X%02X%02X/%02X%02X%02X%02X"
                                  " | alpha %u..%u mean %u,"
                                  " %.0f%% opaque %.0f%% clear",
                                  decoded.rgba[0], decoded.rgba[1],
                                  decoded.rgba[2], decoded.rgba[3],
                                  decoded.rgba[middle + 0],
                                  decoded.rgba[middle + 1],
                                  decoded.rgba[middle + 2],
                                  decoded.rgba[middle + 3], lo, hi,
                                  texels != 0 ? unsigned(total / texels) : 0u,
                                  texels != 0 ? 100.0 * opaque / double(texels)
                                              : 0.0,
                                  texels != 0 ? 100.0 * clear / double(texels)
                                              : 0.0);
                }
                // WHITTY_ALPHA_PGM=<dir> writes the ALPHA CHANNEL of every
                // bound texture as a greyscale PGM.
                //
                // Both existing texture dumps write RGB and drop alpha, on the
                // reasoning that a texture composited over black hides the
                // detail worth seeing. That is right for "did the colour
                // decode", and it makes the OTHER question unanswerable: a
                // sprite that never appears and a sprite drawn as a rectangle
                // are both questions about the cut-out, and the cut-out is
                // exactly the channel those files do not contain. A statistic
                // cannot answer it either - "mean 60" is the same number for a
                // clean mask over a mostly-empty sheet and for noise.
                if (const char* alpha_dir = std::getenv("WHITTY_ALPHA_PGM");
                    alpha_dir != nullptr && *alpha_dir != 0 && decoded.valid) {
                    char path[640];
                    std::snprintf(path, sizeof(path),
                                  "%s/alpha_%08X_f%02u_%ux%u.pgm", alpha_dir,
                                  tex.base_address, tex.format, decoded.width,
                                  decoded.height);
                    if (std::FILE* f = std::fopen(path, "wb")) {
                        std::fprintf(f, "P5\n%u %u\n255\n", decoded.width,
                                     decoded.height);
                        std::vector<uint8_t> row(decoded.width);
                        for (uint32_t y = 0; y < decoded.height; ++y) {
                            const uint8_t* src =
                                decoded.rgba.data() +
                                static_cast<std::size_t>(y) * decoded.width * 4;
                            for (uint32_t x = 0; x < decoded.width; ++x)
                                row[x] = src[x * 4 + 3];
                            std::fwrite(row.data(), 1, row.size(), f);
                        }
                        std::fclose(f);
                    }
                }
                char entry[448];
                std::snprintf(entry, sizeof(entry),
                              "\n      samples slot %u -> %08X %ux%u pitch %u"
                              " fmt %u%s swap %u swizzle %s%s",
                              slot, tex.base_address, tex.width, tex.height,
                              tex.pitch_pixels, tex.format,
                              tex.tiled ? " tiled" : "",
                              static_cast<unsigned>(tex.endianness), swizzle,
                              pixels);
                textures += entry;
            }
        }

        // Which surface this draw writes to, and the viewport it writes with.
        // Both are per-draw state: a title renders a frame as several passes
        // into different EDRAM surfaces at different sizes, and treating them
        // as one target stacks every pass into the same picture.
        const gpu::color_render_target draw_target =
            decode_color_render_target(draw.state, 0);
        const gpu::viewport_state viewport = decode_viewport(draw.state);
        // RB_MODECONTROL's low bits say what the draw is FOR: 4 = colour and
        // depth, 5 = depth only, 6 = a resolve (a copy out of EDRAM into a
        // texture in memory). A resolve is how one pass's result becomes an
        // input to the next, which is the whole mechanism behind a glow.
        const uint32_t mode = draw.state.get(gpu::reg::rb_modecontrol) & 0x7;
        const char* mode_name = mode == 6   ? " RESOLVE"
                                : mode == 5 ? " depth-only"
                                : mode == 4 ? ""
                                            : " (ignore)";
        char resolve[96] = "";
        if (mode == 6)
            std::snprintf(resolve, sizeof(resolve),
                          " -> dest %08X pitch %u info %08X control %08X%s",
                          draw.state.get(gpu::reg::rb_copy_dest_base),
                          draw.state.get(gpu::reg::rb_copy_dest_pitch),
                          draw.state.get(gpu::reg::rb_copy_dest_info),
                          draw.state.get(gpu::reg::rb_copy_control),
                          // The one bit of the control word worth spelling out:
                          // whether EDRAM survives this copy. Without it, a
                          // surface resolved to four destinations in a row reads
                          // as four separate images, three of them empty.
                          (draw.state.get(gpu::reg::rb_copy_control) & 0x100)
                              ? " +clear"
                              : "");
        // VGT_INDX_OFFSET is added to every vertex index, which is how a
        // title draws more geometry than one draw's 16-bit index count allows:
        // it splits the mesh and offsets the second half. Ignoring it makes
        // the second draw redraw the first half and the rest never appear.
        // How the draw combines with the target. A title composites an effect
        // by ADDING it, and the difference between that and source-alpha
        // blending is the difference between an effect and nothing at all - so
        // the factors are worth seeing next to the draw that uses them.
        const gpu::blend_state blending = decode_blend(draw.state, 0);
        char blend[80] = " blend off";
        if (blending.enabled)
            std::snprintf(blend, sizeof(blend),
                          " blend %u,%u op %u | a %u,%u op %u",
                          static_cast<unsigned>(blending.color_src),
                          static_cast<unsigned>(blending.color_dst),
                          static_cast<unsigned>(blending.color_op),
                          static_cast<unsigned>(blending.alpha_src),
                          static_cast<unsigned>(blending.alpha_dst),
                          static_cast<unsigned>(blending.alpha_op));
        // What the fixed-function stages AFTER the pixel shader do with the
        // colour it exported. Neither of these registers is read anywhere in
        // this runtime, so both are printed raw rather than decoded from
        // state we keep - and that is the point of printing them: a draw that
        // relies on either is drawn here as though it did not.
        //
        // RB_COLORCONTROL (0x2202, Xenia registers.h): alpha_func[2:0],
        // alpha_test_enable[3], alpha_to_mask_enable[4]. The reference value
        // is RB_ALPHA_REF (0x210E), a float. A sprite sheet's cut-out is
        // usually done here and not by blending: the quad is opaque and the
        // texels outside the sprite fail the test and are killed. Without the
        // test the whole quad is written, which is a RECTANGLE around every
        // sprite - so this line is the difference between "the sprite is
        // wrong" and "the stage that shapes it was never implemented".
        //
        // RB_DEPTHCONTROL (0x2200): stencil_enable[0], z_enable[1],
        // z_write_enable[2], zfunc[4:6]. Also unimplemented, and a draw that
        // expects to be depth-rejected is drawn on top instead.
        const uint32_t color_control = draw.state.get(0x2202);
        const uint32_t depth_control = draw.state.get(0x2200);
        char fixedfn[128];
        std::snprintf(fixedfn, sizeof(fixedfn),
                      " colorcontrol %08X%s%s ref %g | depthcontrol %08X%s%s",
                      color_control,
                      (color_control & 0x8) ? " ALPHATEST" : "",
                      (color_control & 0x10) ? " ALPHA2MASK" : "",
                      static_cast<double>(draw.state.get_float(0x210E)),
                      depth_control, (depth_control & 0x2) ? " ZTEST" : "",
                      (depth_control & 0x4) ? " ZWRITE" : "");
        const uint32_t index_offset = draw.state.get(0x2102);
        // A point list's size and its pixel shader's generated parameters. A
        // point is one vertex and the hardware expands it into a sprite: the
        // size comes from PA_SU_POINT_SIZE unless the vertex shader exports
        // one, and the sprite's own texture coordinates reach the pixel shader
        // only through PsParamGen - SQ_PROGRAM_CNTL bit 18 with the
        // interpolator index in SQ_CONTEXT_MISC. Every one of those is silent
        // when missing: the sprite still rasterises, as a single pixel with a
        // constant texture coordinate, which looks like a title that draws
        // nothing rather than like a stage that was never implemented.
        char point[128] = "";
        if (draw.prim == gpu::primitive_type::point_list) {
            const uint32_t program_cntl = draw.state.get(0x2180);
            const uint32_t context_misc = draw.state.get(0x2181);
            const uint32_t point_size = draw.state.get(0x2280);
            const uint32_t minmax = draw.state.get(0x2281);
            std::snprintf(point, sizeof(point),
                          "\n      point: size %g x %g (min %g max %g)"
                          " param_gen %u pos %u",
                          float(point_size >> 16) * (2.0f / 16.0f),
                          float(point_size & 0xFFFF) * (2.0f / 16.0f),
                          float(minmax & 0xFFFF) * (2.0f / 16.0f),
                          float(minmax >> 16) * (2.0f / 16.0f),
                          (program_cntl >> 18) & 1, (context_misc >> 8) & 0xFF);
        }
        // WHITTY_DUMP_CONSTANTS=<draw> prints that draw's float constant bank,
        // both halves, non-zero entries only.
        //
        // Worth having because a shader's output can be decided entirely by a
        // constant: this title's backdrop exports min(computed, c259), so a
        // pixel half that never received its constants clamps the whole surface
        // to whatever zero means - black - with the texture, the geometry and the
        // blend all perfectly correct. A vertex shader's constants count from 0
        // and a pixel shader's from 256, so a bank that looks populated can
        // still be empty for the half that is being read.
        if (const char* which = std::getenv("WHITTY_DUMP_CONSTANTS");
            which != nullptr && std::strtoul(which, nullptr, 10) == i) {
            std::printf("      constants (non-zero):");
            uint32_t shown_constants = 0;
            for (uint32_t c = 0; c < gpu::kFloatConstantCount; ++c) {
                float v[4];
                bool any = false;
                for (uint32_t k = 0; k < 4; ++k) {
                    v[k] = draw.state.get_float(
                        gpu::reg::shader_constant_000_x + c * 4 + k);
                    if (v[k] != 0.0f) any = true;
                }
                if (!any) continue;
                if (shown_constants++ % 2 == 0) std::printf("\n       ");
                std::printf(" c%u(%s)=[%g %g %g %g]", c,
                            c < gpu::kPixelConstantBase ? "vs" : "ps",
                            v[0], v[1], v[2], v[3]);
            }
            std::printf("\n      %u non-zero constant(s)\n", shown_constants);
        }
        // PA_SC_WINDOW_OFFSET is two signed 15-bit fields; bit 16 of
        // PA_SU_SC_MODE_CNTL is what makes it move vertices rather than only
        // the scissor.
        const uint32_t window = draw.state.get(gpu::reg::pa_sc_window_offset);
        const auto signed15 = [](uint32_t field) {
            const int32_t value = static_cast<int32_t>(field & 0x7FFF);
            return (field & 0x4000) != 0 ? value - 0x8000 : value;
        };
        const int window_offset_x = signed15(window & 0x7FFF);
        const int window_offset_y = signed15((window >> 16) & 0x7FFF);
        const bool window_offset_on_vertices =
            (draw.state.get(gpu::reg::pa_su_sc_mode_cntl) & (1u << 16)) != 0;
        std::printf("  draw %zu: prim %u, %u indices%s, vs %d, ps %d%s%s"
                    " indx_offset %u%s%s\n"
                    "     %s\n"
                    "      target: EDRAM tile %u, pitch %u, format %u | "
                    "viewport scale (%g, %g) offset (%g, %g)%s"
                    " | window offset (%d, %d)%s%s\n",
                    i, static_cast<unsigned>(draw.prim), draw.index_count,
                    draw.indexed ? " (indexed)" : " (auto)", draw.vertex_shader,
                    draw.pixel_shader, mode_name, resolve, index_offset, blend,
                    point, fixedfn, draw_target.edram_base_tiles,
                    draw_target.pitch_pixels,
                    static_cast<unsigned>(draw_target.format),
                    viewport.scale[0], viewport.scale[1], viewport.offset[0],
                    viewport.offset[1],
                    viewport.shader_emits_window_space ? " [window space]" : "",
                    window_offset_x, window_offset_y,
                    window_offset_on_vertices ? " ON VERTICES" : "",
                    (textures + buffers).c_str());
    }
    if (shown < cp.draws().size())
        std::printf("  ... %zu more draw(s)\n", cp.draws().size() - shown);
}

#ifdef WHITTY_HAVE_VULKAN
// How many controller ports the console has. A title asks about each of them by
// index, and local multiplayer is several of them answering at once.
constexpr uint32_t kMaxPorts = 4;

// --- display mode ----------------------------------------------------------
// Windowed or fullscreen, which F11 cycles between and which outlives the run.
//
// Borderless rather than exclusive: an exclusive mode set changes the display
// itself, which on a multi-monitor desktop rearranges every other window and
// takes a second to come back from. Borderless is a window the size of the
// desktop, so leaving it costs nothing and a crash does not leave the screen in
// a mode nobody asked for.
enum class display_mode { windowed, fullscreen };

// Where the chosen mode is kept between runs: beside the profile, in the same
// directory and by the same rules, because it is the same kind of thing - a
// setting belonging to the person at the keyboard rather than to a title. One
// line, `mode=windowed` or `mode=fullscreen`, so it can be read and corrected
// with an editor.
std::string display_settings_path() {
    if (const char* value = std::getenv("WHITTY_PROFILE")) {
        // The profile was pointed somewhere by hand - a test, or a second
        // profile - so the display setting follows it rather than being the one
        // piece of state left in the real user's directory.
        const std::string profile = value;
        const std::size_t slash = profile.find_last_of('/');
        if (slash == std::string::npos) return "display.conf";
        return profile.substr(0, slash) + "/display.conf";
    }
    const char* data_home = std::getenv("XDG_DATA_HOME");
    const char* home = std::getenv("HOME");
    if (data_home != nullptr && *data_home != 0)
        return std::string(data_home) + "/whitty_xenon/display.conf";
    if (home != nullptr && *home != 0)
        return std::string(home) + "/.local/share/whitty_xenon/display.conf";
    return std::string();
}

// The mode to start in. WHITTY_FULLSCREEN wins where it is set, because a
// command line saying what it wants must not be overruled by what the last run
// happened to leave behind; otherwise the stored setting, and windowed where
// there is none. An unreadable or unrecognised file is windowed, not an error:
// the worst case is a window, which is recoverable with one key.
display_mode initial_display_mode() {
    if (const char* value = std::getenv("WHITTY_FULLSCREEN"))
        return value[0] == '1' ? display_mode::fullscreen
                               : display_mode::windowed;
    const std::string path = display_settings_path();
    if (path.empty()) return display_mode::windowed;
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line))
        if (line.rfind("mode=", 0) == 0)
            return line.substr(5) == "fullscreen" ? display_mode::fullscreen
                                                  : display_mode::windowed;
    return display_mode::windowed;
}

// Records the mode for the next run. Failure is silent: not being able to
// remember a window's shape is not worth interrupting a game for, and the
// directory may legitimately not exist on a machine with no profile yet - which
// is why it is created here rather than assumed.
void store_display_mode(display_mode mode) {
    const std::string path = display_settings_path();
    if (path.empty()) return;
    const std::size_t slash = path.find_last_of('/');
    if (slash != std::string::npos) {
        std::error_code ignored;
        std::filesystem::create_directories(path.substr(0, slash), ignored);
    }
    std::ofstream file(path, std::ios::trunc);
    if (!file) return;
    file << "mode="
         << (mode == display_mode::fullscreen ? "fullscreen" : "windowed")
         << "\n";
}

// One port's synthesised input, parsed from its environment variable once.
//
// This exists so that scripted input is per-port rather than global: driving two
// ports is the only way to find out whether a title offers a second player
// without two physical controllers on the desk. The spellings and the timings are
// exactly what the single-port version accepted, because the existing bring-up
// commands are written down in docs/BRINGUP.md and a changed meaning would
// silently re-time all of them.
struct fake_input {
    enum class kind { none, named, mask, stick, script };
    kind mode{kind::none};
    uint16_t button{0};   // named and mask forms
    int16_t stick_x{0};
    int16_t stick_y{0};
    std::vector<uint16_t> steps; // script form, one entry per step
    uint64_t hold{12};
    uint64_t gap{12};
    // Mutable while running: the phase of a named/mask/stick alternation, and
    // the last script mask reported, so a step is announced once.
    uint64_t frame{0};
    uint16_t script_last{0};
    bool script_announced{false};

    bool active() const noexcept { return mode != kind::none; }
};

// Reads one port's variable. Absent, empty or unrecognised means the port has no
// synthesised input at all - which is a different answer from "no buttons", and
// lets a real controller or the keyboard answer for that port instead.
fake_input parse_fake_input(const char* variable) {
    fake_input spec;
    const char* value = std::getenv(variable);
    if (value == nullptr || value[0] == '\0') return spec;
    const std::string raw = value;

    // Timings are shared by every port: they describe how long a press lasts,
    // which is a property of what a title debounces rather than of a player.
    const auto frames = [](const char* name, uint64_t fallback) {
        const char* text = std::getenv(name);
        return text != nullptr ? std::strtoull(text, nullptr, 10) : fallback;
    };
    spec.hold = frames("WHITTY_FAKE_HOLD", 12);
    spec.gap = frames("WHITTY_FAKE_GAP", 12);

    // "script-<mask>[x<repeat>],..." walks a sequence of presses, which is the
    // only way to reach a screen more than one selection deep. Each entry holds
    // that button mask for WHITTY_FAKE_HOLD presented frames and then releases
    // for WHITTY_FAKE_GAP; a mask of 0 is an idle step, used to let the title
    // finish booting before the first press. Timing is in PRESENTED frames, not
    // poll calls, and the script runs once - after the last entry nothing is
    // pressed again, so a screen it reaches stays put instead of being navigated
    // out of.
    if (raw.rfind("script-", 0) == 0) {
        const std::string spec_text = raw.substr(7);
        for (std::size_t at = 0; at <= spec_text.size();) {
            const std::size_t comma = spec_text.find(',', at);
            const std::string piece = spec_text.substr(
                at, comma == std::string::npos ? std::string::npos : comma - at);
            if (!piece.empty()) {
                const std::size_t x = piece.find('x');
                const uint16_t mask = static_cast<uint16_t>(
                    std::strtoul(piece.substr(0, x).c_str(), nullptr, 16));
                unsigned long repeat = 1;
                if (x != std::string::npos)
                    repeat = std::strtoul(piece.c_str() + x + 1, nullptr, 10);
                for (unsigned long i = 0; i < repeat; ++i)
                    spec.steps.push_back(mask);
            }
            if (comma == std::string::npos) break;
            at = comma + 1;
        }
        spec.mode = fake_input::kind::script;
        return spec;
    }
    // "btn-<hex>" sends only that button mask; "stick-<x>-<y>" sends only a
    // stick deflection. Separating the two is the only way to tell which one a
    // title is actually reading, since the named directions set both.
    if (raw.rfind("btn-", 0) == 0) {
        spec.mode = fake_input::kind::mask;
        spec.button =
            static_cast<uint16_t>(std::strtoul(raw.c_str() + 4, nullptr, 16));
        return spec;
    }
    if (raw.rfind("stick-", 0) == 0) {
        spec.mode = fake_input::kind::stick;
        const char* rest = raw.c_str() + 6;
        char* end = nullptr;
        spec.stick_x = static_cast<int16_t>(std::strtol(rest, &end, 10));
        if (end != nullptr && *end == '-')
            spec.stick_y =
                static_cast<int16_t>(std::strtol(end + 1, nullptr, 10));
        return spec;
    }
    const uint16_t named = [&raw]() -> uint16_t {
        if (raw == "up") return pad_button::dpad_up;
        if (raw == "down") return pad_button::dpad_down;
        if (raw == "left") return pad_button::dpad_left;
        if (raw == "right") return pad_button::dpad_right;
        if (raw == "a") return pad_button::a;
        if (raw == "b") return pad_button::b;
        if (raw == "start") return pad_button::start;
        // "all" holds everything at once: the bluntest possible check that a
        // title reacts to input at all.
        if (raw == "all")
            return static_cast<uint16_t>(
                pad_button::dpad_up | pad_button::dpad_down |
                pad_button::dpad_left | pad_button::dpad_right |
                pad_button::start | pad_button::back | pad_button::a |
                pad_button::b | pad_button::x | pad_button::y);
        return 0;
    }();
    if (named != 0) {
        spec.mode = fake_input::kind::named;
        spec.button = named;
    }
    return spec;
}

// The renderer, held for the whole run.
//
// A device per frame is affordable when a run produces one picture and
// hopeless when it produces sixty a second, and the frame renderer's shader
// cache is only worth having if it outlives a frame. So both are created once,
// on the first frame that needs them, and kept.
class live_renderer {
public:
    explicit live_renderer(guest_memory& memory) : m_memory(&memory) {}

    ~live_renderer() {
        if (m_started) m_backend.shutdown();
#ifdef WHITTY_HAVE_SDL
        if (m_xma_stream != nullptr) SDL_DestroyAudioStream(m_xma_stream);
        if (m_audio_stream != nullptr) SDL_DestroyAudioStream(m_audio_stream);
        for (SDL_Gamepad*& pad : m_gamepads)
            if (pad != nullptr) SDL_CloseGamepad(pad);
        if (m_window != nullptr) SDL_DestroyWindow(m_window);
        if (m_sdl_started) SDL_Quit();
#endif
    }

    // Opens a window and presents into it. Without one the frames are still
    // rendered, just never shown.
    void set_windowed(bool windowed) noexcept { m_windowed = windowed; }
    bool windowed() const noexcept { return m_windowed; }

    // Brings the pads up BEFORE the guest runs.
    //
    // Everything else here is created lazily on the first frame, because the
    // window cannot be sized until the title has said what resolution it
    // renders at. Input cannot wait that long: a title may poll the ports
    // during start-up, before it has drawn anything, and Jetpac Refuelled does
    // exactly that - `sub_820AD470` reads all four ports and, if every one
    // answers DEVICE_NOT_CONNECTED, sets a quit flag that skips the main loop
    // and returns to the dashboard without a word. With the pads opened on the
    // first frame that answer was guaranteed, so the title exited before the
    // first frame could ever arrive.
    //
    // Telling a title "no controller" because OUR subsystem is not ready yet is
    // the same failure this runtime keeps finding elsewhere: an answer that is
    // about us rather than about the machine. So SDL and the pads come up here,
    // and only the window and the audio device stay deferred.
    void open_input() {
#ifdef WHITTY_HAVE_SDL
        if (!m_windowed || m_sdl_started) return;
        configure_sdl_hints();
        if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD | SDL_INIT_AUDIO)) {
            std::printf("  [input] SDL_Init failed: %s\n", SDL_GetError());
            m_windowed = false;
            return;
        }
        m_sdl_started = true;
        int pad_count = 0;
        SDL_JoystickID* pads = SDL_GetGamepads(&pad_count);
        if (pads != nullptr) {
            for (int i = 0; i < pad_count; ++i)
                if (open_pad_into_free_port(pads[i]) < 0) break;
            SDL_free(pads);
        }
        for (uint32_t port = 0; port < kMaxPorts; ++port) {
            if (m_gamepads[port] == nullptr) continue;
            std::printf("  [input] port %u: %s\n", port,
                        SDL_GetGamepadName(m_gamepads[port]));
        }
        if (m_gamepads[0] == nullptr)
            std::printf("  [input] port 0: no controller - using the "
                        "keyboard\n");
        // Sample once so a title that polls before the first frame is pumped
        // reads the pad that is actually plugged in rather than a zeroed
        // snapshot - which would be the same lie in a smaller form.
        sample_input();
        publish_ports();
#endif
    }

#ifdef WHITTY_HAVE_SDL
    // Hints that have to be in place before SDL_Init, and one of them is the
    // whole difference between a controller that works and one that does
    // nothing at all.
    //
    // SDL discards a gamepad button PRESS whenever a window exists and none of
    // them holds keyboard focus. Not merely the event - the state itself:
    //
    //     if (SDL_PrivateJoystickShouldIgnoreEvent()) { if (down) return; }
    //     joystick->buttons[button] = down;
    //
    // so the store is skipped and SDL_GetGamepadButton, which is what
    // sample_pad() polls, never reads true. Releases and stick centring are
    // deliberately let through so nothing sticks down, which means an unfocused
    // window does not report a jammed pad - it reports a pad resting at zero,
    // forever, exactly as though nothing were plugged in. Measured here on SDL
    // 3.4.12 with a virtual gamepad: with no window the press reads back, with
    // an unfocused window it does not, and with this hint set it does again.
    //
    // The default is right for an application that shares a desktop and wrong
    // for this one. This runtime IS a console: the window is the whole of it,
    // the pad in the player's hands belongs to it, and whether the compositor
    // has decided some launcher still owns the keyboard is not a statement
    // about who is holding the controller. Xenia never meets this because its
    // window is not an SDL window at all - SDL_HasWindows() is false there, so
    // the check cannot fire; using SDL for both is what exposes it here.
    //
    // WHITTY_PAD_BACKGROUND=0 restores SDL's default, so the behaviour can be
    // A/B'd rather than argued about.
    static void configure_sdl_hints() {
        const char* value = std::getenv("WHITTY_PAD_BACKGROUND");
        const bool background = value == nullptr || value[0] != '0';
        SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS,
                    background ? "1" : "0");
    }
#endif

    // Frames a second to hold the title to. The console presents at 60, and a
    // title advances its whole simulation once per present - so on a 144 Hz
    // display, presenting as fast as the display allows runs the game more
    // than twice too fast. Zero means unlimited.
    void set_frame_rate(double fps) noexcept { m_target_fps = fps; }

    // The presented-frame count, so synthetic input can be timed in frames the
    // title actually saw. A title polls its controller several times a frame
    // (Geometry Wars: four), so counting poll calls instead makes every hold
    // several times shorter than it reads.
    void set_frame_number(uint64_t frame) noexcept { m_present_frame = frame; }

    // The surface VdSwap said to display. Held here rather than passed to
    // render(), because the renderer is built lazily on the first frame and
    // this arrives before it exists.
    void set_front_buffer(uint32_t address) noexcept {
        m_front_buffer = address;
        if (m_renderer != nullptr) m_renderer->set_front_buffer(address);
    }

    // What size VdSwap said the picture is. Held for the same reason as the
    // address above, and set from the same place, so the two always describe
    // the same surface.
    void set_display_size(uint32_t width, uint32_t height) noexcept {
        m_display_width = width;
        m_display_height = height;
    }

    // The system's own page, laid over the frame. Set to an unbuilt panel to
    // take it down. Kept as a pointer to the caller's panel, which lives for
    // the run, so the pixels are not copied here every frame.
    void set_system_panel(const gpu::text_panel* panel) noexcept {
        m_panel = panel;
    }

    // What the cabinet surround says about the running title.
    //
    // Handed over whole rather than read from here, because every field in it
    // comes from somewhere this class has no business knowing about: the SPA
    // inside the title's own XEX, the XEX's execution info, and the local
    // profile. See cabinet.h - nothing on that panel is invented, and keeping
    // the reading of it in main() beside the rest of the title's own data is
    // what makes that checkable.
    //
    // Two fields are NOT set here and are filled in per frame below: the size
    // the title renders at, which is not known until it has drawn something,
    // and the score table, which changes while the title runs.
    void set_cabinet_title(const gpu::cabinet_title& title) {
        m_cabinet_title = title;
    }

    // The live half of the panel: what this machine has earned so far. Both of
    // these move while the title runs - an achievement unlocks, a score lands -
    // so they are handed over each frame rather than read once. Cheap, because
    // the surround is only repainted when its signature actually changes.
    void set_cabinet_progress(uint32_t achievements_earned,
                              uint32_t gamerscore_earned,
                              std::vector<gpu::cabinet_score> scores) {
        m_cabinet_title.achievements_earned = achievements_earned;
        m_cabinet_title.gamerscore_earned = gamerscore_earned;
        m_cabinet_title.scores = std::move(scores);
    }

    // The tap the equaliser reads. Fed from submit_audio() below, on the
    // guest's own audio thread.
    gpu::audio_spectrum& spectrum() noexcept { return m_spectrum; }

    // The surface that page is composited INTO, in pixels: the window's own
    // size when there is one, and the frame's size when there is not, because
    // that is what a capture composites into. Not 1280x720 - the window opens at
    // the title's own resolution, so a page sized for 720p is either too small
    // to read or too big to copy. Zero before the first frame has been sized,
    // which the blade reads as "ask the title".
    uint32_t overlay_width() const noexcept { return m_overlay_width; }
    uint32_t overlay_height() const noexcept { return m_overlay_height; }

    // The controller, as the kernel asks for it. Reads whatever SDL has: the
    // real gamepads if any are plugged in, otherwise the keyboard standing in for
    // port 0, so the menus can be driven without one.
    //
    // FOUR ports, because local multiplayer on a console is four controllers on
    // one machine - not two machines, and not two screens. Each port has its own
    // pad, its own snapshot and its own scripted input, and a port with nothing on
    // it reports not-connected rather than being handed port 0's buttons.
    //
    // WHITTY_FAKE_INPUT synthesises a button being pressed and released on port 0
    // so that menu navigation can be tested without a person at the keyboard;
    // WHITTY_FAKE_INPUT_P2, _P3 and _P4 do the same for the other three ports,
    // which is how a second player gets tested with one pad on the desk. Presses
    // are held for a stretch and released for a stretch, because a title reacts
    // to the TRANSITION, not the level - a permanently-held button looks like one
    // press that never ends.
    bool fake_gamepad(uint32_t port, gamepad_state& out) {
        if (port >= kMaxPorts) return false;
        fake_input& spec = m_fake[port];
        if (!spec.active()) return false;
        out = gamepad_state{};
        out.connected = true;
        if (spec.mode == fake_input::kind::script) {
            const uint64_t period = spec.hold + spec.gap;
            const uint64_t index = period != 0 ? m_present_frame / period : 0;
            if (index < spec.steps.size() &&
                (m_present_frame % period) < spec.hold) {
                out.buttons = spec.steps[index];
            }
            // Every change, the releases as well as the presses. A release is
            // half of what a title reacts to, and it is the half that says
            // where an effect should STOP - which is the whole measurement
            // when the question is what a button adds to the mix.
            //
            // Timed against the recording as well as the frame counter, when
            // one is being made. Presented frames and recorded samples are two
            // clocks with no fixed offset between them - the recording starts
            // with the first submitted audio frame, the counter with the first
            // swap - so without this, lining a press up with the sound it
            // caused is a correlation search rather than a lookup.
            if (out.buttons != spec.script_last) {
                std::printf("  [input] port %u script step %llu/%zu frame %llu "
                            "buttons %04X",
                            port,
                            static_cast<unsigned long long>(index),
                            spec.steps.size(),
                            static_cast<unsigned long long>(m_present_frame),
                            out.buttons);
                if (m_wav != nullptr)
                    std::printf(" at %.3f s of the recording",
                                double(m_wav_samples / kAudioChannels) /
                                    double(kAudioFrequency));
                std::printf("\n");
                std::fflush(stdout);
            }
            // The stick follows the d-pad bits, since a menu may read either.
            if (out.buttons & pad_button::dpad_up) out.thumb_ly = 32767;
            if (out.buttons & pad_button::dpad_down) out.thumb_ly = -32767;
            if (out.buttons & pad_button::dpad_left) out.thumb_lx = -32767;
            if (out.buttons & pad_button::dpad_right) out.thumb_lx = 32767;
            spec.script_last = out.buttons;
            trace(port, out);
            return true;
        }
        // Twelve frames down, twelve up: slow enough that a title which
        // debounces or repeats still sees distinct presses.
        const bool pressing = (spec.frame++ / 12) % 2 == 0;
        if (spec.mode == fake_input::kind::mask) {
            if (pressing) out.buttons = spec.button;
        } else if (spec.mode == fake_input::kind::stick) {
            if (pressing) {
                out.thumb_lx = spec.stick_x;
                out.thumb_ly = spec.stick_y;
            }
        } else {
            if (pressing) out.buttons = spec.button;
            // The stick follows the d-pad, since a menu may read either.
            if (out.buttons & pad_button::dpad_up) out.thumb_ly = 32767;
            if (out.buttons & pad_button::dpad_down) out.thumb_ly = -32768;
            if (out.buttons & pad_button::dpad_left) out.thumb_lx = -32768;
            if (out.buttons & pad_button::dpad_right) out.thumb_lx = 32767;
        }
        trace(port, out);
        return true;
    }

    bool read_gamepad(uint32_t user, gamepad_state& out) {
        // A console has four ports. An index past them is not a port with
        // nothing in it - it is not a port - and the caller's answer is the same
        // either way, so this refuses it rather than folding it onto port 0.
        if (user >= kMaxPorts) return false;
        if (fake_gamepad(user, out)) return true;
#ifdef WHITTY_HAVE_SDL
        if (!m_sdl_started) return false;
        // Hand back the snapshot taken on the window's own thread. SDL's
        // device state belongs to the thread that pumps its events, and the
        // title asks for input from its own threads at its own rate - reading
        // SDL directly from those is both a race and, on some backends, a read
        // of state nothing has refreshed.
        {
            const std::lock_guard<std::mutex> lock(m_input_mutex);
            out = m_sampled[user];
        }
        return out.connected;
#else
        // No SDL: the scripted input above is the only source there is, and it
        // has already answered. This used to have no `return` at all - the
        // `#ifdef` opened here ran on past the closing brace and swallowed the
        // three sampling functions below it, so in a no-SDL build this function
        // fell off its end and a title was told whatever the return register
        // happened to hold about its controllers. That matters: Jetpac quits
        // silently when every port answers DEVICE_NOT_CONNECTED, and Geometry
        // Wars polls all four. Saying "not connected" is the honest answer and
        // the one a title can act on.
#ifdef WHITTY_ANDROID
        // Unless the host IS a controller. A handheld's buttons are part of the
        // machine, so port 0 is attached before anything has been pressed; the
        // Activity's looper fills the snapshot this reads.
        if (whitty_android_read_gamepad(user, out)) {
            // R3 and L3, edge-detected per port. This path does NOT go through
            // store_sample(), which is where the desktop does it - so a comment
            // there claiming it covered "the Android path" was wrong, and the
            // handheld had no toggles at all. Done here because this is the one
            // place an Android sample lands.
            if (user < kMaxPorts) {
                gpu::apply_overlay_toggles(out.buttons, m_android_buttons[user]);
                m_android_buttons[user] = out.buttons;
            }
            return out.connected;
        }
#endif
        return false;
#endif
    }

#ifdef WHITTY_HAVE_SDL
    // Reads the real devices. Called only from the thread that owns the
    // window, immediately after its events are pumped. Every port is sampled,
    // so a second pad is as live as the first.
    void sample_input() {
        trace_devices();
        for (uint32_t port = 0; port < kMaxPorts; ++port) {
            gamepad_state out{};
            if (m_gamepads[port] != nullptr) {
                out.connected = true;
                sample_pad(m_gamepads[port], out);
                m_port_on_keyboard[port] = false;
            } else if (port == 0) {
                // The keyboard stands in for port 0 only. Handing it to every
                // empty port would report four controllers that all do the same
                // thing, and a title would then let four players join one
                // keyboard.
                out.connected = true;
                m_port_on_keyboard[port] = true;
                sample_keyboard(out);
            } else {
                m_port_on_keyboard[port] = false;
                // connected stays false: nothing is plugged into this port.
            }
            store_sample(port, out);
        }
    }

    // One pad's buttons and axes, in the console's units.
    void sample_pad(SDL_Gamepad* pad, gamepad_state& out) {
        const auto press = [&](bool held, uint16_t bit) {
            if (held) out.buttons |= bit;
        };
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_UP),
              pad_button::dpad_up);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_DOWN),
              pad_button::dpad_down);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_LEFT),
              pad_button::dpad_left);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_RIGHT),
              pad_button::dpad_right);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_START),
              pad_button::start);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_BACK),
              pad_button::back);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_SOUTH),
              pad_button::a);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_EAST),
              pad_button::b);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_WEST),
              pad_button::x);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_NORTH),
              pad_button::y);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_LEFT_SHOULDER),
              pad_button::left_shoulder);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER),
              pad_button::right_shoulder);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_LEFT_STICK),
              pad_button::left_thumb);
        press(SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_RIGHT_STICK),
              pad_button::right_thumb);
        // SDL reports triggers over the full signed range; the console
        // wants an unsigned byte.
        const auto trigger = trigger_from_axis;
        out.left_trigger =
            trigger(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER));
        out.right_trigger =
            trigger(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER));
        // SDL's Y axis points down, the console's points up.
        const auto flip = stick_y_from_axis;
        out.thumb_lx = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX);
        out.thumb_ly = flip(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY));
        out.thumb_rx = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHTX);
        out.thumb_ry = flip(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHTY));
    }

    // Keyboard fallback: arrows and WASD move, Enter/Space is A, Escape is
    // B, Tab is Back. Enough to get through a menu.
    void sample_keyboard(gamepad_state& out) {
        const auto press = [&](bool held, uint16_t bit) {
            if (held) out.buttons |= bit;
        };
        const bool* keys = SDL_GetKeyboardState(nullptr);
        if (keys == nullptr) return;
        press(keys[SDL_SCANCODE_UP], pad_button::dpad_up);
        press(keys[SDL_SCANCODE_DOWN], pad_button::dpad_down);
        press(keys[SDL_SCANCODE_LEFT], pad_button::dpad_left);
        press(keys[SDL_SCANCODE_RIGHT], pad_button::dpad_right);
        press(keys[SDL_SCANCODE_RETURN] || keys[SDL_SCANCODE_SPACE],
              pad_button::a);
        // Escape closes the app rather than acting as B - it is what a player
        // reaches for to get out. B moves to Backspace so the keyboard still
        // has one.
        if (keys[SDL_SCANCODE_ESCAPE]) m_quit = true;
        press(keys[SDL_SCANCODE_BACKSPACE], pad_button::b);
        press(keys[SDL_SCANCODE_TAB], pad_button::back);
        press(keys[SDL_SCANCODE_RETURN] && keys[SDL_SCANCODE_LSHIFT],
              pad_button::start);
        const auto axis = [&](int negative, int positive) {
            const int value = (keys[positive] ? 1 : 0) - (keys[negative] ? 1 : 0);
            return static_cast<int16_t>(value * 32767);
        };
        out.thumb_lx = axis(SDL_SCANCODE_A, SDL_SCANCODE_D);
        out.thumb_ly = axis(SDL_SCANCODE_S, SDL_SCANCODE_W);
        out.thumb_rx = axis(SDL_SCANCODE_J, SDL_SCANCODE_L);
        out.thumb_ry = axis(SDL_SCANCODE_K, SDL_SCANCODE_I);
    }

    // What SDL itself has, as opposed to what the title is handed - printed
    // when it changes, under the same WHITTY_TRACE_INPUT=1 as trace().
    //
    // trace() answers "did the runtime give the title anything", and when the
    // answer is no it cannot say why. These two numbers are the why. How many
    // devices SDL LISTS separates "the pad was never enumerated" from "the pad
    // is open and reads as resting", which are opposite faults with the same
    // symptom. And whether any window holds keyboard focus is the state in
    // which SDL, left at its default, throws every button press away before it
    // ever reaches the poll sample_pad() makes - see configure_sdl_hints().
    // Without this line an unfocused window and an unplugged controller are
    // indistinguishable in the log: both are a port that never reports a
    // button.
    void trace_devices() {
        static const bool enabled = [] {
            const char* value = std::getenv("WHITTY_TRACE_INPUT");
            return value != nullptr && value[0] == '1';
        }();
        if (!enabled) return;
        int listed = 0;
        if (SDL_JoystickID* pads = SDL_GetGamepads(&listed)) SDL_free(pads);
        // The window this run owns, not merely "some window": SDL's own check
        // is over every window it has, and this runtime has one.
        const int focus = m_window == nullptr ? -1
                          : SDL_GetKeyboardFocus() == m_window ? 1
                                                               : 0;
        if (listed == m_traced_pads && focus == m_traced_focus) return;
        m_traced_pads = listed;
        m_traced_focus = focus;
        char ports[64] = "";
        std::size_t at = 0;
        for (uint32_t port = 0; port < kMaxPorts; ++port)
            if (m_gamepads[port] != nullptr)
                at += static_cast<std::size_t>(std::snprintf(
                    ports + at, sizeof(ports) - at, " %u", port));
        std::printf("  [input] SDL lists %d gamepad(s), open on ports:%s; "
                    "window %s\n",
                    listed, at != 0 ? ports : " none",
                    focus < 0    ? "not created yet"
                    : focus == 1 ? "HAS keyboard focus"
                                 : "does NOT have keyboard focus");
        std::fflush(stdout);
    }
#endif

    // Which ports will answer, as a bitmask over the four of them. This is what
    // the kernel reports as the console's connected controllers, so it has to
    // name the ports that actually produce input and no others: a title told a
    // pad is present on a port nothing will ever answer for offers a player a
    // slot that cannot be used.
    //
    // Port 0 is always in it. That is not a guess - it is the port the keyboard
    // stands in for when no pad is attached, and the port scripted input drives,
    // so something always answers for it while the runtime is up. It is also
    // what the runtime has always reported, so a single-player run is unchanged.
    uint32_t connected_ports() const {
        uint32_t mask = 0x1;
        for (uint32_t port = 1; port < kMaxPorts; ++port) {
            bool present = m_fake[port].active();
#ifdef WHITTY_HAVE_SDL
            present = present || m_gamepads[port] != nullptr;
#endif
            if (present) mask |= 1u << port;
        }
        return mask;
    }

    // Told when the set of attached pads changes, so the kernel can update what
    // it reports and tell the title. Called on the window's own thread.
    void set_ports_changed(std::function<void(uint32_t)> changed) {
        m_ports_changed = std::move(changed);
    }

    // Publishes the current mask, if it has changed since the last time. A
    // notification per frame saying nothing changed would be worse than none.
    void publish_ports() {
        const uint32_t mask = connected_ports();
        if (mask == m_published_ports) return;
        m_published_ports = mask;
        if (m_ports_changed) m_ports_changed(mask);
    }

#ifdef WHITTY_HAVE_SDL
    void store_sample(uint32_t port, const gamepad_state& sampled) {
        uint16_t previous = 0;
        {
            const std::lock_guard<std::mutex> lock(m_input_mutex);
            previous = m_sampled[port].buttons;
            m_sampled[port] = sampled;
        }
        // R3 shows and hides the cabinet surround, L3 the frame-rate readout -
        // the same bindings the ReXGlue ports use, so the habit carries across.
        // Done here because this is where every SDL sample lands, whatever
        // produced it: a real pad, the keyboard or a scripted run. NOT the
        // Android path - that reads the Activity's snapshot directly in
        // read_pad() and does its own edge detection there. This comment used
        // to claim it covered Android too, and that claim was the reason
        // nobody noticed the handheld had no toggles.
        gpu::apply_overlay_toggles(sampled.buttons, previous);
        trace(port, sampled);
    }

    // Which port holds this device, or -1 if none does.
    int port_of_device(SDL_JoystickID which) const {
        for (uint32_t port = 0; port < kMaxPorts; ++port) {
            if (m_gamepads[port] == nullptr) continue;
            if (SDL_GetGamepadID(m_gamepads[port]) == which)
                return static_cast<int>(port);
        }
        return -1;
    }

    // Opens a pad into the lowest free port. Returns the port, or -1 when every
    // port is taken - four is the whole console, and a fifth pad has nowhere to
    // go rather than displacing somebody who is playing.
    int open_pad_into_free_port(SDL_JoystickID which) {
        for (uint32_t port = 0; port < kMaxPorts; ++port) {
            if (m_gamepads[port] != nullptr) continue;
            SDL_Gamepad* pad = SDL_OpenGamepad(which);
            if (pad == nullptr) return -1;
            m_gamepads[port] = pad;
            return static_cast<int>(port);
        }
        return -1;
    }

    // Closes whichever port holds this device. Returns the port, or -1 if none
    // did - SDL reports removals for devices it never handed us.
    int close_pad_by_id(SDL_JoystickID which) {
        const int port = port_of_device(which);
        if (port < 0) return -1;
        SDL_CloseGamepad(m_gamepads[static_cast<uint32_t>(port)]);
        m_gamepads[static_cast<uint32_t>(port)] = nullptr;
        // The port stops answering immediately rather than at the next
        // sample: a stale snapshot would leave the last buttons held on a
        // pad that has been unplugged.
        store_sample(static_cast<uint32_t>(port), gamepad_state{});
        return port;
    }
#endif

    // What size the picture is.
    //
    // VdSwap is HANDED both dimensions - the title writes them out beside the
    // fetch constant naming the surface - so the console states the answer and
    // this reads it. Both halves come from the same call as the front-buffer
    // address, so the size and the surface can never describe different things.
    //
    // Everything below is the fallback for a frame that has not been swapped
    // yet, and it is a DERIVATION, which is why it is no longer the first
    // choice. The surface pitch stands in for the width; the height is in no
    // register at all and comes from the viewport's y scale, which is half of
    // it. Both are read from the frame's LAST draw, and that is the flaw: a
    // title whose final draw belongs to an off-screen pass is measured by that
    // pass instead of by its picture. Hydro Thunder ends its frames in a
    // pitch-1040 surface and was sized 1040x1024 for a 1280x720 display -
    // portrait-shaped, with the 3D scene missing behind a 2D layer that still
    // composited. The front buffer said 1280x720 in every dump of it.
    void frame_size(const gpu::command_processor& cp, uint32_t& width,
                    uint32_t& height) const {
        if (m_display_width != 0 && m_display_height != 0) {
            width = m_display_width;
            height = m_display_height;
            return;
        }
        if (cp.draws().empty()) return;
        const gpu::register_file& state = cp.draws().back().state;
        const gpu::color_render_target target =
            decode_color_render_target(state, 0);
        if (target.pitch_pixels != 0) width = target.pitch_pixels;
        const gpu::viewport_state viewport = gpu::decode_viewport(state);
        const float half_height =
            viewport.scale[1] < 0.0f ? -viewport.scale[1] : viewport.scale[1];
        const uint32_t derived =
            static_cast<uint32_t>(half_height * 2.0f + 0.5f);
        if (derived != 0) height = derived;
    }

#ifdef WHITTY_HAVE_SDL
    // The size to open the window at: the frame's own, so present() blits it 1:1,
    // reduced by a whole number if the desktop cannot hold one that big, plus
    // twice WHITTY_BORDER's padding if one was asked for. The arithmetic is
    // fit_window_to_display() and border_that_fits() in present_panes.h, beside
    // the pane layout and tested with it; this only supplies the desktop's own
    // bounds, which nothing off this machine can supply.
    //
    // The padding is added to the WINDOW rather than taken out of the picture,
    // which is the whole design of it: the picture keeps the size it renders at
    // and the frame goes around the outside. A desktop with no room to spare
    // loses the padding, never the 1:1. It is zero unless asked for, because
    // the border is for fullscreen - where the leftover screen already exists -
    // and a window that grew by itself would be a surprise.
    void fit_window_size(uint32_t frame_width, uint32_t frame_height) {
        SDL_Rect usable{};
        const SDL_DisplayID primary = SDL_GetPrimaryDisplay();
        const bool known = primary != 0 &&
                           SDL_GetDisplayUsableBounds(primary, &usable) &&
                           usable.w > 0 && usable.h > 0;
        const uint32_t usable_width =
            known ? static_cast<uint32_t>(usable.w) : 0;
        const uint32_t usable_height =
            known ? static_cast<uint32_t>(usable.h) : 0;
        const gpu::window_fit fit = gpu::fit_window_to_display(
            frame_width, frame_height, usable_width, usable_height);
        m_border = gpu::border_that_fits(gpu::border_window_padding(),
                                         fit.width, fit.height, usable_width,
                                         usable_height);
        m_window_width = fit.width + m_border * 2;
        m_window_height = fit.height + m_border * 2;
        m_window_reduction = fit.reduction;
    }

    // How the picture sits in the surface, as " (magnified 2:1, border 1280 px
    // at the sides, 0 above)" - written into `out` so both the line at start-up
    // and the line after a mode change say it the same way. Empty when the
    // frame's size is not known yet, because a guess here would be a claim
    // about resampling that nothing had measured.
    //
    // It asks the same layout present() will use rather than comparing the
    // surface to the frame: a surface bigger than the frame is still 1:1 if the
    // picture inside it is the frame's own size, and comparing sizes would call
    // a border resampling.
    void describe_presentation(uint32_t frame_width, uint32_t frame_height,
                               char* out, std::size_t size) const {
        out[0] = '\0';
        if (frame_width == 0 || frame_height == 0) return;
        gpu::present_pane shown[2]{};
        gpu::layout_present_panes(
            m_window_width, m_window_height, frame_width, frame_height,
            gpu::twin_panes_enabled_by_environment(), shown, false,
            gpu::plain_border().load(std::memory_order_relaxed),
            gpu::picture_width_cap().load(std::memory_order_relaxed));
        const uint32_t factor =
            static_cast<uint32_t>(shown[0].width) / frame_width;
        char how[64];
        if (shown[0].width == static_cast<int32_t>(frame_width) &&
            shown[0].height == static_cast<int32_t>(frame_height))
            std::snprintf(how, sizeof(how), "presented 1:1");
        else if (factor >= 2 &&
                 shown[0].width == static_cast<int32_t>(frame_width * factor) &&
                 shown[0].height == static_cast<int32_t>(frame_height * factor))
            std::snprintf(how, sizeof(how), "magnified %u:1", factor);
        else if (m_window_reduction > 1)
            std::snprintf(how, sizeof(how), "reduced %u:1 to fit the desktop",
                          m_window_reduction);
        else
            std::snprintf(how, sizeof(how), "resampled");
        // What the border actually came out as, said out loud because the
        // screen decides it rather than a setting: an axis the picture fills
        // exactly has no room and gets none, and the alternative - dropping a
        // whole magnification step to make room - is a worse picture than an
        // uneven frame. See kBorderColour in present_panes.h.
        char edge[64] = "";
        if (gpu::border_enabled_by_environment()) {
            const uint32_t side =
                (m_window_width - static_cast<uint32_t>(shown[0].width)) / 2;
            const uint32_t above =
                (m_window_height - static_cast<uint32_t>(shown[0].height)) / 2;
            if (side != 0 || above != 0)
                std::snprintf(edge, sizeof(edge),
                              ", border %u px at the sides, %u above", side,
                              above);
        }
        std::snprintf(out, size, " (%s%s)", how, edge);
    }

    // Puts the window into whichever mode m_display_mode names.
    //
    // A null fullscreen mode is SDL's "borderless desktop": the window covers
    // the display at the size the display already is, and no video mode is set.
    // That is the only fullscreen this offers - see display_mode's note.
    void apply_display_mode() {
        if (m_window == nullptr) return;
        const bool full = m_display_mode == display_mode::fullscreen;
        // Resizable WHILE FULLSCREEN, whatever the windowed setting is.
        //
        // The window is deliberately not resizable - a tiling window manager
        // would otherwise give it whatever cell it had free and the frame would
        // be resampled into it - but that reasoning is about a WINDOW, and it
        // was being applied to a screen. On Wayland a non-resizable surface
        // cannot be resized to the display, so "fullscreen" left the surface at
        // the title's own size and let the compositor scale it up: measured on
        // this desktop, a Space Giraffe run whose swapchain stayed 1280x720
        // while Hyprland reported the window fullscreen at 5120x1440. Every
        // pixel then went through the compositor's filter instead of the
        // whole-number magnification the layout had chosen, and there was no
        // surround left for the border to be drawn in - the picture covered the
        // surface exactly, because the surface was the picture.
        //
        // It is put back on the way out, so a windowed run is exactly as
        // non-resizable as it was.
        const bool resizable_when_windowed = [] {
            const char* value = std::getenv("WHITTY_RESIZABLE");
            return value != nullptr && value[0] == '1';
        }();
        SDL_SetWindowResizable(m_window, full || resizable_when_windowed);
        SDL_SetWindowFullscreenMode(m_window, nullptr);
        SDL_SetWindowFullscreen(m_window, full);
        // A mode change is a request to the window manager, and SDL reports the
        // window's old size until the manager has honoured it. Waiting here
        // means the very next size read is the new one - without it the first
        // frame after F11 is presented into a swapchain built for the size the
        // window used to be.
        SDL_SyncWindow(m_window);
        // The surface follows the window, and the swapchain has to follow the
        // surface. Marked rather than rebuilt here because the window manager
        // has not necessarily finished resizing yet: the rebuild happens at the
        // top of the next frame, by which time SDL can be asked what size the
        // window actually became.
        m_surface_changed = true;
    }

    // F11: windowed -> fullscreen -> windowed. Stored as it changes, so the
    // mode survives a restart without a menu to set it in.
    void cycle_display_mode() {
        if (m_window == nullptr) return;
        m_display_mode = m_display_mode == display_mode::windowed
                             ? display_mode::fullscreen
                             : display_mode::windowed;
        apply_display_mode();
        store_display_mode(m_display_mode);
        std::printf("  [gpu] display: %s\n",
                    m_display_mode == display_mode::fullscreen
                        ? "borderless fullscreen"
                        : "windowed");
        std::fflush(stdout);
    }

    // Rebuilds the swapchain for the surface's current size, and moves
    // everything placed against it - the system page's box, the report's idea of
    // how the frame is being shown - with it.
    //
    // Called when the window says it changed and when the swapchain says it no
    // longer matches; those are the same event seen from two sides, and either
    // one alone misses cases. A window manager that resizes without an event
    // still fails the acquire; a mode change that SDL reports before the surface
    // has settled would otherwise wait a frame for the failure.
    void rebuild_swapchain() {
        if (m_window == nullptr || !m_backend.has_display()) return;
        int pixel_width = 0;
        int pixel_height = 0;
        if (!SDL_GetWindowSizeInPixels(m_window, &pixel_width, &pixel_height) ||
            pixel_width <= 0 || pixel_height <= 0)
            return;
        std::string error;
        if (!m_backend.resize_display(static_cast<uint32_t>(pixel_width),
                                      static_cast<uint32_t>(pixel_height),
                                      error)) {
            // A surface with no area is a minimised window, not a broken one:
            // it is left marked so the next frame tries again once it comes
            // back. Anything else is reported, once.
            if (error != "the surface has no area")
                std::printf("  [gpu] could not rebuild the swapchain: %s\n",
                            error.c_str());
            return;
        }
        m_surface_changed = false;
        // As on the Android path: the rebuild dropped every overlay the
        // backend held, so the caches that decide whether to re-offer them are
        // describing something that is no longer there.
        m_cabinet_signature = 0;
        m_rate_key = 0;
        const uint32_t was_width = m_window_width;
        const uint32_t was_height = m_window_height;
        m_window_width = m_backend.display_width();
        m_window_height = m_backend.display_height();
        m_overlay_width = m_window_width;
        m_overlay_height = m_window_height;
        // Only when it moved: a drag reports a size every frame, and a mode
        // change that ends up the same size is not worth a line. Said out loud
        // because a surface that silently stayed the size it was is exactly how
        // a mode change looks when the rebuild did not happen.
        if (m_window_width != was_width || m_window_height != was_height) {
            // With how the picture now sits in it, not just the number. A
            // surface that changed shape is exactly when the magnification and
            // the border change too, and reporting only the size leaves the two
            // questions this line exists to answer - is the picture still the
            // title's own pixels, and is there any surround for the border -
            // to be worked out by hand.
            char how[128];
            describe_presentation(m_display_width, m_display_height, how,
                                  sizeof(how));
            std::printf("  [gpu] surface now %ux%u%s\n", m_window_width,
                        m_window_height, how);
        }
    }
#endif

    // Renders the accumulated frame. `path` writes it out when non-null.
    // Returns false once the device has failed, so a broken device reports
    // itself once rather than every frame.
    // Told up front whether any frame will be written out, because the
    // readback has to be configured before the first frame is rendered.
    void set_wants_pixels(bool wanted) noexcept { m_wants_pixels = wanted; }

    bool render(const gpu::command_processor& cp, const char* path) {
        if (m_failed) return false;
        // Before anything is created, because the window is opened at this size
        // - see the note on frame_size() and on fit_window_size().
        uint32_t width = 1280;
        uint32_t height = 720;
        frame_size(cp, width, height);
        if (!m_started) {
            // A frame with nothing in it does not say what size the title
            // renders at, and a window opened on a guess is a window whose
            // swapchain the frame then has to be resampled into. So the first
            // empty frames are waited out rather than guessed at. Bounded,
            // because a title that draws nothing at all still has to get its
            // window and the diagnostics that come with it - and only when a
            // window is wanted: a capture of frame N must still be written
            // whether or not that frame drew anything.
            if (m_windowed && cp.draws().empty() &&
                m_frames_awaiting_size < kMaxFramesAwaitingSize) {
                ++m_frames_awaiting_size;
                return true;
            }
            std::string error;
            gpu::vulkan_backend::display_config display;
            bool want_display = false;
#ifdef WHITTY_ANDROID
            // The Activity's window, if this is the APK rather than the
            // executable. Nothing else changes: the backend takes the two
            // instance extensions and the surface factory it already asks any
            // host for, and lays the frame out in the panel with the same
            // whole-number fit the desktop uses.
            if (m_windowed) {
                if (whitty_android_display(display.instance_extensions,
                                           display.create_surface,
                                           display.width, display.height)) {
                    display.bordered = gpu::border_enabled_by_environment();
                    want_display = true;
                    // WHAT KIND OF SCREEN THIS IS, said once, before
                    // anything lays anything out.
                    //
                    // NO CABINET AND NO BORDER ON A HANDHELD: the picture
                    // gets the whole panel.
                    //
                    // Both were tried here and both were taken out again. The
                    // cabinet first: a 16:9 panel showing a 16:9 title leaves
                    // nothing over, so room had to be taken FROM the picture to
                    // put artwork in, and artwork worth reading needs enough of
                    // a 1920-pixel panel that the game ends up half size. Then
                    // a plain one-centimetre margin instead - which cost the
                    // picture a fractional resample and, measured on the
                    // device, bought no frame rate to pay for it.
                    //
                    // So: nothing. A handheld is held at arm's length and its
                    // panel is the same shape as the game; the honest use of it
                    // is all of it. The frame-rate readout on L3 is the only
                    // overlay, and R3 has nothing to toggle.
                    gpu::plain_border().store(0, std::memory_order_relaxed);
                    gpu::surround_visible().store(false,
                                                  std::memory_order_relaxed);
                    gpu::surround_toggle_allowed().store(
                        false, std::memory_order_relaxed);
                } else {
                    // WHITTY_WINDOW=1 with no Activity behind it, which is the
                    // `adb shell` executable. Said out loud: "windowed" then
                    // stops meaning what it said, and a run that renders one
                    // frame where it was rendering every frame looks like a
                    // fault rather than a setting.
                    std::printf(
                        "  [gpu] no Android window; rendering headless\n");
                    m_windowed = false;
                }
            }
#endif
#ifdef WHITTY_HAVE_SDL
            // open_input() has normally already done this before the guest
            // started; this is the fallback for a path that did not call it.
            if (m_windowed && !m_sdl_started) configure_sdl_hints();
            if (m_windowed && !m_sdl_started &&
                !SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD | SDL_INIT_AUDIO)) {
                std::printf("  [gpu] SDL_Init failed: %s\n", SDL_GetError());
                m_windowed = false;
            }
            if (m_windowed) {
                {
                    m_sdl_started = true;
                    fit_window_size(width, height);
                        // A resize is survivable now - the swapchain is rebuilt
                        // when the surface stops matching it, the same
                        // mechanism a mode change goes through - but resizable
                        // is still OFF by default, and that is a picture
                        // decision rather than a timidity about resizing.
                        //
                        // The swapchain is rebuilt properly now, so a resize is
                        // safe - but a tiling window manager will size a
                        // resizable window to whatever cell it has free. On
                        // this desktop Hyprland gave a 2550x1384 window for a
                        // 1280x720 frame, which is 1.92x: not a whole factor,
                        // so the frame is resampled and the 1:1 sharpness the
                        // window sizing exists to preserve is thrown away.
                        // Non-resizable, the same desktop leaves the window at
                        // the size asked for and the frame is presented
                        // untouched.
                        //
                        // WHITTY_RESIZABLE=1 asks for it back for anyone who
                        // would rather drag the window than keep the pixels.
                        // F11 fullscreen does not need this flag and still
                        // works either way.
                        SDL_WindowFlags window_flags = SDL_WINDOW_VULKAN;
                        if (const char* resizable =
                                std::getenv("WHITTY_RESIZABLE"))
                            if (resizable[0] == '1')
                                window_flags |= SDL_WINDOW_RESIZABLE;
                        m_window = SDL_CreateWindow(
                            "whitty_xenon", static_cast<int>(m_window_width),
                            static_cast<int>(m_window_height), window_flags);
                    if (m_window == nullptr) {
                        std::printf("  [gpu] could not open a window: %s\n",
                                    SDL_GetError());
                        m_windowed = false;
                    } else {
                        // The mode asked for, before the surface is created, so
                        // the swapchain is built at the size it will be used at
                        // rather than built for a window and immediately
                        // rebuilt for a screen.
                        m_display_mode = initial_display_mode();
                        if (m_display_mode == display_mode::fullscreen)
                            apply_display_mode();
                        // What the window actually got, in pixels rather than
                        // the points SDL_CreateWindow was asked for: the
                        // swapchain follows the surface, which is in pixels, and
                        // on a scaled desktop the two differ. Everything placed
                        // against the surface - the system page, the credit -
                        // has to use the same numbers the swapchain does.
                        int pixel_width = 0;
                        int pixel_height = 0;
                        if (SDL_GetWindowSizeInPixels(m_window, &pixel_width,
                                                      &pixel_height) &&
                            pixel_width > 0 && pixel_height > 0) {
                            m_window_width = static_cast<uint32_t>(pixel_width);
                            m_window_height =
                                static_cast<uint32_t>(pixel_height);
                        }
                        // Only read when the surface cannot report its own
                        // extent, but wrong there would be as wrong as here.
                        display.width = m_window_width;
                        display.height = m_window_height;
                        display.bordered = gpu::border_enabled_by_environment();
                        uint32_t count = 0;
                        const char* const* names =
                            SDL_Vulkan_GetInstanceExtensions(&count);
                        for (uint32_t i = 0; i < count; ++i)
                            display.instance_extensions.push_back(names[i]);
                        SDL_Window* window = m_window;
                        display.create_surface = [window](void* instance,
                                                          void** out) {
                            VkSurfaceKHR surface = VK_NULL_HANDLE;
                            if (!SDL_Vulkan_CreateSurface(
                                    window, static_cast<VkInstance>(instance),
                                    nullptr, &surface))
                                return false;
                            *out = surface;
                            return true;
                        };
                        // Every controller already plugged in, in the order SDL
                        // enumerates them, into ports 0 upwards. That order is
                        // stable for a given set of devices, so the pad a player
                        // is holding keeps the port it had across a restart.
                        // The keyboard stands in for port 0 when there is none.
                        // Only if open_input() did not already do it.
                        if (m_gamepads[0] == nullptr) {
                            int pad_count = 0;
                            SDL_JoystickID* pads = SDL_GetGamepads(&pad_count);
                            if (pads != nullptr) {
                                for (int i = 0; i < pad_count; ++i)
                                    if (open_pad_into_free_port(pads[i]) < 0)
                                        break;
                                SDL_free(pads);
                            }
                        }
                        open_audio();
                        // Named per port, because "which pad is player two" is
                        // the first question a second player asks and the first
                        // thing to get wrong.
                        for (uint32_t port = 0; port < kMaxPorts; ++port) {
                            if (m_gamepads[port] == nullptr) continue;
                            std::printf("  [input] port %u: %s\n", port,
                                        SDL_GetGamepadName(m_gamepads[port]));
                        }
                        if (m_gamepads[0] == nullptr)
                            std::printf("  [input] port 0: no controller - "
                                        "using the keyboard\n");
                        publish_ports();
                        want_display = true;
                    }
                }
            }
#endif
            if (!m_backend.initialize(error,
                                      want_display ? &display : nullptr)) {
                std::printf("  [gpu] no Vulkan device: %s\n", error.c_str());
                m_failed = true;
                return false;
            }
#ifdef WHITTY_HAVE_SDL
            // How the picture is actually going to be shown, reported only now
            // that the SURFACE has been created and can be asked its own size.
            //
            // It used to be printed as soon as the window existed, from the
            // size SDL_CreateWindow had been asked for, and that is wrong for
            // any run that starts fullscreen: the compositor had not honoured
            // the mode yet, so a Space Giraffe run covering a 5120x1440 display
            // reported "window 1280x720 ... presented 1:1" while the swapchain
            // it went on to build was the display's. The backend takes its
            // extent from the surface, so this asks the backend.
            if (m_backend.has_display()) {
                m_window_width = m_backend.display_width();
                m_window_height = m_backend.display_height();
                char how[128];
                describe_presentation(width, height, how, sizeof(how));
                std::printf("  [gpu] window %ux%u for a %ux%u frame%s\n",
                            m_window_width, m_window_height, width, height,
                            how);
            }
#endif
#ifdef WHITTY_ANDROID
            // The panel's real size, from the surface rather than from the
            // window, and how the frame sits in it. Everything laid over the
            // picture - the system page - is placed against these.
            if (m_backend.has_display()) {
                m_window_width = m_backend.display_width();
                m_window_height = m_backend.display_height();
                std::printf("  [gpu] surface %ux%u for a %ux%u frame%s\n",
                            m_window_width, m_window_height, width, height,
                            describe_fit(width, height).c_str());
            }
#endif
            m_renderer = std::make_unique<gpu::frame_renderer>(m_backend,
                                                               *m_memory);
            if (const char* solid = std::getenv("WHITTY_FRAME_SOLID"))
                m_renderer->set_solid_shading(solid[0] == '1');
            if (const char* pass = std::getenv("WHITTY_FRAME_PASS"))
                m_renderer->set_pass_index(std::atoi(pass));
            // WHITTY_NO_TEXTURE_CACHE=1 unpacks every texture on every draw of
            // every frame, as the renderer did before the cache existed. It is
            // several times slower and exists to settle one question: a frame
            // that looks wrong is either wrong with the cache off too, or the
            // cache is at fault. Nothing else distinguishes those.
            if (const char* no_cache = std::getenv("WHITTY_NO_TEXTURE_CACHE"))
                m_renderer->set_texture_cache(no_cache[0] != '1');
            // Only pay for reading the frame back when a file wants it.
            m_renderer->set_readback(m_wants_pixels);
            // Whatever the last swap named, so the first rendered frame picks
            // its presented pass the same way every later one does.
            m_renderer->set_front_buffer(m_front_buffer);
            m_started = true;
            std::printf("  [gpu] rendering on %s%s\n",
                        m_backend.device_name().c_str(),
                        m_backend.has_display() ? " (windowed)" : "");
        }

        // Where the system page has to fit. A window's swapchain takes the copy
        // at its own pixel size; without one the page is composited into the
        // frame itself, on the capture path below.
        m_overlay_width = m_backend.has_display() ? m_window_width : width;
        m_overlay_height = m_backend.has_display() ? m_window_height : height;

        const auto started = std::chrono::steady_clock::now();
        std::string error;
        // Which frame this is, so a per-pass capture can be asked for by
        // number rather than taken on every frame - see
        // vulkan_backend::set_frame_number.
        m_backend.set_frame_number(m_present_frame);
        const float clear[4] = {0.0f, 0.0f, 0.0f, 1.0f};
        const bool ok = m_renderer->render(cp.draws(), cp.shaders(), width,
                                           height, clear, m_pixels, m_stats,
                                           error);
        const auto elapsed = std::chrono::steady_clock::now() - started;
        if (!ok) {
            std::printf("  [gpu] frame render failed: %s\n", error.c_str());
            m_failed = true;
            return false;
        }
        m_frames_rendered++;
        m_render_time += elapsed;
        // Where the SUBMIT half went, summed over the run. See
        // vulkan_backend::submit_profile: the half was known and the cause was
        // not, and every candidate for it looks equally plausible on the page.
        {
            const gpu::vulkan_backend::submit_profile& p = m_backend.profile();
            m_pipeline_ns += p.pipeline_ns;
            m_pipelines_built += p.pipelines_built;
            // Whenever this frame built any, write the blob out. On a phone
            // that is the difference between a cache and a file that is only
            // ever created: a capture run ends with _Exit, and a player ends a
            // session by leaving the app, and neither runs a destructor.
            // Geometry Wars builds its eight in one frame and none afterwards,
            // so this is one write per run.
            if (p.pipelines_built != 0) m_backend.save_pipeline_cache();
            m_pipelines_reused += p.pipelines_reused;
            m_module_ns += p.module_ns;
            m_modules_built += p.modules_built;
            m_texcmp_ns += p.texture_compare_ns;
            m_texcmp_bytes += p.texture_compare_bytes;
            m_texup_ns += p.texture_upload_ns;
            m_textures_uploaded += p.textures_uploaded;
            m_textures_kept += p.textures_reused;
            m_descriptor_ns += p.descriptor_ns;
            m_arena_ns += p.arena_ns;
            m_arena_bytes += p.arena_bytes;
            m_record_ns += p.record_ns;
            m_gpu_wait_ns += p.gpu_wait_ns;
            m_gpu_exec_ns += p.gpu_exec_ns;
            m_readback_ns += p.readback_ns;
            m_target_ns += p.target_ns;
        }
        m_vertex_reads += m_stats.vertex_buffer_reads;
        m_vertex_reuses += m_stats.vertex_buffer_reuses;
#ifdef WHITTY_HAVE_SDL
        if (m_backend.has_display()) {
            // Hand the page to the backend before presenting. It compares the
            // pixels with what it already holds, so a page held open does not
            // re-upload every frame; an unbuilt panel takes it down.
            if (m_panel != nullptr && !m_panel->empty()) {
                int32_t panel_x = 0;
                int32_t panel_y = 0;
                if (m_panel->placement(m_window_width, m_window_height, panel_x,
                                       panel_y))
                    m_backend.set_overlay_panel(m_panel->width(),
                                                m_panel->height(), panel_x,
                                                panel_y, m_panel->rgba());
            } else {
                m_backend.set_overlay_panel(0, 0, 0, 0, {});
            }
            refresh_cabinet(width, height);
            refresh_rate_readout(width, height);
            std::string present_error;
            if (!m_backend.present(present_error)) {
                std::printf("  [gpu] present failed: %s\n",
                            present_error.c_str());
                m_failed = true;
            }
            // A present that could not use the swapchain is not a failure any
            // more - it says the surface moved on. Recorded here and acted on
            // after the events, with the rest of the window's changes.
            if (m_backend.display_out_of_date()) m_surface_changed = true;
            // A window that never reads its events stops responding, and the
            // compositor reports it as hung.
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_EVENT_QUIT) m_quit = true;
                // Escape closes the app from either input path; the keyboard
                // fallback below only runs when no pad is attached.
                if (event.type == SDL_EVENT_KEY_DOWN &&
                    event.key.scancode == SDL_SCANCODE_ESCAPE)
                    m_quit = true;
                // F11 cycles windowed and borderless fullscreen. On key-down
                // only, and not on a repeat: holding it would otherwise cycle
                // the mode every frame the key is down.
                if (event.type == SDL_EVENT_KEY_DOWN &&
                    event.key.scancode == SDL_SCANCODE_F11 && !event.key.repeat)
                    cycle_display_mode();
                // The window changed size - dragged, tiled, or moved between
                // modes. The pixel size is what the surface follows; the
                // logical one can differ on a scaled desktop, so it is the
                // pixel event that matters here.
                if (event.type == SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED ||
                    event.type == SDL_EVENT_WINDOW_RESIZED)
                    m_surface_changed = true;
                // Controllers are plugged in and out while a game runs, and
                // enumerating once at startup misses a pad that arrives a
                // moment later - or one SDL had not finished enumerating yet.
                // A pad arriving mid-game is how a second player joins, which
                // is why this fills the lowest free port rather than only the
                // first.
                //
                // A pad we ALREADY hold keeps the port it has. SDL queues an
                // SDL_EVENT_GAMEPAD_ADDED at SDL_Init for every controller
                // already plugged in, and open_input() enumerates with
                // SDL_GetGamepads() and opens them long before the first event
                // is pumped - so the first frame's loop delivers an ADDED for a
                // pad that is already on port 0. SDL_OpenGamepad hands back the
                // SAME handle for it (measured on 3.4.12), so filling the next
                // free port with it put ONE controller on two ports: the title
                // was told two pads were attached, both reporting the same
                // buttons on the same frame, and a single press arrived twice.
                if (event.type == SDL_EVENT_GAMEPAD_ADDED &&
                    port_of_device(event.gdevice.which) < 0) {
                    const int port = open_pad_into_free_port(event.gdevice.which);
                    if (port >= 0)
                        std::printf("  [input] port %d: %s connected\n", port,
                                    SDL_GetGamepadName(
                                        m_gamepads[static_cast<uint32_t>(port)]));
                }
                if (event.type == SDL_EVENT_GAMEPAD_REMOVED) {
                    const int port = close_pad_by_id(event.gdevice.which);
                    if (port >= 0)
                        std::printf("  [input] port %d: controller "
                                    "disconnected\n", port);
                }
            }
            // After the events, so the surface's final size this frame is the
            // one the swapchain is rebuilt for - a drag reports many sizes, and
            // rebuilding for each would be a swapchain per event rather than
            // one per frame.
            if (m_surface_changed) rebuild_swapchain();
            // After the events, so a pad that arrived or left this frame is
            // reported once, with the set the title will actually be able to
            // read. Before sampling would announce a port whose snapshot is
            // still empty.
            publish_ports();
            sample_input();
        }
#endif
#ifdef WHITTY_ANDROID
        present_android(width, height);
#endif
        // Pacing is NOT here any more - it is on the swap, which is the thing
        // that actually advances the simulation. See the call beside
        // renderer.render() and the note on pace() itself.
        m_assemble_us += m_stats.assemble_us;
        m_submit_us += m_stats.submit_us;
        m_draws_total += m_stats.draws_rendered;
        m_vertex_ns += m_stats.vertex_ns;
        m_texture_ns += m_stats.texture_ns;
        m_constants_ns += m_stats.constants_ns;
        m_shader_ns += m_stats.shader_ns;
        m_primitive_ns += m_stats.primitive_ns;
        m_vertex_bytes += m_stats.vertex_bytes;
        m_texture_texels += m_stats.texture_texels;
        m_texture_texels_decoded += m_stats.texture_texels_decoded;
        m_texture_hits += m_stats.texture_cache_hits;
        m_texture_misses += m_stats.texture_cache_misses;
        m_shader_hits += m_stats.shader_cache_hits;
        m_shader_misses += m_stats.shader_cache_misses;

        if (path != nullptr) {
            report(error);
            // A window gets the credit from present(), which draws it into the
            // swapchain image. A capture never goes through there, so it is
            // composited here instead - from the same span list, so what a
            // screenshot shows is what the screen shows.
            const std::size_t frame_bytes =
                static_cast<std::size_t>(width) * height * 4;
            // The system page first, then the credit over it, in the same
            // order present() puts them into the swapchain image - so a capture
            // and the window show the identical picture.
            if (m_panel != nullptr && !m_panel->empty() &&
                m_pixels.size() >= frame_bytes)
                m_panel->draw(m_pixels.data(), width, height);
            if (gpu::credit_overlay::enabled_by_environment() &&
                m_pixels.size() >= frame_bytes) {
                static const gpu::credit_overlay credit;
                credit.draw(m_pixels.data(), width, height);
            }
            if (gpu::frame_renderer::write_ppm(path, m_pixels, width, height))
                std::printf("  wrote %ux%u frame to %s\n", width, height, path);
            else
                std::printf("  [gpu] could not write %s\n", path);
        }
        return true;
    }

// --- the surround and the readout, for BOTH hosts -------------------------
//
// Not under #ifdef WHITTY_HAVE_SDL, and that is the fix rather than an
// accident: these two were written inside the desktop block and the Android
// present path therefore had neither. The handheld is the machine the cabinet
// and the frame-rate readout were wanted on most, and on it they were the two
// features that silently did not exist. Nothing in either function touches
// SDL - they ask the layout where the picture is and hand bitmaps to the
// backend - so there was never a reason for the guard.
    // The arcade surround, brought up to date and handed to the backend.
    //
    // NOTHING HERE TOUCHES THE PICTURE. The layout is asked where the picture
    // goes - the same layout present() will use, not a second copy of the
    // arithmetic - and paints around it; the backend then copies only the four
    // rectangles outside that rectangle. A capture never comes through here at
    // all, because WHITTY_FRAME_PPM is written from the rendered frame above,
    // before any of this.
    //
    // Two costs, kept apart deliberately. The ARTWORK is repainted and
    // re-uploaded only when its signature moves - a new high score, a new
    // achievement, a mode change - which is a handful of times a session. The
    // METER is redrawn and re-uploaded every frame, because it is a measurement
    // of the mix the title submitted a moment ago, and it is a few hundred
    // kilobytes rather than the twenty-six megabytes the artwork is.
    // The frame-rate readout, laid over the top right of the picture.
    //
    // This counts PRESENTS, which makes it the guest's frame rate rather than
    // the host loop's - and those are different numbers whenever the title is
    // not the thing setting the pace. A host loop spinning on a title that has
    // submitted nothing would read sixty and mean nothing by it; the number a
    // player wants is how often the game put a new picture up.
    //
    // Sampled over a window rather than from the last gap, because a single
    // frame's gap on a machine with other work on it is noise, and a readout
    // that flickers between 58 and 61 is harder to read than one that is late.
    void refresh_rate_readout(uint32_t frame_width, uint32_t frame_height) {
        const auto now = std::chrono::steady_clock::now();
        if (m_rate_since.time_since_epoch().count() == 0) m_rate_since = now;
        ++m_rate_frames;
        const double window_ms =
            std::chrono::duration<double, std::milli>(now - m_rate_since)
                .count();
        if (window_ms >= 500.0) {
            m_rate_shown = static_cast<uint32_t>(m_rate_frames * 1000.0 /
                                                     window_ms +
                                                 0.5);
            m_rate_frames = 0;
            m_rate_since = now;
        }

        // Hidden by L3. Same rule as the surround: clear what the backend holds
        // rather than stop updating it, or the last number stays on screen.
        if (!gpu::fps_visible().load(std::memory_order_relaxed)) {
            if (m_rate_key != 0) {
                m_rate_key = 0;
                m_backend.set_overlay_panel(
                    0, 0, 0, 0, {},
                    gpu::vulkan_backend::kOverlaySlotRate);
            }
            return;
        }
        if (frame_width == 0 || frame_height == 0) return;

        gpu::present_pane panes[2]{};
        // The same `fill` the backend presents with, or the readout lands where
        // the picture was before the toggle rather than where it is.
        gpu::layout_present_panes(
            m_window_width, m_window_height, frame_width, frame_height,
            gpu::twin_panes_enabled_by_environment(), panes,
            !gpu::surround_visible().load(std::memory_order_relaxed),
            gpu::plain_border().load(std::memory_order_relaxed),
            gpu::picture_width_cap().load(std::memory_order_relaxed));
        const gpu::present_pane& picture = panes[0];
        if (picture.width <= 0 || picture.height <= 0) return;

        // Big enough to read from where a person sits, which on a handheld is
        // close and on a television is not - so it comes off the picture's own
        // height rather than being a constant.
        uint32_t scale = static_cast<uint32_t>(picture.height / 200);
        if (scale < 2) scale = 2;
        if (scale > 6) scale = 6;

        char label[16];
        std::snprintf(label, sizeof(label), "%u FPS", m_rate_shown);
        const uint64_t key = (static_cast<uint64_t>(m_rate_shown) << 40) ^
                             (static_cast<uint64_t>(scale) << 32) ^
                             (static_cast<uint64_t>(picture.x & 0xFFFF) << 16) ^
                             static_cast<uint64_t>(picture.width & 0xFFFF);
        // The BITMAP is cached on this key. The upload is NOT, and that
        // distinction is the whole of a bug worth writing down: a swapchain
        // rebuild - a rotation, a resize, the system bars moving - drops every
        // overlay the backend is holding, and a host that only offers its
        // overlay when its own inputs change never offers it again. The
        // readout then vanished on the first rebuild and came back only if the
        // NUMBER happened to change, which on a title holding a steady 60 it
        // never does. set_overlay_panel already compares the pixels and the
        // position and does nothing when they match, so offering it every
        // present costs a memcmp and is correct across a rebuild.
        if (key != m_rate_key) {
            m_rate_key = key;
            build_rate_readout(label, scale, picture);
        }
        if (m_rate_width == 0 || m_rate_height == 0) return;
        m_backend.set_overlay_panel(m_rate_width, m_rate_height, m_rate_x,
                                    m_rate_y, m_rate_pixels,
                                    gpu::vulkan_backend::kOverlaySlotRate);
    }

    // Paints the readout and works out where it goes. Separated from the
    // offering above so the two can happen at different rates.
    void build_rate_readout(const char* label, uint32_t scale,
                            const gpu::present_pane& picture) {
        const gpu::credit_overlay text(label, scale);
        const uint32_t pad = scale * 3;
        const uint32_t box_w = text.width() + pad * 2;
        const uint32_t box_h = text.height() + pad * 2;
        // A plaque behind it rather than the bare glyphs. The backend copies a
        // rectangle, not the glyph spans, so the pixels around the letters are
        // going to be written whatever they hold - better a deliberate panel
        // than a black hole punched in the corner of the picture.
        m_rate_pixels.assign(static_cast<std::size_t>(box_w) * box_h * 4, 0);
        static const uint8_t kPlaque[4] = {0x0C, 0x10, 0x14, 0xFF};
        static const uint8_t kEdge[4] = {0x50, 0xC0, 0x60, 0xFF};
        for (uint32_t y = 0; y < box_h; ++y) {
            for (uint32_t x = 0; x < box_w; ++x) {
                const bool edge = x < 2 || y < 2 || x + 2 >= box_w ||
                                  y + 2 >= box_h;
                const uint8_t* colour = edge ? kEdge : kPlaque;
                std::memcpy(&m_rate_pixels[(static_cast<std::size_t>(y) *
                                                box_w +
                                            x) *
                                           4],
                            colour, 4);
            }
        }
        const std::vector<uint8_t>& glyphs = text.rgba();
        for (uint32_t y = 0; y < text.height(); ++y) {
            for (uint32_t x = 0; x < text.width(); ++x) {
                const std::size_t from =
                    (static_cast<std::size_t>(y) * text.width() + x) * 4;
                if (glyphs[from + 3] == 0) continue;
                const std::size_t to =
                    (static_cast<std::size_t>(y + pad) * box_w + x + pad) * 4;
                m_rate_pixels[to + 0] = glyphs[from + 0];
                m_rate_pixels[to + 1] = glyphs[from + 1];
                m_rate_pixels[to + 2] = glyphs[from + 2];
                m_rate_pixels[to + 3] = 0xFF;
            }
        }

        const int32_t margin = static_cast<int32_t>(scale * 4);
        int32_t at_x = picture.x + picture.width -
                       static_cast<int32_t>(box_w) - margin;
        int32_t at_y = picture.y + margin;
        if (at_x < 0) at_x = 0;
        if (at_y < 0) at_y = 0;
        m_rate_width = box_w;
        m_rate_height = box_h;
        m_rate_x = at_x;
        m_rate_y = at_y;
        // Once, with where it went. A readout that is not on the screen looks
        // identical to one that was never asked for, and on a handheld there is
        // no way to tell the two apart from outside - which is exactly how it
        // went unnoticed that the Android present path called neither this nor
        // the surround.
        if (!m_rate_reported) {
            m_rate_reported = true;
            std::printf("  [gpu] frame-rate readout %ux%u at %d,%d in a %dx%d "
                        "picture on a %ux%u surface\n",
                        box_w, box_h, at_x, at_y, picture.width, picture.height,
                        m_window_width, m_window_height);
            std::fflush(stdout);
        }
    }

    void refresh_cabinet(uint32_t frame_width, uint32_t frame_height) {
        if (!gpu::cabinet_surround::enabled_by_environment()) return;
        // Hidden by R3. Clear whatever the backend is still holding rather than
        // just skipping the update, or the last painted surround stays on the
        // screen and the toggle looks broken.
        if (!gpu::surround_visible().load(std::memory_order_relaxed)) {
            if (m_cabinet_signature != 0) {
                m_cabinet_signature = 0;
                m_backend.set_surround(0, 0, {});
            }
            return;
        }
        if (frame_width == 0 || frame_height == 0) return;
        // A twin split is two people's screens with a gutter between them;
        // there is no border around that to put a cabinet in, and the backend
        // declines to copy one there in any case.
        if (gpu::twin_panes_enabled_by_environment()) return;

        gpu::present_pane panes[2]{};
        gpu::layout_present_panes(
            m_window_width, m_window_height, frame_width, frame_height, false,
            panes, false, gpu::plain_border().load(std::memory_order_relaxed),
            gpu::picture_width_cap().load(std::memory_order_relaxed));

        m_cabinet_title.frame_width = frame_width;
        m_cabinet_title.frame_height = frame_height;
        const uint64_t wanted = gpu::cabinet_surround::signature_of(
            m_window_width, m_window_height, panes[0], m_cabinet_title);
        if (wanted != m_cabinet_signature) {
            m_cabinet_signature = wanted;
            // Timed, and said out loud the first time, because a rebuild is not
            // only a start-up cost: the panel changes when a score lands or an
            // achievement unlocks, and that is mid-gameplay. A repaint the
            // player can see as a hitch would be worse than the panel is good,
            // so the number has to be visible rather than assumed small.
            const auto painting = std::chrono::steady_clock::now();
            const bool have = m_cabinet.build(m_window_width, m_window_height,
                                              panes[0], m_cabinet_title);
            const double paint_ms =
                std::chrono::duration<double, std::milli>(
                    std::chrono::steady_clock::now() - painting)
                    .count();
            if (have) {
                const auto uploading = std::chrono::steady_clock::now();
                m_backend.set_surround(m_cabinet.width(), m_cabinet.height(),
                                       m_cabinet.rgba());
                const double upload_ms =
                    std::chrono::duration<double, std::milli>(
                        std::chrono::steady_clock::now() - uploading)
                        .count();
                if (!m_cabinet_reported) {
                    m_cabinet_reported = true;
                    std::printf(
                        "  [gpu] cabinet surround %ux%u around a %dx%d "
                        "picture; equaliser %dx%d; painted in %.1f ms, "
                        "uploaded in %.1f ms\n",
                        m_cabinet.width(), m_cabinet.height(), panes[0].width,
                        panes[0].height, m_cabinet.meter().width,
                        m_cabinet.meter().height, paint_ms, upload_ms);
                    std::fflush(stdout);
                }
            } else {
                // Not enough screen around the picture - a window, or a display
                // the picture nearly fills. The flat border stands, which is
                // what was there before this existed.
                m_backend.set_surround(0, 0, {});
                m_backend.set_meter(0, 0, 0, 0, {});
            }
        }
        if (!m_cabinet.built()) return;

        const gpu::present_pane& well = m_cabinet.meter();
        if (well.width <= 0 || well.height <= 0) return;
        float levels[gpu::kSpectrumBands] = {};
        float peaks[gpu::kSpectrumBands] = {};
        const bool live = m_spectrum.sample(levels, peaks, gpu::kSpectrumBands);
        gpu::draw_spectrum_meter(m_meter_pixels,
                                 static_cast<uint32_t>(well.width),
                                 static_cast<uint32_t>(well.height), levels,
                                 peaks, gpu::kSpectrumBands, live);
        m_backend.set_meter(static_cast<uint32_t>(well.width),
                            static_cast<uint32_t>(well.height), well.x, well.y,
                            m_meter_pixels);
    }


#ifdef WHITTY_HAVE_SDL
    // The device the title's samples go to.
    //
    // Handing SDL the six-channel source and letting it convert is the obvious
    // thing, and it costs 10.6 dB on a stereo sink. SDL's 5.1-to-stereo matrix
    // is normalised for the case where all six channels carry signal, so a
    // title that mixes in stereo and leaves the other four at zero arrives at
    // 0.2945 of the level it submitted - measured directly against SDL's own
    // converter: front pair only comes out at -10.62 dB, all six at 0.00 dB.
    //
    // That is not a small difference to the wrong title. Space Giraffe mixes in
    // stereo - its centre, LFE and both surrounds are exactly zero in every
    // frame it submits - and it authors its shooting sound some 15 dB below its
    // own mix. Its music survives being made a third as loud; the shot does
    // not, which is why the title sounds as though it has no effects at all.
    // Geometry Wars 2 fills all six channels and loses nothing, which is
    // exactly why the two titles disagree.
    //
    // So the fold is done here instead, at the coefficients a consumer
    // downmixer uses, with the front pair at UNITY. See fold_5_1_to_stereo in
    // audio.h - it lives there rather than here so it can be tested.
    void open_audio() {
        // What the hardware actually is. A device with the full six channels
        // gets the frame untouched; only a narrower one needs folding.
        SDL_AudioSpec device_spec{};
        int device_frames = 0;
        if (!SDL_GetAudioDeviceFormat(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK,
                                      &device_spec, &device_frames))
            device_spec.channels = 0;
        m_output_channels =
            device_spec.channels >= static_cast<int>(kAudioChannels)
                ? kAudioChannels
                : 2u;

        SDL_AudioSpec spec{};
        spec.format = SDL_AUDIO_F32;
        spec.channels = static_cast<int>(m_output_channels);
        spec.freq = static_cast<int>(kAudioFrequency);
        m_audio_stream = SDL_OpenAudioDeviceStream(
            SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (m_audio_stream == nullptr) {
            std::printf("  [audio] no output device: %s\n", SDL_GetError());
            return;
        }
        SDL_ResumeAudioStreamDevice(m_audio_stream);
        // Which output it actually landed on. A machine with several sinks -
        // an idle SPDIF and a live HDMI, say - will happily accept audio on
        // the one nothing is plugged into, which is indistinguishable from
        // broken until the device is named.
        const SDL_AudioDeviceID device =
            SDL_GetAudioStreamDevice(m_audio_stream);
        const char* name = SDL_GetAudioDeviceName(device);
        std::printf("  [audio] %u Hz, %u channel(s)%s -> %s\n", kAudioFrequency,
                    m_output_channels,
                    m_output_channels == kAudioChannels
                        ? ""
                        : " (5.1 folded down here, not by SDL)",
                    name != nullptr ? name : "(unnamed)");
    }

#endif

    // WHITTY_AUDIO_WAV=path records everything the title submits. Hearing
    // what the runtime produced is the only way to tell "the output path is
    // broken" from "the title genuinely made almost no sound", and those two
    // are indistinguishable from a device that is playing correctly.
    //
    // Opened here rather than beside the window, which is where it used to
    // live. The recording has nothing to do with the window - it is taken from
    // submit_audio, before any device or fold - and tying it to one meant the
    // one measurement that settles "is this effect in the mix at all" could
    // only be taken by putting a window on the screen. It also now starts
    // before the guest does, so the first frames the title submits are in the
    // file rather than lost to however long the first frame took to arrive.
    void start_audio_capture() {
        if (m_wav != nullptr) return;
        if (const char* path = std::getenv("WHITTY_AUDIO_WAV")) open_wav(path);
    }
    void open_wav(const char* path) {
        m_wav = std::fopen(path, "wb");
        if (m_wav == nullptr) return;
        // A 44-byte header, sizes patched at close.
        const uint8_t header[44] = {};
        std::fwrite(header, 1, sizeof(header), m_wav);
    }
    void close_wav() {
        if (m_wav == nullptr) return;
        const uint32_t data_bytes =
            static_cast<uint32_t>(m_wav_samples * sizeof(float));
        const uint32_t channels = kAudioChannels;
        const uint32_t rate = kAudioFrequency;
        const uint32_t block = channels * 4;
        std::fseek(m_wav, 0, SEEK_SET);
        const auto u32 = [&](uint32_t v) { std::fwrite(&v, 4, 1, m_wav); };
        const auto u16 = [&](uint16_t v) { std::fwrite(&v, 2, 1, m_wav); };
        std::fwrite("RIFF", 1, 4, m_wav);
        u32(36 + data_bytes);
        std::fwrite("WAVEfmt ", 1, 8, m_wav);
        u32(16);
        u16(3); // IEEE float
        u16(static_cast<uint16_t>(channels));
        u32(rate);
        u32(rate * block);
        u16(static_cast<uint16_t>(block));
        u16(32);
        std::fwrite("data", 1, 4, m_wav);
        u32(data_bytes);
        std::fclose(m_wav);
        m_wav = nullptr;
    }

    // Decoded compressed audio, on its own stream. A second stream rather
    // than mixing into the title's: SDL then does the resampling and the
    // mixing at the device, so nothing here has to know how to convert 44.1
    // kHz stereo into the 48 kHz 5.1 frames the title submits.
    void submit_xma(const int16_t* samples, uint32_t count, uint32_t rate,
                    uint32_t channels) {
#ifdef WHITTY_HAVE_SDL
        if (!m_sdl_started || count == 0) return;
        if (m_xma_stream == nullptr || rate != m_xma_rate ||
            channels != m_xma_channels) {
            if (m_xma_stream != nullptr) SDL_DestroyAudioStream(m_xma_stream);
            SDL_AudioSpec spec{};
            spec.format = SDL_AUDIO_S16;
            spec.channels = static_cast<int>(channels);
            spec.freq = static_cast<int>(rate);
            m_xma_stream = SDL_OpenAudioDeviceStream(
                SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
            if (m_xma_stream == nullptr) return;
            SDL_ResumeAudioStreamDevice(m_xma_stream);
            m_xma_rate = rate;
            m_xma_channels = channels;
            std::printf("  [audio] decoded stream: %u Hz, %u channels\n", rate,
                        channels);
        }
        // Decoding runs far ahead of playback - a buffer of packets is seconds
        // of audio - so this has to be paced or it queues minutes of sound and
        // every effect arrives long after the thing that caused it.
        const int ahead = static_cast<int>(rate * channels * sizeof(int16_t)) / 4;
        if (SDL_GetAudioStreamQueued(m_xma_stream) > ahead) {
            m_xma_dropped += count;
            return;
        }
        SDL_PutAudioStreamData(m_xma_stream, samples,
                               static_cast<int>(count * sizeof(int16_t)));
        m_xma_queued += count;
#else
        (void)samples; (void)count; (void)rate; (void)channels;
#endif
    }

    // Takes one frame of samples from the title. Called on the guest's audio
    // thread, so it must not block: SDL's stream queues and the device drains
    // it on its own thread.
    void submit_audio(const float* samples, uint32_t count) {
        // Recorded before any device, so this works in every build - including
        // the ones with no SDL and no window at all.
        if (m_wav != nullptr) {
            std::fwrite(samples, sizeof(float), count, m_wav);
            m_wav_samples += count;
        }
        // The cabinet's equaliser, taken from exactly the same samples the
        // recording above gets - the title's own finished mix, before the
        // device and before the 5.1 fold. That is what makes the display a
        // measurement of the running title rather than an animation beside it.
        // It writes into a ring and returns; the analysis happens on the thread
        // that presents. See spectrum.h for why it must not be the other way
        // round.
        m_spectrum.submit(samples, count, kAudioChannels);
        if (audio_device* device = host_audio_device())
            device->submit(samples, count);
#ifdef WHITTY_HAVE_SDL
        if (m_audio_stream == nullptr) return;
        // A stream that has run far ahead means the title is producing faster
        // than the device consumes; dropping is better than growing a delay
        // that never comes back. Counted, because a device that is not
        // draining fills this and then every frame is dropped - which is
        // silence that looks exactly like silence from any other cause.
        const int queued = SDL_GetAudioStreamQueued(m_audio_stream);
        if (queued > m_audio_queue_high) m_audio_queue_high = queued;
        // Eight frames' worth, in the channel count actually being queued. Left
        // at the six-channel figure this would be twenty-four frames of latency
        // on a stereo sink before anything is dropped.
        const int limit = static_cast<int>(kAudioSamplesPerChannel *
                                           m_output_channels * sizeof(float) *
                                           8);
        if (queued > limit) {
            ++m_audio_dropped;
            return;
        }
        const float* out = samples;
        uint32_t out_count = count;
        if (m_output_channels != kAudioChannels) {
            // Thread-local, not a member. This runs on whichever thread the
            // title submits from, and a title may have more than one audio
            // worker; a shared scratch buffer resized from two threads at once
            // is a use-after-free, where the counters around it are only racy.
            static thread_local std::vector<float> folded;
            fold_5_1_to_stereo(samples, count, folded);
            out = folded.data();
            out_count = static_cast<uint32_t>(folded.size());
        }
        if (!SDL_PutAudioStreamData(m_audio_stream, out,
                                    static_cast<int>(out_count *
                                                     sizeof(float))))
            ++m_audio_failed;
        else
            ++m_audio_played;
#else
        (void)samples;
        (void)count;
#endif
    }

    // WHITTY_TRACE_INPUT=1 prints every change in what the title is handed.
    // "The controller does nothing" has two very different causes - the runtime
    // not seeing the pad, and the title ignoring what it is given - and this
    // separates them.
    void trace(uint32_t user, const gamepad_state& pad) {
        static const bool enabled = [] {
            const char* value = std::getenv("WHITTY_TRACE_INPUT");
            return value != nullptr && value[0] == '1';
        }();
        if (!enabled) return;
        if (user >= kMaxPorts) return;
        // Per port, because a single "last traced" state shared by four ports
        // makes two players moving at once look like one player jittering: each
        // port's line would be suppressed by the other port's values.
        traced& last = m_traced[user];
        // Sticks are quantised before comparing, so drift and the tiny jitter
        // a resting stick produces do not fill the log - but a real push shows
        // up. Reporting buttons alone hides a player using the stick, which
        // reads as "they never tried that direction".
        const int lx = pad.thumb_lx / 8192;
        const int ly = pad.thumb_ly / 8192;
        const int rx = pad.thumb_rx / 8192;
        const int ry = pad.thumb_ry / 8192;
        if (pad.connected == last.connected && pad.buttons == last.buttons &&
            lx == last.lx && ly == last.ly && rx == last.rx && ry == last.ry)
            return;
        last.connected = pad.connected;
        last.buttons = pad.buttons;
        last.lx = lx;
        last.ly = ly;
        last.rx = rx;
        last.ry = ry;
        // BOTH sticks: this is a twin-stick game, so logging only the left one
        // hides half of what the player is doing - and the aiming half at that.
        std::printf("  [input] user %u buttons %04X L %+d,%+d R %+d,%+d (%s)\n",
                    user, pad.buttons, lx, ly, rx, ry,
                    !pad.connected      ? "nothing attached"
                    : m_port_on_keyboard[user] ? "keyboard"
                                               : "pad");
        std::fflush(stdout);
    }

    // Holds the title to its target frame rate.
    //
    // A title advances its simulation once per present, so the present rate IS
    // the game speed. The swapchain paces to the display, which is not 60 Hz on
    // most monitors, so without this Geometry Wars runs at whatever the panel
    // does - 137 fps here, more than twice too fast.
    //
    // The deadline advances by one frame rather than being measured from now,
    // so a frame that overruns is followed by a shorter wait instead of the
    // error accumulating. A deadline far in the past (a long stall) is reset
    // rather than chased, which would otherwise produce a burst of
    // uncapped frames trying to catch up.
    void pace() {
        hold_to_target_rate();
        note_swap_interval();
    }

    void hold_to_target_rate() {
        if (m_target_fps <= 0.0) return;
        const auto period = std::chrono::duration_cast<
            std::chrono::steady_clock::duration>(
            std::chrono::duration<double>(1.0 / m_target_fps));
        const auto now = std::chrono::steady_clock::now();
        if (m_deadline.time_since_epoch().count() == 0 ||
            now > m_deadline + period * 4) {
            m_deadline = now + period;
            return;
        }
        if (now < m_deadline) std::this_thread::sleep_until(m_deadline);
        m_deadline += period;
    }

    // How far apart the presented frames actually were, which is the only
    // number a hitch shows up in.
    //
    // Throughput does not contain it. A run that renders at 190 fps and drops
    // one frame to 30 ms reports 190 fps and a player sees a stutter, so the
    // average is the one statistic guaranteed to hide the thing being looked
    // for. Nor does the per-frame submit profile: that measures OUR half, and a
    // frame the guest spent 40 ms simulating never reaches it.
    //
    // Measured here rather than by timestamping the log, because that measures
    // the reader. A pipe into a timestamping filter reported 570 ms gaps that
    // were the filter being descheduled and then reading a burst - so the
    // clock has to be inside the process, on the thread that swaps.
    void note_swap_interval() {
        const auto now = std::chrono::steady_clock::now();
        ++m_swaps;
        if (m_last_swap.time_since_epoch().count() != 0) {
            const double ms = std::chrono::duration<double, std::milli>(
                                  now - m_last_swap).count();
            // Whole milliseconds, capped: the interesting part is the tail and
            // a 300 ms stall and a 900 ms one need no separating.
            const std::size_t bucket = static_cast<std::size_t>(
                ms < 0.0 ? 0.0 : ms > 999.0 ? 999.0 : ms);
            ++m_swap_ms[bucket];
            if (ms > m_worst_ms) {
                m_worst_ms = ms;
                m_worst_swap = m_swaps;
            }
        }
        m_last_swap = now;
    }

    // The distribution, not the mean. A budget is per frame, so what matters is
    // how many frames missed it and by how much.
    void report_pacing() const {
        uint64_t total = 0;
        for (uint64_t n : m_swap_ms) total += n;
        if (total == 0) return;
        const auto at = [&](double fraction) {
            const uint64_t want = static_cast<uint64_t>(total * fraction);
            uint64_t seen = 0;
            for (std::size_t i = 0; i < m_swap_ms.size(); ++i) {
                seen += m_swap_ms[i];
                if (seen >= want) return i;
            }
            return m_swap_ms.size() - 1;
        };
        uint64_t over_budget = 0;
        for (std::size_t i = 25; i < m_swap_ms.size(); ++i)
            over_budget += m_swap_ms[i];
        std::printf("  presented frame gaps: median %zu ms, p99 %zu, p99.9 %zu,"
                    " worst %.1f (frame %llu); %llu of %llu over 25 ms\n",
                    at(0.5), at(0.99), at(0.999), m_worst_ms,
                    static_cast<unsigned long long>(m_worst_swap),
                    static_cast<unsigned long long>(over_budget),
                    static_cast<unsigned long long>(total));
    }

    void finish_audio() { close_wav(); }

    void report_audio() const {
#ifdef WHITTY_HAVE_SDL
        if (m_audio_stream == nullptr) return;
        SDL_AudioDeviceID device = SDL_GetAudioStreamDevice(m_audio_stream);
        std::printf("  [audio] %llu played, %llu dropped, %llu failed, "
                    "queue high %d bytes, device %u%s\n",
                    static_cast<unsigned long long>(m_audio_played),
                    static_cast<unsigned long long>(m_audio_dropped),
                    static_cast<unsigned long long>(m_audio_failed),
                    m_audio_queue_high, device,
                    SDL_AudioDevicePaused(device) ? " PAUSED" : " playing");
        std::printf("  [audio] decoded: %llu samples queued, %llu dropped to "
                    "stay in time\n",
                    static_cast<unsigned long long>(m_xma_queued),
                    static_cast<unsigned long long>(m_xma_dropped));
#endif
    }

    void report_totals() const {
        if (m_frames_rendered == 0) return;
        const double seconds =
            std::chrono::duration<double>(m_render_time).count();
        std::printf("  frames rendered: %llu in %.2fs (%.1f fps, %.2f ms each)"
                    "\n",
                    static_cast<unsigned long long>(m_frames_rendered), seconds,
                    static_cast<double>(m_frames_rendered) / seconds,
                    1000.0 * seconds / static_cast<double>(m_frames_rendered));
        const double frames = static_cast<double>(m_frames_rendered);
        std::printf("    per frame: %.2f ms gathering data, %.2f ms building "
                    "and submitting, %.1f draw(s)\n",
                    m_assemble_us / 1000.0 / frames,
                    m_submit_us / 1000.0 / frames,
                    static_cast<double>(m_draws_total) / frames);
        // What the gathering half was actually doing. The five add up to a
        // little less than the whole, and the remainder - decoding registers
        // into viewport, blend and fetch state, and building the per-draw
        // vectors - is real work too; it is left as the gap rather than given a
        // timer of its own, because a timer around a hundred-nanosecond region
        // measures mostly the clock.
        std::printf("      gathering: %.2f ms vertex, %.2f ms texture, %.2f ms "
                    "constants, %.2f ms shader, %.2f ms primitive\n",
                    m_vertex_ns / 1e6 / frames, m_texture_ns / 1e6 / frames,
                    m_constants_ns / 1e6 / frames, m_shader_ns / 1e6 / frames,
                    m_primitive_ns / 1e6 / frames);
        std::printf("      per frame: %.2f MB of vertex data, %.2f Mtexel "
                    "bound of which %.2f unpacked; texture cache %llu hit / "
                    "%llu miss, shader cache %llu hit / %llu miss\n",
                    m_vertex_bytes / 1048576.0 / frames,
                    m_texture_texels / 1e6 / frames,
                    m_texture_texels_decoded / 1e6 / frames,
                    static_cast<unsigned long long>(m_texture_hits),
                    static_cast<unsigned long long>(m_texture_misses),
                    static_cast<unsigned long long>(m_shader_hits),
                    static_cast<unsigned long long>(m_shader_misses));
        // The submitting half, broken down the same way. "N ms building and
        // submitting" names a half, not a cause, and the candidates for it -
        // a memcmp over every bound texel, a pipeline compile, a per-draw
        // descriptor allocation - are indistinguishable from the code.
        std::printf("      submitting: %.2f ms pipeline (%llu built, %llu "
                    "reused), %.2f ms shader module (%llu), %.2f ms texture "
                    "compare (%.1f MB), %.2f ms texture upload (%llu up / "
                    "%llu kept), %.2f ms descriptor, %.2f ms arena (%.1f MB), "
                    "%.2f ms record, %.2f ms gpu (%.2f executing), %.2f ms "
                    "readback, %.2f ms "
                    "targets\n",
                    m_pipeline_ns / 1e6 / frames,
                    static_cast<unsigned long long>(m_pipelines_built),
                    static_cast<unsigned long long>(m_pipelines_reused),
                    m_module_ns / 1e6 / frames,
                    static_cast<unsigned long long>(m_modules_built),
                    m_texcmp_ns / 1e6 / frames,
                    m_texcmp_bytes / 1048576.0 / frames,
                    m_texup_ns / 1e6 / frames,
                    static_cast<unsigned long long>(m_textures_uploaded),
                    static_cast<unsigned long long>(m_textures_kept),
                    m_descriptor_ns / 1e6 / frames, m_arena_ns / 1e6 / frames,
                    m_arena_bytes / 1048576.0 / frames,
                    m_record_ns / 1e6 / frames, m_gpu_wait_ns / 1e6 / frames,
                    m_gpu_exec_ns / 1e6 / frames,
                    m_readback_ns / 1e6 / frames, m_target_ns / 1e6 / frames);
        std::printf("      vertex buffers: %llu read from guest memory, %llu "
                    "re-read(s) avoided within a frame\n",
                    static_cast<unsigned long long>(m_vertex_reads),
                    static_cast<unsigned long long>(m_vertex_reuses));
    }

private:
    void report(const std::string& error) const {
        if (!error.empty()) std::printf("  [gpu] %s\n", error.c_str());
        std::printf("  frame render: %u of %u draw(s)\n", m_stats.draws_rendered,
                    m_stats.draws_submitted);
        if (m_stats.passes > 1)
            std::printf("    frame has %u pass(es); presented pass %d (%s); "
                        "%u draw(s) belong to a surface other than it\n",
                        m_stats.passes, m_stats.presented_pass,
                        m_stats.presented_from_front_buffer
                            ? "named by the front buffer"
                            : "guessed from the surface width",
                        m_stats.draws_in_other_passes);
        if (m_stats.passes_continued != 0)
            std::printf("    %u pass(es) carried on from the one before, EDRAM "
                        "intact across the resolve that split them\n",
                        m_stats.passes_continued);
        if (m_stats.resolved_sources != 0)
            std::printf("    %u texture slot(s) sampled another pass's resolved "
                        "output, %u of them a feedback buffer (the pass's own "
                        "previous result)\n",
                        m_stats.resolved_sources, m_stats.feedback_sources);
        if (m_stats.textures_bound != 0 || m_stats.texture_placeholders != 0)
            std::printf("    %u texture(s) bound, %u fell back to the "
                        "placeholder\n",
                        m_stats.textures_bound, m_stats.texture_placeholders);
        // Every one of these is a reason the picture may be missing something.
        if (m_stats.no_shader != 0)
            std::printf("    %u draw(s) had no shader bound\n",
                        m_stats.no_shader);
        if (m_stats.shader_parse_failed != 0)
            std::printf("    %u draw(s) had a shader that would not translate"
                        "\n",
                        m_stats.shader_parse_failed);
        if (m_stats.no_vertex_buffer != 0)
            std::printf("    %u draw(s) named no usable vertex buffer\n",
                        m_stats.no_vertex_buffer);
        if (m_stats.unsupported_primitive != 0)
            std::printf("    %u draw(s) used a primitive with no host form\n",
                        m_stats.unsupported_primitive);
        if (m_stats.rectangles_completed != 0)
            std::printf("    %u rectangle list draw(s) completed (%u by the "
                        "geometry stage, %u on the CPU)\n",
                        m_stats.rectangles_completed,
                        m_stats.rectangles_completed -
                            m_stats.rectangles_completed_on_cpu,
                        m_stats.rectangles_completed_on_cpu);
        if (m_stats.point_sprites != 0)
            std::printf("    %u point list draw(s) expanded into sprites by "
                        "the geometry stage\n",
                        m_stats.point_sprites);
        if (m_stats.approximate_primitive != 0)
            std::printf("    %u draw(s) needed a geometry stage the device does "
                        "not have - a rectangle list loses a triangle, a point "
                        "list is drawn one pixel wide\n",
                        m_stats.approximate_primitive);
    }

    guest_memory* m_memory;
    gpu::vulkan_backend m_backend;
    std::unique_ptr<gpu::frame_renderer> m_renderer;
    gpu::frame_stats m_stats;
    std::vector<uint8_t> m_pixels;
    std::chrono::steady_clock::duration m_render_time{};
    uint64_t m_frames_rendered{0};
    uint64_t m_assemble_us{0};
    uint64_t m_submit_us{0};
    uint64_t m_draws_total{0};
    // The gathering half, broken down. Summed in nanoseconds because the
    // individual spans are far below a microsecond and rounding each one down
    // would report the numerous cheap ones as costing nothing at all.
    uint64_t m_vertex_ns{0};
    uint64_t m_texture_ns{0};
    uint64_t m_constants_ns{0};
    uint64_t m_shader_ns{0};
    uint64_t m_primitive_ns{0};
    uint64_t m_vertex_bytes{0};
    uint64_t m_texture_texels{0};
    uint64_t m_texture_texels_decoded{0};
    uint64_t m_texture_hits{0};
    uint64_t m_texture_misses{0};
    uint64_t m_shader_hits{0};
    uint64_t m_shader_misses{0};
    // The submitting half, broken down. See vulkan_backend::submit_profile.
    uint64_t m_pipeline_ns{0};
    uint64_t m_pipelines_built{0};
    uint64_t m_pipelines_reused{0};
    uint64_t m_module_ns{0};
    uint64_t m_modules_built{0};
    uint64_t m_texcmp_ns{0};
    uint64_t m_texcmp_bytes{0};
    uint64_t m_texup_ns{0};
    uint64_t m_textures_uploaded{0};
    uint64_t m_textures_kept{0};
    uint64_t m_descriptor_ns{0};
    uint64_t m_arena_ns{0};
    uint64_t m_arena_bytes{0};
    uint64_t m_record_ns{0};
    uint64_t m_gpu_wait_ns{0};
    uint64_t m_gpu_exec_ns{0};
    uint64_t m_readback_ns{0};
    uint64_t m_target_ns{0};
    uint64_t m_vertex_reads{0};
    uint64_t m_vertex_reuses{0};
    bool m_started{false};
    bool m_failed{false};
    bool m_wants_pixels{true};
    uint32_t m_front_buffer{0};
    // The picture's size as VdSwap stated it. Zero until the first swap, which
    // is what makes frame_size() fall back to deriving it.
    uint32_t m_display_width{0};
    uint32_t m_display_height{0};
    bool m_windowed{false};
    bool m_quit{false};
    double m_target_fps{0.0};
    // Which ports are being driven by the keyboard rather than a pad. Only port
    // 0 ever is, but it is per port so the trace cannot label the wrong one.
    bool m_port_on_keyboard[kMaxPorts]{true, false, false, false};
    // The last state traced for each port, so only changes are printed.
    struct traced {
        uint16_t buttons{0xFFFF};
        int lx{999};
        int ly{999};
        int rx{999};
        int ry{999};
        bool connected{false};
    };
    traced m_traced[kMaxPorts]{};
    // What SDL last reported about the devices themselves, so trace_devices()
    // prints a line when it changes rather than every frame. -1 is "not asked
    // yet", so the first sample always says something.
    int m_traced_pads{-1};
    int m_traced_focus{-1};
    uint64_t m_present_frame{0};
    const gpu::text_panel* m_panel{nullptr};
    // The arcade surround, and everything it is built from. The bitmap is the
    // size of the whole surface and is repainted only when its signature moves,
    // so a run that is not changing costs one image-to-image copy a frame and
    // no CPU at all - see cabinet.h and vulkan_backend::set_surround.
    gpu::cabinet_surround m_cabinet;
    gpu::cabinet_title m_cabinet_title;
    uint64_t m_cabinet_signature{0};
    bool m_cabinet_reported{false};
    // The frame-rate readout. `m_rate_shown` is what is currently uploaded, as
    // a whole number, so the bitmap is rebuilt when the number changes and not
    // sixty times a second; `m_rate_key` folds in where it is being drawn, so a
    // resized window moves it even when the number has not moved.
    std::vector<uint8_t> m_rate_pixels;
    std::chrono::steady_clock::time_point m_rate_since{};
    uint32_t m_rate_frames{0};
    uint32_t m_rate_shown{0};
    uint64_t m_rate_key{0};
    uint32_t m_rate_width{0};
    uint32_t m_rate_height{0};
    int32_t m_rate_x{0};
    int32_t m_rate_y{0};
    bool m_rate_reported{false};
    // The equaliser: the analysis, and the bitmap it is drawn into. The bitmap
    // is a member so a frame does not allocate one.
    gpu::audio_spectrum m_spectrum;
    std::vector<uint8_t> m_meter_pixels;
    // The size the window was actually created at, in pixels, and so the size of
    // the swapchain that follows it. The system page is placed against this
    // rather than against the title's own resolution: they can differ, and a
    // page centred on the wrong one is off. Set by fit_window_size() from the
    // first frame's own resolution; the mode's size until then, which is what a
    // run with no window keeps.
    uint32_t m_window_width{1280};
    uint32_t m_window_height{720};
    // The same default as render()'s, so the first page built before any frame
    // has been sized is built for a plausible surface rather than for nothing.
    // Zero until a frame has been sized or a window opened: the blade reads that
    // as "not known yet" and sizes its page against the resolution the title
    // says it is presenting instead of against a guess.
    uint32_t m_overlay_width{0};
    uint32_t m_overlay_height{0};
    // By what whole-number factor the frame was reduced to reach that, so the
    // diagnostic can say whether the picture is the title's own pixels.
    uint32_t m_window_reduction{1};
    // How many pixels of the window are the frame of flat colour around the
    // picture. Part of the window's size, never part of the picture's - see
    // fit_window_size().
    uint32_t m_border{0};
    // Which display mode the window is in, and whether the swapchain still
    // matches it. A mode change resizes the surface, which the swapchain only
    // discovers when it next tries to use it - so the change is recorded here
    // and acted on at the top of the next frame, once, whether it was noticed
    // by the window manager's event or by the present that failed.
    display_mode m_display_mode{display_mode::windowed};
    bool m_surface_changed{false};
    // Presented frames waited out for one with draws in it, so the window can be
    // opened at the size the title renders. See render().
    uint32_t m_frames_awaiting_size{0};
    static constexpr uint32_t kMaxFramesAwaitingSize = 60;
    // One scripted-input spec per port, parsed once at construction.
    fake_input m_fake[kMaxPorts]{
        parse_fake_input("WHITTY_FAKE_INPUT"),
        parse_fake_input("WHITTY_FAKE_INPUT_P2"),
        parse_fake_input("WHITTY_FAKE_INPUT_P3"),
        parse_fake_input("WHITTY_FAKE_INPUT_P4"),
    };
    std::mutex m_input_mutex;
    // One snapshot per port, written on the window's thread and read by the
    // title's threads under the lock.
    gamepad_state m_sampled[kMaxPorts]{};
#ifdef WHITTY_ANDROID
    // Last button mask seen per port on the Android read path, so a held stick
    // does not strobe the overlays. The desktop keeps this inside m_sampled;
    // Android reads straight from the Activity's snapshot and needs its own.
    uint16_t m_android_buttons[kMaxPorts]{};
#endif
    // The mask last handed to the kernel, so a change is announced once.
    // Starts at "port 0 only", which is what the kernel is seeded with.
    uint32_t m_published_ports{0x1};
    std::function<void(uint32_t)> m_ports_changed;
    std::chrono::steady_clock::time_point m_deadline{};
    // One counter per whole millisecond of gap between presented frames, so the
    // tail is countable rather than averaged away. See note_swap_interval.
    std::array<uint64_t, 1000> m_swap_ms{};
    std::chrono::steady_clock::time_point m_last_swap{};
    double m_worst_ms{0.0};
    uint64_t m_worst_swap{0};
    uint64_t m_swaps{0};
    // WHITTY_AUDIO_WAV's recording. NOT inside the SDL block below, and that is
    // the whole point: the recording is taken in submit_audio, before any
    // device and before the 5.1 fold, so it has nothing to do with SDL. Having
    // it declared there while start_audio_capture(), open_wav(), close_wav()
    // and the script tracer used it from outside meant the no-SDL build of this
    // file did not compile on ANY platform - fourteen errors, reproduced on
    // x86 with host clang, not an Android problem. It also means a build with
    // no window can still answer "what did the title actually submit", which is
    // the only measurement that separates a broken output path from a title
    // that genuinely made no sound.
    std::FILE* m_wav{nullptr};
    uint64_t m_wav_samples{0};
#ifdef WHITTY_HAVE_SDL
    SDL_Window* m_window{nullptr};
    SDL_Gamepad* m_gamepads[kMaxPorts]{};
    SDL_AudioStream* m_audio_stream{nullptr};
    // How many channels the device is being fed. Six where the hardware has
    // them, two otherwise - see open_audio for why this is not left to SDL.
    uint32_t m_output_channels{kAudioChannels};
    SDL_AudioStream* m_xma_stream{nullptr};
    uint32_t m_xma_rate{0};
    uint32_t m_xma_channels{0};
    uint64_t m_xma_queued{0};
    uint64_t m_xma_dropped{0};
    uint64_t m_audio_played{0};
    uint64_t m_audio_dropped{0};
    uint64_t m_audio_failed{0};
    int m_audio_queue_high{0};
    bool m_sdl_started{false};
#endif

public:
#ifdef WHITTY_ANDROID
    // --- the handheld's screen ---------------------------------------------
    //
    // Separate from the SDL block above rather than folded into it, and that is
    // a deliberate trade. The two share the shape - hand the page over, present,
    // notice the surface moved - and nothing else: there are no events to pump
    // here, no pads to enumerate, no window to resize, and the lifetime rule is
    // the opposite way round (Android takes the window away and expects an
    // immediate answer, where a desktop window is ours until we close it). A
    // shared function with two thirds of its body under an #ifdef would read as
    // one path and behave as two.

    // How the picture sits in the panel: " (presented 1:1, border 27 px at the
    // sides, 15 above)". It asks the same layout present() uses rather than
    // comparing the surface to the frame, so a surface bigger than the picture
    // is still reported 1:1 when the pixels inside it are the title's own.
    //
    // This is the line that answers "is what I am looking at the real pixels",
    // and on a handheld that is the whole question: 1280x720 into a 1334x750
    // panel is 1.042x, which every naive path resamples and this one does not.
    std::string describe_fit(uint32_t frame_width, uint32_t frame_height) const {
        if (frame_width == 0 || frame_height == 0) return {};
        gpu::present_pane shown[2]{};
        gpu::layout_present_panes(
            m_window_width, m_window_height, frame_width, frame_height,
            gpu::twin_panes_enabled_by_environment(), shown, false,
            gpu::plain_border().load(std::memory_order_relaxed),
            gpu::picture_width_cap().load(std::memory_order_relaxed));
        const auto pane_width = static_cast<uint32_t>(shown[0].width);
        const auto pane_height = static_cast<uint32_t>(shown[0].height);
        char how[80];
        if (pane_width == frame_width && pane_height == frame_height)
            std::snprintf(how, sizeof(how), "presented 1:1");
        else if (pane_width % frame_width == 0 &&
                 pane_height == frame_height * (pane_width / frame_width))
            std::snprintf(how, sizeof(how), "magnified %u:1",
                          pane_width / frame_width);
        else if (pane_width != 0 && frame_width % pane_width == 0 &&
                 pane_height != 0 && frame_height % pane_height == 0 &&
                 frame_width / pane_width == frame_height / pane_height)
            std::snprintf(how, sizeof(how), "reduced %u:1",
                          frame_width / pane_width);
        else
            std::snprintf(how, sizeof(how), "resampled to %ux%u", pane_width,
                          pane_height);
        char edge[80] = "";
        const uint32_t side = (m_window_width - pane_width) / 2;
        const uint32_t above = (m_window_height - pane_height) / 2;
        if (side != 0 || above != 0)
            std::snprintf(edge, sizeof(edge), ", %s %u px at the sides, %u above",
                          gpu::border_enabled_by_environment() ? "border"
                                                               : "black",
                          side, above);
        char out[176];
        std::snprintf(out, sizeof(out), " (%s%s)", how, edge);
        return out;
    }

    // Shows the frame that was just rendered, on the Activity's window.
    //
    // `frame_width`/`frame_height` are the size the title rendered at, which
    // the cabinet and the readout both need to work out where the picture
    // lands in the panel. They used to not be passed, because neither was
    // called from here.
    void present_android(uint32_t frame_width, uint32_t frame_height) {
        if (!m_backend.has_display()) return;
        // The same two the desktop path does, in the same order.
        refresh_cabinet(frame_width, frame_height);
        refresh_rate_readout(frame_width, frame_height);
        // The system page, handed over before presenting. The backend compares
        // the pixels with what it already holds, so a page held open costs the
        // same as showing nothing.
        if (m_panel != nullptr && !m_panel->empty()) {
            int32_t panel_x = 0;
            int32_t panel_y = 0;
            if (m_panel->placement(m_window_width, m_window_height, panel_x,
                                   panel_y))
                m_backend.set_overlay_panel(m_panel->width(), m_panel->height(),
                                            panel_x, panel_y, m_panel->rgba());
        } else {
            m_backend.set_overlay_panel(0, 0, 0, 0, {});
        }
        // Android destroys the window on the Activity's thread as soon as it
        // has handled APP_CMD_TERM_WINDOW, and a present against a destroyed
        // window is a use-after-free inside the driver. The lock is what makes
        // that impossible: the Activity's release takes the same one and
        // therefore waits for this present to finish.
        std::string present_error;
        whitty_android_present_lock();
        const bool alive = whitty_android_window_alive() != 0;
        const bool ok = alive ? m_backend.present(present_error) : true;
        whitty_android_present_unlock();
        if (!alive) {
            // Backgrounded. The run stops the same way closing a desktop
            // window stops it, so the report still reaches logcat.
            m_quit = true;
            return;
        }
        if (!ok) {
            std::printf("  [gpu] present failed: %s\n", present_error.c_str());
            m_failed = true;
            return;
        }
        // The surface changed shape under the swapchain - a rotation, or the
        // system bars coming and going. Rebuilt here rather than reported,
        // because there is no window manager to ask: the surface states its own
        // extent on Android, so resize_display's arguments are only a fallback.
        if (!m_backend.display_out_of_date()) return;
        std::string error;
        if (!m_backend.resize_display(m_window_width, m_window_height, error)) {
            if (error != "the surface has no area")
                std::printf("  [gpu] could not rebuild the swapchain: %s\n",
                            error.c_str());
            return;
        }
            // A rebuilt swapchain has thrown away the surround and the
            // readout, so the caches that decide whether to re-offer them are
            // now describing something the backend no longer holds. Cleared
            // here rather than in each of them, because this is the one place
            // that knows a rebuild happened. Without it the cabinet stayed
            // missing until the score table next changed, which looked exactly
            // like a cabinet that had failed to build.
            m_cabinet_signature = 0;
            m_rate_key = 0;
        const uint32_t was_width = m_window_width;
        const uint32_t was_height = m_window_height;
        m_window_width = m_backend.display_width();
        m_window_height = m_backend.display_height();
        m_overlay_width = m_window_width;
        m_overlay_height = m_window_height;
        if (m_window_width != was_width || m_window_height != was_height)
            std::printf("  [gpu] surface now %ux%u%s\n", m_window_width,
                        m_window_height,
                        describe_fit(m_display_width, m_display_height).c_str());
    }
#endif

    // Set when the window was closed, so the run can stop with it.
    bool quit_requested() const noexcept {
#ifdef WHITTY_ANDROID
        // The Activity's own answer as well as this one: the window can go away
        // between two presents, and the run should end then rather than at the
        // next frame that happens to be rendered.
        if (whitty_android_quit_requested() != 0) return true;
#endif
        return m_quit;
    }
};
#endif
} // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::fprintf(stderr,
                     "usage: run_title <default.xex|package> "
                     "[game-directory|package]\n"
                     "  A downloaded title is one STFS package holding both\n"
                     "  the executable and its data; give it as the only\n"
                     "  argument and both come from there.\n"
                     "  env WHITTY_STOP_ON_UNIMPLEMENTED=1 stops at the first\n"
                     "  unimplemented kernel import instead of continuing.\n");
        return 1;
    }
    // A downloaded title ships as a single signed package holding both the
    // executable and every file it opens. Trying that first means the usual
    // invocation is just the package - no extraction step, and no chance of
    // running one title's executable against another title's data, which
    // presents as the title failing a content check rather than as a mistake
    // on the command line.
    std::shared_ptr<stfs_package> game_package;
    std::vector<uint8_t> file;
    {
        auto package = std::make_shared<stfs_package>();
        std::string package_error;
        if (package->open(argv[1], package_error)) {
            const stfs_entry* executable = package->find("default.xex");
            if (executable == nullptr) {
                std::fprintf(stderr, "package holds no default.xex\n");
                return 1;
            }
            file.resize(static_cast<std::size_t>(executable->size));
            package->read(*executable, file.data(),
                          static_cast<uint32_t>(file.size()), 0);
            game_package = std::move(package);
        } else {
            file = read_file(argv[1]);
            // A package can also be the data argument, alongside a loose
            // executable.
            if (argc > 2) {
                auto data = std::make_shared<stfs_package>();
                if (data->open(argv[2], package_error))
                    game_package = std::move(data);
            }
        }
    }
    if (file.empty()) {
        std::fprintf(stderr, "cannot read %s\n", argv[1]);
        return 1;
    }

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::fprintf(stderr, "parse_xex: %s\n", error.c_str());
        return 1;
    }

    guest_memory memory;
    // Said before the attempt and again after it, because on a machine this has
    // never run on the 4 GiB reservation is the single thing most likely to
    // fail, and the two facts that decide it - the host's page size and whether
    // the reservation landed - are worth being the first two lines of the log
    // rather than something to work out from a failure message.
    std::printf("  host pages are %zu bytes; reserving %.1f GiB of guest "
                "address space\n",
                host_page_size(), double(kAddressSpaceSize) / (1024.0 * 1024.0 * 1024.0));
    std::fflush(stdout);
    if (!memory.initialize(error)) {
        std::fprintf(stderr, "memory: %s\n", error.c_str());
        return 1;
    }
    std::printf("  guest address space reserved at %p\n",
                static_cast<const void*>(memory.host_unchecked(0)));
    xex_image_load_result loaded;
    if (!load_xex_image(file.data(), file.size(), info, memory, loaded, error)) {
        std::fprintf(stderr, "load: %s\n", error.c_str());
        return 1;
    }
    // Indirect calls (function pointers, vtables, the CRT initializer table
    // Alien Breed's startup walks) resolve through a table XenonRecomp expects
    // right past the mapped image - see ppc_function_table.h.
    if (!build_ppc_function_table(memory, error)) {
        std::fprintf(stderr, "function table: %s\n", error.c_str());
        return 1;
    }

    guest_heap heap;
    guest_heap small_page_heap;
    guest_heap physical;
    if (!heap.initialize(memory, kHeapBase, kHeapSize, error) ||
        !small_page_heap.initialize(memory, kSmallHeapBase, kSmallHeapSize,
                                    error) ||
        !physical.initialize(memory, kPhysBase, kPhysSize, error)) {
        std::fprintf(stderr, "heap: %s\n", error.c_str());
        return 1;
    }
    // The bottom of physical memory, below anything the heap hands out. The
    // GPU writes its progress there - the ring read-back pointer and the
    // system command buffer identifier both land in the first page - and those
    // writes come from hardware, not from an allocation, so nothing else would
    // ever commit it.
    if (!memory.commit(kPhysicalAliasBases[0], kPhysBase - kPhysicalAliasBases[0],
                       error)) {
        std::fprintf(stderr, "physical low memory: %s\n", error.c_str());
        return 1;
    }
    if (!memory.commit(kStackBase, kStackSize, error)) {
        std::fprintf(stderr, "stack: %s\n", error.c_str());
        return 1;
    }

    // The memory-mapped hardware the title reaches with plain loads and
    // stores, no kernel call in between. The Xenos register window
    // (0x7FC80000) is where it submits PM4 command buffers by writing
    // CP_RB_WPTR; the XMA decoder window (0x7FEA0000) is where its audio
    // startup finds the hardware context array.
    gpu::mmio_registers gpu_registers;
    apu::xma_registers xma_registers;
    gpu::install_mmio_registers(&gpu_registers);
    apu::install_xma_registers(&xma_registers);

    // Pre-baked audio: a cache directory ships PCM instead of decoding XMA
    // live, which is what makes an FFmpeg-free Android build possible - see
    // apu/xma_pcm_cache.h. RETRO_XMA_CACHE_DIR names it explicitly; failing
    // that, `<game-directory>/xma_cache` - so a device push of the game
    // directory carries the cache with it and Android needs no extra env var
    // (there is no convenient way to set one for a NativeActivity). Desktop
    // baking is opt-in only, via RETRO_XMA_BAKE_DIR.
    apu::xma_pcm_cache xma_cache;
    apu::xma_pcm_bake_writer xma_bake_writer;
    std::string cache_dir;
    if (const char* explicit_dir = std::getenv("RETRO_XMA_CACHE_DIR")) {
        cache_dir = explicit_dir;
    } else if (argc > 2) {
        cache_dir = std::string(argv[2]) + "/xma_cache";
    }
    if (!cache_dir.empty()) {
        std::string cache_error;
        if (xma_cache.load(cache_dir, cache_error)) {
            std::printf("  xma: loaded %zu cached sounds from %s\n",
                        xma_cache.entry_count(), cache_dir.c_str());
            apu::install_xma_pcm_cache(&xma_cache);
        } else if (!cache_error.empty()) {
            std::fprintf(stderr, "xma: cache at %s not loaded: %s\n",
                        cache_dir.c_str(), cache_error.c_str());
        }
    }
    if (const char* bake_dir = std::getenv("RETRO_XMA_BAKE_DIR")) {
        std::string bake_error;
        if (xma_bake_writer.open(bake_dir, bake_error)) {
            std::printf("  xma: baking new sounds into %s (%zu already cached)\n",
                        bake_dir, xma_bake_writer.entry_count());
            apu::install_xma_pcm_bake_writer(&xma_bake_writer);
        } else {
            std::fprintf(stderr, "xma: cannot bake to %s: %s\n", bake_dir,
                        bake_error.c_str());
        }
    }

    kernel_state kernel(memory, heap);
    kernel.set_small_page_heap(&small_page_heap);
    kernel.set_physical_heap(&physical);
    kernel.set_default_stack_size(info.default_stack_size);
    if (!apu::initialize_xma_contexts(kernel, xma_registers)) {
        std::fprintf(stderr, "xma: cannot allocate the hardware context array\n");
        return 1;
    }
    kernel.set_xex_system_flags(info.system_flags);
    // The TLS template, for the per-thread blocks KPCR::tls_ptr points at.
    if (info.has_tls_info)
        kernel.set_tls_info(info.tls_raw_data_address, info.tls_data_size,
                            info.tls_raw_data_size);
    // The XEX execution-info block lives in the container header, which the
    // loader does not map, so materialise a guest copy for XamGetExecutionId.
    const uint32_t execution_info = heap.allocate(0x18, 8);
    if (execution_info != 0) {
        memory.zero_block(execution_info, 0x18);
        memory.write_u32(execution_info + 0x00, info.media_id);
        memory.write_u32(execution_info + 0x04, info.version);
        memory.write_u32(execution_info + 0x08, info.base_version);
        memory.write_u32(execution_info + 0x0C, info.title_id);
        memory.write_u8(execution_info + 0x10, info.platform);
        memory.write_u8(execution_info + 0x11, info.executable_table);
        memory.write_u8(execution_info + 0x12, info.disc_number);
        memory.write_u8(execution_info + 0x13, info.disc_count);
        kernel.set_execution_info_address(execution_info);
    }
    kernel.set_title_id(info.title_id);
    // The XEX resource table, which XexGetModuleSection resolves. A title looks
    // its embedded data up by resource name - Space Giraffe reads "Eng_UTF8"
    // before it draws anything - and those names are nowhere in the PE.
    kernel.set_module_resources(info.resources);

    // What the arcade cabinet's info panel will say. Filled in here, beside the
    // rest of the title's own data, because every field on it is read out of
    // the title or out of this machine's profile and nothing on it is invented
    // - see cabinet.h. Keeping the reading in one place is what makes that
    // checkable rather than a claim.
    gpu::cabinet_title cabinet_info;
    cabinet_info.title_id = info.title_id;

    // The title's own achievement definitions, out of the SPA resource inside
    // its XEX. This is the only authoritative list of what the title has - an
    // achievements screen showing anything else would be showing our guesses -
    // so it is read here, from the mapped image, before anything can ask.
    {
        xdbf_file spa;
        const uint8_t* image = static_cast<const uint8_t*>(
            memory.host(info.image_base, loaded.image_size));
        std::string spa_error;
        if (image != nullptr &&
            load_title_spa(info, image, loaded.image_size, info.image_base, spa,
                           spa_error, xdbf_language::english)) {
            kernel.set_title_achievements(spa.achievements());
            // And the title's leaderboards, out of the same resource. A board
            // id means nothing without this: it is the only place the title
            // says which boards it has, what they are called, and which
            // property each one ranks on.
            kernel.set_title_leaderboards(spa.leaderboards());
            // The title's own NAME, which is string 0x8000 of its string table
            // - the id Xenia calls kXdbfIdTitle and reads title() out of. It is
            // the only place a title states what it is called; there is no such
            // field in the XEX header or in an STFS package, so a name from
            // anywhere else would be one we had made up. English first, because
            // that is the language the runtime resolves everything else in, and
            // then the resource's own default for a release that carries no
            // English string at all.
            cabinet_info.name = spa.string(xdbf_language::english, 0x8000);
            if (cabinet_info.name.empty() && spa.default_language() != 0)
                cabinet_info.name = spa.string(spa.default_language(), 0x8000);
            cabinet_info.achievements =
                static_cast<uint32_t>(spa.achievements().size());
            cabinet_info.gamerscore = spa.total_gamerscore();
            for (const xdbf_leaderboard& board : spa.leaderboards())
                if (board.is_leaderboard() && !board.name.empty())
                    cabinet_info.leaderboards.push_back(board.name);
            const std::string named =
                cabinet_info.name.empty()
                    ? std::string(", no title string")
                    : ", \"" + cabinet_info.name + "\"";
            std::printf(
                "whitty_xenon: %zu achievement(s) defined, %u gamerscore, "
                "%zu leaderboard(s)%s\n",
                spa.achievements().size(), spa.total_gamerscore(),
                spa.leaderboards().size(), named.c_str());
            // WHITTY_DUMP_ACHIEVEMENTS=1 prints this title's achievement list
            // and exits before anything else runs, for a launcher's own
            // achievements screen to shell out to rather than duplicating the
            // XDBF/SPA parse and the image-decode step it depends on. One
            // line per achievement, tab-separated, id first because it is the
            // only field guaranteed free of the delimiter.
            if (const char* dump = std::getenv("WHITTY_DUMP_ACHIEVEMENTS");
                dump != nullptr && dump[0] == '1') {
                for (const xdbf_achievement& one : spa.achievements()) {
                    const bool unlocked =
                        kernel.profile().is_unlocked(info.title_id, one.id);
                    const std::string& shown_description =
                        unlocked ? one.description : one.locked_description;
                    std::printf("ACH\t%u\t%s\t%s\t%u\t%d\n", one.id,
                               one.name.c_str(), shown_description.c_str(),
                               one.gamerscore, unlocked ? 1 : 0);
                }
                std::fflush(stdout);
                std::_Exit(0);
            }
        } else {
            // Not fatal, and not silent: a title with no SPA has no
            // achievements to show, and that must not read as "none unlocked".
            std::printf("whitty_xenon: no achievement metadata (%s)\n",
                        spa_error.c_str());
        }
    }

    // The one part of the cabinet's panel that is NOT read out of the game:
    // publisher, developer and year, which no XEX, no SPA and no STFS package
    // carries. They come from a table a person filled in by hand
    // (cabinet_facts.h), they are shown under a heading that says so, and a
    // title with no entry gets no such rows at all rather than a guess. The
    // table currently has no entries, so this currently finds nothing for every
    // title - which is the correct answer until somebody types one in, and is
    // said out loud so it is not mistaken for a bug.
    if (const gpu::cabinet_fact* fact =
            gpu::cabinet_facts_for(info.title_id)) {
        cabinet_info.publisher = fact->publisher;
        cabinet_info.developer = fact->developer;
        cabinet_info.year = fact->year;
        std::printf("whitty_xenon: cabinet facts for %08X: %s%s%s (hand "
                    "entered, not read from the title)\n",
                    info.title_id,
                    cabinet_info.publisher.empty() ? "" : fact->publisher,
                    cabinet_info.year.empty() ? "" : " ", fact->year);
    } else {
        std::printf("whitty_xenon: no hand-entered cabinet facts for %08X; the "
                    "panel shows no publisher or year\n",
                    info.title_id);
    }
    // And what each control DOES in this title, from the same authored table.
    // The runtime knows which physical control is wired to which Xbox button -
    // that is sample_pad(), and it is the same for every title on the console -
    // but nothing anywhere knows that a stick means "fire". A title with no
    // entry gets a pad with no labels, which is most of them.
    cabinet_info.controls = gpu::cabinet_controls_for(info.title_id);
    std::printf("whitty_xenon: %zu control(s) authored for %08X%s\n",
                cabinet_info.controls.size(), info.title_id,
                cabinet_info.controls.empty()
                    ? "; the pad is drawn without labels"
                    : "");

    // The signed-in profile, which for an XBLA title is its save game: it
    // writes its progress into a title-specific profile setting and reads it
    // back on the next launch. The store has to be somewhere that survives the
    // process, so it lives in the user's data directory unless told otherwise
    // with WHITTY_PROFILE. One file holds every title's settings, as one
    // profile on a console does.
    {
        std::string profile_path;
        if (const char* value = std::getenv("WHITTY_PROFILE")) {
            profile_path = value;
        } else {
            const char* data_home = std::getenv("XDG_DATA_HOME");
            const char* home = std::getenv("HOME");
            if (data_home != nullptr && *data_home != 0)
                profile_path = std::string(data_home) + "/whitty_xenon";
            else if (home != nullptr && *home != 0)
                profile_path = std::string(home) + "/.local/share/whitty_xenon";
            if (!profile_path.empty()) profile_path += "/profile.bin";
        }
        kernel.profile().set_path(profile_path);
        if (!kernel.profile().load()) {
            // A file that exists but cannot be read must not be silently
            // treated as an empty profile: saving over it would destroy it.
            std::fprintf(stderr,
                         "whitty_xenon: profile %s is unreadable; refusing to "
                         "overwrite it - move it aside or set WHITTY_PROFILE\n",
                         profile_path.c_str());
            return 1;
        }
        std::printf("whitty_xenon: profile %s (%zu setting(s)%s)\n",
                    profile_path.empty() ? "(none)" : profile_path.c_str(),
                    kernel.profile().setting_count(),
                    kernel.profile().loaded_from_file() ? "" : ", new");
    }

    // What this machine has earned against the running title: which
    // achievements are unlocked and the local high-score table. Both live in the
    // profile above, keyed by title id, so nothing extra has to be opened and two
    // titles cannot collide.
    {
        uint32_t earned_score = 0;
        for (const xdbf_achievement& achievement : kernel.title_achievements())
            if (kernel.profile().is_unlocked(info.title_id, achievement.id))
                earned_score += achievement.gamerscore;
        std::printf("whitty_xenon: earned %zu achievement(s), %uG, %zu score(s)\n",
                    kernel.profile().unlock_count(info.title_id), earned_score,
                    kernel.profile().scores(info.title_id).size());

        // WHITTY_UNLOCK=<id>[,<id>...] earns achievements at startup, and
        // WHITTY_SCORE=<board>:<score>[,...] puts scores on the table. Both go
        // through exactly the calls the kernel handlers use, so what they
        // exercise is the real path and not a second one beside it - they exist
        // because a title only earns an achievement by playing well enough, and
        // that cannot be scripted.
        if (const char* unlock = std::getenv("WHITTY_UNLOCK")) {
            const char* at = unlock;
            while (*at != 0) {
                char* end = nullptr;
                const unsigned long id = std::strtoul(at, &end, 10);
                if (end == at) break;
                bool already = false;
                const bool stored = kernel.profile().unlock_achievement(
                    info.title_id, static_cast<uint16_t>(id),
                    current_filetime(), &already);
                std::printf("  [achievement] %lu %s\n", id,
                            already  ? "was already unlocked"
                            : stored ? "unlocked and saved"
                                     : "unlocked but NOT saved");
                at = (*end == ',') ? end + 1 : end;
            }
        }
        if (const char* scores = std::getenv("WHITTY_SCORE")) {
            const char* at = scores;
            while (*at != 0) {
                char* end = nullptr;
                const unsigned long board = std::strtoul(at, &end, 10);
                if (end == at) break;
                uint64_t value = 0;
                if (*end == ':') value = std::strtoull(end + 1, &end, 10);
                bool placed = false;
                const bool stored = kernel.profile().add_score(
                    info.title_id, static_cast<uint32_t>(board), value,
                    current_filetime(), "WHITTY", &placed);
                std::printf("  [score] board %lu %llu %s\n", board,
                            static_cast<unsigned long long>(value),
                            !placed  ? "did not place"
                            : stored ? "recorded and saved"
                                     : "recorded but NOT saved");
                at = (*end == ',') ? end + 1 : end;
            }
        }
        // WHITTY_BLADE=achievements|scores raises the system's own page at
        // start-up, the same call XamShowAchievementsUI makes. It exists for the
        // same reason WHITTY_UNLOCK does: the page is normally reached by
        // playing to a title's own menu, and a picture of it is the only way to
        // check that a layout reads well - which a test on the text cannot say.
        if (const char* page = std::getenv("WHITTY_BLADE")) {
            const bool scores = page[0] == 's' || page[0] == 'S' ||
                                page[0] == '2';
            kernel.open_system_blade(scores
                                         ? kernel_state::blade_page_scores
                                         : kernel_state::blade_page_achievements);
            std::printf("  [blade] opened on the %s page\n",
                        scores ? "scores" : "achievements");
        }
    }

    // The title reads its assets from the game directory. It is reachable
    // under two device names, exactly as the console presents it and as Xenia
    // registers it: "game:" and "d:" (the disc). Alien Breed uses "d:" for
    // every one of its own paths, so mounting only "game:" makes every open
    // fail - and a title that cannot open a file goes on to read from the
    // invalid handle rather than stopping.
    if (game_package) {
        kernel.files().mount_package("game:", game_package);
        kernel.files().mount_package("d:", game_package);
    } else if (argc > 2) {
        kernel.files().mount("game:", argv[2]);
        kernel.files().mount("d:", argv[2]);
    }
    install_kernel(&kernel);

    // The GPU's command stream. The title writes PM4 packets into the ring it
    // handed over with VdInitializeRingBuffer and then advances CP_RB_WPTR,
    // which lands in the register window above; that is where the ring is
    // consumed and the read pointer reported back. Without this the title
    // spins in its own `db16cyc` wait loop forever, because from its point of
    // view the hardware has stalled and the ring never drains.
    gpu::command_processor command_processor(memory);
    gpu::ring_buffer_consumer ring(memory, command_processor);

    // Calling the routine the title registered with
    // VdSetGraphicsInterruptCallback. Both interrupt sources come through
    // here: source 0 is vblank, raised by the 60 Hz worker below, and source 1
    // is raised by an INTERRUPT packet in the command stream, which is how a
    // title asks to be told the GPU has reached a given point.
    //
    // The callback is ordinary guest code, so it needs what any guest thread
    // has - its own stack and a KPCR in r13 - and it must be PER HOST THREAD.
    // A command-stream interrupt runs on whichever guest thread submitted the
    // packet, and the title has several submitting at once; one shared stack
    // would have two of them building frames on top of each other, which shows
    // up as a crash that only reproduces in a fast build.
    struct interrupt_environment {
        uint32_t kpcr{0};
        uint32_t kthread{0};
        uint32_t stack_top{0};
    };
    std::mutex interrupt_setup_mutex;
    auto this_thread_interrupt_environment = [&]() -> interrupt_environment {
        thread_local interrupt_environment env;
        if (env.kpcr != 0) return env;
        const std::lock_guard<std::mutex> lock(interrupt_setup_mutex);
        constexpr uint32_t stack_size = 0x10000;
        const uint32_t stack_base = heap.allocate(stack_size, 0x1000);
        if (stack_base == 0) return env;
        const guest_thread_environment created = make_guest_thread_environment(
            kernel, kernel.next_thread_id(), stack_base + stack_size,
            stack_base, 0);
        env.kpcr = created.kpcr_address;
        env.kthread = created.kthread_address;
        env.stack_top = (stack_base + stack_size - 0x100) & ~0xFu;
        return env;
    };

    // Why an interrupt was not delivered, counted by reason. Every early return
    // below is a silent refusal to run guest code the title is waiting for, and
    // the symptom is identical for all of them - the title spins and presents
    // nothing - so the reason has to be recorded or the hang has no evidence at
    // all. Reported with the rest of the run summary.
    std::atomic<uint64_t> interrupts_delivered{0};
    std::atomic<uint64_t> interrupts_no_callback{0};
    std::atomic<uint64_t> interrupts_no_stack{0};
    std::atomic<uint64_t> interrupts_no_routine{0};
    // `cpu` is which of the console's six hardware threads the interrupt is
    // being delivered ON, and it is not bookkeeping: the routine reads it back
    // out of the KPCR and indexes per-processor state with it.
    //
    // Hydro Thunder's Direct3D does both things that depend on it. Its handler
    // clears bit (1 << cpu) of the acknowledgement mask the GPU is waiting on -
    // and the mask the GPU set was 4, meaning processor 2 - and the routine the
    // GPU posts for it to call (sub_822DE268) drops the completed submission
    // into a queue at dev + cpu*0x6C and signals that queue's event. Deliver
    // every interrupt as processor 0 and the acknowledgement clears a bit
    // nobody set, and the completion lands in a queue with nobody waiting on
    // it, so the submissions D3D deferred are never retired.
    //
    // Xenia does the same thing by a different route: EmulateCPInterruptDPC
    // calls XThread::SetActiveCpu(cpu), which writes the same KPCR field.
    auto dispatch_interrupt = [&](uint32_t source, uint32_t cpu) {
        const uint32_t callback = kernel.video().interrupt_callback;
        if (callback == 0) {
            ++interrupts_no_callback;
            return;
        }
        const interrupt_environment env = this_thread_interrupt_environment();
        if (env.kpcr == 0) {
            ++interrupts_no_stack;
            return;
        }
        uint8_t* base = memory.host_unchecked(0);
        PPCFunc* routine = PPC_LOOKUP_FUNC(base, callback);
        if (routine == nullptr) {
            ++interrupts_no_routine;
            return;
        }
        ++interrupts_delivered;
        // The environment is per host thread and reused, so the processor it
        // reports is set per delivery rather than at creation: the same host
        // thread carries interrupts for different processors, one after the
        // other, as the mask in each packet names them.
        memory.write_u8(env.kpcr + x_kpcr::current_cpu,
                        static_cast<uint8_t>(cpu));
        if (env.kthread != 0)
            memory.write_u8(env.kthread + x_kthread::current_cpu,
                            static_cast<uint8_t>(cpu));
        PPCContext ctx{};
        ctx.fpscr.loadFromHost(); // see the main thread's note below
        memory.write_u32(env.stack_top, 0);
        ctx.r1.u64 = env.stack_top;
        ctx.r13.u64 = env.kpcr;
        ctx.r3.u64 = source;
        ctx.r4.u64 = kernel.video().interrupt_callback_data;
        run_guest(routine, ctx, base);
    };
    command_processor.set_interrupt_handler(
        [&](uint32_t source, uint32_t cpu) { dispatch_interrupt(source, cpu); });

    // One GPU, several guest threads submitting to it. The console serialises
    // at the hardware; here the ring pointer, the command walk and the draw
    // list are ordinary objects, so they are serialised explicitly. The lock
    // is dropped for the interrupt callback the stream may raise - that runs
    // guest code, which can submit again.
    //
    // Recursive because the frame boundary now arrives from INSIDE the command
    // walk - the xe_swap packet VdSwap writes into the ring - and the swap
    // handler below takes this same lock for the case where a title has no ring
    // to put it in. Same thread, one lock, two nested holders.
    std::recursive_mutex ring_mutex;
    gpu_registers.set_write_pointer_handler([&](uint32_t write_pointer) {
        const std::lock_guard<std::recursive_mutex> lock(ring_mutex);
        const video_state& video = kernel.video();
        if (!video.ring_buffer_initialized) return;
        if (!ring.configured()) {
            ring.configure(video.ring_buffer_address, video.ring_buffer_size_log2);
            // Somewhere contiguous to reassemble a span that wraps past the
            // end of the ring; a packet is free to straddle the join.
            const uint32_t scratch =
                physical.allocate(ring.size_bytes(), 0x1000);
            if (scratch != 0) ring.set_scratch(scratch, ring.size_bytes());
        }
        if (video.read_pointer_writeback_enabled)
            ring.set_read_pointer_writeback(video.read_pointer_writeback_address);
        std::string ring_error;
        if (!ring.consume(write_pointer, ring_error))
            std::printf("  [ring] %s\n", ring_error.c_str());
        // WHITTY_TRACE_RING=1 prints every kick. Interleaved with the fence
        // trace it separates "the title stopped submitting" from "it submitted
        // and the stream did not contain what it was waiting for".
        static const bool trace_ring = [] {
            const char* value = std::getenv("WHITTY_TRACE_RING");
            return value != nullptr && value[0] == '1';
        }();
        if (trace_ring)
            std::printf("  [ring] wptr=%08X rptr=%08X\n", write_pointer,
                        ring.read_pointer());
    });

    // The frame boundary. Everything submitted since the last swap is one
    // complete frame; once it has been presented, none of it is needed again.
    // Without this the draw list grows for the lifetime of the process, and a
    // draw carries a snapshot of the whole register file - at this title's
    // draw rate that is hundreds of megabytes a second.
    // WHITTY_GPU_DUMP=N prints everything frame N handed the GPU. A title
    // reaches a steady state well after its first frame, so which frame is
    // asked for matters.
    //
    // IT TAKES A LIST: `WHITTY_GPU_DUMP=900,1200,2400` captures three frames in
    // ONE run. See frame_selection.h for what that is worth - the short version
    // is that asking for a second frame used to mean booting the title again,
    // and an afternoon's work cost 61 launches of which most differed from
    // another launch only in the number asked for.
    const char* dump_frame_env = std::getenv("WHITTY_GPU_DUMP");
    const std::vector<uint64_t> dump_frames =
        gpu::parse_frame_list(dump_frame_env);
    // One frame keeps every existing path and file name exactly as it was.
    const bool single_dump = dump_frames.size() <= 1;
    // Which of them have actually arrived. Written from the swap handler and
    // read by the end-of-run report, so it is atomic per entry rather than a
    // vector<bool> - and it exists because a capture that silently does not
    // appear is indistinguishable from a title that never reached the frame.
    // That has already cost a run once, when /tmp filled and the PPM could not
    // be written at all.
    std::unique_ptr<std::atomic<bool>[]> dump_frame_seen(
        new std::atomic<bool>[dump_frames.empty() ? 1 : dump_frames.size()]);
    for (std::size_t i = 0; i < dump_frames.size(); ++i)
        dump_frame_seen[i].store(false, std::memory_order_relaxed);
    // WHITTY_FRAME_PPM=path renders those frames and writes them out as
    // pictures. One frame writes exactly `path`; several write `path` with the
    // frame number folded in before the extension.
    const char* frame_ppm_path = std::getenv("WHITTY_FRAME_PPM");
    // WHITTY_RENDER_ALL=1 renders every frame rather than one. That is what
    // continuous rendering costs, and the only way to find out whether the
    // render path keeps up with the title.
    const char* render_all = std::getenv("WHITTY_RENDER_ALL");
    // WHITTY_FRAME_SEQUENCE=prefix writes each rendered frame as prefix_N.ppm,
    // so motion can be looked at without a window.
    const char* frame_sequence = std::getenv("WHITTY_FRAME_SEQUENCE");
#ifdef WHITTY_HAVE_VULKAN
    live_renderer renderer(memory);
    renderer.set_wants_pixels(frame_ppm_path != nullptr ||
                              frame_sequence != nullptr);
    // WHITTY_WINDOW=1 opens a window and shows every frame in it.
    if (const char* windowed = std::getenv("WHITTY_WINDOW"))
        renderer.set_windowed(windowed[0] == '1');
    renderer.start_audio_capture();
    // Before the guest runs, so a title that polls the ports during start-up
    // sees the pads that are plugged in. See open_input().
    renderer.open_input();
    // The console presents at 60. WHITTY_FPS overrides it; 0 is unlimited,
    // which is what a throughput measurement wants and a player does not.
    double target_fps = renderer.windowed() ? 60.0 : 0.0;
    // Geometry Wars 3 and Alien Breed ran at 30 on real hardware, unlike the
    // 60fps XBLA titles - the per-title default follows the console, not the
    // runtime's own default, and WHITTY_FPS still overrides any of this.
    if ((kernel.title_id() == 0x58411453 || kernel.title_id() == 0x58410964) &&
        target_fps > 30.0)
        target_fps = 30.0;
    if (const char* fps = std::getenv("WHITTY_FPS"))
        target_fps = std::strtod(fps, nullptr);
    renderer.set_frame_rate(target_fps);
    // The system blade's page and the controller it takes over while it is up.
    system_blade blade;
    renderer.set_system_panel(&blade.panel());
    // And the cabinet's info panel, from what was read out of the title above.
    renderer.set_cabinet_title(cabinet_info);
    kernel.set_input_provider([&](uint32_t user, gamepad_state& out) {
        renderer.set_frame_number(kernel.video().swap_count);
        const bool have = renderer.read_gamepad(user, out);
        // The guide owns the pad while it is showing, and only port 0's: the
        // system page belongs to the profile, which is port 0's, so a second
        // player's stick must not scroll somebody else's achievement list. A
        // port with no controller has nothing to take over either way.
        if (user == 0 && have) blade.consume_input(kernel, out);
        return have;
    });
    kernel.set_audio_sink([&](const float* samples, uint32_t count) {
        renderer.submit_audio(samples, count);
    });
    // WHITTY_XMA_BYPASS=1 plays the decoder's output on a stream of its own,
    // beside whatever the title mixes. That was how the music was first made
    // audible, before the hardware handshake worked; now the title reads the
    // decoded audio out of the output ring and mixes it itself, so leaving this
    // on plays everything twice. Kept because it separates "the decoder is
    // wrong" from "the handshake is wrong" in one run.
    if (const char* bypass = std::getenv("WHITTY_XMA_BYPASS")) {
        if (bypass[0] == '1')
            kernel.set_xma_sink([&](const int16_t* samples, uint32_t count,
                                    uint32_t rate, uint32_t channels) {
                renderer.submit_xma(samples, count, rate, channels);
            });
    }
    // Which ports the console reports a controller on, and which have a profile
    // signed in. These seed the notifications a title reads to discover both.
    //
    // The two masks are deliberately different once a second pad is attached.
    // There is exactly ONE local profile in this runtime, and it is port 0's, so
    // port 0 is the only port that can be signed in - which is also what Xenia
    // reports with one profile configured. A second pad is a second CONTROLLER,
    // not a second account: it is in the connected mask and not in the signed-in
    // one, and a title then takes whichever branch it takes for a player with a
    // pad and no profile. Claiming a profile for it would be a claim about a
    // saved game and an achievement list that do not exist.
    kernel.set_connected_ports(renderer.connected_ports());
    kernel.set_signed_in_ports(0x1);
    // Pads are plugged in and out while a game runs. The window's own thread
    // notices, and this is how the title finds out: the same notification a
    // console posts when a controller is connected or removed. Without it a
    // title that supports drop-in players never learns the pad arrived, however
    // faithfully XamInputGetState answers for it.
    renderer.set_ports_changed([&](uint32_t mask) {
        kernel.set_connected_ports(mask);
        kernel.broadcast_notification(notification_id::input_devices_changed,
                                      mask);
        std::printf("  [input] controllers on ports:%s%s%s%s\n",
                    (mask & 0x1) ? " 0" : "", (mask & 0x2) ? " 1" : "",
                    (mask & 0x4) ? " 2" : "", (mask & 0x8) ? " 3" : "");
        std::fflush(stdout);
    });
#endif
    // WHITTY_EXIT_AFTER_DUMP=1 ends the run as soon as the frame it was asked
    // for has been captured.
    //
    // The debug loop is "run until frame N, dump it, look at it", and everything
    // after the dump is the title playing on with nobody watching. It is most of
    // the run: the Geometry Wars gates reach their frame in about a second and
    // then run for the remaining twenty-four, and Jetpac at 60 fps reaches frame
    // 2700 at forty-five seconds of a seventy-five second run.
    //
    // Off by default, because the end-of-run report changes: it describes the
    // title at the captured frame rather than at the run limit, which is the
    // more useful statement for this loop and the wrong one for a run measuring
    // how far a title gets. The picture cannot change either way - the PPM is
    // written inside the swap, before this is read.
    const bool exit_after_dump = [] {
        const char* set = std::getenv("WHITTY_EXIT_AFTER_DUMP");
        return set != nullptr && set[0] == '1';
    }();
    std::atomic<bool> capture_done{false};
    kernel.video().swap_handler = [&]() {
        const std::lock_guard<std::recursive_mutex> lock(ring_mutex);
        // Everything in this block tells the RENDERER about the swap, and a
        // build without Vulkan has no renderer to tell. It used to be written
        // as though it always did, so the WHITTY_HAVE_VULKAN-off build of this
        // file did not compile - six errors, and they fail identically on x86,
        // so this is a latent break in a documented build configuration rather
        // than anything to do with a port. The counters, the frame number and
        // the dump below are all outside it, because those a headless build
        // still produces and still wants.
#ifdef WHITTY_HAVE_VULKAN
        // The system page is rebuilt here, once a frame, rather than from the
        // guest thread that opened it: building it walks the achievement list
        // and the store, and doing that inside a kernel call would put it on
        // whichever thread happened to make the call.
        blade.refresh(kernel, renderer.overlay_width(),
                      renderer.overlay_height());
        // The cabinet's panel, brought up to date from the same two sources the
        // blade reads: the title's own achievement table joined against this
        // machine's profile, and the local high-score table. Both move while
        // the title runs - an achievement unlocks, a score lands at game over -
        // so they are re-read here rather than once at start-up. The surround
        // itself is only repainted when this actually changes something.
        {
            uint32_t earned = 0;
            uint32_t earned_score = 0;
            for (const xdbf_achievement& one : kernel.title_achievements())
                if (kernel.profile().is_unlocked(kernel.title_id(), one.id)) {
                    ++earned;
                    earned_score += one.gamerscore;
                }
            std::vector<gpu::cabinet_score> table;
            for (const local_score& score :
                 kernel.profile().scores(kernel.title_id())) {
                gpu::cabinet_score row;
                // The board's name out of the title's own SPA. A score against
                // a board the SPA does not declare keeps its number rather than
                // being given a name we made up.
                if (const xdbf_leaderboard* board =
                        kernel.title_leaderboard(score.leaderboard_id))
                    row.board = board->name;
                if (row.board.empty())
                    row.board = "board " + std::to_string(score.leaderboard_id);
                row.score = score.score;
                row.who = score.name;
                table.push_back(std::move(row));
            }
            renderer.set_cabinet_progress(earned, earned_score,
                                          std::move(table));
        }
        // What this swap asked to show. It names the surface the frame's draws
        // were FOR, which is what tells the renderer which of the frame's
        // passes is the picture rather than an intermediate.
        renderer.set_front_buffer(kernel.video().front_buffer_fetch_base);
        // And how big it is. Stated by the same call, so it describes the
        // surface named above rather than whatever the frame's last draw
        // happened to be aimed at - see frame_size().
        renderer.set_display_size(kernel.video().front_buffer_width,
                                  kernel.video().front_buffer_height);
#endif
        const uint64_t frame = kernel.video().swap_count;
#ifdef WHITTY_HAVE_VULKAN
        // The frame the renderer is about to draw. Set here rather than left to
        // whatever the last controller poll happened to see, so a capture asked
        // for by frame number lands on the frame WHITTY_GPU_DUMP would name.
        renderer.set_frame_number(frame);
#endif
        // Which entry of the list this frame is, or none. Marked seen as it
        // passes, so nothing has to be held between frames: the capture is
        // written now and forgotten, which is what keeps a run asking for a
        // dozen frames costing a dozen PPMs on disk rather than in memory.
        const auto found = std::find(dump_frames.begin(), dump_frames.end(),
                                     frame);
        const bool chosen_frame = found != dump_frames.end();
        if (chosen_frame)
            dump_frame_seen[static_cast<std::size_t>(found -
                                                     dump_frames.begin())]
                .store(true, std::memory_order_release);
        if (dump_frame_env && chosen_frame) {
            dump_frame(command_processor, memory, frame);
            // Which surface this frame was FOR. Printed beside the draws
            // because a frame full of resolves says nothing on its own about
            // which of them the screen shows, and that is the difference
            // between a black frame and a picture.
            std::printf("  front buffer: %08X, %ux%u format %u (fetch %08X "
                        "%08X)\n",
                        kernel.video().front_buffer_fetch_base,
                        kernel.video().front_buffer_width,
                        kernel.video().front_buffer_height,
                        kernel.video().front_buffer_format,
                        kernel.video().front_buffer_fetch[0],
                        kernel.video().front_buffer_fetch[1]);
        }
#ifdef WHITTY_HAVE_VULKAN
        const bool every_frame =
            (render_all != nullptr && render_all[0] == '1') ||
            renderer.windowed();
        if (frame_ppm_path != nullptr || every_frame ||
            frame_sequence != nullptr) {
            std::string sequence_path;
            if (frame_sequence != nullptr) {
                char path[512];
                std::snprintf(path, sizeof(path), "%s_%04llu.ppm",
                              frame_sequence,
                              static_cast<unsigned long long>(frame));
                sequence_path = path;
            }
            // One requested frame writes exactly the path given, which is what
            // every gate and profile in this project depends on. Several fold
            // the frame number in - see frame_capture_path.
            std::string chosen_path;
            if (frame_ppm_path != nullptr && chosen_frame)
                chosen_path = gpu::frame_capture_path(frame_ppm_path, frame,
                                                      single_dump);
            const char* write_to =
                !chosen_path.empty()     ? chosen_path.c_str()
                : !sequence_path.empty() ? sequence_path.c_str()
                                         : nullptr;
            if (every_frame || chosen_frame || frame_sequence != nullptr)
                renderer.render(command_processor, write_to);
        }
        // Once per SWAP, not once per rendered frame. A title advances its
        // simulation once per present, so the present rate is the game speed -
        // and a headless run renders nothing, so with this inside render() the
        // limit was silently ignored there and the title ran at whatever the
        // host could manage. That is not a cosmetic difference: it is the
        // difference between measuring a title at 60 fps and measuring it at
        // 420, with its audio thread still running in real time.
        renderer.pace();
#else
        if (frame_ppm_path != nullptr && chosen_frame)
            std::printf("  [gpu] built without Vulkan; no frame written\n");
#endif
        command_processor.clear_draws();
        // Everything this run was for has now happened. The report and the exit
        // belong to a thread of their own - see the watchdog - because this is
        // the guest's own swap call, holding the ring lock, with recompiled code
        // on the stack.
        // AFTER THE LAST REQUESTED FRAME, not the first. A run asked for three
        // frames has not finished when it captures one of them, and stopping
        // there would write the first capture and silently drop the rest.
        // Frames arrive in order, so this is normally the last entry - but it
        // is checked rather than assumed, because "the last one arrived"
        // and "all of them arrived" are only the same statement while nothing
        // else can skip a frame.
        if (exit_after_dump && chosen_frame && dump_frame_env != nullptr) {
            bool all_seen = true;
            for (std::size_t i = 0; i < dump_frames.size(); ++i)
                if (!dump_frame_seen[i].load(std::memory_order_acquire)) {
                    all_seen = false;
                    break;
                }
            if (all_seen) capture_done.store(true, std::memory_order_release);
        }
    };
    // Where that handler is normally raised from: the xe_swap packet VdSwap
    // wrote into the ring, reached in submission order by the command walk. By
    // then the frame's own composite has been submitted and is in the draw
    // list, which is the whole point - see pm4_op::xe_swap. VdSwap still calls
    // the handler directly for a title with no ring to write the packet into.
    command_processor.set_swap_handler(
        [&](uint32_t, uint32_t, uint32_t) {
            if (kernel.video().swap_handler) kernel.video().swap_handler();
        });

    // Every import gets a value record; a callable one also gets a thunk
    // record XenonRecomp already resolved at compile time. Guest code
    // dereferences the value records expecting real content, so they must be
    // patched before the title runs - see import_patcher.h.
    std::vector<xex_import_library> libraries;
    if (!parse_xex_imports(file.data(), file.size(), info, libraries, error)) {
        std::fprintf(stderr, "imports: %s\n", error.c_str());
        return 1;
    }
    // Order matters: patch_import_variables hands back a real callable thunk
    // address for a function import when one was compiled (a title that
    // reads the import as data and calls through it needs that, not a
    // sentinel - see import_patcher.cpp), so the thunk map has to exist
    // first, which needs the real ordinals decode_imports recovers from the
    // loaded image.
    decode_imports(memory, libraries);
    register_import_thunks(kernel, libraries);
    patch_import_variables(kernel, libraries);
    kernel_registry registry;
    register_kernel_handlers(registry);
    const kernel_requirements needs = registry.resolve(libraries);

    // How a guest thread actually runs: a host thread with its own PPCContext,
    // r1 at the top of the thread's stack, r13 at its KPCR, and the start
    // context in r3 - the same shape the main thread is started with below.
    // The recompiled entry point is reached through the function table.
    kernel.set_guest_thread_launcher([&memory](const guest_thread& thread) {
        std::thread([&memory, thread] {
            PPCContext ctx{};
            ctx.fpscr.loadFromHost(); // see the main thread's note below
            // Which guest thread this host thread is, so a kernel handler can
            // tell the caller from any other thread. NtSuspendThread needs it:
            // a thread parking ITSELF can be honoured exactly, and one aimed at
            // another thread cannot be honoured at all.
            set_current_guest_thread(thread.handle);
            const uint32_t stack_top = (thread.stack_limit - 0x100) & ~0xFu;
            memory.write_u32(stack_top, 0);
            ctx.r1.u64 = stack_top;
            ctx.r13.u64 = thread.kpcr_address;
            // The title's trampoline takes over when it supplied one: it gets
            // the entry point and its context as arguments and calls through
            // itself, having first set up the per-thread state its runtime
            // needs. Without this the entry point runs on a thread the title
            // considers uninitialised.
            uint32_t entry_address = thread.start_address;
            if (thread.xapi_startup != 0) {
                entry_address = thread.xapi_startup;
                ctx.r3.u64 = thread.start_address;
                ctx.r4.u64 = thread.start_context;
            } else {
                ctx.r3.u64 = thread.start_context;
            }
            uint8_t* base = memory.host_unchecked(0);
            PPCFunc* entry = PPC_LOOKUP_FUNC(base, entry_address);
            if (entry == nullptr) {
                // The thread would otherwise start and immediately finish,
                // having run nothing - and the title would wait on work that
                // was never done, which looks like a hang somewhere else.
                std::fprintf(stderr,
                             "  [thread] no recompiled function at %08X; "
                             "thread %u cannot start\n",
                             entry_address, thread.thread_id);
                return;
            }
            // A title going through the XAPI trampoline ends the thread with
            // ExTerminateThread, which unwinds to here rather than returning;
            // one whose entry simply returns arrives the ordinary way. Both
            // mean the thread has ended.
            run_guest(entry, ctx, base);
            // A thread that has ended is a signalled thread object - which is
            // what a wait on its handle is waiting for. ExTerminateThread has
            // already done this for the thread that called it; signalling
            // twice is harmless, and an entry point that simply returned has
            // had it done nowhere else.
            signal_guest_thread_exit(thread.kthread_address);
        }).detach();
        return true;
    });

    // The GPU's vblank interrupt. This is the only signal that goes from the
    // graphics hardware back into guest code: the title registers a routine
    // with VdSetGraphicsInterruptCallback and its display logic waits to be
    // called. Recording the callback and never invoking it leaves the title
    // waiting for a frame boundary that never arrives - which looks exactly
    // like a hang. Xenia runs the same 60 Hz worker calling the callback with
    // source 0 (vblank) and the registered user data.
    std::atomic<bool> vsync_running{true};
    std::thread vsync_thread([&] {
        while (vsync_running.load(std::memory_order_relaxed)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(16));
            // The GPU's frame counter advances first: an EVENT_WRITE_SHD
            // packet can ask for it instead of a literal value, which is how a
            // title watches the GPU keep moving rather than just reach a mark.
            command_processor.increment_counter();
            // Processor 2, which is the number Xenia's MarkVblank hard-codes -
            // vblank comes from the display controller rather than from a
            // packet, so nothing in the stream names a processor for it.
            dispatch_interrupt(/*source=*/0, /*cpu=*/2); // vblank
        }
    });

    // The clock interrupt. On the console this fires about once a millisecond
    // and charges the running thread's KTHREAD::KernelTime; Xenia runs a 1 ms
    // repeating timer for the same purpose. Guest code reads that field
    // directly out of its KTHREAD, never through a kernel call, so nothing else
    // in the runtime gets a chance to answer: leave it at zero and every
    // timeout measured against it is infinite. Hydro Thunder's D3D measures its
    // five-second GPU-hang watchdog against exactly this field.
    std::atomic<bool> clock_running{true};
    std::thread clock_thread([&] {
        auto next = std::chrono::steady_clock::now();
        while (clock_running.load(std::memory_order_relaxed)) {
            next += std::chrono::milliseconds(1);
            std::this_thread::sleep_until(next);
            tick_guest_clock(memory);
        }
    });

    // The decoder, running as the hardware does: continuously, for as long as
    // a context is enabled.
    std::atomic<bool> xma_running{true};
    std::atomic<uint64_t> xma_blocks{0};
    std::atomic<uint64_t> xma_ticks{0};
    std::thread xma_thread([&] {
        while (xma_running.load(std::memory_order_relaxed)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(4));
            const uint32_t written = xma_pump();
            xma_ticks.fetch_add(1, std::memory_order_relaxed);
            if (written != 0)
                xma_blocks.fetch_add(written, std::memory_order_relaxed);
        }
    });

    // The audio driver asking the title for sound. The console does not push
    // audio at a title; it CALLS the routine the title registered, and the
    // title responds by submitting a frame. A runtime that accepts the
    // registration and never calls back gets silence - and silence looks like
    // a game with no sound rather than like a missing worker.
    //
    // Runs on its own guest thread for the same reason the vblank worker does:
    // the callback is guest code, so it needs a stack and a KPCR of its own.
    std::atomic<bool> audio_running{true};
    std::thread audio_thread([&] {
        // Same per-thread stack and KPCR the interrupt callbacks use: this is
        // guest code running on a host thread, so it needs both.
        const interrupt_environment env = this_thread_interrupt_environment();
        if (env.kpcr == 0) return;
        // 48000 / 256 = 187.5 callbacks a second. Sleeping the period rather
        // than chasing a deadline is enough here: the title's own mixer paces
        // itself against how often it is asked.
        const auto period = std::chrono::microseconds(
            static_cast<int64_t>(1000000.0 / kAudioFramesPerSecond));
        auto next = std::chrono::steady_clock::now();
        while (audio_running.load(std::memory_order_relaxed)) {
            next += period;
            std::this_thread::sleep_until(next);
            const audio_client client = kernel.audio();
            if (!client.registered || client.callback == 0) continue;
            // Nothing gates the first call but the registration itself - the
            // console starts asking as soon as a client exists, and Xenia's
            // worker is woken by RegisterClient to do exactly that. What the
            // title relies on is not a delay but the calling convention: the
            // argument arrives BY REFERENCE, in a cell the kernel allocated and
            // filled at registration, which the title's thunk unwraps with
            // `lwz r3,0(r3)`. Handing it the raw value instead makes that
            // unwrap read one level too far and the callback runs against
            // whatever it found.
            if (client.wrapped_callback_arg == 0) continue;
            PPCFunc* routine = PPC_LOOKUP_FUNC(memory.host_unchecked(0),
                                               client.callback);
            if (routine == nullptr) continue;
            PPCContext ctx{};
            ctx.fpscr.loadFromHost();
            ctx.r1.u64 = env.stack_top;
            ctx.r13.u64 = env.kpcr;
            ctx.r3.u64 = client.wrapped_callback_arg;
            run_guest(routine, ctx, memory.host_unchecked(0));
        }
    });

    // What the title has managed to do so far. A title that boots does not
    // return from its entry point - it runs its frame loop until the console
    // powers off - so the only way to see these numbers is to ask while it is
    // still running. The watchdog below does exactly that, which is what turns
    // "it did not crash" into "it drew N times and presented M frames".
    auto report_progress = [&]() mutable {
        report_missing_function_summary();
        // WHICH REQUESTED FRAMES NEVER ARRIVED. Said out loud, because a
        // capture that is simply absent looks exactly like a title that never
        // got that far, and the two need opposite responses. It has already
        // been confused once: /tmp filled mid-run, the PPM could not be
        // written, and the missing file read as Hydro Thunder failing to reach
        // frame 1500 when it had reached it perfectly well.
        if (dump_frame_env != nullptr && !dump_frames.empty()) {
            std::string missed;
            std::size_t hit = 0;
            for (std::size_t i = 0; i < dump_frames.size(); ++i) {
                if (dump_frame_seen[i].load(std::memory_order_acquire)) {
                    ++hit;
                    continue;
                }
                missed += " ";
                missed += std::to_string(dump_frames[i]);
            }
            if (dump_frames.size() > 1 || !missed.empty())
                std::printf("  frames asked for: %zu of %zu captured%s%s\n",
                            hit, dump_frames.size(),
                            missed.empty() ? "" : "; NEVER REACHED:",
                            missed.c_str());
        }
        // WHITTY_IMPORT_TOP=N lists that many; the default keeps the report
        // short, but comparing two runs needs every import that was called.
        int top = 12;
        if (const char* value = std::getenv("WHITTY_IMPORT_TOP"))
            top = static_cast<int>(std::strtol(value, nullptr, 10));
        whitty_xenon_report_import_calls(top);
        std::printf("  GPU ring-buffer write-pointer updates: %llu (last %08X)\n",
                    static_cast<unsigned long long>(
                        gpu_registers.write_pointer_updates()),
                    gpu_registers.write_pointer());
        std::printf("  GPU ring: %llu submission(s), %llu dword(s) consumed, "
                    "%llu draw(s)\n",
                    static_cast<unsigned long long>(ring.submissions()),
                    static_cast<unsigned long long>(ring.dwords_consumed()),
                    static_cast<unsigned long long>(
                        command_processor.total_draws()));
        std::printf("  GPU state: %llu constant(s) written, %zu shader(s) "
                    "uploaded\n",
                    static_cast<unsigned long long>(
                        command_processor.constant_writes()),
                    command_processor.shaders().size());
        // Which commands the stream contains, and which of them went nowhere.
        // A frame missing state looks exactly like a frame that is not, until
        // this names the opcode that was dropped.
        std::string handled;
        std::string unhandled;
        for (uint32_t op = 0; op < gpu::command_processor::kOpcodeCount; ++op) {
            const uint64_t count = command_processor.opcode_count(op);
            if (count == 0) continue;
            char entry[48];
            std::snprintf(entry, sizeof(entry), " %02X:%llu", op,
                          static_cast<unsigned long long>(count));
            (command_processor.unhandled_count(op) != 0 ? unhandled : handled)
                += entry;
        }
        if (!handled.empty())
            std::printf("  GPU packets handled:%s\n", handled.c_str());
        if (!unhandled.empty())
            std::printf("  [gpu] UNHANDLED packets:%s\n", unhandled.c_str());
        std::printf("  ALU constants: %llu dword(s) to the vertex half "
                    "(%llu of them non-zero), %llu to the pixel half\n",
                    static_cast<unsigned long long>(
                        command_processor.vertex_constant_writes()),
                    static_cast<unsigned long long>(
                        command_processor.vertex_constant_nonzero()),
                    static_cast<unsigned long long>(
                        command_processor.pixel_constant_writes()));
        std::printf("  ALU constants loaded from memory: %llu dword(s)"
                    " (%llu from a misaligned source)\n",
                    static_cast<unsigned long long>(
                        command_processor.loaded_constant_dwords()),
                    static_cast<unsigned long long>(
                        command_processor.misaligned_constant_loads()));
        if (command_processor.bad_constant_banks() != 0)
            std::printf("  [gpu] %llu constant write(s) named no bank\n",
                        static_cast<unsigned long long>(
                            command_processor.bad_constant_banks()));
        if (command_processor.dropped_shader_loads() != 0)
            std::printf("  [gpu] %llu shader/constant load(s) from "
                        "uncommitted memory\n",
                        static_cast<unsigned long long>(
                            command_processor.dropped_shader_loads()));
        if (command_processor.predicated_skips() != 0) {
            std::printf("  GPU predicated packets skipped: %llu\n",
                        static_cast<unsigned long long>(
                            command_processor.predicated_skips()));
            // WHICH opcodes were discarded, and how much geometry with them.
            //
            // A title that renders in EDRAM-sized strips replays its command
            // buffer once per strip, so skipping is correct and a large total
            // is expected. What is not expected is SET_BIN_SELECT (0x62/0x63)
            // appearing here: the selection that would admit the next replay
            // would then have been thrown away by the selection already in
            // force, and every replay after the first is lost.
            std::string skipped;
            for (uint32_t op = 0; op < gpu::command_processor::kOpcodeCount;
                 ++op) {
                const uint64_t count =
                    command_processor.predicated_skip_count(op);
                if (count == 0) continue;
                char entry[40];
                std::snprintf(entry, sizeof(entry), " %02X:%llu", op,
                              static_cast<unsigned long long>(count));
                skipped += entry;
            }
            std::printf("    by opcode:%s\n", skipped.c_str());
            std::printf("    draws: %llu packet(s) issued, %llu recorded, "
                        "%llu skipped by bin selection\n",
                        static_cast<unsigned long long>(
                            command_processor.opcode_count(0x22) +
                            command_processor.opcode_count(0x36)),
                        static_cast<unsigned long long>(
                            command_processor.total_draws()),
                        static_cast<unsigned long long>(
                            command_processor.predicated_draw_skips()));
        }
        // Scratch registers mirrored into guest memory. A title that arms
        // SCRATCH_UMSK and gets none of these back is one waiting on a mailbox
        // the GPU never posted to - which is a stall with no other symptom.
        std::printf("  GPU scratch write-backs: %llu\n",
                    static_cast<unsigned long long>(
                        command_processor.scratch_writes()));
        // Occlusion queries. Printed as a pair on purpose: "answered" alone
        // reads zero both when the title asked nothing and when every question
        // was ignored, and those need opposite responses. A title whose queries
        // go unanswered does not degrade - it waits, culls everything the query
        // was guarding, and draws a black frame.
        if (command_processor.occlusion_queries() != 0)
            std::printf("  GPU occlusion queries: %llu, %llu answered\n",
                        static_cast<unsigned long long>(
                            command_processor.occlusion_queries()),
                        static_cast<unsigned long long>(
                            command_processor.occlusion_queries_answered()));
        if (command_processor.dropped_writes() != 0)
            std::printf("  [gpu] %llu write-back(s) to uncommitted memory, "
                        "first at %08X\n",
                        static_cast<unsigned long long>(
                            command_processor.dropped_writes()),
                        command_processor.first_dropped_write());
        std::printf("  frames presented (VdSwap): %llu\n",
                    static_cast<unsigned long long>(
                        kernel.video().swap_count));
        // The vblank interrupt, and every reason one was refused. A title waits
        // to be called back before it presents, so "delivered 0" and "presented
        // 0" are the same fault seen from two ends - and which of the reasons
        // below is non-zero says whether the title never registered a callback,
        // or the host could not build a stack to run it on.
        std::printf("  vblank interrupts: %llu delivered",
                    static_cast<unsigned long long>(interrupts_delivered.load()));
        if (interrupts_no_callback.load() != 0)
            std::printf(", %llu with no callback registered",
                        static_cast<unsigned long long>(
                            interrupts_no_callback.load()));
        if (interrupts_no_stack.load() != 0)
            std::printf(", %llu with no stack to run on",
                        static_cast<unsigned long long>(
                            interrupts_no_stack.load()));
        if (interrupts_no_routine.load() != 0)
            std::printf(", %llu whose routine was not recompiled",
                        static_cast<unsigned long long>(
                            interrupts_no_routine.load()));
        std::printf("\n");
#ifdef WHITTY_HAVE_VULKAN
        renderer.report_totals();
        renderer.report_pacing();
        renderer.report_audio();
        renderer.finish_audio();
#endif
        std::printf("  audio frames submitted: %llu (%.1f s), %llu with "
                    "signal, peak %.4f\n",
                    static_cast<unsigned long long>(
                        kernel.audio_frames_submitted()),
                    kernel.audio_frames_submitted() / kAudioFramesPerSecond,
                    static_cast<unsigned long long>(
                        kernel.audio_frames_with_signal()),
                    kernel.audio_peak());
        std::printf("    per channel peak:");
        for (uint32_t c = 0; c < kAudioChannels; ++c)
            std::printf(" %u=%.3f", c, kernel.channel_peak(c));
        std::printf("\n");
        // Every block the decoder wrote, not just the ones this thread's ticks
        // produced: a title that kicks through the kernel has its work done
        // inside XMAEnableContext, so the pump's own count would read zero.
        std::printf("  XMA decode: %llu block(s) written over %llu tick(s)"
                    " (%llu from the pump)\n",
                    static_cast<unsigned long long>(xma_blocks_written()),
                    static_cast<unsigned long long>(xma_ticks.load()),
                    static_cast<unsigned long long>(xma_blocks.load()));
        // A kick is one work pass, so a context is only "kicked" between the
        // title asking and the decoder answering: at the end of a run the count
        // is normally zero, and a context stuck there means a pass never ran.
        std::printf("  XMA context kicks: %llu (%u still awaiting a pass, %u"
                    " allocated)\n",
                    static_cast<unsigned long long>(xma_registers.kick_count()),
                    xma_registers.enabled_context_count(),
                    xma_registers.allocated_context_count());
        if (mmio_unclaimed_accesses() != 0)
            std::printf("  %llu access(es) to hardware windows with no "
                        "device\n",
                        static_cast<unsigned long long>(
                            mmio_unclaimed_accesses()));
        if (kernel.terminated())
            std::printf("  terminate requested: %s\n",
                        kernel.terminate_reason().c_str());
        std::fflush(stdout);
    };

    // WHITTY_RUN_SECONDS=N: report and quit after N seconds. Bring-up needs a
    // repeatable "run it and tell me how far it got", and _exit here is
    // deliberate - the guest threads are still running arbitrary recompiled
    // code, so unwinding the host cleanly is not on offer.
    // The title asking to leave. "Return to arcade" is the console's way out
    // of a game, and it reaches us as XamLoaderTerminateTitle - which was
    // recorded and then ignored, so choosing it appeared to do nothing at all.
    // Honouring it is what makes that menu entry quit.
    std::thread terminate_watchdog([&]() {
        while (!kernel.terminated()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
            if (!vsync_running.load(std::memory_order_relaxed)) return;
        }
        std::printf("whitty_xenon: title asked to exit (%s)\n",
                    kernel.terminate_reason().c_str());
        report_progress();
        std::_Exit(0);
    });
    terminate_watchdog.detach();

    // Closing the window stops the run. Without this the window vanishes and
    // the title keeps running with nowhere to draw, which looks like a hang.
    std::thread window_watchdog;
#ifdef WHITTY_HAVE_VULKAN
    if (renderer.windowed()) {
        window_watchdog = std::thread([&]() {
            while (!renderer.quit_requested()) {
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                if (!vsync_running.load(std::memory_order_relaxed)) return;
            }
            std::printf("whitty_xenon: window closed\n");
            report_progress();
            std::_Exit(0);
        });
        window_watchdog.detach();
    }
#endif

    // The frame asked for has been captured, so the run is over. See
    // WHITTY_EXIT_AFTER_DUMP above.
    std::thread capture_watchdog;
    if (exit_after_dump) {
        capture_watchdog = std::thread([&]() {
            while (!capture_done.load(std::memory_order_acquire)) {
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
                if (!vsync_running.load(std::memory_order_relaxed)) return;
            }
            std::printf("whitty_xenon: captured frame reached\n");
            report_progress();
            std::_Exit(0);
        });
        capture_watchdog.detach();
    }

    std::thread watchdog;
    if (const char* seconds = std::getenv("WHITTY_RUN_SECONDS")) {
        const int limit = std::atoi(seconds);
        if (limit > 0) {
            watchdog = std::thread([&, limit]() {
                for (int elapsed = 0; elapsed < limit; ++elapsed) {
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    if (!vsync_running.load(std::memory_order_relaxed)) return;
                }
                std::printf("whitty_xenon: run limit reached\n");
                report_progress();
                std::_Exit(0);
            });
            watchdog.detach();
        }
    }

    // Report guest faults in guest terms. A recompiled load is a plain host
    // load, so a bad guest pointer arrives as a bare SIGSEGV at a host address
    // - and the single most useful fact, whether that guest page was ever
    // committed, is not something a debugger can tell you. Distinguishing "the
    // title read memory it never allocated" from "we failed to map memory it
    // did allocate" is otherwise a long detour every time.
    install_guest_fault_reporter(memory);

    std::printf("whitty_xenon: starting title %08X\n", info.title_id);
    std::printf("  image %08X+%08X, entry %08X, stack %08X\n",
                loaded.image_base, info.image_size, info.entry_point,
                kStackBase + kStackSize);
    std::printf("  default thread stack %08X\n", info.default_stack_size);
    std::printf("  %s\n", needs.summary().c_str());
    for (const std::string& missing : needs.missing_names())
        std::printf("    missing: %s\n", missing.c_str());
    std::fflush(stdout);

    // A fresh context: stack pointer at the top of the guest stack, 16-byte
    // aligned, with a null back chain so a walk terminates.
    PPCContext ctx{};
    // Seed the guest FPSCR shadow from the host's MXCSR. It is zero-initialised
    // otherwise, and MXCSR exception-mask bits are 1-means-masked - so the
    // first enableFlushMode() would write a control word with every FP
    // exception UNMASKED and the next denormal or inexact result would raise
    // SIGFPE inside ordinary vector code.
    ctx.fpscr.loadFromHost();
    const uint32_t stack_top = (kStackBase + kStackSize - 0x100) & ~0xFu;
    memory.write_u32(stack_top, 0);
    ctx.r1.u64 = stack_top;

    // r13 must point at this thread's KPCR before the first instruction runs -
    // guest code reads its own thread ID and stack bounds straight out of it,
    // not through a kernel call. See thread_environment.h.
    const guest_thread_environment env = make_guest_thread_environment(
        kernel, /*thread_id=*/1, kStackBase + kStackSize, kStackBase,
        info.entry_point);
    if (env.kpcr_address == 0) {
        std::fprintf(stderr, "failed to allocate the main thread's KPCR\n");
        return 1;
    }
    ctx.r13.u64 = env.kpcr_address;

    uint8_t* base = memory.host_unchecked(0);
    // The title's own main thread can end itself the same way a worker does.
    run_guest(&_xstart, ctx, base);

    vsync_running.store(false, std::memory_order_relaxed);
    vsync_thread.join();
    clock_running.store(false, std::memory_order_relaxed);
    clock_thread.join();
    // xma_thread and audio_thread used to be detached rather than joined here.
    // Both capture stack locals of this function BY REFERENCE (xma_running,
    // xma_blocks, xma_ticks, audio_running), so a detached thread that outlived
    // this function's return kept reading and writing a torn-down stack frame -
    // a segfault in xma_pump() or the audio callback path, on a thread with no
    // relation to whatever the guest was doing at the time. Joining, the same
    // way vsync_thread and clock_thread already do above, is what makes it safe
    // for this function to return at all.
    xma_running.store(false, std::memory_order_relaxed);
    xma_thread.join();
    audio_running.store(false, std::memory_order_relaxed);
    audio_thread.join();

    std::printf("whitty_xenon: title returned from entry point\n");
    report_progress();

    // Every ExCreateThread worker is launched detached (see
    // set_guest_thread_launcher above) - there is no registry of them and no
    // cooperative way to ask one blocked in guest code to stop, so there is no
    // safe way to KNOW they have all actually exited here. request_terminate
    // (XamLoaderLaunchTitle, XamLoaderTerminateTitle, an unhandled exception)
    // means the title considers itself done while some of those workers may
    // still be running real recompiled code against `memory`, `kernel` and the
    // GPU state below - and normal return unwinds this function, destructing
    // all of it out from under them. That is not hypothetical: it is exactly
    // what crashed Banjo-Tooie's bring-up, a worker still touching GPU MMIO
    // registers after this function's stack frame was gone.
    //
    // rexglue's KernelState::TerminateTitle takes the safe way out of the same
    // problem: signal the guest threads it DOES track, wait a bounded
    // cooperative window, and if stragglers remain, leave them running and let
    // process exit reap them - "window close hard-exits and lets the OS reap
    // them" rather than risk a clean C++ teardown racing a straggler. Without a
    // thread registry to wait on at all, skipping straight to the hard exit is
    // the equivalent move here: no destructor runs, so there is nothing left
    // for a straggler to find torn down.
    if (kernel.terminated()) {
        std::fflush(stdout);
        std::_Exit(0);
    }

    install_kernel(nullptr);
    return 0;
}
