// Small native entry point for a focused collection.
// The collection directory is the directory containing this executable. The
// shared rexmenu then reads that directory's _shared/games.index and detects
// only the port folders belonging to this collection.
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <string>
#include <vector>
#include <unistd.h>

namespace fs = std::filesystem;

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    std::error_code ec;
    const fs::path self = fs::weakly_canonical(fs::path("/proc/self/exe"), ec);
    if (ec || self.empty()) {
        std::fprintf(stderr, "collection launcher: cannot locate itself\n");
        return 2;
    }
    const fs::path collection = self.parent_path();
    const fs::path menu = collection.parent_path().parent_path() /
                          "_menu" / "build" / "rexmenu";
    if (!fs::exists(menu, ec)) {
        std::fprintf(stderr, "collection launcher: missing %s\n", menu.c_str());
        return 2;
    }

    fs::path first_game;
    // Ports live either directly in the collection dir or one tier down in
    // grouping dirs (xbla/, dvd/). Check both.
    std::vector<fs::path> tiers = {collection};
    for (const auto &entry : fs::directory_iterator(collection, ec)) {
        if (ec || !entry.is_directory(ec)) continue;
        const auto name = entry.path().filename().string();
        if (!name.empty() && name[0] != '_') tiers.push_back(entry.path());
    }
    for (const auto &tier : tiers) {
        std::error_code ec2;
        for (const auto &entry : fs::directory_iterator(tier, ec2)) {
            if (ec2 || !entry.is_directory(ec2)) continue;
            const auto name = entry.path().filename().string();
            if (!name.empty() && name[0] == '_') continue;
            for (const auto &manifest : fs::directory_iterator(entry.path(), ec2)) {
                if (manifest.path().filename().string().ends_with("_manifest.toml")) {
                    first_game = entry.path();
                    break;
                }
            }
            if (!first_game.empty()) break;
        }
        if (!first_game.empty()) break;
    }
    if (first_game.empty()) {
        std::fprintf(stderr, "collection launcher: no games found in %s\n",
                     collection.c_str());
        return 3;
    }

    execl(menu.c_str(), menu.c_str(), first_game.c_str(), (char *)nullptr);
    std::perror("collection launcher: exec rexmenu");
    return 127;
}
