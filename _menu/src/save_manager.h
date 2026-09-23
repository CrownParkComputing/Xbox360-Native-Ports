#pragma once
#include <filesystem>
#include <fstream>
#include <chrono>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

// Only save-game content (00000001) for the selected title is exposed.
// Delete moves it out of the active profile into a recoverable backup.
struct SaveManager {
    struct Entry { std::filesystem::path path, header; std::string label, title; };
    std::filesystem::path root;
    std::vector<Entry> entries;
    std::string title, status;
    int selected = 0, action = 0;
    bool confirming = false;
    void load_all(const std::vector<std::pair<std::string, std::string>>& ports) {
        namespace fs = std::filesystem;
        entries.clear(); selected = 0; confirming = false;
        if (ports.empty()) return;
        root = fs::path(ports.front().first).parent_path() / "_shared/user-data";
        std::map<std::string, std::string> names;
        for (const auto& [port, name] : ports) {
            std::string id_text;
            std::ifstream id(fs::path(port) / "game-info/title-id.txt"); id >> id_text;
            if (id_text.size() == 8 &&
                id_text.find_first_not_of("0123456789ABCDEFabcdef") == std::string::npos) {
                std::transform(id_text.begin(), id_text.end(), id_text.begin(), ::toupper);
                names[id_text] = name;
            }
        }
        std::error_code ec;
        for (const auto& profile : fs::directory_iterator(root, ec)) {
            const auto uid = profile.path().filename().string();
            if (uid.size() != 16 || uid.find_first_not_of("0123456789ABCDEFabcdef") != std::string::npos || profile.is_symlink()) continue;
            for (const auto& game : fs::directory_iterator(profile.path(), ec)) {
                const std::string tid = game.path().filename().string();
                if (tid.size() != 8 || game.is_symlink()) continue;
                const auto saves = game.path() / "00000001";
                if (fs::is_symlink(saves)) continue;
                for (const auto& save : fs::directory_iterator(saves, ec)) {
                    if (save.is_symlink()) continue;
                    const std::string game_name = names.contains(tid) ? names[tid] : tid;
                    entries.push_back({save.path(), game.path() / "Headers/00000001" /
                                       (save.path().filename().string()+".header"),
                                       game_name+"  |  "+save.path().filename().string()+"  ["+uid+"]", tid});
                }
                ec.clear();
            }
            ec.clear();
        }
        std::sort(entries.begin(), entries.end(), [](const Entry& a, const Entry& b){return a.label < b.label;});
    }
    void perform() {
        namespace fs = std::filesystem;
        if (entries.empty()) {status = "No saves in the library."; confirming = false; return;}
        const bool all = action == 1 || action == 3;
        const bool remove = action >= 2;
        const auto stamp = std::chrono::system_clock::now().time_since_epoch().count();
        const auto backup = root.parent_path() / "save-backups" / "library" / std::to_string(stamp);
        try {
            const int begin = all ? 0 : selected;
            const int end = all ? (int)entries.size() : selected + 1;
            // Complete every backup before removing any active save.
            for (int i = begin; i < end; ++i) {
                for (const auto& src : {entries[i].path, entries[i].header}) {
                    if (!fs::exists(src)) continue;
                    // Refuse symlinks anywhere in a save tree.
                    if (fs::is_symlink(src)) throw std::runtime_error("Save contains a symbolic link");
                    if (fs::is_directory(src)) for (const auto& child : fs::recursive_directory_iterator(src))
                        if (child.is_symlink()) throw std::runtime_error("Save contains a symbolic link");
                    const auto dest = backup / fs::relative(src, root);
                    fs::create_directories(dest.parent_path());
                    fs::copy(src, dest, fs::copy_options::recursive);
                }
            }
            if (remove) for (int i = begin; i < end; ++i) {
                fs::remove_all(entries[i].path);
                fs::remove(entries[i].header);
            }
            status = std::string(remove ? "Deleted from game; backup: " : "Backup: ") + backup.string();
        } catch (const std::exception& e) { status = std::string("Save operation failed: ") + e.what(); }
        confirming = false;
    }
};
