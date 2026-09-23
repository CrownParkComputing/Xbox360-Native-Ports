// Unit tests for the host-backed file system.
//
// This is checked against real files on the host disk rather than a mock, so
// the reads exercise the actual stream: partial reads at the end, reading from
// an explicit offset versus the running position, and the device-path mapping
// that turns "game:\dir\file" into a host path. A temporary directory is built
// and torn down around the run.
#include "whitty_xenon/file_system.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>

using namespace whitty_xenon;
namespace fs = std::filesystem;

namespace {

// A temporary directory that cleans itself up, so the test leaves nothing on
// disk. The path is seeded from the test binary's own location to stay unique
// without needing a clock or random source.
struct temp_dir {
    fs::path path;
    temp_dir() {
        path = fs::temp_directory_path() / "whitty_xenon_fs_test";
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

void test_resolve_maps_device_to_host_root() {
    temp_dir dir;
    file_system files;
    files.mount("game", dir.path.string());

    // Backslashes become slashes; the device is swapped for its host root.
    assert(files.resolve("game:\\CookedXenon\\startup.xxx") ==
           dir.path.string() + "/CookedXenon/startup.xxx");
    // Case-insensitive device, and a colon or slash on the name is ignored.
    assert(files.resolve("GAME:\\file") == dir.path.string() + "/file");
    // An unmounted device resolves to nothing.
    assert(files.resolve("dvd:\\file").empty());
    // A path with no device at all belongs to the title's own device - the one
    // it was launched from - not to nothing. Space Giraffe opens plain
    // "config.txt", and refusing that told the title its settings file did not
    // exist, with the failure reported against an empty path.
    assert(files.resolve("no_device").empty()); // "d:" is not mounted here
    file_system with_default;
    with_default.mount("d", dir.path.string());
    assert(with_default.resolve("config.txt") ==
           dir.path.string() + "/config.txt");
    assert(with_default.resolve("sub\\file.bin") ==
           dir.path.string() + "/sub/file.bin");
    // A device that IS named still wins over the default.
    with_default.mount("game", dir.path.string() + "/elsewhere");
    assert(with_default.resolve("game:\\f") ==
           dir.path.string() + "/elsewhere/f");
}

void test_open_read_and_size() {
    temp_dir dir;
    dir.write("data.bin", "ABCDEFGH"); // 8 bytes
    file_system files;
    files.mount("game", dir.path.string());

    const uint32_t id = files.open(files.resolve("game:\\data.bin"));
    assert(id != 0);
    assert(files.open_count() == 1);
    assert(files.size_of(id) == 8);

    // Sequential reads advance the position.
    char buf[4] = {};
    assert(files.read(id, buf, 4, file_system::kCurrentOffset) == 4);
    assert(std::string(buf, 4) == "ABCD");
    assert(files.read(id, buf, 4, file_system::kCurrentOffset) == 4);
    assert(std::string(buf, 4) == "EFGH");
    // At the end, a further read yields nothing.
    assert(files.read(id, buf, 4, file_system::kCurrentOffset) == 0);

    files.close(id);
    assert(files.open_count() == 0);
}

void test_read_at_explicit_offset() {
    temp_dir dir;
    dir.write("data.bin", "0123456789");
    file_system files;
    files.mount("game", dir.path.string());
    const uint32_t id = files.open(files.resolve("game:\\data.bin"));

    char buf[3] = {};
    assert(files.read(id, buf, 3, 5) == 3); // from offset 5
    assert(std::string(buf, 3) == "567");
    // An explicit offset does not disturb a later current-position read... it
    // sets the position, so the next current read continues from there.
    assert(files.read(id, buf, 2, file_system::kCurrentOffset) == 2);
    assert(std::string(buf, 2) == "89");
}

void test_partial_read_past_end() {
    temp_dir dir;
    dir.write("small.bin", "hi"); // 2 bytes
    file_system files;
    files.mount("game", dir.path.string());
    const uint32_t id = files.open(files.resolve("game:\\small.bin"));

    char buf[16] = {};
    // Asking for more than exists returns only what is there.
    assert(files.read(id, buf, 16, 0) == 2);
    assert(std::string(buf, 2) == "hi");
    // Reading entirely past the end returns nothing.
    assert(files.read(id, buf, 4, 100) == 0);
}

void test_open_missing_file_fails() {
    temp_dir dir;
    file_system files;
    files.mount("game", dir.path.string());
    assert(files.open(files.resolve("game:\\nope.bin")) == 0);
    assert(files.open_count() == 0);
}

void test_closed_slot_is_reused() {
    temp_dir dir;
    dir.write("a.bin", "aaaa");
    dir.write("b.bin", "bbbb");
    file_system files;
    files.mount("game", dir.path.string());

    const uint32_t a = files.open(files.resolve("game:\\a.bin"));
    files.close(a);
    const uint32_t b = files.open(files.resolve("game:\\b.bin"));
    assert(b == a); // same freed slot
    assert(files.size_of(b) == 4);
}

void test_resolve_ignores_case() {
    temp_dir dir;
    dir.write("CookedXenon/Coalesced.int", "loc");
    file_system files;
    files.mount("d:", dir.path.string());

    // The console's file system ignores case and titles rely on it - Alien
    // Breed asks for both "Coalesced.int" and "Coalesced.INT" for the same
    // file - but the host's does not, so resolution has to fall back to a
    // case-insensitive walk.
    const std::string exact =
        dir.path.string() + "/CookedXenon/Coalesced.int";
    assert(files.resolve("d:\\CookedXenon\\Coalesced.int") == exact);
    assert(files.resolve("d:\\CookedXenon\\Coalesced.INT") == exact);
    assert(files.resolve("D:\\cookedxenon\\coalesced.int") == exact);
    assert(files.open(files.resolve("d:\\COOKEDXENON\\COALESCED.INT")) != 0);

    // A file that really is not there still resolves to the path as asked, so
    // the failure names what the title wanted.
    assert(files.resolve("d:\\CookedXenon\\absent.bin") ==
           dir.path.string() + "/CookedXenon/absent.bin");
    assert(!files.stat_host_path(files.resolve("d:\\nope\\absent.bin")).exists);
}

void test_stat_reports_size_kind_and_attributes() {
    temp_dir dir;
    dir.write("data.bin", "0123456789"); // 10 bytes
    file_system files;
    files.mount("game", dir.path.string());

    const file_stat file = files.stat_host_path(files.resolve("game:\\data.bin"));
    assert(file.exists);
    assert(!file.is_directory);
    assert(file.size == 10);
    // Allocation size rounds up to a whole sector, which is what a title uses
    // to work out how much to read.
    assert(file.allocation_size == file_system::kSectorSize);
    assert((file.attributes & x_file_attribute::normal) != 0);
    assert((file.attributes & x_file_attribute::directory) == 0);
    // Timestamps are the console's epoch, not the host's - a plain time_t
    // would be far too small.
    assert(file.write_time > 116444736000000000ull);

    const file_stat folder =
        files.stat_host_path(files.resolve("game:\\CookedXenon"));
    assert(folder.exists);
    assert(folder.is_directory);
    assert((folder.attributes & x_file_attribute::directory) != 0);

    // Neither a missing path nor an unmounted device exists.
    assert(!files.stat_host_path(files.resolve("game:\\nope")).exists);
    assert(!files.stat_host_path(files.resolve("dvd:\\anything")).exists);
}

void test_disposition_decides_create_versus_open() {
    temp_dir dir;
    dir.write("there.bin", "xx");
    file_system files;
    files.mount("game", dir.path.string());
    const std::string there = files.resolve("game:\\there.bin");
    const std::string missing = files.resolve("game:\\missing.bin");

    // Open-existing: fine when it is there, refused when it is not.
    open_result r = files.open(there, file_disposition::open_existing, false,
                               false, false);
    assert(r.error == file_error::ok && r.action == file_action::opened);
    files.close(r.file_id);
    r = files.open(missing, file_disposition::open_existing, false, false, false);
    assert(r.error == file_error::not_found);
    assert(r.action == file_action::does_not_exist);

    // Create: refused when it already exists, and the title needs to be able
    // to tell that apart from any other failure.
    r = files.open(there, file_disposition::create, true, false, false);
    assert(r.error == file_error::already_exists);
    assert(r.action == file_action::exists);

    // Create a genuinely new file.
    r = files.open(missing, file_disposition::create, true, false, false);
    assert(r.error == file_error::ok && r.action == file_action::created);
    assert(files.is_writable(r.file_id));
    assert(files.size_of(r.file_id) == 0);
    files.close(r.file_id);

    // Overwrite-always truncates what is there.
    r = files.open(there, file_disposition::overwrite_always, true, false, false);
    assert(r.error == file_error::ok && r.action == file_action::overwritten);
    assert(files.size_of(r.file_id) == 0);
}

void test_directory_and_file_kinds_are_enforced() {
    temp_dir dir;
    dir.write("data.bin", "x");
    file_system files;
    files.mount("game", dir.path.string());

    // Insisting on a plain file when the path names a directory, and the
    // reverse. Both have their own status so a title can react to each.
    open_result r =
        files.open(files.resolve("game:\\CookedXenon"),
                   file_disposition::open_existing, false, false, true);
    assert(r.error == file_error::is_a_directory);
    r = files.open(files.resolve("game:\\data.bin"),
                   file_disposition::open_existing, false, true, false);
    assert(r.error == file_error::not_a_directory);

    // A directory opened as a directory is a scannable handle with no stream.
    r = files.open(files.resolve("game:\\CookedXenon"),
                   file_disposition::open_existing, false, true, false);
    assert(r.error == file_error::ok);
    assert(files.is_directory(r.file_id));
    // Reads and writes on it do nothing rather than misbehaving.
    char buf[4] = {};
    assert(files.read(r.file_id, buf, 4, 0) == 0);
    assert(files.write(r.file_id, buf, 4, 0) == 0);
}

void test_write_read_back_and_position() {
    temp_dir dir;
    file_system files;
    files.mount("game", dir.path.string());
    const open_result r = files.open(files.resolve("game:\\out.bin"),
                                     file_disposition::open_always, true, false,
                                     false);
    assert(r.error == file_error::ok);
    const uint32_t id = r.file_id;

    assert(files.write(id, "HELLO", 5, file_system::kCurrentOffset) == 5);
    assert(files.position(id) == 5);
    assert(files.write(id, "!!", 2, file_system::kCurrentOffset) == 2);
    assert(files.size_of(id) == 7);

    // The size a query reports tracks what has been written, even before the
    // stream has flushed it to the host.
    assert(files.stat_of(id).size == 7);

    char buf[8] = {};
    assert(files.read(id, buf, 7, 0) == 7);
    assert(std::string(buf, 7) == "HELLO!!");

    // The cursor a title sets is where the next current-position read starts.
    assert(files.set_position(id, 5));
    assert(files.read(id, buf, 2, file_system::kCurrentOffset) == 2);
    assert(std::string(buf, 2) == "!!");

    // Truncation, and then extension.
    assert(files.set_length(id, 4));
    assert(files.size_of(id) == 4);
    assert(files.position(id) == 4); // clamped: it was past the new end
    assert(files.read(id, buf, 8, 0) == 4);
    assert(std::string(buf, 4) == "HELL");
}

void test_write_refused_on_a_read_only_handle() {
    temp_dir dir;
    dir.write("data.bin", "keep");
    file_system files;
    files.mount("game", dir.path.string());
    const uint32_t id = files.open(files.resolve("game:\\data.bin"));

    assert(!files.is_writable(id));
    // A read-only handle must refuse rather than quietly discard - otherwise
    // the title believes it persisted something.
    assert(files.write(id, "gone", 4, 0) == 0);
    assert(!files.set_length(id, 0));

    char buf[4] = {};
    assert(files.read(id, buf, 4, 0) == 4);
    assert(std::string(buf, 4) == "keep");
}

void test_wildcard_matching() {
    // An empty pattern is "everything", which is how an unfiltered scan is
    // spelled.
    assert(match_file_pattern("anything.xxx", ""));
    assert(match_file_pattern("startup.xxx", "*.xxx"));
    assert(!match_file_pattern("startup.upk", "*.xxx"));
    assert(match_file_pattern("startup.xxx", "*"));
    assert(match_file_pattern("startup.xxx", "startup.???"));
    assert(!match_file_pattern("startup.xxx", "startup.??"));
    // Case-insensitive, as the console's file names are.
    assert(match_file_pattern("STARTUP.XXX", "*.xxx"));
    assert(match_file_pattern("startup.xxx", "*.XXX"));
    // A '*' in the middle, which needs the matcher to backtrack.
    assert(match_file_pattern("a_long_name.xxx", "a*name.xxx"));
    assert(!match_file_pattern("a_long_name.xxx", "a*name.upk"));
    assert(match_file_pattern("aaa", "*a"));
}

void test_directory_scan() {
    temp_dir dir;
    dir.write("CookedXenon/a.xxx", "1");
    dir.write("CookedXenon/b.upk", "22");
    dir.write("CookedXenon/c.xxx", "333");
    file_system files;
    files.mount("game", dir.path.string());
    const open_result r =
        files.open(files.resolve("game:\\CookedXenon"),
                   file_disposition::open_existing, false, true, false);
    assert(r.error == file_error::ok);
    const uint32_t id = r.file_id;

    // Unfiltered: every child, once each, in a stable order.
    directory_entry entry;
    assert(files.next_directory_entry(id, "", false, entry));
    assert(entry.name == "a.xxx" && entry.index == 0);
    assert(entry.info.exists && entry.info.size == 1);
    assert(files.next_directory_entry(id, "", false, entry));
    assert(entry.name == "b.upk" && entry.index == 1);
    assert(files.next_directory_entry(id, "", false, entry));
    assert(entry.name == "c.xxx" && entry.index == 2);
    // Exhausted.
    assert(!files.next_directory_entry(id, "", false, entry));

    // Restarting goes back to the beginning.
    assert(files.next_directory_entry(id, "", true, entry));
    assert(entry.name == "a.xxx");

    // A pattern restarts the scan and filters it; the index it reports is the
    // child's position in the directory, not in the filtered run. The filter
    // then sticks, so the calls that follow - which pass no name - continue
    // the same filtered search rather than reverting to everything.
    assert(files.next_directory_entry(id, "*.xxx", false, entry));
    assert(entry.name == "a.xxx" && entry.index == 0);
    assert(files.next_directory_entry(id, "", false, entry));
    assert(entry.name == "c.xxx" && entry.index == 2); // b.upk filtered out
    assert(!files.next_directory_entry(id, "", false, entry));

    // A pattern nothing matches simply finds nothing.
    assert(!files.next_directory_entry(id, "*.nope", false, entry));

    // Scanning something that is not a directory finds nothing either.
    const uint32_t file = files.open(files.resolve("game:\\CookedXenon\\a.xxx"));
    assert(!files.next_directory_entry(file, "", true, entry));
}

} // namespace

int main() {
    test_resolve_maps_device_to_host_root();
    test_open_read_and_size();
    test_read_at_explicit_offset();
    test_partial_read_past_end();
    test_open_missing_file_fails();
    test_closed_slot_is_reused();
    test_resolve_ignores_case();
    test_stat_reports_size_kind_and_attributes();
    test_disposition_decides_create_versus_open();
    test_directory_and_file_kinds_are_enforced();
    test_write_read_back_and_position();
    test_write_refused_on_a_read_only_handle();
    test_wildcard_matching();
    test_directory_scan();
    std::printf("file_system_test: all checks passed\n");
    return 0;
}
