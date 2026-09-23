// Integration test: parse real retail XEX files.
//
// The unit tests prove the parser against headers we wrote ourselves, which can
// only ever confirm our own understanding of the format. This test runs it over
// genuine retail containers and checks values that were independently
// corroborated - the title ids match the STFS package directory names on disk
// and `file`'s media id, and Geometry Wars' title id matches the one recorded
// during its earlier bring-up.
//
// Files come from the environment so the test is skipped, not failed, on a
// machine that does not have them.
#include "whitty_xenon/xex.h"

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace whitty_xenon;

namespace {

struct expected_title {
    const char* env_var;
    const char* name;
    uint32_t title_id;
    uint32_t image_base;
    uint32_t entry_point;
    uint32_t image_size;
    xex_encryption encryption;
    xex_compression compression;
};

// Values captured from the real containers and cross-checked against
// independent sources (package directory name, `file` output, bring-up notes).
constexpr expected_title kTitles[] = {
    {"WHITTY_XEX_ALIENBREED", "Alien Breed: Evolution", 0x58410964u,
     0x82000000u, 0x827F2030u, 0x01060000u, xex_encryption::normal,
     xex_compression::basic},
    {"WHITTY_XEX_GEOMETRYWARS", "Geometry Wars: Retro Evolved", 0x584107EDu,
     0x82000000u, 0x82029F60u, 0x00120000u, xex_encryption::normal,
     xex_compression::normal},
    {"WHITTY_XEX_SPACEGIRAFFE", "Space Giraffe", 0x5841080Cu, 0x82000000u,
     0x820B3128u, 0x00440000u, xex_encryption::normal,
     xex_compression::normal},
};

bool file_exists(const std::string& path) {
    std::ifstream input(path, std::ios::binary);
    return static_cast<bool>(input);
}

// Returns false when the file is absent so the caller can skip it.
bool check_title(const expected_title& title, int& checked) {
    const char* path = std::getenv(title.env_var);
    if (!path || !*path || !file_exists(path)) {
        std::printf("  skip %-30s (%s not set or missing)\n", title.name,
                    title.env_var);
        return true;
    }

    xex_info info;
    std::string error;
    if (!parse_xex_file(path, info, error)) {
        std::printf("  FAIL %-30s %s\n", title.name, error.c_str());
        return false;
    }

    assert(info.title_id == title.title_id);
    assert(info.image_base == title.image_base);
    assert(info.entry_point == title.entry_point);
    assert(info.image_size == title.image_size);
    assert(info.encryption == title.encryption);
    assert(info.compression == title.compression);
    assert(info.has_execution_info);
    assert(info.has_file_format_info);

    // Every retail title carries a 16-byte wrapped AES session key; the image
    // loader needs it to decrypt the body.
    assert(info.wrapped_session_key.size() == 16);
    // A real image is never zero-sized and its body starts past the headers.
    assert(info.image_size > 0);
    assert(info.pe_offset > 0);

    // The resource table. Every retail title carries at least the resource
    // named after its own title id - that is where the XDBF (achievements,
    // strings, the title's own name) lives - and both facts are checked here:
    // the name is the title id in uppercase hex, and the blob lies inside the
    // image the container says it maps. A resource pointing outside the image
    // would be read as guest memory that was never written.
    assert(!info.resources.empty());
    char id_name[16];
    std::snprintf(id_name, sizeof(id_name), "%08X", info.title_id);
    bool found_title_resource = false;
    for (const xex_resource& resource : info.resources) {
        assert(resource.size > 0);
        assert(resource.address >= info.image_base);
        assert(resource.address - info.image_base + resource.size <=
               info.image_size);
        if (resource.name == id_name) found_title_resource = true;
    }
    assert(found_title_resource);

    std::printf("  ok   %-30s title=%08X entry=%08X size=%08X comp=%u "
                "resources=%zu\n",
                title.name, info.title_id, info.entry_point, info.image_size,
                static_cast<unsigned>(info.compression),
                info.resources.size());
    ++checked;
    return true;
}

} // namespace

int main() {
    std::printf("xex_real_files_test:\n");
    int checked = 0;
    bool ok = true;
    for (const expected_title& title : kTitles)
        ok = check_title(title, checked) && ok;
    if (!ok) {
        std::printf("xex_real_files_test: FAILED\n");
        return 1;
    }
    std::printf("xex_real_files_test: %d real container(s) verified\n", checked);
    return 0;
}
