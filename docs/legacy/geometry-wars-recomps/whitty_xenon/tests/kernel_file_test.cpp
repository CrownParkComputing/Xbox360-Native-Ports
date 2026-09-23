// Integration tests for the file I/O kernel calls.
//
// These are the calls UE3 loads its cooked packages through, so they are
// driven exactly as the recompiled title drives them: arguments in the guest
// registers (spilling to the stack past r10), the handler wrapped in
// host_function, and every result checked in real guest memory against real
// files on the host disk. The expected behaviour is Xenia's.
//
// The thing worth being careful about here is that these are Win32-shaped
// APIs where zero means SUCCESS. A handler that cannot answer must say so with
// a specific failure code, because returning zero tells the title its buffer
// was filled when it was not - which is exactly how the previous stub sent it
// off into unmapped memory. Several tests below pin those refusals.
#include "whitty_xenon/file_system.h"
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_state.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>

using namespace whitty_xenon;
namespace fs = std::filesystem;

namespace {

union reg {
    uint64_t u64;
    uint32_t u32;
    double f64;
};
struct test_ctx {
    reg r1, r3, r4, r5, r6, r7, r8, r9, r10;
    reg f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
};

struct temp_dir {
    fs::path path;
    temp_dir() {
        path = fs::temp_directory_path() / "whitty_xenon_kernel_file_test";
        fs::remove_all(path);
        fs::create_directories(path / "CookedXenon");
    }
    ~temp_dir() {
        std::error_code ec;
        fs::remove_all(path, ec);
    }
    void write(const std::string& rel, const std::string& contents) {
        std::ofstream out(path / rel, std::ios::binary);
        out.write(contents.data(), static_cast<std::streamsize>(contents.size()));
    }
};

struct fixture {
    temp_dir dir;
    guest_memory memory;
    guest_heap heap;
    kernel_state kernel;

    static constexpr uint32_t heap_base = 0x40000000;
    static constexpr uint32_t heap_size = 0x00400000;
    static constexpr uint32_t scratch = 0x30000000;
    static constexpr uint32_t scratch_size = 0x20000;
    // Where the fixture parks its guest structures inside the scratch region.
    static constexpr uint32_t name_buffer = scratch + 0x0000;
    static constexpr uint32_t ansi_string = scratch + 0x0200;
    static constexpr uint32_t object_attrs = scratch + 0x0210;
    static constexpr uint32_t io_status = scratch + 0x0230;
    static constexpr uint32_t handle_out = scratch + 0x0240;
    static constexpr uint32_t offset_qword = scratch + 0x0250;
    static constexpr uint32_t info_block = scratch + 0x0300;
    static constexpr uint32_t data_buffer = scratch + 0x1000;
    static constexpr uint32_t stack = scratch + 0x8000;

    fixture() : kernel(memory, heap) {
        std::string error;
        assert(memory.initialize(error));
        assert(heap.initialize(memory, heap_base, heap_size, error));
        assert(memory.commit(scratch, scratch_size, error));
        kernel.files().mount("game:", dir.path.string());
        install_kernel(&kernel);
    }
    ~fixture() { install_kernel(nullptr); }

    uint8_t* base() noexcept { return memory.host_unchecked(0); }

    // Builds the X_OBJECT_ATTRIBUTES a title passes to name a file: an
    // X_ANSI_STRING (length, maximum length, buffer pointer) reachable from
    // the attributes block at offset 4.
    uint32_t name(const std::string& guest_path, uint32_t root_directory = 0) {
        for (std::size_t i = 0; i < guest_path.size(); ++i)
            memory.write_u8(name_buffer + static_cast<uint32_t>(i),
                            static_cast<uint8_t>(guest_path[i]));
        memory.write_u8(name_buffer + static_cast<uint32_t>(guest_path.size()), 0);
        memory.write_u16(ansi_string + 0,
                         static_cast<uint16_t>(guest_path.size()));
        memory.write_u16(ansi_string + 2,
                         static_cast<uint16_t>(guest_path.size() + 1));
        memory.write_u32(ansi_string + 4, name_buffer);
        memory.write_u32(object_attrs + 0x00, root_directory);
        memory.write_u32(object_attrs + 0x04, ansi_string);
        return object_attrs;
    }

    uint32_t io_status_code() { return memory.read_u32(io_status + 0); }
    uint32_t io_information() { return memory.read_u32(io_status + 4); }

    // NtCreateFile, with the two arguments that spill onto the stack written
    // where the calling convention puts them.
    uint32_t create_file(const std::string& guest_path, uint32_t desired_access,
                         uint32_t disposition, uint32_t create_options,
                         uint32_t root_directory = 0) {
        memory.zero_block(io_status, 8);
        memory.write_u32(handle_out, 0);
        test_ctx ctx{};
        ctx.r1.u32 = stack;
        ctx.r3.u32 = handle_out;
        ctx.r4.u32 = desired_access;
        ctx.r5.u32 = name(guest_path, root_directory);
        ctx.r6.u32 = io_status;
        ctx.r7.u32 = 0; // allocation size hint
        ctx.r8.u32 = 0; // file attributes
        ctx.r9.u32 = 0; // share access
        ctx.r10.u32 = disposition;
        // The 9th argument lands at r1 + 0x54 + 0*8, in the first four bytes
        // of its eight-byte slot.
        memory.write_u32(stack + 0x54, create_options);
        host_function<test_ctx, NtCreateFile>(ctx, base());
        return ctx.r3.u32;
    }

    uint32_t open_read(const std::string& guest_path) {
        const uint32_t status = create_file(guest_path, /*read*/ 0x00000001,
                                            /*open existing*/ 1, 0);
        assert(status == x_status::success);
        return memory.read_u32(handle_out);
    }
};

void test_query_full_attributes_reports_size_and_refuses_missing() {
    fixture fx;
    fx.dir.write("CookedXenon/startup.xxx", std::string(3000, 'p'));

    test_ctx ctx{};
    ctx.r3.u32 = fx.name("game:\\CookedXenon\\startup.xxx");
    ctx.r4.u32 = fixture::info_block;
    host_function<test_ctx, NtQueryFullAttributesFile>(ctx, fx.base());

    assert(ctx.r3.u32 == x_status::success);
    // end_of_file at 0x28 is the size the title reads to know how much to
    // load; allocation_size at 0x20 rounds it up to a sector.
    assert(fx.memory.read_u64(fixture::info_block + 0x28) == 3000);
    assert(fx.memory.read_u64(fixture::info_block + 0x20) == 3072); // 6 sectors
    assert((fx.memory.read_u32(fixture::info_block + 0x30) &
            x_file_attribute::normal) != 0);
    assert(fx.memory.read_u64(fixture::info_block + 0x00) != 0); // creation time

    // A file that is not there must be refused, not answered with zeroes -
    // zero is success here, and the title would trust the empty block.
    ctx = test_ctx{};
    ctx.r3.u32 = fx.name("game:\\CookedXenon\\absent.xxx");
    ctx.r4.u32 = fixture::info_block;
    host_function<test_ctx, NtQueryFullAttributesFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::no_such_file);

    // So must an unmounted device.
    ctx = test_ctx{};
    ctx.r3.u32 = fx.name("dvd:\\anything");
    ctx.r4.u32 = fixture::info_block;
    host_function<test_ctx, NtQueryFullAttributesFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::no_such_file);
}

void test_create_file_dispositions_and_io_status() {
    fixture fx;
    fx.dir.write("there.bin", "xx");

    // Opening what exists reports FileOpened (1) in the status block.
    uint32_t status = fx.create_file("game:\\there.bin", 0x00000001, 1, 0);
    assert(status == x_status::success);
    assert(fx.io_status_code() == x_status::success);
    assert(fx.io_information() == static_cast<uint32_t>(file_action::opened));
    assert(fx.memory.read_u32(fixture::handle_out) != 0);

    // Opening what does not reports NO_SUCH_FILE and FileDoesNotExist, and
    // writes a null handle rather than leaving stale contents behind.
    status = fx.create_file("game:\\absent.bin", 0x00000001, 1, 0);
    assert(status == x_status::no_such_file);
    assert(fx.io_status_code() == x_status::no_such_file);
    assert(fx.io_information() ==
           static_cast<uint32_t>(file_action::does_not_exist));
    assert(fx.memory.read_u32(fixture::handle_out) == 0);

    // Creating something new: GENERIC_WRITE, disposition "create".
    status = fx.create_file("game:\\made.bin", 0x40000000, 2, 0);
    assert(status == x_status::success);
    assert(fx.io_information() == static_cast<uint32_t>(file_action::created));
    assert(fs::exists(fx.dir.path / "made.bin"));

    // Creating it again collides.
    status = fx.create_file("game:\\made.bin", 0x40000000, 2, 0);
    assert(status == x_status::object_name_collision);

    // FILE_NON_DIRECTORY_FILE on a directory is refused with its own code, so
    // the title can tell "wrong kind" from "not there".
    status = fx.create_file("game:\\CookedXenon", 0x00000001, 1, 0x00000040);
    assert(status == x_status::file_is_a_directory);
}

void test_read_write_and_position() {
    fixture fx;
    fx.dir.write("data.bin", "0123456789");
    const uint32_t handle = fx.open_read("game:\\data.bin");

    // NtReadFile: the 8th argument (byte offset pointer) spills to the stack.
    auto read_file = [&](uint32_t buffer, uint32_t length, bool at_offset,
                         uint64_t offset) {
        fx.memory.zero_block(fixture::io_status, 8);
        test_ctx ctx{};
        ctx.r1.u32 = fixture::stack;
        ctx.r3.u32 = handle;
        ctx.r4.u32 = 0; // event
        ctx.r5.u32 = 0; // apc routine
        ctx.r6.u32 = 0; // apc context
        ctx.r7.u32 = fixture::io_status;
        ctx.r8.u32 = buffer;
        ctx.r9.u32 = length;
        if (at_offset) {
            fx.memory.write_u64(fixture::offset_qword, offset);
            ctx.r10.u32 = fixture::offset_qword;
        } else {
            ctx.r10.u32 = 0;
        }
        host_function<test_ctx, NtReadFile>(ctx, fx.base());
        return ctx.r3.u32;
    };

    assert(read_file(fixture::data_buffer, 4, true, 0) == x_status::success);
    assert(fx.io_information() == 4);
    assert(fx.memory.read_u8(fixture::data_buffer + 0) == '0');
    assert(fx.memory.read_u8(fixture::data_buffer + 3) == '3');

    // A null offset pointer continues from the running position.
    assert(read_file(fixture::data_buffer, 3, false, 0) == x_status::success);
    assert(fx.io_information() == 3);
    assert(fx.memory.read_u8(fixture::data_buffer) == '4');

    // NtQueryInformationFile(position) reports where that left the cursor.
    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 8;
    ctx.r7.u32 = x_file_info_class::position;
    host_function<test_ctx, NtQueryInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u64(fixture::info_block) == 7);

    // NtSetInformationFile(position) moves it back, and the next read follows.
    fx.memory.write_u64(fixture::info_block, 1);
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 8;
    ctx.r7.u32 = x_file_info_class::position;
    host_function<test_ctx, NtSetInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(read_file(fixture::data_buffer, 2, false, 0) == x_status::success);
    assert(fx.memory.read_u8(fixture::data_buffer) == '1');

    // Reading at the end reports end-of-file with a zero byte count, which is
    // how a title knows to stop.
    assert(read_file(fixture::data_buffer, 4, true, 100) ==
           x_status::end_of_file);
    assert(fx.io_information() == 0);
}

void test_query_information_network_open_and_refusals() {
    fixture fx;
    fx.dir.write("data.bin", std::string(600, 'z'));
    const uint32_t handle = fx.open_read("game:\\data.bin");

    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 56;
    ctx.r7.u32 = x_file_info_class::network_open;
    host_function<test_ctx, NtQueryInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.io_information() == 56);
    assert(fx.memory.read_u64(fixture::info_block + 0x28) == 600);
    assert(fx.memory.read_u64(fixture::info_block + 0x20) == 1024); // 2 sectors

    // A buffer too small for the class is a length mismatch, not a truncated
    // answer.
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 8;
    ctx.r7.u32 = x_file_info_class::network_open;
    host_function<test_ctx, NtQueryInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::info_length_mismatch);

    // A class we do not answer is refused rather than reported as success.
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 64;
    ctx.r7.u32 = 0xFF;
    host_function<test_ctx, NtQueryInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::invalid_info_class);

    // And so is a handle that is not a file.
    ctx = test_ctx{};
    ctx.r3.u32 = 0xF8000004;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 56;
    ctx.r7.u32 = x_file_info_class::network_open;
    host_function<test_ctx, NtQueryInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::invalid_handle);
}

void test_write_file_and_end_of_file() {
    fixture fx;
    // GENERIC_WRITE, disposition "open always".
    uint32_t status = fx.create_file("game:\\out.bin", 0x40000000, 3, 0);
    assert(status == x_status::success);
    const uint32_t handle = fx.memory.read_u32(fixture::handle_out);

    const char payload[] = "PACKAGE";
    for (uint32_t i = 0; i < 7; ++i)
        fx.memory.write_u8(fixture::data_buffer + i,
                           static_cast<uint8_t>(payload[i]));

    fx.memory.write_u64(fixture::offset_qword, 0);
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 0;
    ctx.r6.u32 = 0;
    ctx.r7.u32 = fixture::io_status;
    ctx.r8.u32 = fixture::data_buffer;
    ctx.r9.u32 = 7;
    ctx.r10.u32 = fixture::offset_qword;
    host_function<test_ctx, NtWriteFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.io_information() == 7);

    // Flush, then check the host really has the bytes.
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    host_function<test_ctx, NtFlushBuffersFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fs::file_size(fx.dir.path / "out.bin") == 7);

    // Truncate through NtSetInformationFile(end of file).
    fx.memory.write_u64(fixture::info_block, 4);
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 8;
    ctx.r7.u32 = x_file_info_class::end_of_file;
    host_function<test_ctx, NtSetInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fs::file_size(fx.dir.path / "out.bin") == 4);
}

void test_write_to_a_read_only_handle_is_denied() {
    fixture fx;
    fx.dir.write("data.bin", "keep");
    const uint32_t handle = fx.open_read("game:\\data.bin");

    fx.memory.write_u8(fixture::data_buffer, 'X');
    fx.memory.write_u64(fixture::offset_qword, 0);
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 0;
    ctx.r6.u32 = 0;
    ctx.r7.u32 = fixture::io_status;
    ctx.r8.u32 = fixture::data_buffer;
    ctx.r9.u32 = 1;
    ctx.r10.u32 = fixture::offset_qword;
    host_function<test_ctx, NtWriteFile>(ctx, fx.base());

    // Refused, and the file on disk is untouched.
    assert(ctx.r3.u32 == x_status::access_denied);
    assert(fx.io_information() == 0);
    assert(fs::file_size(fx.dir.path / "data.bin") == 4);
}

void test_read_file_scatter_fills_separate_pages() {
    fixture fx;
    // Two and a half pages of a recognisable pattern.
    std::string contents(10240, '\0');
    for (std::size_t i = 0; i < contents.size(); ++i)
        contents[i] = static_cast<char>(i & 0xFF);
    fx.dir.write("big.bin", contents);
    const uint32_t handle = fx.open_read("game:\\big.bin");

    // Three destination pages, deliberately not adjacent - the whole point of
    // the scatter form is that the file is contiguous and the memory is not.
    const uint32_t page0 = fixture::scratch + 0x4000;
    const uint32_t page1 = fixture::scratch + 0x6000;
    const uint32_t page2 = fixture::scratch + 0x2000;
    const uint32_t segments = fixture::scratch + 0x0400;
    fx.memory.write_u32(segments + 0, page0);
    fx.memory.write_u32(segments + 4, page1);
    fx.memory.write_u32(segments + 8, page2);

    fx.memory.write_u64(fixture::offset_qword, 0);
    test_ctx ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = handle;
    ctx.r4.u32 = 0;
    ctx.r5.u32 = 0;
    ctx.r6.u32 = 0;
    ctx.r7.u32 = fixture::io_status;
    ctx.r8.u32 = segments;
    ctx.r9.u32 = 8192 + 2048; // two full pages and a partial third
    ctx.r10.u32 = fixture::offset_qword;
    host_function<test_ctx, NtReadFileScatter>(ctx, fx.base());

    assert(ctx.r3.u32 == x_status::success);
    assert(fx.io_information() == 8192 + 2048);
    // Each page holds its own stretch of the file, in order.
    assert(fx.memory.read_u8(page0 + 0) == 0x00);
    assert(fx.memory.read_u8(page0 + 4095) == ((4095) & 0xFF));
    assert(fx.memory.read_u8(page1 + 0) == (4096 & 0xFF));
    assert(fx.memory.read_u8(page1 + 4095) == ((8191) & 0xFF));
    assert(fx.memory.read_u8(page2 + 0) == (8192 & 0xFF));
    assert(fx.memory.read_u8(page2 + 2047) == ((10239) & 0xFF));
}

void test_query_directory_file() {
    fixture fx;
    fx.dir.write("CookedXenon/a.xxx", "1");
    fx.dir.write("CookedXenon/b.upk", "22");
    fx.dir.write("CookedXenon/c.xxx", "333");

    // FILE_DIRECTORY_FILE, so the open produces a scannable handle.
    const uint32_t status =
        fx.create_file("game:\\CookedXenon", 0x00000001, 1, 0x00000001);
    assert(status == x_status::success);
    const uint32_t handle = fx.memory.read_u32(fixture::handle_out);

    // The name filter is an X_ANSI_STRING like the one in the attributes.
    const uint32_t pattern_buffer = fixture::scratch + 0x0500;
    const uint32_t pattern_string = fixture::scratch + 0x0520;
    auto set_pattern = [&](const std::string& text) -> uint32_t {
        if (text.empty()) return 0;
        for (std::size_t i = 0; i < text.size(); ++i)
            fx.memory.write_u8(pattern_buffer + static_cast<uint32_t>(i),
                               static_cast<uint8_t>(text[i]));
        fx.memory.write_u16(pattern_string + 0,
                            static_cast<uint16_t>(text.size()));
        fx.memory.write_u16(pattern_string + 2,
                            static_cast<uint16_t>(text.size()));
        fx.memory.write_u32(pattern_string + 4, pattern_buffer);
        return pattern_string;
    };

    auto query = [&](const std::string& pattern, uint32_t length,
                     bool restart) {
        fx.memory.zero_block(fixture::io_status, 8);
        test_ctx ctx{};
        ctx.r1.u32 = fixture::stack;
        ctx.r3.u32 = handle;
        ctx.r4.u32 = 0; // event
        ctx.r5.u32 = 0; // apc routine
        ctx.r6.u32 = 0; // apc context
        ctx.r7.u32 = fixture::io_status;
        ctx.r8.u32 = fixture::data_buffer;
        ctx.r9.u32 = length;
        ctx.r10.u32 = set_pattern(pattern);
        fx.memory.write_u32(fixture::stack + 0x54, restart ? 1 : 0);
        host_function<test_ctx, NtQueryDirectoryFile>(ctx, fx.base());
        return ctx.r3.u32;
    };

    auto entry_name = [&]() {
        const uint32_t length = fx.memory.read_u32(fixture::data_buffer + 0x3C);
        std::string name;
        for (uint32_t i = 0; i < length; ++i)
            name.push_back(static_cast<char>(
                fx.memory.read_u8(fixture::data_buffer + 0x40 + i)));
        return name;
    };

    // A filtered scan: only the .xxx files, one entry per call.
    assert(query("*.xxx", 256, false) == x_status::success);
    assert(entry_name() == "a.xxx");
    assert(fx.memory.read_u32(fixture::data_buffer + 0x00) == 0); // no next
    assert(fx.memory.read_u32(fixture::data_buffer + 0x04) == 0); // file index
    assert(fx.memory.read_u64(fixture::data_buffer + 0x28) == 1); // size
    assert((fx.memory.read_u32(fixture::data_buffer + 0x38) &
            x_file_attribute::directory) == 0);

    // The filter sticks: b.upk is skipped without being asked for again.
    assert(query("", 256, false) == x_status::success);
    assert(entry_name() == "c.xxx");
    assert(fx.memory.read_u32(fixture::data_buffer + 0x04) == 2);

    // Running out reports NO_MORE_FILES - the status follows the name passed
    // to this call, not the filter still in force, so a continuation that
    // finds nothing means "the scan is finished".
    assert(query("", 256, false) == x_status::no_more_files);

    // A call that does name a pattern and matches nothing reports NO_SUCH_FILE
    // instead, which is how a title tells "nothing matched" from "finished".
    assert(query("*.nope", 256, false) == x_status::no_such_file);

    // An unfiltered scan walks all three.
    assert(query("*", 256, true) == x_status::success);
    assert(query("", 256, false) == x_status::success);
    assert(query("", 256, false) == x_status::success);
    assert(query("", 256, false) == x_status::no_more_files);

    // A buffer too small for the fixed header plus a name is refused outright.
    assert(query("*", 40, true) == x_status::info_length_mismatch);
}

void test_query_volume_information() {
    fixture fx;
    fx.dir.write("data.bin", "x");
    const uint32_t handle = fx.open_read("game:\\data.bin");

    test_ctx ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 24;
    ctx.r7.u32 = x_volume_info_class::size;
    host_function<test_ctx, NtQueryVolumeInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u64(fixture::info_block + 0x00) == 128 * 1024);
    assert(fx.memory.read_u32(fixture::info_block + 0x10) == 1);
    // The console's own code checks this is exactly 0x200.
    assert(fx.memory.read_u32(fixture::info_block + 0x14) == 0x200);

    // The attribute class writes its device name inline after the header.
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 32;
    ctx.r7.u32 = x_volume_info_class::attribute;
    host_function<test_ctx, NtQueryVolumeInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(fixture::info_block + 0x08) == 4); // name length
    assert(fx.memory.read_u8(fixture::info_block + 0x0C) == 'G');

    // A class we do not model is refused.
    ctx = test_ctx{};
    ctx.r3.u32 = handle;
    ctx.r4.u32 = fixture::io_status;
    ctx.r5.u32 = fixture::info_block;
    ctx.r6.u32 = 24;
    ctx.r7.u32 = 0x40;
    host_function<test_ctx, NtQueryVolumeInformationFile>(ctx, fx.base());
    assert(ctx.r3.u32 == x_status::invalid_info_class);
}

void test_io_completes_before_returning() {
    fixture fx;
    fx.dir.write("data.bin", "0123456789");
    const uint32_t handle = fx.open_read("game:\\data.bin");

    // A title hands over an event it will then wait on. Because the read
    // finishes before the call returns, that event has to come back already
    // signalled or the title blocks forever.
    const uint32_t event_object = fixture::scratch + 0x0600;
    test_ctx ctx{};
    ctx.r3.u32 = event_object;
    ctx.r4.u32 = 1; // synchronization (auto-reset)
    ctx.r5.u32 = 0; // initially not signalled
    host_function<test_ctx, KeInitializeEvent>(ctx, fx.base());
    const uint32_t event_handle =
        fx.kernel.objects().add(object_type::event, event_object, 0);
    assert(fx.memory.read_u32(event_object + 4) == 0); // signal state

    fx.memory.write_u64(fixture::offset_qword, 0);
    ctx = test_ctx{};
    ctx.r1.u32 = fixture::stack;
    ctx.r3.u32 = handle;
    ctx.r4.u32 = event_handle;
    ctx.r5.u32 = 0;
    ctx.r6.u32 = 0;
    ctx.r7.u32 = fixture::io_status;
    ctx.r8.u32 = fixture::data_buffer;
    ctx.r9.u32 = 4;
    ctx.r10.u32 = fixture::offset_qword;
    host_function<test_ctx, NtReadFile>(ctx, fx.base());

    assert(ctx.r3.u32 == x_status::success);
    assert(fx.memory.read_u32(event_object + 4) == 1); // signalled
}

// A NAME GIVEN WITH A DIRECTORY HANDLE IS RELATIVE TO IT.
//
// The object attributes carry a root_directory beside the name. A title may
// open its data directory once and then open everything inside it by bare
// name; without this every one of those lands at the mount root, the title
// cannot find its own files, and it exits. After Burner Climax opens
// "shader_hlsl.farc" against a handle on media\x360 and throws when it is not
// there.
void test_a_relative_name_resolves_against_the_root_directory() {
    fixture fx;
    fs::create_directories(fx.dir.path / "media" / "x360");
    fx.dir.write("media/x360/shader_hlsl.farc", "shaders");
    fx.dir.write("shader_hlsl.farc", "the wrong one, at the mount root");

    // The directory handle the title keeps.
    const uint32_t opened =
        fx.create_file("game:\\media\\x360", /*read*/ 0x00000001,
                       /*open existing*/ 1, /*FILE_DIRECTORY_FILE*/ 0x1);
    assert(opened == x_status::success);
    const uint32_t directory = fx.memory.read_u32(fixture::handle_out);
    assert(directory != 0);

    // The same bare name the title uses, against that handle.
    const uint32_t status =
        fx.create_file("shader_hlsl.farc", 0x00000001, 1, 0, directory);
    assert(status == x_status::success);
    const uint32_t file = fx.memory.read_u32(fixture::handle_out);
    assert(file != 0);

    // The one inside the directory, not the decoy at the root - so a test that
    // merely opened *something* cannot pass.
    const kernel_object* object = fx.kernel.objects().lookup(file);
    assert(object != nullptr);
    assert(fx.kernel.files().size_of(object->host_index) == 7);

    // An ABSOLUTE path is unaffected by the field, so a title that names its
    // device still reaches the file at the mount root rather than the one the
    // handle points at.
    assert(fx.create_file("game:\\shader_hlsl.farc", 0x00000001, 1, 0,
                          directory) == x_status::success);
    const uint32_t at_root = fx.memory.read_u32(fixture::handle_out);
    const kernel_object* root_object = fx.kernel.objects().lookup(at_root);
    assert(root_object != nullptr);
    assert(fx.kernel.files().size_of(root_object->host_index) == 32);
}

} // namespace

int main() {
    test_query_full_attributes_reports_size_and_refuses_missing();
    test_create_file_dispositions_and_io_status();
    test_read_write_and_position();
    test_query_information_network_open_and_refusals();
    test_write_file_and_end_of_file();
    test_write_to_a_read_only_handle_is_denied();
    test_read_file_scatter_fills_separate_pages();
    test_query_directory_file();
    test_query_volume_information();
    test_io_completes_before_returning();
    test_a_relative_name_resolves_against_the_root_directory();
    std::printf("kernel_file_test: all checks passed\n");
    return 0;
}
