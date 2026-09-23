// xdbf_dump - what a title says its own achievements are.
//
//   cmake --build build --target xdbf_dump
//   ./build/xdbf_dump <title.xex>
//
// Reads a XEX, maps its image, finds the SPA resource named after the title id
// and prints every achievement it defines with the name, both descriptions and
// the gamerscore. This is the measurement behind "all achievements available":
// the list comes out of the title, so it cannot drift from what the title
// unlocks by.
#include "whitty_xenon/image.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/xdbf.h"
#include "whitty_xenon/xex.h"

#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

std::vector<uint8_t> read_file(const char* path) {
    std::ifstream in(path, std::ios::binary | std::ios::ate);
    std::vector<uint8_t> data;
    if (!in) return data;
    const std::streamsize n = in.tellg();
    in.seekg(0);
    data.resize(static_cast<std::size_t>(n));
    if (!in.read(reinterpret_cast<char*>(data.data()), n)) data.clear();
    return data;
}

} // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::fprintf(stderr, "usage: xdbf_dump <title.xex>\n");
        return 1;
    }
    const std::vector<uint8_t> file = read_file(argv[1]);
    if (file.empty()) {
        std::fprintf(stderr, "could not read %s\n", argv[1]);
        return 1;
    }

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::fprintf(stderr, "parse_xex: %s\n", error.c_str());
        return 1;
    }
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

    std::printf("title id %08X, %zu resource(s):\n", info.title_id,
                info.resources.size());
    for (const xex_resource& resource : info.resources)
        std::printf("  %-8s at %08X, %u byte(s)\n", resource.name.c_str(),
                    resource.address, resource.size);

    xdbf_file spa;
    const uint8_t* image = static_cast<const uint8_t*>(
        memory.host(info.image_base, loaded.image_size));
    if (image == nullptr) {
        std::fprintf(stderr, "image is not committed\n");
        return 1;
    }
    // Resolved in the language the runtime reports through XGetLanguage
    // (English), which is what the console's own dashboard would show.
    if (!load_title_spa(info, image, loaded.image_size, info.image_base, spa,
                        error, xdbf_language::english)) {
        std::fprintf(stderr, "SPA: %s\n", error.c_str());
        return 1;
    }
    std::printf("\nSPA: %zu entr(y/ies), title id %08X, default language %u\n",
                spa.entries().size(), spa.title_id(), spa.default_language());
    for (const xdbf_entry& entry : spa.entries())
        std::printf("  section %u id %016llX at +%u, %u byte(s)\n",
                    entry.section, static_cast<unsigned long long>(entry.id),
                    entry.offset, entry.size);

    std::printf("\n%zu achievement(s), %u gamerscore total:\n",
                spa.achievements().size(), spa.total_gamerscore());
    for (const xdbf_achievement& achievement : spa.achievements()) {
        std::printf("  [%3u] %-40s %4uG  flags %08X image %u\n", achievement.id,
                    achievement.name.c_str(), achievement.gamerscore,
                    achievement.flags, achievement.image_id);
        std::printf("        unlocked: %s\n", achievement.description.c_str());
        std::printf("        locked:   %s\n",
                    achievement.locked_description.c_str());
    }

    // The leaderboards, out of XVC2. These are the board ids a title submits
    // scores under, so this is the only place a board number acquires a name.
    std::printf("\n%zu leaderboard(s):\n", spa.leaderboards().size());
    const auto aggregation = [](uint16_t type) {
        switch (type) {
            case xdbf_aggregation::last: return "last";
            case xdbf_aggregation::sum: return "sum";
            case xdbf_aggregation::min: return "min";
            case xdbf_aggregation::max: return "max";
            default: return "";
        }
    };
    for (const xdbf_leaderboard& board : spa.leaderboards()) {
        std::printf("  [%u] %-40s flags %08X%s\n", board.id,
                    board.name.c_str(), board.flags,
                    board.is_leaderboard() ? "" : "  (not a leaderboard)");
        for (const xdbf_view_field& column : board.columns) {
            const bool ranked = board.ranked_column() == &column;
            std::printf("        column property %08X attribute %04X %-6s %s%s\n",
                        column.property_id, column.attribute_id,
                        aggregation(column.aggregation_type),
                        column.name.c_str(), ranked ? "  <- ranked" : "");
        }
        for (const xdbf_view_field& row : board.rows)
            std::printf("        row    property %08X attribute %04X %-6s %s\n",
                        row.property_id, row.attribute_id,
                        aggregation(row.aggregation_type), row.name.c_str());
    }
    return 0;
}
