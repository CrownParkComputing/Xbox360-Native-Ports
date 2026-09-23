// rexmenu - the start menu of a recompiled port, rendered directly with
// raylib.
//
//   rexmenu <port-root> [--selftest]
//
// One menu for the family: it is told one port root and reads that port's own
// facts - the game's name from config/<slug>.toml, the importer from tools/,
// the content checksums from content/. It also discovers the SIBLING ports in
// the same tree and can switch between them from the menu (Game row, or the
// game list): saves are family-wide under the shared user-data root, so the
// move loses nothing - the games see each other's saves exactly as the
// console versions did. Play (no DLC) runs the active port's run.sh and comes
// back to the menu when the game exits; Import hands a file or folder the
// player picked to the active port's own importer and streams its output;
// Quit quits.
//
// Pad-first, on purpose. The retro_touch_pad overlay (touch_pad.cpp/h) is
// drawn on screen and driven by mouse or touch; raylib reads gamepads
// natively, so a real controller and the uinput virtual pad just work - the
// menu is fully navigable without ever touching a keyboard. Keyboard and mouse
// (through the on-screen pad) also work everywhere.
//
// What this deliberately is not: a zenity dialog. The old face of a port
// (port_gui.sh) popped system dialogs the pad could not reach; every screen
// here is drawn and driven inside the one raylib window.
#include "touch_pad.h"
#include "virt_pad.h"
#include "save_manager.h"

#include <raylib.h>
#include <rlgl.h>          // rlGetProcAddress - loading GL_EXT_memory_object_fd
#include <GL/gl.h>
#include <GL/glext.h>       // PFNGL*EXTPROC typedefs for the extension above

// Shared-memory frame ring (the fast path of embedded play). POSIX shm needs
// the usual POSIX headers; raylib does not pull them in for us.
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/un.h>
#include <unistd.h>

#include <algorithm>
#include <sstream>
#include <atomic>
#include <chrono>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <optional>
#include <string>
#include <thread>
#include <vector>

#include <fcntl.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <unistd.h>

// raylib 6 has no GetGamepadCount; the hard cap lives in config.h.
#ifndef MAX_GAMEPADS
#define MAX_GAMEPADS 4
#endif

namespace fs = std::filesystem;

using touchpad::set_ui_font;
using touchpad::ui_measure;
using touchpad::ui_text;

/* ---- achievements: catalog (game-info/achievements.toml, written by       */
/* `rexglue init achievements`) + unlock state (the runtime's own save,      */
/* <user_root>/achievements/<title_id_hex>.toml) --------------------------- */

struct AchievementInfo {
    uint32_t id = 0;
    std::string label;
    std::string description;
    uint32_t gamerscore = 0;
    std::string icon_path;   // resolved absolute path, empty if none shipped
    bool unlocked = false;
};

// Unescapes the minimal set achievements.toml's generator actually emits
// (\" and \\); good enough for display, not a general TOML string parser.
static std::string toml_unescape(const std::string &s) {
    std::string out;
    out.reserve(s.size());
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '\\' && i + 1 < s.size() && (s[i + 1] == '"' || s[i + 1] == '\\')) {
            out += s[++i];
        } else {
            out += s[i];
        }
    }
    return out;
}

static bool toml_string_value(const std::string &line, const std::string &key, std::string &out) {
    if (line.rfind(key, 0) != 0) return false;
    const auto q1 = line.find('"');
    if (q1 == std::string::npos) return false;
    const auto q2 = line.rfind('"');
    if (q2 <= q1) return false;
    out = toml_unescape(line.substr(q1 + 1, q2 - q1 - 1));
    return true;
}

static bool toml_uint_value(const std::string &line, const std::string &key, uint32_t &out) {
    if (line.rfind(key, 0) != 0) return false;
    const auto eq = line.find('=');
    if (eq == std::string::npos) return false;
    out = (uint32_t)std::strtoul(line.c_str() + eq + 1, nullptr, 10);
    return true;
}

// Loads the catalog `rexglue init achievements` wrote (id/label/description/
// gamerscore/icon), then marks each entry unlocked against the runtime's own
// save file - the same one the in-game overlay reads and writes, so this is
// never a second source of truth, just a second reader of it.
static std::vector<AchievementInfo> load_achievements(const std::string &port_root,
                                                       const std::string &user_data_root) {
    std::vector<AchievementInfo> out;
    const std::string info_dir = port_root + "/game-info";
    std::ifstream cat(info_dir + "/achievements.toml");
    if (!cat) return out;

    std::string title_id_hex;
    AchievementInfo cur;
    bool have_entry = false;
    auto flush = [&]() {
        if (have_entry && cur.id) out.push_back(cur);
        cur = AchievementInfo{};
        have_entry = false;
    };
    std::string line;
    std::string icon_path_raw;
    while (std::getline(cat, line)) {
        if (title_id_hex.empty() && line.rfind("# Title ID:", 0) == 0) {
            std::istringstream iss(line.substr(std::strlen("# Title ID:")));
            iss >> title_id_hex;
            continue;
        }
        if (line.rfind("[[achievements]]", 0) == 0) {
            flush();
            have_entry = true;
            icon_path_raw.clear();
            continue;
        }
        uint32_t u;
        std::string s;
        if (toml_uint_value(line, "id", u)) { cur.id = u; continue; }
        if (toml_string_value(line, "label", s)) { cur.label = s; continue; }
        if (toml_string_value(line, "description", s)) { cur.description = s; continue; }
        if (toml_uint_value(line, "gamerscore", u)) { cur.gamerscore = u; continue; }
        if (toml_string_value(line, "icon_path", s)) { icon_path_raw = s; continue; }
        if (!icon_path_raw.empty()) {
            const std::string full = info_dir + "/" + icon_path_raw;
            std::error_code ec;
            if (fs::exists(full, ec)) cur.icon_path = full;
        }
    }
    flush();

    if (!title_id_hex.empty() && !user_data_root.empty()) {
        std::ifstream unlocks(user_data_root + "/achievements/" + title_id_hex + ".toml");
        std::string uline;
        std::vector<uint32_t> ids;
        while (std::getline(unlocks, uline)) {
            const std::string tag = "[unlocked.";
            if (uline.rfind(tag, 0) != 0) continue;
            const auto close = uline.find(']', tag.size());
            if (close == std::string::npos) continue;
            ids.push_back((uint32_t)std::strtoul(
                uline.substr(tag.size(), close - tag.size()).c_str(), nullptr, 10));
        }
        for (auto &a : out)
            if (std::find(ids.begin(), ids.end(), a.id) != ids.end()) a.unlocked = true;
    }
    return out;
}

/* ---- the port: what the menu reads from the port root ------------------- */

// Defined below, just before family_games.
static fs::path collection_root_of(const std::string &port_root);
static bool has_default_xex(const std::string &port_root);

struct Port {
    std::string root;
    std::string slug;     // manifest project name == executable name
    std::string name;     // window_title from config/<slug>.toml
    std::string sdk_version;
    std::string source;   // content/SOURCE.txt first line
    std::string runtime_stats;
    bool xbla = false;    // package title; false means disc title
    bool content_ok = false;
    std::vector<AchievementInfo> achievements;  // empty if game-info/achievements.toml is absent
    std::vector<std::string> review;

    static std::optional<Port> load(const std::string &root) {
        Port p;
        p.root = fs::absolute(root).lexically_normal().string();
        if (!fs::is_directory(p.root)) return std::nullopt;

        // Slug: the manifest's project name, not the directory name (rru-recomp
        // builds ridgeracerunbounded).
        for (const auto &e : fs::directory_iterator(p.root)) {
            const std::string n = e.path().filename().string();
            if (n.ends_with("_manifest.toml")) {
                std::ifstream in(e.path());
                std::string line;
                while (std::getline(in, line)) {
                    toml_string_value(line, "name", p.slug);
                    toml_string_value(line, "sdk_version", p.sdk_version);
                }
                break;
            }
        }
        if (p.slug.empty())
            p.slug = fs::path(p.root).filename().string();

        {
            std::ifstream in(p.root + "/game-info/runtime-stats.txt");
            p.runtime_stats.assign(std::istreambuf_iterator<char>(in), {});
            while (!p.runtime_stats.empty() &&
                   (p.runtime_stats.back() == '\n' || p.runtime_stats.back() == '\r'))
                p.runtime_stats.pop_back();
        }

        // Name: window_title from the port's own config, else the slug.
        {
            std::ifstream in(p.root + "/config/" + p.slug + ".toml");
            std::string line;
            const std::string key = "window_title = \"";
            while (std::getline(in, line)) {
                auto at = line.find(key);
                if (at != std::string::npos) {
                    auto end = line.find('"', at + key.size());
                    if (end != std::string::npos) {
                        p.name = line.substr(at + key.size(), end - at - key.size());
                        break;
                    }
                }
            }
        }
        if (p.name.empty()) p.name = p.slug;

        {
            std::ifstream in(p.root + "/game-info/launcher-review.txt");
            std::string line;
            while (std::getline(in, line)) if (!line.empty()) p.review.push_back(line);
        }

        // Expected source: content/SOURCE.txt's first line.
        {
            std::ifstream in(p.root + "/content/SOURCE.txt");
            std::string line, all;
            std::getline(in, p.source);
            all = p.source;
            while (std::getline(in, line)) all += " " + line;
            std::transform(all.begin(), all.end(), all.begin(),
                           [](unsigned char c) { return (char)std::tolower(c); });
            p.xbla = all.find("xbox live arcade") != std::string::npos ||
                     all.find("xbla") != std::string::npos;
        }

        // Achievements: same family-wide shared root the game saves find each
        // other in (see [[rexglue-side-panels-overlay]] / the Info screen).
        {
            std::error_code ec;
            const fs::path shared = collection_root_of(p.root) / "_shared" / "user-data";
            const std::string user_data_root =
                fs::exists(shared, ec) ? shared.lexically_normal().string()
                                       : (p.root + "/user-data");
            p.achievements = load_achievements(p.root, user_data_root);
        }
        return p;
    }

    // The checksums ship with the port; they are what make an import verifiable.
    bool check_content() {
        // content_zip.sh verify sha256-hashes the WHOLE asset tree - 13s for
        // MCLA's 6.2 GB - and this was called on every game select AND every
        // Play press, so picking a game and launching it cost 25+ seconds of
        // a frozen menu before anything happened. import_content.sh already
        // touches this marker on a successful verify; trust it once it is
        // there and skip straight to "verified" - a single stat instead of
        // reading every byte of the game again on every select/launch.
        const std::string marker = root + "/assets/.recomp-content-verified";
        if (fs::exists(marker)) {
            content_ok = true;
            return true;
        }
        // content_zip.sh verify exits 0 when the tree matches; a port whose
        // assets already hold a default.xex counts too (run.sh's own rule).
        const std::string cmd =
            root + "/tools/content_zip.sh verify >/dev/null 2>&1";
        const int rc = std::system(cmd.c_str());
        content_ok = (rc == 0) || has_default_xex(root);
        if (content_ok) std::ofstream(marker).close();
        return content_ok;
    }
};

// The collection root is the nearest ancestor of the port (starting at its
// parent) that carries _shared/games.index. Ports may sit one tier down in
// grouping dirs (xbla/, dvd/), so the immediate parent is not always it.
static fs::path collection_root_of(const std::string &port_root) {
    fs::path dir = fs::path(port_root).parent_path();
    for (int i = 0; i < 4; ++i) {
        if (fs::exists(dir / "_shared" / "games.index")) return dir;
        if (!dir.has_parent_path() || dir.parent_path() == dir) break;
        dir = dir.parent_path();
    }
    return fs::path(port_root).parent_path();
}

// assets/default.xex, checked case-insensitively: some rips ship DEFAULT.XEX
// and on Linux a case-sensitive check reads that as missing content.
static bool has_default_xex(const std::string &port_root) {
    const fs::path assets = fs::path(port_root) / "assets";
    if (fs::exists(assets / "default.xex")) return true;
    std::error_code ec;
    for (const auto &e : fs::directory_iterator(assets, ec)) {
        std::string n = e.path().filename().string();
        std::transform(n.begin(), n.end(), n.begin(),
                       [](unsigned char c) { return std::tolower(c); });
        if (n == "default.xex") return true;
    }
    return false;
}

// Resolve an index entry (a port dir name) against the collection root,
// falling back to one tier of grouping dirs (xbla/, dvd/) underneath it.
static std::string resolve_port_dir(const fs::path &collection_root,
                                    const std::string &dir) {
    const fs::path direct = collection_root / dir;
    if (fs::exists(direct)) return direct.string();
    std::error_code ec;
    for (const auto &e : fs::directory_iterator(collection_root, ec)) {
        if (!e.is_directory(ec)) continue;
        const std::string name = e.path().filename().string();
        if (name.rfind("_", 0) == 0) continue;
        const fs::path nested = e.path() / dir;
        if (fs::exists(nested)) return nested.string();
    }
    return direct.string();
}

// The games the launcher offers. The list comes from the family index file
// (_shared/games.index at the collection root - which may sit above grouping
// dirs like xbla/ and dvd/ - one game per line, "<port-dir> | <display
// name>", # comments) so the rail shows exactly what is listed, in order;
// entries are resolved at the root or one tier down, never a full tree scan.
// Only if the index is missing does it fall back to discovering
// <name>-recomp siblings, and then only with the cheap default.xex existence
// check, never the full sha256 verify: that stalled startup for minutes when
// done per port.
static std::vector<Port> family_games(const Port &current) {
    std::vector<Port> games;
    const fs::path parent = collection_root_of(current.root);
    const std::string index_path = (parent / "_shared" / "games.index").string();
    if (std::ifstream in(index_path); in) {
        std::string line;
        while (std::getline(in, line)) {
            if (line.empty() || line[0] == '#') continue;
            const auto bar = line.find('|');
            std::string dir = bar == std::string::npos
                                  ? line
                                  : line.substr(0, bar);
            std::string shown = bar == std::string::npos
                                    ? std::string()
                                    : line.substr(bar + 1);
            // Trim both fields.
            auto trim = [](std::string &s) {
                const auto a = s.find_first_not_of(" \t");
                const auto b = s.find_last_not_of(" \t\r");
                s = a == std::string::npos ? "" : s.substr(a, b - a + 1);
            };
            trim(dir); trim(shown);
            if (dir.empty() || dir[0] == '_') continue;
            auto p = Port::load(resolve_port_dir(parent, dir));
            if (!p) continue;
            if (!shown.empty()) p->name = shown;
            // Same cheap rule as the fallback scan: run.sh accepts a
            // default.xex, so the list just mirrors that.
            p->content_ok = has_default_xex(p->root);
            games.push_back(std::move(*p));
        }
    }
    if (games.empty()) {
        // Fallback: no index. Discover siblings, current port first.
        std::error_code ec;
        for (const auto &e : fs::directory_iterator(parent, ec)) {
            if (!e.is_directory(ec)) continue;
            const std::string name = e.path().filename().string();
            if (name.rfind("_", 0) == 0) continue;
            if (name.size() <= 7 ||
                name.compare(name.size() - 7, 7, "-recomp") != 0) continue;
            auto p = Port::load(e.path().string());
            if (!p) continue;
            p->content_ok = has_default_xex(e.path().string());
            games.push_back(*p);
        }
        std::sort(games.begin(), games.end(),
                  [](const Port &a, const Port &b) { return a.name < b.name; });
    }
    return games;
}

/* ---- a child job: import or play, with its output streamed -------------- */

// Both long-running actions are the port's own scripts, run as children with a
// pipe: the menu shows their lines as they arrive and learns the exit code
// when they finish. Direct execl - no shell, so no quoting traps in a path.
struct Job {
    pid_t pid = -1;
    int fd = -1;
    bool running = false;
    int exit_code = -1;
    std::vector<std::string> lines;
    std::string pending;
    bool embedded = false;   // frames streamed to framedir, menu paints them
    std::string framedir;    // REXMENU_FRAMEDIR reported by the script
    std::string shm;         // REXMENU_SHM: shared-memory frame ring (fast path)
    std::string stream;      // REXMENU_STREAM: GPU-direct socket (fastest path)
    pid_t pgid = -1;         // the child's process group (embedded play)
    double started_at = 0.0; // GetTime() when start()/start_env() launched it
    bool archive_job = false;
    bool stfs_job = false;
    std::string archive_dir;
    std::string archive_source;
    std::string stfs_output;

    bool start_command(const std::vector<std::string> &argv) {
        if (argv.empty()) return false;
        int out[2];
        if (pipe(out) != 0) return false;
        pid = fork();
        if (pid < 0) { close(out[0]); close(out[1]); return false; }
        if (pid == 0) {
            setpgid(0, 0);
            dup2(out[1], 1); dup2(out[1], 2);
            close(out[0]); close(out[1]);
            setenv("REX_MENU_QUIET", "1", 1);
            std::vector<char *> args;
            args.reserve(argv.size() + 1);
            for (const auto &arg : argv) args.push_back(const_cast<char *>(arg.c_str()));
            args.push_back(nullptr);
            execvp(args[0], args.data());
            _exit(127);
        }
        setpgid(pid, pid);
        pgid = pid;
        close(out[1]);
        fd = out[0];
        fcntl(fd, F_SETFL, O_NONBLOCK);
        running = true;
        exit_code = -1;
        embedded = false;
        framedir.clear();
        shm.clear();
        stream.clear();
        lines.clear();
        pending.clear();
        started_at = GetTime();
        return true;
    }

    bool start_archive(const std::string &source, const std::string &work) {
        const std::string lower = [&] {
            std::string s = source;
            std::transform(s.begin(), s.end(), s.begin(),
                           [](unsigned char c) { return char(std::tolower(c)); });
            return s;
        }();
        std::vector<std::string> args;
        if (lower.size() >= 4 && lower.compare(lower.size() - 4, 4, ".rar") == 0) {
            // -y answers any "corrupt / overwrite?" prompts automatically so
            // a non-TTY stdin (the launcher's case) doesn't stall extraction.
            args = {"unrar", "x", "-o+", "-y", "-idq", source, work + "/"};
        } else if (lower.size() >= 4 && lower.compare(lower.size() - 4, 4, ".zip") == 0) {
            args = {"unzip", "-o", source, "-d", work};
        } else if (lower.size() >= 4 && lower.compare(lower.size() - 4, 4, ".iso") == 0) {
            // Xbox 360 disc images are XDVDFS; 7z cannot extract them. The
            // rexiso tool shipped with the SDK reads them - look next to the
            // launcher first, then fall back to the SDK install path.
            const char *home = std::getenv("HOME");
            std::vector<std::string> candidates;
            if (home) {
                candidates.push_back(std::string(home) + "/rexglue-vmx/out/install/linux-amd64/bin/rexiso");
                candidates.push_back(std::string(home) + "/rexglue-vmx/out/linux-amd64/rexiso");
            }
            std::string rexiso;
            std::error_code rexiso_ec;
            for (const auto &c : candidates) {
                if (fs::exists(c, rexiso_ec)) { rexiso = c; break; }
            }
            if (rexiso.empty()) {
                std::fprintf(stderr, "collection launcher: rexiso is missing - cannot extract Xbox 360 .iso images\n");
                return false;
            }
            args = {rexiso, "extract", source, work};
        } else {
            args = {"7z", "x", "-y", "-o" + work, source};
        }
        archive_job = true;
        archive_dir = work;
        archive_source = source;
        return start_command(args);
    }

    bool start(const std::string &script, const std::string &arg) {
        std::vector<std::string> args;
        if (!arg.empty()) args.push_back(arg);
        return start_args(script, args);
    }

    // Multi-argument form: each vector entry becomes its own argv element
    // (start(script, arg) could carry only one token, so two cvar flags had
    // to move here).
    bool start_args(const std::string &script, const std::vector<std::string> &args) {
        int out[2];
        if (pipe(out) != 0) return false;
        pid = fork();
        if (pid < 0) { close(out[0]); close(out[1]); return false; }
        if (pid == 0) {
            // Own process group: a TERM to the group takes down the script,
            // gamescope and the guest together on quit (embedded play).
            setpgid(0, 0);
            dup2(out[1], 1); dup2(out[1], 2);
            close(out[0]); close(out[1]);
            setenv("REX_MENU_QUIET", "1", 1);
            std::vector<char *> argv;
            argv.push_back(const_cast<char *>(script.c_str()));
            for (const auto &a : args) argv.push_back(const_cast<char *>(a.c_str()));
            argv.push_back(nullptr);
            execv(script.c_str(), argv.data());
            _exit(127);
        }
        setpgid(pid, pid);   // race-free with the child's own call
        pgid = pid;
        close(out[1]);
        fd = out[0];
        fcntl(fd, F_SETFL, O_NONBLOCK);   // the frame loop drains what is there
        running = true;
        exit_code = -1;
        embedded = false;
        framedir.clear();
        shm.clear();
        stream.clear();
        lines.clear();
        pending.clear();
        started_at = GetTime();
        archive_job = false;
        stfs_job = false;
        archive_dir.clear();
        archive_source.clear();
        stfs_output.clear();
        return true;
    }

    void poll() {
        if (!running) return;
        char buf[4096];
        ssize_t n;
        while ((n = read(fd, buf, sizeof(buf))) > 0) {
            pending.append(buf, (size_t)n);
            size_t at;
            while ((at = pending.find('\n')) != std::string::npos) {
                std::string line = pending.substr(0, at);
                pending.erase(0, at + 1);
                // The one stdout contract embedded_play offers: where the
                // presented frames land. Not shown in the log pane.
                const std::string tag = "REXMENU_FRAMEDIR=";
                if (line.rfind(tag, 0) == 0) {
                    embedded = true;
                    framedir = line.substr(tag.size());
                    continue;
                }
                const std::string shm_tag = "REXMENU_SHM=";
                if (line.rfind(shm_tag, 0) == 0) {
                    embedded = true;
                    shm = line.substr(shm_tag.size());
                    continue;
                }
                const std::string stream_tag = "REXMENU_STREAM=";
                if (line.rfind(stream_tag, 0) == 0) {
                    embedded = true;
                    stream = line.substr(stream_tag.size());
                    continue;
                }
                lines.push_back(std::move(line));
            }
            if (lines.size() > 400) lines.erase(lines.begin(), lines.end() - 400);
        }
        int status = 0;
        if (waitpid(pid, &status, WNOHANG) == pid) {
            running = false;
            if (!pending.empty()) { lines.push_back(pending); pending.clear(); }
            if (fd >= 0) { close(fd); fd = -1; }
            exit_code = WIFEXITED(status) ? WEXITSTATUS(status) : -1;
        }
    }

    // Quit embedded play: TERM the whole group (script + gamescope + guest),
    // then KILL after a grace period. The script's own trap also TERMs its
    // group; both directions is what makes shutdown quick and total.
    void kill_group() {
        if (pgid > 0) {
            kill(-pgid, SIGTERM);
            for (int i = 0; i < 20 && kill(-pgid, 0) == 0; ++i) {
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
            kill(-pgid, SIGKILL);
        }
    }

    // start_env: like start, but K=V entries in extra (space-separated) are
    // placed in the child's environment before the exec. Used for runtime
    // knobs that must not collide with the script's argv (embedded_play's
    // only positional argument is a runtime limit).
    bool start_env(const std::string &script, const std::string &extra) {
        int out[2];
        if (pipe(out) != 0) return false;
        pid = fork();
        if (pid < 0) { close(out[0]); close(out[1]); return false; }
        if (pid == 0) {
            setpgid(0, 0);
            std::string item;
            for (char c : extra) {
                if (c == ' ') { put_env(item); item.clear(); }
                else item.push_back(c);
            }
            if (!item.empty()) put_env(item);
            dup2(out[1], 1); dup2(out[1], 2);
            close(out[0]); close(out[1]);
            setenv("REX_MENU_QUIET", "1", 1);
            execl(script.c_str(), script.c_str(), (char *)nullptr);
            _exit(127);
        }
        setpgid(pid, pid);
        pgid = pid;
        close(out[1]);
        fd = out[0];
        fcntl(fd, F_SETFL, O_NONBLOCK);
        running = true;
        exit_code = -1;
        embedded = false;
        framedir.clear();
        shm.clear();
        stream.clear();
        lines.clear();
        pending.clear();
        started_at = GetTime();
        archive_job = false;
        stfs_job = false;
        archive_dir.clear();
        archive_source.clear();
        stfs_output.clear();
        return true;
    }

    static void put_env(const std::string &kv) {
        const auto eq = kv.find('=');
        if (eq == std::string::npos) return;
        setenv(kv.substr(0, eq).c_str(), kv.substr(eq + 1).c_str(), 1);
    }
};

/* ---- the file browser ---------------------------------------------------- */

// A d-pad-driven directory browser. It is the pad's way of answering "where
// is your copy?": up/down move, A enters a directory or chooses a file, B goes
// up one level (and cancels from the start), Y chooses the current DIRECTORY
// itself (for an extracted tree dropped as a folder). X marks files and R1
// picks every file in the listing, so one or ALL of the xex/DLC in a folder
// can be imported in one pass. No text entry anywhere - nothing to type with
// a pad.
class Browser {
public:
    struct Entry { std::string name; bool is_dir; };

    void open(const std::string &start) {
        cwd_ = start;
        sel_ = 0;
        marked_.clear();
        refresh();
    }

    void refresh() {
        entries_.clear();
        std::error_code ec;
        // Hide directories in the entry list entirely: the picker is for
        // file selection (game rips), and any dir still in entries can be
        // picked invisibly because the Browse render only filters visually.
        for (const auto &e : fs::directory_iterator(cwd_, ec)) {
            if (e.is_directory(ec)) continue;
            Entry en;
            en.name = e.path().filename().string();
            en.is_dir = false;
            entries_.push_back(en);
        }
        std::sort(entries_.begin(), entries_.end(),
                  [](const Entry &a, const Entry &b) { return a.name < b.name; });
        if (sel_ >= (int)entries_.size())
            sel_ = entries_.empty() ? 0 : (int)entries_.size() - 1;
    }

    // Returns the chosen paths, or nullopt while still browsing. A single
    // pick comes back as a one-element vector. Cancel is reported through
    // cancelled().
    //
    // Multi-pick: X marks/unmarks file entries and A (or Y) with marks held
    // imports the whole marked set. R1 imports every importable file in the
    // listing at once - the drop-folder case, where one folder holds a copy
    // of every game. Y without marks keeps its old meaning: choose the
    // current directory itself, for an extracted tree dropped as a folder.
    std::optional<std::vector<std::string>> navigate(bool up, bool down, bool a, bool b,
                                                     bool x, bool y, bool all) {
        cancelled_ = false;
        const int count = (int)entries_.size();
        if (up && count) { sel_ = (sel_ + count - 1) % count; }
        if (down && count) { sel_ = (sel_ + 1) % count; }
        if (x && count) {
            const Entry &e = entries_[sel_];
            const std::string p = (fs::path(cwd_) / e.name).string();
            if (!e.is_dir) {
                const auto it = std::find(marked_.begin(), marked_.end(), p);
                if (it == marked_.end()) marked_.push_back(p);
                else marked_.erase(it);
            }
        }
        if (a && count) {
            const Entry &e = entries_[sel_];
            const fs::path p = fs::path(cwd_) / e.name;
            if (e.is_dir) { cwd_ = p.string(); sel_ = 0; refresh(); }
            else if (!marked_.empty()) return take_marked();
            else return std::vector<std::string>{p.string()};
        }
        if (b) {
            marked_.clear();
            const fs::path parent = fs::path(cwd_).parent_path();
            if (parent != cwd_) { cwd_ = parent.string(); sel_ = 0; refresh(); }
            else { cancelled_ = true; return std::nullopt; }
        }
        if (y && count) {
            if (!marked_.empty()) return take_marked();
            return std::vector<std::string>{cwd_};   // import the folder itself
        }
        if (all) {
            std::vector<std::string> picked;
            for (const auto &e : entries_)
                if (!e.is_dir) picked.push_back((fs::path(cwd_) / e.name).string());
            if (!picked.empty()) {
                std::sort(picked.begin(), picked.end());
                return picked;
            }
        }
        return std::nullopt;
    }

    bool cancelled() const { return cancelled_; }
    const std::string &cwd() const { return cwd_; }
    const std::vector<Entry> &entries() const { return entries_; }
    int selection() const { return sel_; }
    bool is_marked(const std::string &path) const {
        return std::find(marked_.begin(), marked_.end(), path) != marked_.end();
    }
    int marked_count() const { return (int)marked_.size(); }

private:
    // Marks are handed over on A/Y, sorted for a stable import order.
    std::vector<std::string> take_marked() {
        std::vector<std::string> out;
        out.swap(marked_);
        std::sort(out.begin(), out.end());
        return out;
    }

    std::string cwd_;
    std::vector<Entry> entries_;
    std::vector<std::string> marked_;
    int sel_ = 0;
    bool cancelled_ = false;
};

/* ---- the embedded display: GPU-direct frame stream ------------------------ */

// Client for REX_PRESENT_STREAM (see the SDK's presenter_streamer.{h,cpp}).
// The producer copies every refreshed guest output image GPU-side into one of
// three device-local images and exports each image's memory plus a
// "copy done" semaphore as opaque fds over a SOCK_SEQPACKET unix socket. This
// class imports both via GL_EXT_memory_object_fd / GL_EXT_semaphore_fd
// straight into GL textures - no readback, no memcpy, no CPU pixel traffic
// anywhere in the chain; UpdateTexture is never called because the imported
// memory IS the texture's storage, kept current by the producer's own copies.
//
// Frame pacing falls out of the protocol for free: sequence N always lands in
// slot N % kBuffers, so draining sequences in order and GPU-waiting on each
// slot's semaphore before sampling it blocks the menu's own draw exactly
// until the producer has produced that frame - the same "shows the guest
// present rate" behaviour the shm path has, with no extra bookkeeping.
class GpuStreamBlitter {
public:
    static constexpr uint32_t kBuffers = 3;   // must match presenter_streamer.cpp

    ~GpuStreamBlitter() { release(); }

    // Non-blocking: one connect attempt per call while not yet connected, so
    // this can be called from the menu's poll loop without stalling frames.
    bool poll(const std::string &socket_path) {
        if (socket_path.empty()) return false;
        if (!connected_ && !attempted_load_ext_) {
            attempted_load_ext_ = true;
            load_ext();
        }
        if (!ext_ok_) return false;   // driver/GL context can't do this; caller falls back
        if (!connected_ && !try_connect(socket_path)) return false;
        return consume_next();
    }

    bool has() const { return connected_ && current_seq_ != 0; }
    // GpuStreamBlitter never owns a raylib Texture2D (see FrameBlitter::draw);
    // callers read width()/height()/gl_id() directly.
    int width() const { return (int)width_; }
    int height() const { return (int)height_; }
    unsigned int gl_id() const { return connected_ ? tex_[cur_slot_] : 0; }

    void release() {
        if (sock_ >= 0) { close(sock_); sock_ = -1; }
        if (gl_ok()) {
            for (uint32_t i = 0; i < kBuffers; ++i) {
                if (tex_[i]) { GLuint t = tex_[i]; glDeleteTextures(1, &t); tex_[i] = 0; }
                if (mem_[i]) { glDeleteMemoryObjectsEXT_(1, &mem_[i]); mem_[i] = 0; }
                if (released_[i]) { glDeleteSemaphoresEXT_(1, &released_[i]); released_[i] = 0; }
                if (sem_[i]) { glDeleteSemaphoresEXT_(1, &sem_[i]); sem_[i] = 0; }
            }
        }
        connected_ = false;
        next_seq_ = 1;
        current_seq_ = 0;
        width_ = height_ = 0;
    }

private:
    // Mirrors presenter_streamer.cpp's StreamHello wire struct exactly.
    struct StreamHello {
        uint32_t magic, version, width, height, buffer_count;
        uint32_t alloc_size_low, alloc_size_high, format;
    };
    static constexpr uint32_t kHelloMagic = 0x534D5853u;   // 'SXMS'

    bool gl_ok() const { return glDeleteMemoryObjectsEXT_ && glDeleteSemaphoresEXT_; }

    void load_ext() {
        glCreateMemoryObjectsEXT_ = (PFNGLCREATEMEMORYOBJECTSEXTPROC)rlGetProcAddress("glCreateMemoryObjectsEXT");
        glDeleteMemoryObjectsEXT_ = (PFNGLDELETEMEMORYOBJECTSEXTPROC)rlGetProcAddress("glDeleteMemoryObjectsEXT");
        glImportMemoryFdEXT_ = (PFNGLIMPORTMEMORYFDEXTPROC)rlGetProcAddress("glImportMemoryFdEXT");
        glCreateTextures_ = (PFNGLCREATETEXTURESPROC)rlGetProcAddress("glCreateTextures");
        glTextureParameteri_ = (PFNGLTEXTUREPARAMETERIPROC)rlGetProcAddress("glTextureParameteri");
        glTextureStorageMem2DEXT_ = (PFNGLTEXTURESTORAGEMEM2DEXTPROC)rlGetProcAddress("glTextureStorageMem2DEXT");
        glGenSemaphoresEXT_ = (PFNGLGENSEMAPHORESEXTPROC)rlGetProcAddress("glGenSemaphoresEXT");
        glDeleteSemaphoresEXT_ = (PFNGLDELETESEMAPHORESEXTPROC)rlGetProcAddress("glDeleteSemaphoresEXT");
        glImportSemaphoreFdEXT_ = (PFNGLIMPORTSEMAPHOREFDEXTPROC)rlGetProcAddress("glImportSemaphoreFdEXT");
        glSignalSemaphoreEXT_ = (PFNGLSIGNALSEMAPHOREEXTPROC)rlGetProcAddress("glSignalSemaphoreEXT");
        glMemoryObjectParameterivEXT_ = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC)rlGetProcAddress("glMemoryObjectParameterivEXT");
        glWaitSemaphoreEXT_ = (PFNGLWAITSEMAPHOREEXTPROC)rlGetProcAddress("glWaitSemaphoreEXT");
        ext_ok_ = glCreateMemoryObjectsEXT_ && glDeleteMemoryObjectsEXT_ && glImportMemoryFdEXT_ &&
                  glCreateTextures_ && glTextureStorageMem2DEXT_ && glGenSemaphoresEXT_ &&
                  glDeleteSemaphoresEXT_ && glImportSemaphoreFdEXT_ && glWaitSemaphoreEXT_ &&
                  glTextureParameteri_ && glSignalSemaphoreEXT_ && glMemoryObjectParameterivEXT_;
    }

    bool try_connect(const std::string &socket_path) {
        // Cheap to retry every poll: embedded_play.sh's producer may not have
        // created the socket yet when the menu starts watching for it, and a
        // unix connect() either succeeds or fails immediately - no blocking.
        int s = sock_;
        if (s < 0) {
            s = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_NONBLOCK | SOCK_CLOEXEC, 0);
            if (s < 0) return false;
            sockaddr_un addr{}; addr.sun_family = AF_UNIX;
            std::strncpy(addr.sun_path, socket_path.c_str(), sizeof(addr.sun_path) - 1);
            if (connect(s, (sockaddr *)&addr, sizeof(addr)) != 0) { close(s); return false; }
            sock_ = s;
        }

        StreamHello hello{};
        int fds[kBuffers * 3];
        for (auto &f : fds) f = -1;
        char cbuf[CMSG_SPACE(sizeof(fds))];
        iovec io{ &hello, sizeof(hello) };
        msghdr msg{}; msg.msg_iov = &io; msg.msg_iovlen = 1;
        msg.msg_control = cbuf; msg.msg_controllen = sizeof(cbuf);
        const ssize_t n = recvmsg(s, &msg, MSG_DONTWAIT);
        if (n < 0 && (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR)) return false;
        cmsghdr *cmsg = CMSG_FIRSTHDR(&msg);
        if (n != (ssize_t)sizeof(hello) || hello.magic != kHelloMagic ||
            hello.version != 2 || hello.buffer_count != kBuffers || !cmsg || cmsg->cmsg_len != CMSG_LEN(sizeof(fds))) {
            release();
            return false;
        }
        std::memcpy(fds, CMSG_DATA(cmsg), sizeof(fds));

        // VK_FORMAT_A2B10G10R10_UNORM_PACK32 (kGuestOutputFormat, presenter.h)
        // is GL_RGB10_A2 read as GL_UNSIGNED_INT_2_10_10_10_REV - same packing
        // both APIs call "REV": R in bits 0-9, A in bits 30-31.
        const GLenum internal_format = GL_RGB10_A2;
        bool ok = true;
        for (uint32_t i = 0; i < kBuffers && ok; ++i) {
            glCreateMemoryObjectsEXT_(1, &mem_[i]);
            const GLint dedicated = GL_TRUE;
            glMemoryObjectParameterivEXT_(mem_[i], GL_DEDICATED_MEMORY_OBJECT_EXT, &dedicated);
            glImportMemoryFdEXT_(mem_[i], ((GLuint64)hello.alloc_size_high << 32) | hello.alloc_size_low,
                                  GL_HANDLE_TYPE_OPAQUE_FD_EXT, fds[i * 3]);
            glCreateTextures_(GL_TEXTURE_2D, 1, &tex_[i]);
            glTextureStorageMem2DEXT_(tex_[i], 1, internal_format, (GLsizei)hello.width,
                                       (GLsizei)hello.height, mem_[i], 0);
            // Only 1 mip level exists; the default min filter
            // (NEAREST_MIPMAP_LINEAR) needs a full mip chain and samples the
            // texture as black without one - a classic "why is it blank"
            // trap. No mipmaps needed for a full-frame video blit anyway.
            glTextureParameteri_(tex_[i], GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTextureParameteri_(tex_[i], GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTextureParameteri_(tex_[i], GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTextureParameteri_(tex_[i], GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glGenSemaphoresEXT_(1, &sem_[i]);
            glImportSemaphoreFdEXT_(sem_[i], GL_HANDLE_TYPE_OPAQUE_FD_EXT, fds[i * 3 + 1]);
            glGenSemaphoresEXT_(1, &released_[i]);
            glImportSemaphoreFdEXT_(released_[i], GL_HANDLE_TYPE_OPAQUE_FD_EXT, fds[i * 3 + 2]);
            if (glGetError() != GL_NO_ERROR) ok = false;
            // glImportMemoryFdEXT/glImportSemaphoreFdEXT take ownership of the
            // fd on success (EXT_memory_object_fd / EXT_semaphore_fd) - do not
            // close them ourselves.
        }
        if (!ok) { release(); return false; }

        sock_ = s;
        fcntl(sock_, F_SETFL, O_NONBLOCK);   // retirement writes must never stall the draw loop
        width_ = hello.width; height_ = hello.height;
        next_seq_ = 1;
        current_seq_ = 0;
        connected_ = true;
        std::fprintf(stderr, "GPU stream: connected %ux%u, protocol 2\n", width_, height_);
        return true;
    }

    // Drain every sequence the producer has queued, not just one. The
    // launcher renders at its own rate (60Hz by default); if we only consume
    // one per poll, the producer fills its 3-slot ring and blocks waiting
    // for us to release a slot - which throttles it to the launcher's render
    // rate and makes the FPS counter report the wrong number. Draining all
    // available lets the producer run at its real rate.
public:
    int consume_all() {
        int drained = 0;
        const GLenum layout = GL_LAYOUT_GENERAL_EXT;
        while (true) {
            uint64_t sequence = 0;
            const ssize_t r = recv(sock_, &sequence, sizeof(sequence), MSG_DONTWAIT);
            if (r < 0 && (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR)) break;
            if (r != sizeof(sequence) || sequence != next_seq_) { release(); break; }

            if (current_seq_) {
                rlDrawRenderBatchActive();
                glSignalSemaphoreEXT_(released_[cur_slot_], 0, nullptr, 1, &tex_[cur_slot_], &layout);
                glFlush();
                if (send(sock_, &current_seq_, sizeof(current_seq_), MSG_NOSIGNAL) != sizeof(current_seq_)) {
                    release(); break;
                }
            }
            cur_slot_ = (uint32_t)(sequence % kBuffers);
            glWaitSemaphoreEXT_(sem_[cur_slot_], 0, nullptr, 1, &tex_[cur_slot_], &layout);
            current_seq_ = sequence;
            if (sequence == 1 || sequence % 300 == 0)
                std::fprintf(stderr, "GPU stream: received frame %llu\n", (unsigned long long)sequence);
            ++next_seq_;
            ++drained;
        }
        return drained;
    }

    // Latest sequence number we've consumed. Used by poll() to derive FPS
    // from the producer's true rate, independent of how many frames the
    // launcher happens to drain per render.
    uint64_t latest_sequence() const { return current_seq_; }

private:
    // Single-frame poll kept for the legacy "fresh frame" check; we just
    // delegate to consume_all() and report whether anything arrived.
    bool consume_next() { return consume_all() > 0; }

    PFNGLCREATEMEMORYOBJECTSEXTPROC glCreateMemoryObjectsEXT_ = nullptr;
    PFNGLDELETEMEMORYOBJECTSEXTPROC glDeleteMemoryObjectsEXT_ = nullptr;
    PFNGLIMPORTMEMORYFDEXTPROC glImportMemoryFdEXT_ = nullptr;
    PFNGLCREATETEXTURESPROC glCreateTextures_ = nullptr;
    PFNGLTEXTUREPARAMETERIPROC glTextureParameteri_ = nullptr;
    PFNGLTEXTURESTORAGEMEM2DEXTPROC glTextureStorageMem2DEXT_ = nullptr;
    PFNGLGENSEMAPHORESEXTPROC glGenSemaphoresEXT_ = nullptr;
    PFNGLDELETESEMAPHORESEXTPROC glDeleteSemaphoresEXT_ = nullptr;
    PFNGLIMPORTSEMAPHOREFDEXTPROC glImportSemaphoreFdEXT_ = nullptr;
    PFNGLSIGNALSEMAPHOREEXTPROC glSignalSemaphoreEXT_ = nullptr;
    PFNGLMEMORYOBJECTPARAMETERIVEXTPROC glMemoryObjectParameterivEXT_ = nullptr;
    PFNGLWAITSEMAPHOREEXTPROC glWaitSemaphoreEXT_ = nullptr;
    bool attempted_load_ext_ = false;
    bool ext_ok_ = false;

    int sock_ = -1;
    bool connected_ = false;
    GLuint tex_[kBuffers] = {};
    GLuint mem_[kBuffers] = {};
    GLuint sem_[kBuffers] = {};
    GLuint released_[kBuffers] = {};
    uint64_t current_seq_ = 0;
    uint32_t cur_slot_ = 0;
    uint32_t width_ = 0, height_ = 0;
    uint64_t next_seq_ = 1;
};

/* ---- the embedded display: tail the frame dump --------------------------- */

// Embedded play: the game runs headless; this menu window IS the display.
// Three transports, tried in order on every poll:
//
// - GPU-direct stream (REXMENU_STREAM, see GpuStreamBlitter above): the
//   fastest path when the producer was launched with REX_PRESENT_STREAM and
//   this GL driver has GL_EXT_memory_object_fd - zero pixel copies at all.
// - Shared-memory ring (REXMENU_SHM): the runtime memcpys each presented
//   frame into /dev/shm (see DumpPresentedFrame in the SDK's presenter.cpp);
//   we map it read-only and push the newest buffer straight into the texture
//   with UpdateTexture. No encode, no filesystem, no scan latency - the
//   cheapest CPU-side path, and the one every driver can do.
// - PPM file dump (REXMENU_FRAMEDIR): the older fallback. The scan is a
//   throttled directory walk; a 720p PPM decode is cheap, the disk churn is
//   why the script side now makes it opt-in.
class FrameBlitter {
public:
    // Returns true when a new frame was loaded this call. Called every menu
    // frame while a game is running.
    bool poll(const std::string &dir, const std::string &shm_name, const std::string &stream_name) {
        bool fresh = gpu_.poll(stream_name);
        if (!fresh && !gpu_.has()) {
            fresh = poll_shm(shm_name);
            if (!fresh && !dir.empty()) {
                dir_ = dir;
                newest_ = newest_file(dir_);
                fresh = load_newest();
            }
        }
        const double now = GetTime();
        // FPS = producer's true rate, computed from the GPU-stream sequence
        // number delta over wall-clock time. The seq number advances by one
        // per presented frame regardless of how many frames the launcher
        // actually drains per poll, so this reads the producer's rate
        // independently of the launcher's render rate.
        const uint64_t latest = gpu_.latest_sequence();
        if (latest != 0) {
            if (fps_last_seq_ == 0 || latest < fps_last_seq_) {
                fps_last_seq_ = latest;
                fps_since_ = now;
                fps_frames_ = 0;
            } else if (latest != fps_last_seq_) {
                fps_frames_ += (unsigned)(latest - fps_last_seq_);
                fps_last_seq_ = latest;
            }
        } else if (fresh) {
            ++fps_frames_;  // shm/PPM path with no seq number
        }
        if (fps_since_ == 0) fps_since_ = now;
        if (now - fps_since_ >= 1.0) {
            stream_fps_ = fps_frames_ / (now - fps_since_);
            if (std::getenv("REXMENU_FPS_LOG"))
                std::fprintf(stderr, "Game frame rate: %.2f FPS (seq=%llu, frames=%u, %.2fs)\n",
                             stream_fps_, (unsigned long long)fps_last_seq_,
                             fps_frames_, now - fps_since_);
            fps_frames_ = 0;
            fps_since_ = now;
        }
        return fresh;
    }
    double fps() const { return stream_fps_; }
    bool direct_gpu() const { return gpu_.has(); }

    bool has() const { return gpu_.has() || tex_.id != 0; }
    void draw(float x, float y, float w, float h) const {
        if (!has()) return;
        // The GPU-stream texture isn't a raylib-owned Texture2D (see
        // GpuStreamBlitter), so build one on the stack just for this draw -
        // DrawTexturePro only reads these fields, it doesn't take ownership.
        Texture2D t;
        if (gpu_.has()) {
            t = Texture2D{ gpu_.gl_id(), gpu_.width(), gpu_.height(), 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8 };
        } else {
            t = tex_;
        }
        // Fit, centred, preserving 16:9.
        const float sw = (float)t.width, sh = (float)t.height;
        const float s = std::min(w / sw, h / sh);
        const float dw = sw * s, dh = sh * s;
        DrawTexturePro(t, { 0, 0, sw, sh },
                       { x + (w - dw) / 2.0f, y + (h - dh) / 2.0f, dw, dh },
                       { 0, 0 }, 0.0f, WHITE);
    }
    void release() {
        gpu_.release();
        fps_since_ = stream_fps_ = 0;
        fps_frames_ = 0;
        if (tex_.id != 0) UnloadTexture(tex_);
        tex_ = Texture2D{};
        unmap();
    }
    ~FrameBlitter() {
        // No UnloadTexture/gpu_.release() here: by the time this runs the
        // window (and the GL context behind it) may already be gone -
        // release() is the paired cleanup while the window is alive. The
        // kernel reclaims the mapping and the imported fds either way.
        unmap();
    }

private:
    GpuStreamBlitter gpu_;
    double fps_since_ = 0, stream_fps_ = 0;
    unsigned fps_frames_ = 0;
    uint64_t fps_last_seq_ = 0;

    // Mirror of the producer's ShmHeader (presenter.cpp DumpPresentedFrame):
    // 7 uint32 header fields, then the 8-byte-aligned sequence counter, then
    // buffer_count buffers of buffer_size bytes each.
    struct ShmHeader {
        uint32_t magic;
        uint32_t version;
        uint32_t width;
        uint32_t height;
        uint32_t stride;
        uint32_t buffer_count;
        uint32_t buffer_size;
        uint64_t sequence;   // producer holds std::atomic<uint64_t> here
    };
    static_assert(sizeof(ShmHeader) == 40, "keep in sync with the producer");
    static constexpr uint32_t kShmMagic = 0x48534752u;   // 'RGSH'

    bool poll_shm(const std::string &shm_name) {
        if (shm_name.empty()) return false;
        if (!hdr_ && !open_shm(shm_name)) return false;
        const uint64_t seq = __atomic_load_n(&hdr_->sequence, __ATOMIC_ACQUIRE);
        if (seq == 0 || seq == seen_seq_) return false;   // nothing new yet
        const uint32_t w = hdr_->width, h = hdr_->height;
        const uint8_t *src =
            buffers_ + (seq & (hdr_->buffer_count - 1)) * (size_t)hdr_->buffer_size;
        if (tex_.id != 0 && (tex_.width != (int)w || tex_.height != (int)h)) {
            UnloadTexture(tex_);
            tex_ = Texture2D{};
        }
        // The ring holds the runtime's RawImage verbatim: R8 G8 B8 X8 bytes
        // (the PPM dump writes the same bytes out and renders correctly),
        // so upload straight through - no swizzle, no staging, one memcpy
        // inside UpdateTexture. (A BGRA misread here shows as a red/blue
        // swap - Tooie's sky turns blue-orange.)
        if (tex_.id == 0) {
            Image img{};
            img.data = const_cast<uint8_t *>(src);
            img.width = (int)w;
            img.height = (int)h;
            img.mipmaps = 1;
            img.format = PIXELFORMAT_UNCOMPRESSED_R8G8B8A8;
            tex_ = LoadTextureFromImage(img);
        } else {
            UpdateTexture(tex_, src);   // straight to the GPU
        }
        seen_seq_ = seq;
        return tex_.id != 0;
    }

    bool open_shm(const std::string &name) {
        std::string path = name[0] == '/' ? name : "/" + name;
        int fd = ::shm_open(path.c_str(), O_RDONLY, 0);
        if (fd < 0) return false;   // not created yet; try again next frame
        struct stat st {};
        if (fstat(fd, &st) != 0 || st.st_size < (off_t)sizeof(ShmHeader)) {
            ::close(fd);
            return false;
        }
        void *mem = ::mmap(nullptr, (size_t)st.st_size, PROT_READ, MAP_SHARED, fd, 0);
        ::close(fd);
        if (mem == MAP_FAILED) return false;
        auto *h = static_cast<ShmHeader *>(mem);
        if (h->magic != kShmMagic || h->version != 1 || h->buffer_count == 0 ||
            h->buffer_size == 0 || h->stride < size_t(h->width) * 4u) {
            munmap(mem, (size_t)st.st_size);
            return false;
        }
        hdr_ = h;
        buffers_ = reinterpret_cast<const uint8_t *>(mem) + sizeof(ShmHeader);
        map_size_ = (size_t)st.st_size;
        seen_seq_ = 0;
        return true;
    }

    void unmap() {
        if (hdr_) munmap(hdr_, map_size_);
        hdr_ = nullptr;
        buffers_ = nullptr;
        map_size_ = 0;
        seen_seq_ = 0;
    }

    static std::string newest_file(const std::string &d) {
        std::string best;
        long long best_n = -1;
        std::error_code ec;
        for (const auto &e : fs::directory_iterator(d, ec)) {
            const std::string n = e.path().filename().string();
            // f_<number>.ppm, as REX_DUMP_FRAME writes them.
            if (n.rfind("f_", 0) != 0 ||
                n.size() <= 5 || n.compare(n.size() - 4, 4, ".ppm") != 0)
                continue;
            const long long v = std::atoll(n.c_str() + 2);
            if (v > best_n) { best_n = v; best = e.path().string(); }
        }
        return best;
    }
    bool load_newest() {
        if (newest_.empty() || newest_ == loaded_path_) return false;
        Image img = load_image_any(newest_);
        if (img.data == nullptr) return false;   // mid-write; keep the old one
        Texture2D t = LoadTextureFromImage(img);
        std::free(img.data);
        if (t.id == 0) return false;
        if (tex_.id != 0) UnloadTexture(tex_);
        tex_ = t;
        loaded_path_ = newest_;
        return true;
    }

    // The runtime's dump is a binary P6 PPM - and this raylib build ships
    // with SUPPORT_FILEFORMAT_PNM=0, so LoadImage rejects those files
    // ("Data format not supported") and every frame bounced off it. The
    // format is three ASCII tokens after the magic plus one whitespace byte,
    // then raw RGB: parse it here. PNG would go through LoadImage as before.
    static Image load_image_any(const std::string &path) {
        if (path.size() > 4 && path.compare(path.size() - 4, 4, ".ppm") == 0) {
            if (FILE *f = fopen(path.c_str(), "rb")) {
                Image img = {};
                fseek(f, 0, SEEK_END);
                const long len = ftell(f);
                fseek(f, 0, SEEK_SET);
                std::vector<char> buf((size_t)len);
                if (len > 0 && fread(buf.data(), 1, (size_t)len, f) == (size_t)len) {
                    fclose(f);
                    size_t p = 2;   // past "P6"
                    auto skip_ws = [&] {
                        for (;;) {
                            while (p < buf.size() && std::isspace((unsigned char)buf[p])) ++p;
                            if (p < buf.size() && buf[p] == '#') {
                                while (p < buf.size() && buf[p] != '\n') ++p;
                            } else break;
                        }
                    };
                    auto token = [&]() -> long {
                        skip_ws();
                        long v = 0;
                        bool any = false;
                        while (p < buf.size() && std::isdigit((unsigned char)buf[p])) {
                            v = v * 10 + (buf[p] - '0');
                            ++p; any = true;
                        }
                        return any ? v : -1;
                    };
                    const long w = token();
                    const long h = token();
                    const long maxval = token();
                    if (w > 0 && h > 0 && maxval == 255 && p < buf.size()) {
                        ++p;   // exactly one whitespace before the pixels
                        const size_t bytes = (size_t)w * (size_t)h * 3;
                        if (buf.size() - p >= bytes) {
                            img.data = std::malloc(bytes);
                            if (img.data) {
                                std::memcpy(img.data, buf.data() + p, bytes);
                                img.width = (int)w;
                                img.height = (int)h;
                                img.mipmaps = 1;
                                img.format = PIXELFORMAT_UNCOMPRESSED_R8G8B8;
                            }
                        }
                    }
                    return img;
                }
                fclose(f);
            }
            return Image{};
        }
        return LoadImage(path.c_str());
    }
    std::string dir_;
    std::string newest_;
    std::string loaded_path_;
    Texture2D tex_{};
    ShmHeader *hdr_ = nullptr;
    const uint8_t *buffers_ = nullptr;
    size_t map_size_ = 0;
    uint64_t seen_seq_ = 0;
};

/* ---- the menu ------------------------------------------------------------ */

enum class Screen { Home, Games, Browse, Importing, Playing, Info, Settings, About };

// One-frame edges: the pad's sink and the polled devices raise bits, the
// screen logic reads them, consume() clears them for the next frame.
struct Nav {
    bool up = false, down = false, left = false, right = false,
         a = false, b = false, y = false, start = false, lb = false, rb = false;
    void consume() { up = down = left = right = a = b = y = false; start = lb = rb = false; }
};

// Settings a player sets once and expects to stick: which FPS cap Play
// starts with, which GPU plugin to use, and whether this window's on-screen
// pad stays up while the game runs. Both are read at startup and rewritten on change - plain
// key=value, matching how every other per-port file in this tree is read.
struct MenuSettings {
    // 0 = Off: the guest's vblank pacer is switched off (vsync=false) and the
    // title free-runs at whatever its CPU/GPU pipeline can do - how MCLA and
    // Hydro run at 500+ fps. Caution (the Banjo lesson): a title that paces
    // its game logic on present completion instead of a fixed timestep will
    // run its whole simulation too fast; pick a capped value for those.
    static constexpr int kFpsCapValues[] = { 30, 60, 120, 240, 0 };
    static constexpr int kFpsCapCount = 5;
    // "native" exists as a plugin but currently renders black on every title
    // that has tried it - both run.sh and embedded_play.sh hardcode "xenos"
    // for that reason, so this is not really a user choice yet. Keep the
    // settings row honest about what is actually running rather than
    // offering a switch that silently does nothing (or breaks the game).
    static constexpr const char *kGpuPlugins[] = {"xenos"};
    static constexpr int kGpuPluginCount = 1;
    int fps_cap_idx = 1;
    int gpu_plugin_idx = 0;
    bool show_pad_while_playing = false;

    static std::string path_for(const std::string &port_root) {
        return port_root + "/user-data/rexmenu/settings.txt";
    }

    static MenuSettings load(const std::string &port_root) {
        MenuSettings s;
        std::ifstream in(path_for(port_root));
        std::string key;
        while (in >> key) {
            std::string val;
            if (!(in >> val)) break;
            if (key == "fps_cap_idx") {
                int idx = std::atoi(val.c_str());
                // Legacy indices: 0=off, 1=30, 2=60, 3=120.
                s.fps_cap_idx = idx == 1 ? 0 : 1;
            } else if (key == "fps_cap") {
                s.fps_cap_idx = val == "30" ? 0 : (val == "60" ? 1 : (val == "120" ? 2 : (val == "240" ? 3 : (val == "0" ? 4 : 1))));
            } else if (key == "gpu_plugin") {
                s.gpu_plugin_idx = 0;
            } else if (key == "show_pad_while_playing") {
                s.show_pad_while_playing = (val == "1");
            }
        }
        return s;
    }

    void save(const std::string &port_root) const {
        const std::string dir = port_root + "/user-data/rexmenu";
        std::error_code ec;
        fs::create_directories(dir, ec);
        std::ofstream out(path_for(port_root), std::ios::trunc);
        out << "fps_cap " << fps_cap() << "\n";
        out << "gpu_plugin " << gpu_plugin() << "\n";
        out << "show_pad_while_playing " << (show_pad_while_playing ? 1 : 0) << "\n";
    }

    int fps_cap() const { return kFpsCapValues[fps_cap_idx]; }
    std::string fps_cap_label() const {
        const int v = fps_cap();
        return v == 0 ? std::string("Off") : std::to_string(v);
    }
    const char *gpu_plugin() const { return kGpuPlugins[gpu_plugin_idx]; }
    std::string gpu_plugin_label() const { return "Xenos -> Vulkan"; }
};

// Overlay action ids -> uinput button codes (the xbox360 profile's ids).
static const std::vector<std::pair<std::string, int>> &pad_ids() {
    static const std::vector<std::pair<std::string, int>> ids = {
        { "a", BTN_SOUTH },   { "b", BTN_EAST },    { "x", BTN_WEST },
        { "y", BTN_NORTH },   { "l1", BTN_TL },     { "r1", BTN_TR },
        { "back", BTN_SELECT }, { "start", BTN_START },
        { "l3", BTN_THUMBL }, { "r3", BTN_THUMBR },
    };
    return ids;
}

// While the game plays, the pad overlay on this window is the controller:
// its held buttons and stick bits are forwarded, as diffs, through the
// uinput device the game's SDL is already reading.
struct PadForward {
    std::map<std::string, bool> sent;
    int hx = 0, hy = 0;

    void frame(const touchpad::Overlay &pad, const bool (&stick)[4],
               VirtPad &virt) {
        for (const auto &ic : pad_ids()) {
            const bool now = pad.held(ic.first);
            const auto it = sent.find(ic.first);
            const bool was = it != sent.end() && it->second;
            if (now != was) {
                sent[ic.first] = now;
                virt.key(ic.second, now);
            }
        }
        // The profile's stick is a d-pad: it arrives as levels, not presses.
        const int nx = (stick[3] ? 1 : 0) - (stick[2] ? 1 : 0);
        const int ny = (stick[1] ? 1 : 0) - (stick[0] ? 1 : 0);
        if (nx != hx) { hx = nx; virt.abs(ABS_HAT0X, nx); }
        if (ny != hy) { hy = ny; virt.abs(ABS_HAT0Y, ny); }
        virt.sync();
    }

    void reset(VirtPad &virt) {
        sent.clear();
        hx = hy = 0;
        virt.release_all();
    }
};

static std::string basename_of(const std::string &p) {
    return fs::path(p).filename().string();
}

/* ---- the game icon rail -------------------------------------------------- */

// A little image that outlives the file it came from: the file bytes are
// released, the texture stays. For a failed load it renders as a letter tile
// instead - a rail with holes is worse than one with initials.
class ScopedTexture {
public:
    ScopedTexture() = default;
    explicit ScopedTexture(const std::string &path) {
        Image img = LoadImage(path.c_str());
        if (img.data != nullptr) {
            // Icons ship small (64 px) and the rail draws them at ~200 px;
            // bilinear upscaling on the GPU softens the edges to mush. Resize
            // once at load to a power-of-two target so the GPU blit is 1:1 and
            // crisp - one ImageResize at import, sharp pixels for the session.
            constexpr int kRailIconSize = 256;
            if (img.width < kRailIconSize && img.height < kRailIconSize) {
                ImageResize(&img, kRailIconSize, kRailIconSize);
            }
            tex_ = LoadTextureFromImage(img);
            UnloadImage(img);
            ok_ = tex_.id != 0;
            if (ok_) SetTextureFilter(tex_, TEXTURE_FILTER_BILINEAR);
        }
    }
    ScopedTexture(ScopedTexture &&o) noexcept { move_from(o); }
    ScopedTexture &operator=(ScopedTexture &&o) noexcept {
        if (this != &o) { release(); move_from(o); }
        return *this;
    }
    ScopedTexture(const ScopedTexture &) = delete;
    ScopedTexture &operator=(const ScopedTexture &) = delete;
    ~ScopedTexture() { release(); }

    bool ok() const { return ok_; }
    Texture2D &tex() { return tex_; }

private:
    void move_from(ScopedTexture &o) {
        tex_ = o.tex_; ok_ = o.ok_;
        o.tex_ = Texture2D{}; o.ok_ = false;
    }
    void release() {
        if (tex_.id && IsWindowReady()) UnloadTexture(tex_);
        tex_ = Texture2D{}; ok_ = false;
    }
    Texture2D tex_{};
    bool ok_ = false;
};

// Collection branding art. <collection>/_shared/<shared_name> wins, so a
// shipped collection carries its own mark; the menu's built-in assets/ is the
// fallback so an art-less collection still shows the RetroRecomp badge.
// Missing art is not an error - these are optional overlays.
static ScopedTexture load_brand_art(const fs::path &collection_root,
                                    const std::string &shared_name,
                                    const std::string &builtin_name) {
    std::error_code ec;
    const fs::path shared = collection_root / "_shared" / shared_name;
    if (fs::exists(shared, ec)) return ScopedTexture(shared.string());
    const fs::path exe = fs::read_symlink("/proc/self/exe", ec);
    if (!ec && !exe.empty()) {
        const fs::path builtin = exe.parent_path().parent_path() / "assets" / builtin_name;
        if (fs::exists(builtin, ec)) return ScopedTexture(builtin.string());
    }
    return ScopedTexture();
}

// Hint lines with pad-button glyphs: "{A} play   {B} quit" draws each letter
// token as an Xbox-coloured face button (green A, red B, blue X, yellow Y)
// and the rest as plain text. hint_measure matches hint_text's advance so
// callers can right-align the whole line.
static Color pad_button_color(char letter) {
    switch (letter) {
        case 'A': return Color{ 52, 144, 61, 255 };
        case 'B': return Color{ 178, 34, 46, 255 };
        case 'X': return Color{ 32, 96, 178, 255 };
        case 'Y': return Color{ 216, 178, 32, 255 };
        default:  return Color{ 80, 88, 100, 255 };
    }
}

static bool hint_token_at(const std::string &s, size_t i) {
    return s[i] == '{' && i + 2 < s.size() && s[i + 2] == '}' &&
           std::strchr("ABXY", s[i + 1]) != nullptr;
}

static int hint_measure(const std::string &s, int font) {
    int width = 0;
    for (size_t i = 0; i < s.size();) {
        if (hint_token_at(s, i)) {
            width += font + font / 2;   // glyph diameter, then the gap after it
            i += 3;
        } else {
            const size_t j = s.find('{', i);
            const std::string chunk = s.substr(i, j == std::string::npos ? j : j - i);
            width += ui_measure(chunk, font);
            i = j == std::string::npos ? s.size() : j;
        }
    }
    return width;
}

static void hint_text(const std::string &s, int x, int y, int font, Color color) {
    for (size_t i = 0; i < s.size();) {
        if (hint_token_at(s, i)) {
            const char letter = s[i + 1];
            const int r = font / 2;
            const int cx = x + r, cy = y + r + 1;
            DrawCircle(cx, cy, (float)r, pad_button_color(letter));
            DrawCircleLines(cx, cy, (float)r, Color{ 255, 255, 255, 120 });
            const std::string glyph(1, letter);
            ui_text(glyph, cx - ui_measure(glyph, font) / 2, cy - font / 2, font, RAYWHITE);
            x += font + font / 2;
            i += 3;
        } else {
            const size_t j = s.find('{', i);
            const std::string chunk = s.substr(i, j == std::string::npos ? j : j - i);
            ui_text(chunk, x, y, font, color);
            x += ui_measure(chunk, font);
            i = j == std::string::npos ? s.size() : j;
        }
    }
}

// Read /proc/mounts and return the user-meaningful mount points - the
// physical and network drives a player might have their game rips on. The

// The icon for a game: <port-root>/icon.png is the convention - drop any
// PNG there and the launcher shows it on the rail, the game list and the
// home header. Without one, fall back to the official dashboard tile from
// the title's own assets (64 px, else 32 px). No hit at all -> an empty
// ScopedTexture, drawn as a letter tile.
static ScopedTexture game_tile(const Port &p) {
    {
        const std::string icon = p.root + "/icon.png";
        std::error_code ec;
        if (fs::exists(icon, ec)) return ScopedTexture(icon);
    }
    {
        const std::string icon = p.root + "/assets/game.png";
        if (fs::exists(icon)) return ScopedTexture(icon);
    }
    {
        // The XEX-extracted title icon from `rexglue init achievements`.
        const std::string icon = p.root + "/game-info/icons/title.png";
        if (fs::exists(icon)) return ScopedTexture(icon);
    }
    for (const char *prefix : { "64_", "32_" }) {
        std::error_code ec;
        for (const auto &e : fs::directory_iterator(p.root + "/assets", ec)) {
            const std::string n = e.path().filename().string();
            if (n.rfind(prefix, 0) != 0) continue;
            if (n.size() > 4 && n.compare(n.size() - 4, 4, ".png") == 0)
                return ScopedTexture(e.path().string());
        }
    }
    return ScopedTexture();
}

static int wrapped_text(const std::string& text, int x, int y, int width, int size, Color color) {
    std::istringstream words(text);
    std::string word, line;
    while (words >> word) {
        const std::string next = line.empty() ? word : line + " " + word;
        if (!line.empty() && ui_measure(next, size) > width) {
            ui_text(line, x, y, size, color); y += size + 5; line = word;
        } else line = next;
    }
    if (!line.empty()) { ui_text(line, x, y, size, color); y += size + 5; }
    return y;
}

static bool looks_importable(const std::string &name) {
    // The shapes the importer actually accepts. Directories always are.
    std::string lowered = name;
    std::transform(lowered.begin(), lowered.end(), lowered.begin(),
                   [](unsigned char c) { return char(std::tolower(c)); });
    static const char *const kExt[] = { ".xex", ".iso", ".zip", ".rar", ".7z",
                                        ".ztm", ".cab", ".live", ".con", ".pirs" };
    for (const char *e : kExt) {
        const size_t n = std::strlen(e);
        if (lowered.size() >= n && lowered.compare(lowered.size() - n, n, e) == 0)
            return true;
    }
    // STFS packages are often extensionless; anything that is not obviously a
    // document is offered.
    static const char *const kSkip[] = { ".txt", ".md", ".png", ".jpg", ".nfo",
                                         ".sha256" };
    for (const char *e : kSkip) {
        const size_t n = std::strlen(e);
        if (lowered.size() >= n && lowered.compare(lowered.size() - n, n, e) == 0)
            return false;
    }
    return true;
}

// A XEX standing alone in its folder is the only file the game needs (typical
// XBLA). A XEX with sibling files is part of a larger tree (typical disc
// title) - importing just the XEX gives a launcher that runs but cannot find
// its assets. Heuristic: any non-XEX sibling file in the parent directory
// means we should import the whole tree.
static bool xex_has_siblings(const std::string &xex_path) {
    std::error_code ec;
    const fs::path dir = fs::path(xex_path).parent_path();
    if (!fs::is_directory(dir, ec)) return false;
    for (auto it = fs::directory_iterator(dir, ec);
         !ec && it != fs::directory_iterator(); it.increment(ec)) {
        if (!it->is_regular_file(ec)) continue;
        const std::string n = it->path().filename().string();
        std::string l = n;
        std::transform(l.begin(), l.end(), l.begin(),
                       [](unsigned char c) { return char(std::tolower(c)); });
        if (l.size() >= 4 && l.compare(l.size() - 4, 4, ".xex") == 0) continue;
        if (l == "thumbs.db" || l == ".ds_store") continue;
        return true;
    }
    return false;
}

// Direct XEX import stays inside the native launcher. A selected XEX needs
// no shell helper: copy it to the runtime's canonical default.xex location
// and leave an auditable result in the import screen.
static bool native_import_xex(const std::string &port_root,
                              const std::string &source,
                              std::vector<std::string> &log) {
    std::error_code ec;
    if (!fs::is_regular_file(source, ec)) {
        log.push_back("ERROR: XEX source is not a regular file");
        return false;
    }
    const fs::path assets = fs::path(port_root) / "assets";
    const fs::path destination = assets / "default.xex";
    log.push_back("Selected XEX: " + fs::path(source).filename().string());
    const auto source_size = fs::file_size(source, ec);
    log.push_back("Reading XEX header (" + std::to_string(source_size) + " bytes)...");
    std::ifstream header(source, std::ios::binary);
    char magic[4] = {};
    header.read(magic, sizeof(magic));
    if (!header || std::memcmp(magic, "XEX2", 4) != 0) {
        log.push_back("ERROR: file does not have an XEX2 header");
        return false;
    }
    log.push_back("XEX2 header read successfully");
    log.push_back("Creating the native game content folder...");
    fs::create_directories(assets, ec);
    if (ec) {
        log.push_back("ERROR: cannot create assets/: " + ec.message());
        return false;
    }
    log.push_back("Progress: copying XEX to assets/default.xex...");
    fs::copy_file(source, destination, fs::copy_options::overwrite_existing, ec);
    if (ec) {
        log.push_back("ERROR: XEX copy failed: " + ec.message());
        return false;
    }
    std::ofstream marker(assets / ".recomp-content-verified");
    if (!marker) {
        log.push_back("ERROR: cannot write the content status marker");
        return false;
    }
    marker.close();
    log.push_back("Imported: " + destination.string());
    log.push_back("Setup complete: default.xex is ready for Play.");
    return true;
}

static uint32_t read_be32(const unsigned char *p) {
    return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) |
           (uint32_t(p[2]) << 8) | uint32_t(p[3]);
}

static bool native_import_dlc(const std::string &port_root,
                              const std::string &source,
                              std::vector<std::string> &log) {
    std::ifstream xex(fs::path(port_root) / "assets/default.xex",
                      std::ios::binary);
    if (!xex) {
        log.push_back("ERROR: import the game's XEX before installing DLC");
        return false;
    }
    std::vector<unsigned char> xex_head(0x400);
    xex.read(reinterpret_cast<char *>(xex_head.data()), xex_head.size());
    if (xex.gcount() < 0x28 || std::memcmp(xex_head.data(), "XEX2", 4) != 0) {
        log.push_back("ERROR: selected game content is not a readable XEX2");
        return false;
    }
    const uint32_t optional_count = read_be32(xex_head.data() + 20);
    uint32_t title_id = 0;
    for (uint32_t i = 0; i < optional_count && 24 + i * 8 + 8 <= xex_head.size(); ++i) {
        const size_t at = 24 + i * 8;
        const uint32_t key = read_be32(xex_head.data() + at);
        const uint32_t offset = read_be32(xex_head.data() + at + 4);
        if (key == 0x00040006 && offset + 16 <= xex_head.size()) {
            title_id = read_be32(xex_head.data() + offset + 12);
            break;
        }
    }
    if (!title_id) {
        log.push_back("ERROR: could not identify the game's title ID");
        return false;
    }
    std::ifstream pkg(source, std::ios::binary);
    if (!pkg) {
        log.push_back("ERROR: cannot open the DLC package");
        return false;
    }
    std::vector<unsigned char> header(0x380);
    pkg.read(reinterpret_cast<char *>(header.data()), header.size());
    if (pkg.gcount() < 0x368 ||
        (std::memcmp(header.data(), "LIVE", 4) != 0 &&
         std::memcmp(header.data(), "PIRS", 4) != 0 &&
         std::memcmp(header.data(), "CON ", 4) != 0)) {
        log.push_back("ERROR: choose a LIVE, PIRS, or CON DLC package");
        return false;
    }
    const uint32_t content_type = read_be32(header.data() + 0x344);
    const uint32_t package_title = read_be32(header.data() + 0x360);
    if (package_title != title_id) {
        char message[96];
        std::snprintf(message, sizeof(message),
                      "ERROR: DLC title %08X does not match game %08X",
                      package_title, title_id);
        log.push_back(message);
        return false;
    }
    if (content_type != 2) {
        log.push_back("ERROR: package is not marked as downloadable content");
        return false;
    }
    const fs::path parent = collection_root_of(port_root);
    const fs::path shared = parent / "_shared" / "user-data";
    const fs::path user_data = fs::exists(shared) ? shared
                                                   : fs::path(port_root) / "user-data";
    const fs::path destination = user_data / "0000000000000000" /
                                 TextFormat("%08X", title_id) / "00000002" /
                                 fs::path(source).filename();
    std::error_code ec;
    if (fs::exists(destination, ec)) {
        log.push_back("ERROR: this DLC package is already installed");
        return false;
    }
    log.push_back("Selected DLC: " + fs::path(source).filename().string());
    log.push_back("Progress: installing DLC package...");
    fs::create_directories(destination.parent_path(), ec);
    fs::copy_file(source, destination, fs::copy_options::none, ec);
    if (ec) {
        log.push_back("ERROR: DLC install failed: " + ec.message());
        return false;
    }
    log.push_back("Installed DLC for title " +
                  std::string(TextFormat("%08X", title_id)));
    return true;
}

static bool native_import_tree(const std::string &port_root,
                               const std::string &source,
                               std::vector<std::string> &log) {
    std::error_code ec;
    const fs::path root = source;
    fs::path xex;
    if (fs::is_regular_file(root, ec)) {
        if (root.filename().string().size() >= 4) xex = root;
    } else if (fs::is_directory(root, ec)) {
        for (const auto &entry : fs::recursive_directory_iterator(root, ec)) {
            if (ec || !entry.is_regular_file(ec)) continue;
            std::string name = entry.path().filename().string();
            std::transform(name.begin(), name.end(), name.begin(),
                           [](unsigned char c) { return char(std::tolower(c)); });
            if (name == "default.xex") { xex = entry.path(); break; }
        }
    }
    if (xex.empty() || !fs::is_regular_file(xex, ec)) {
        log.push_back("ERROR: extracted content has no default.xex");
        return false;
    }
    std::ifstream header(xex, std::ios::binary);
    char magic[4] = {};
    header.read(magic, sizeof(magic));
    if (!header || std::memcmp(magic, "XEX2", 4) != 0) {
        log.push_back("ERROR: default.xex does not have an XEX2 header");
        return false;
    }
    const fs::path assets = fs::path(port_root) / "assets";
    log.push_back("Found game executable: " + xex.string());
    log.push_back("Progress: copying the complete game content tree...");
    fs::remove_all(assets, ec);
    fs::create_directories(assets, ec);
    if (ec) {
        log.push_back("ERROR: cannot create assets/: " + ec.message());
        return false;
    }
    const fs::path game_dir = xex.parent_path();
    fs::copy(game_dir, assets, fs::copy_options::recursive |
             fs::copy_options::overwrite_existing, ec);
    if (ec) {
        log.push_back("ERROR: game content copy failed: " + ec.message());
        return false;
    }
    std::ofstream marker(assets / ".recomp-content-verified");
    if (!marker) {
        log.push_back("ERROR: cannot write the content status marker");
        return false;
    }
    log.push_back("Imported complete game tree into: " + assets.string());
    log.push_back("Setup complete: game content is ready for Play.");
    return true;
}

static fs::path find_stfs_package(const fs::path &root) {
    std::error_code ec;
    if (!fs::is_directory(root, ec)) return {};
    for (const auto &entry : fs::recursive_directory_iterator(root, ec)) {
        if (ec || !entry.is_regular_file(ec)) continue;
        if (entry.file_size(ec) < 0x400) continue;
        std::ifstream file(entry.path(), std::ios::binary);
        char magic[4] = {};
        file.read(magic, sizeof(magic));
        if (file && (std::memcmp(magic, "LIVE", 4) == 0 ||
                     std::memcmp(magic, "PIRS", 4) == 0 ||
                     std::memcmp(magic, "CON ", 4) == 0)) return entry.path();
    }
    return {};
}

int main(int argc, char **argv) {
    std::string root;
    bool selftest = false;
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--selftest") == 0) selftest = true;
        else root = argv[i];
    }
    if (selftest) {
        // The layout round-trip: the file format is shared with the SDL
        // frontends and the Dart package, so encode -> decode must carry every
        // field the family writes.
        const auto &prof = touchpad::profile_xbox360();
        touchpad::Layout l = touchpad::Layout::defaults(prof);
        l.clusters["face"].dx = 0.9f; l.clusters["face"].scale = 1.25f;
        l.extras.push_back({ "dir:up", "UP", 0.5f, 0.05f, 1.0f, 1.0f });
        const std::string json = l.encode();
        const touchpad::Layout back = touchpad::Layout::decode(json, prof);
        const bool ok = back.clusters.at("face").dx == 0.9f &&
                        back.clusters.at("face").scale == 1.25f &&
                        back.extras.size() == 1 &&
                        back.extras[0].id == "dir:up" &&
                        back.stick == prof.default_stick;
        // A file written for another profile must fall back to defaults, never
        // mangle this pad: an unknown profile's ids mean something else.
        const touchpad::Layout foreign = touchpad::Layout::decode(json,
            touchpad::Profile{});
        const bool ok2 = foreign.clusters.empty() && foreign.extras.empty();
        std::printf("selftest: %s\n", ok && ok2 ? "ok" : "FAILED");
        return ok && ok2 ? 0 : 1;
    }
    if (root.empty()) {
        std::fprintf(stderr, "usage: rexmenu <port-root> [--selftest]\n");
        return 2;
    }
    auto maybe = Port::load(root);
    if (!maybe) {
        std::fprintf(stderr, "rexmenu: not a port root: %s\n", root.c_str());
        return 2;
    }
    Port port = *maybe;
    port.check_content();
    // The family: every game listed in ../_shared/games.index (or, without
    // one, every discovered sibling), with the active port selected. Switching
    // from the menu moves the whole menu to that port; saves stay put (they
    // are family-wide), so nothing is lost.
    std::vector<Port> games = family_games(port);
    // The index lists every game - the active one included - so only add the
    // current port when discovery did not return it (no index, or omitted).
    // Unconditionally inserting it produced the same card twice on the rail.
    bool have_current = false;
    for (const auto &g : games)
        if (g.root == port.root) { have_current = true; break; }
    if (!have_current) games.insert(games.begin(), port);
    else
        for (auto &g : games)
            if (g.root == port.root) g.content_ok = port.content_ok;
    // The active game is wherever it sits in the list, not necessarily 0.
    int game_idx = 0;
    for (int i = 0; i < (int)games.size(); ++i)
        if (games[i].root == port.root) { game_idx = i; break; }
    int game_sel = game_idx;
    // Each game's official dashboard tile, loaded once. Lives in a vector
    // that is never resized after here (only the active game can change), so
    // the GL texture ids stay valid for the life of the menu.
    std::vector<ScopedTexture> tiles;
    tiles.reserve(games.size());
    MenuSettings settings = MenuSettings::load(port.root);
    setenv("REX_GPU_PLUGIN", settings.gpu_plugin(), 1);

    // The game's name on the menu, not the slug.
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);
    InitWindow(960, 620, port.name.c_str());
    // A tiling compositor (Hyprland et al.) will still hand out anything it
    // likes regardless of this hint, which is why every screen's layout
    // above also clamps its own row heights to whatever room is actually
    // available - this is a floor, not a guarantee.
    SetWindowMinSize(760, 480);
    if (!IsWindowReady()) {
        std::fprintf(stderr,
                     "rexmenu: could not open a desktop window; set DISPLAY or run inside a graphical session\n");
        return 2;
    }
    for (const Port &g : games) tiles.push_back(game_tile(g));
    // The branding marks: the RetroRecomp wordmark bottom-right of the
    // chrome screens, and the green XBLA roundel beside each package title's
    // name. A collection can override both from its _shared/ folder.
    const fs::path collection_root = collection_root_of(port.root);
    ScopedTexture brand_tex = load_brand_art(collection_root, "brand.png", "retrorecomp_logo.png");
    struct utsname host{};
    uname(&host);
    const char* gl_renderer = reinterpret_cast<const char*>(glGetString(GL_RENDERER));
    const std::string gpu_name = gl_renderer ? gl_renderer : "Unknown GPU";
    std::string cpu_name = "Unknown CPU";
    {
        std::ifstream cpu("/proc/cpuinfo");
        std::string line;
        while (std::getline(cpu, line)) {
            if (line.rfind("model name", 0) == 0) {
                const auto colon = line.find(':');
                if (colon != std::string::npos) cpu_name = line.substr(colon + 2);
                break;
            }
        }
    }
    SetTargetFPS(60);
    SetExitKey(0);   // Escape is B's job; the pad owns the menu.

    // One good face for everything. Cantarell is the common desktop pick;
    // Liberation Sans and DejaVu Sans are the fallbacks. If none of them is
    // installed the wrappers keep raylib's built-in font - ugly, not broken.
    {
        Font f = {};
        const char *const kCandidates[] = {
            "/usr/share/fonts/liberation/LiberationSans-Regular.ttf",
            "/usr/share/fonts/TTF/DejaVuSans.ttf",
        };
        for (const char *path : kCandidates) {
            if (access(path, R_OK) != 0) continue;
            f = LoadFontEx(path, 48, nullptr, 0);
            // A failed LoadFontEx still hands back raylib's built-in font
            // (128x128 atlas, 224 glyphs), so id alone proves nothing. The
            // built-in font is exactly 224 glyphs; a real load of these
            // TrueType faces at 48 px with no codepoint list is the ASCII
            // set, 95. Anything that smells like the built-in font means
            // "did not load", try the next candidate.
            if (f.texture.width > 8 && f.glyphCount != 224) break;
            f = Font{};
        }
        if (f.texture.id != 0) SetTextureFilter(f.texture, TEXTURE_FILTER_BILINEAR);
        set_ui_font(f);
    }

    // The pad: xbox360 profile, family layout file, pad drives the menu.
    const auto &profile = touchpad::profile_xbox360();
    const std::string layout_dir = port.root + "/user-data/rexmenu";
    touchpad::Layout layout = touchpad::Layout::load(layout_dir, profile);
    touchpad::Overlay pad;
    pad.set(&profile, layout);

    // The uinput virtual pad lives for the whole menu session and is created
    // before anything else happens: when Play starts, SDL inside the game
    // already has the device. While the game runs, the pad overlay drawn on
    // THIS window forwards through it - the game never needs focus.
    VirtPad virt;
    if (virt.create())
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

    // Switching game: the whole menu follows the new port - its name, its
    // content state, its settings and pad layout file. The saves do not move:
    // every port points at the same user-data root, which is what makes the
    // games see each other's saves the way the console versions did.
    auto activate_game = [&](int idx) {
        if (idx < 0 || idx >= (int)games.size()) return;
        game_idx = idx;
        if (games[idx].root == port.root) return;
        port = games[idx];
        settings = MenuSettings::load(port.root);
        setenv("REX_GPU_PLUGIN", settings.gpu_plugin(), 1);
        layout = touchpad::Layout::load(port.root + "/user-data/rexmenu", profile);
        pad.set(&profile, layout);
        port.check_content();
        SetWindowTitle(port.name.c_str());
    };

    Nav nav;
    bool stick_state[4] = { false, false, false, false }; // u d l r, as levels
    auto sink = touchpad::Sink{
        [&](bool u, bool d, bool l, bool r) {
            stick_state[0] = u; stick_state[1] = d;
            stick_state[2] = l; stick_state[3] = r;
            if (u) nav.up = true;
            if (d) nav.down = true;
            if (l) nav.left = true;
            if (r) nav.right = true;
        },
        [&](const std::string &id, bool down) {
            if (!down) return;
            if (id == "a") nav.a = true;
            if (id == "b") nav.b = true;
            if (id == "y") nav.y = true;
            if (id == "start") nav.start = true;
            if (id == "l1") nav.lb = true;
            if (id == "r1") nav.rb = true;
        },
    };

    Screen screen = Screen::Home;
    Browser browser;
    Job job;            // import or play, one at a time
    PadForward pad_forward;
    bool job_is_play = false;
    bool play_failed = false;
    bool user_quit_play = false;   // ESC during embedded play -> Home, not "failed"
    // Rail icon under the cursor and how long it has been there: the tooltip
    // (game name, or the icon's own filename when a tile failed to load)
    // appears only after a short dwell, so scanning the rail stays quiet.
    int rail_hover = -1;
    double rail_hover_since = 0.0;
    float rail_scroll_x = 0.0f;
    bool rail_scroll_ready = false;
    // Embedded play's display: the newest frame the headless title presented.
    FrameBlitter blitter;
    auto switch_game = [&](int idx) {
        activate_game(idx);
    };
    double blink = 0.0;
    // Home has no action list: the icon rail IS the menu. Left/right (or
    // L1/R1, or the wheel) picks a game, A plays it, X opens its settings,
    // B quits the launcher. Y still opens the game info/achievements view.
    int info_tab = 0, achievement_sel = 0, files_sel = 0, about_tab = 0;
    bool importing_dlc = false;
    SaveManager saves;
    bool saves_loaded = false;
    int settings_sel = 0;   // Settings: FPS cap, renderer, pad, files, clear files
    bool clear_files_confirming = false;
    std::string clear_files_status;
    // Library filters: 0=All, 1=XBLA only, 2=Disc only. letter_filter is 0
    // for All and 1..26 for A..Z. Active only on the Games list screen.
    int media_filter = 0;
    int letter_filter = 0;

    auto game_matches_filter = [&](int idx) {
        if (idx < 0 || idx >= (int)games.size()) return false;
        const Port &g = games[idx];
        if (media_filter == 1 && !g.xbla) return false;
        if (media_filter == 2 && g.xbla) return false;
        if (letter_filter > 0) {
            char first = g.name.empty() ? '?' : (char)std::toupper((unsigned char)g.name[0]);
            if (first < 'A' || first > 'Z') first = '#';
            const char want = (char)('A' + letter_filter - 1);
            if (first != want) return false;
        }
        return true;
    };
    auto filtered_games = [&]() {
        std::vector<int> out;
        for (int i = 0; i < (int)games.size(); ++i)
            if (game_matches_filter(i)) out.push_back(i);
        std::sort(out.begin(), out.end(), [&](int a, int b) {
            std::string an = games[a].name, bn = games[b].name;
            std::transform(an.begin(), an.end(), an.begin(), ::tolower);
            std::transform(bn.begin(), bn.end(), bn.begin(), ::tolower);
            return an < bn;
        });
        return out;
    };
    auto move_filtered_game = [&](int direction) {
        auto visible = filtered_games();
        if (visible.empty()) return;
        auto at = std::find(visible.begin(), visible.end(), game_idx);
        int pos = at == visible.end() ? (direction > 0 ? -1 : 0)
                                      : (int)(at - visible.begin());
        pos = (pos + direction + (int)visible.size()) % (int)visible.size();
        switch_game(visible[pos]);
    };

    // Headless smoke: REXMENU_SMOKE=<frames> runs that many full frames and
    // exits 0 - proof the window, the pad overlay and the draw path live,
    // without needing anyone to look at it.
    int smoke_frames = 0;
    if (const char *s = std::getenv("REXMENU_SMOKE")) {
        smoke_frames = std::atoi(s);
        if (smoke_frames <= 0) smoke_frames = 90;
    }

    while (!WindowShouldClose()) {
        if (smoke_frames > 0 && --smoke_frames == 0) {
            std::printf("smoke: ran the requested frames, closing\n");
            break;
        }
        blink += GetFrameTime();
        nav.consume();
        const int w = GetScreenWidth(), h = GetScreenHeight();
        // With a real pad attached the overlay stands down and stops
        // forwarding: the game reads the real pad through evdev directly.
        pad.set_auto_hidden(rexmenu_real_pad_present());
        pad.update({ 0, 0 }, { (float)w, (float)h }, sink);

        // Every connected gamepad drives the menu - not just index 0. The
        // uinput virtual pad usually claims index 0, and when a REAL pad is
        // also plugged in SDL may order them either way; polling all of them
        // means the player's controller always works no matter where it
        // landed. Merged in after the touch overlay so both drive at once.
        for (int gp = 0; gp < MAX_GAMEPADS; ++gp) {
            if (!IsGamepadAvailable(gp)) continue;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_LEFT_FACE_UP)) nav.up = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) nav.down = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_LEFT_FACE_LEFT)) nav.left = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)) nav.right = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) nav.a = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT)) nav.b = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_UP)) nav.y = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_MIDDLE_RIGHT)) nav.start = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_LEFT_TRIGGER_1)) nav.lb = true;
            if (IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_TRIGGER_1)) nav.rb = true;
            if (GetGamepadAxisMovement(gp, GAMEPAD_AXIS_LEFT_Y) < -0.6f) nav.up = true;
            if (GetGamepadAxisMovement(gp, GAMEPAD_AXIS_LEFT_Y) > 0.6f) nav.down = true;
            if (GetGamepadAxisMovement(gp, GAMEPAD_AXIS_LEFT_X) < -0.6f) nav.left = true;
            if (GetGamepadAxisMovement(gp, GAMEPAD_AXIS_LEFT_X) > 0.6f) nav.right = true;
        }
        // Keyboard, same edges.
        if (IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_A)) nav.left = true;
        if (IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D)) nav.right = true;
        if (IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W)) nav.up = true;
        if (IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S)) nav.down = true;
        if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE)) nav.a = true;
        if (IsKeyPressed(KEY_BACKSPACE) || IsKeyPressed(KEY_ESCAPE)) nav.b = true;
        if (IsKeyPressed(KEY_Y)) nav.y = true;
        if (IsKeyPressed(KEY_PAGE_UP)) nav.lb = true;
        if (IsKeyPressed(KEY_PAGE_DOWN)) nav.rb = true;

        if (!saves.confirming && (screen == Screen::Home || screen == Screen::Games ||
             screen == Screen::Info || screen == Screen::Settings) && nav.lb != nav.rb) {
            const Screen previous = screen;
            move_filtered_game(nav.rb ? 1 : -1);
            game_sel = game_idx;
            achievement_sel = 0;
            rail_hover = -1;
            screen = previous;
        }

        if (screen == Screen::Home) {
            // The rail is the only thing to select: left/right and L1/R1 both
            // move it. A plays the picked game, X opens its settings, B quits
            // the launcher. Y keeps the info/achievements view one press away.
            if (nav.left) move_filtered_game(-1);
            if (nav.right) move_filtered_game(1);
            const float library_wheel = GetMouseWheelMove();
            if (library_wheel != 0.0f)
                move_filtered_game(library_wheel < 0.0f ? 1 : -1);
            if (nav.y) { port.check_content(); screen = Screen::Info; info_tab = 0; achievement_sel = 0; }
            // Mouse/touch: first click selects the icon, a second click on
            // the selected one loads that game. (rail_hover is one frame
            // stale here - hover persists, so that changes nothing.)
            if (rail_hover >= 0 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                if (game_sel == rail_hover) {
                    switch_game(rail_hover);
                    rail_hover = -1;
                } else {
                    game_sel = rail_hover;
                }
            }
            bool settings_key = IsKeyPressed(KEY_X);
            for (int gp = 0; gp < MAX_GAMEPADS; ++gp)
                settings_key |= IsGamepadAvailable(gp) && IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_LEFT);
            if (settings_key) { screen = Screen::Settings; settings_sel = 0; }
            if (nav.b) { tiles.clear(); CloseWindow(); return 0; }
            if (nav.a || nav.start) {
                port.check_content();
                if (!port.content_ok) {
                    // No assets yet - jump straight to the file picker so the
                    // player can point at their copy right now. The Info
                    // screen's "Game files / DLC" tab still exists for users
                    // who want to look at the catalog first.
                    importing_dlc = false;
                    const fs::path collection_root = collection_root_of(port.root);
                    std::error_code input_ec;
                    const char *home = std::getenv("HOME");
                    const fs::path downloads = home ? fs::path(home) / "Downloads" : fs::path();
                    const std::string browse_root =
                        !downloads.empty() && fs::exists(downloads, input_ec)
                            ? downloads.string()
                            : fs::exists(collection_root, input_ec)
                                ? collection_root.string()
                                : port.root + "/content";
                    screen = Screen::Browse;
                    browser.open(browse_root);
                } else {
                    // Embedded play: the title runs headless and streams its
                    // frames; THIS window is the display (see the Playing
                    // screen). Only the pad overlay mode still opens the
                    // game's own window.
                    // The launcher owns pacing on every Play: an explicit
                    // vsync + cap pair for both launch paths, so a title's
                    // own toml default never silently vetoes the choice
                    // (vsync_fps_cap is ignored with vsync off, and a capped
                    // choice must force vsync back on over a free-running
                    // toml default). Off = vsync off: the guest vblank pacer
                    // ticks at 1000Hz and present never waits, so the title
                    // free-runs (MCLA/Hydro 500+ fps behaviour).
                    const int fps_cap = settings.fps_cap();
                    if (settings.show_pad_while_playing) {
                        // Windowed: run.sh forwards argv flags to the guest.
                        if (job.start_args(
                                port.root + "/run.sh",
                                fps_cap > 0
                                    ? std::vector<std::string>{
                                          "--vsync=true",
                                          "--vsync_fps_cap=" +
                                              std::to_string(fps_cap)}
                                    : std::vector<std::string>{
                                          "--vsync=false",
                                          "--vsync_fps_cap=0"})) {
                            job_is_play = true;
                            play_failed = false;
                            screen = Screen::Playing;
                            SetTargetFPS(15);  // be polite while the game runs
                        }
                    } else {
                        // Embedded: the script's only positional arg is a
                        // runtime limit, so the flags ride in REX_VSYNC /
                        // REX_VSYNC_FPS_CAP env vars.
                        if (job.start_env(port.root +
                                              "/tools/embedded_play.sh",
                                          (fps_cap > 0
                                               ? "REX_VSYNC=1 REX_VSYNC_FPS_CAP=" +
                                                     std::to_string(fps_cap) + " "
                                               : "REX_VSYNC=0 REX_VSYNC_FPS_CAP=0 ") +
                                              // GPU-direct stream is the working
                                              // path for GW2 at 120Hz (vs ~40fps
                                              // on the CPU shm ring). Leave unset so
                                              // embedded_play.sh defaults to stream.
                                              ([&]() -> std::string {
                                                  const char *p = std::getenv("REX_GPU_FRAME_STATS_PATH");
                                                  return (p && *p) ? std::string(" REX_GPU_FRAME_STATS_PATH=") + p : std::string();
                                              })())) {
                            job_is_play = true;
                            play_failed = false;
                            screen = Screen::Playing;
                            // Poll input smoothly without redrawing the same guest
                            // image thousands of times while the producer is busy.
                            SetTargetFPS(60);
                        }
                    }
                }
            }
        } else if (screen == Screen::Games) {
            // The game list: this port and every sibling in the tree. The
            // marked entry is the port the menu is acting on right now; A on
            // another entry switches everything over to it - saves stay put
            // (family-wide), so the move costs nothing.
            if (nav.up || nav.down) {
                auto visible = filtered_games();
                if (!visible.empty()) {
                    auto at = std::find(visible.begin(), visible.end(), game_sel);
                    int pos = at == visible.end() ? 0 : (int)(at - visible.begin());
                    pos = (pos + (nav.down ? 1 : (int)visible.size() - 1)) %
                          (int)visible.size();
                    game_sel = visible[pos];
                }
            }
            // X cycles media filter (All -> XBLA -> Disc -> All), Y cycles the
            // letter filter (All -> A -> ... -> Z -> All). X is the keyboard /
            // gamepad face button, read directly because nav has no x bit.
            bool x_press = IsKeyPressed(KEY_X);
            for (int gp = 0; gp < MAX_GAMEPADS; ++gp)
                x_press |= IsGamepadAvailable(gp) &&
                           IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_LEFT);
            if (x_press) {
                media_filter = (media_filter + 1) % 3;
                auto visible = filtered_games();
                if (!visible.empty()) game_sel = visible[0];
            }
            if (nav.y) {
                letter_filter = (letter_filter + 1) % 27;
                auto visible = filtered_games();
                if (!visible.empty()) game_sel = visible[0];
                else { screen = Screen::Home; }
            }
            if (nav.a) {
                switch_game(game_sel);
                screen = Screen::Home;
            }
            if (nav.b) screen = Screen::Home;
        } else if (screen == Screen::Browse) {
            bool mark_key = IsKeyPressed(KEY_X);
            for (int gp = 0; gp < MAX_GAMEPADS; ++gp)
                mark_key |= IsGamepadAvailable(gp) && IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_LEFT);
            auto picked = browser.navigate(nav.up, nav.down, nav.a, nav.b, mark_key, nav.y, nav.rb);
            if (picked && picked->size() > 1) {
                // Batch import: the marked set, or every file in the folder via
                // R1. Each XEX is routed to the port it belongs to - matched on
                // the port slug or title inside the file name - so a folder
                // holding one copy of every game in the collection lands each
                // on the right title from a single pick. DLC stays on the
                // current port: a package only ever matches its own game.
                job.pid = -1;
                job.fd = -1;
                job.running = false;
                job.lines.clear();
                int succeeded = 0;
                for (const std::string &pick : *picked) {
                    const std::string base = basename_of(pick);
                    job.lines.push_back("-- " + base);
                    std::string lowered = base;
                    std::transform(lowered.begin(), lowered.end(), lowered.begin(),
                                   [](unsigned char c) { return char(std::tolower(c)); });
                    if (fs::is_directory(pick)) {
                        job.lines.push_back("skipped: a folder is imported on its own with Y");
                        continue;
                    }
                    if (!importing_dlc && lowered.size() >= 4 &&
                        lowered.compare(lowered.size() - 4, 4, ".xex") == 0) {
                        const Port *target = nullptr;
                        size_t best = 0;
                        for (const auto &g : games) {
                            std::string name_lowered = g.name;
                            std::transform(name_lowered.begin(), name_lowered.end(),
                                           name_lowered.begin(),
                                           [](unsigned char c) { return char(std::tolower(c)); });
                            const std::string keys[] = { g.slug, name_lowered };
                            for (const std::string &key : keys) {
                                if (!key.empty() && key.size() > best &&
                                    lowered.find(key) != std::string::npos) {
                                    best = key.size();
                                    target = &g;
                                }
                            }
                        }
                        const std::string dst_root = target ? target->root : port.root;
                        if (target) job.lines.push_back("game: " + target->name);
                        if (xex_has_siblings(pick)) {
                            job.lines.push_back("Detected sibling files - importing parent tree.");
                            succeeded += native_import_tree(dst_root,
                                fs::path(pick).parent_path().string(),
                                job.lines) ? 1 : 0;
                        } else {
                            succeeded += native_import_xex(dst_root, pick, job.lines) ? 1 : 0;
                        }
                    } else if (importing_dlc) {
                        succeeded += native_import_dlc(port.root, pick, job.lines) ? 1 : 0;
                    } else {
                        job.lines.push_back("skipped: batch takes XEX files (archives one at a time)");
                    }
                }
                job.lines.push_back(TextFormat("Batch import: %d of %d files succeeded.",
                                               succeeded, (int)picked->size()));
                job.exit_code = succeeded > 0 ? 0 : 1;
                job_is_play = false;
                screen = Screen::Importing;
                for (auto &g : games) g.check_content();
                port.check_content();
            } else if (picked) {
                const std::string &single = (*picked)[0];
                const std::string base = basename_of(single);
                if (fs::is_directory(single) || looks_importable(base)) {
                    std::string lowered = base;
                    std::transform(lowered.begin(), lowered.end(), lowered.begin(),
                                   [](unsigned char c) { return char(std::tolower(c)); });
                    const bool direct_xex = !importing_dlc &&
                        lowered.size() >= 4 &&
                        lowered.compare(lowered.size() - 4, 4, ".xex") == 0;
                    const bool direct_dlc = importing_dlc && !fs::is_directory(single);
                    // For non-DLC picks, detect which game the file belongs to
                    // by looking for each port's slug or lowercased name in
                    // the filename or its parent folder. If a clear winner
                    // emerges and it differs from the current game, redirect
                    // the import to the right port and switch the menu over -
                    // importing GW1's XEX into GW3's slot is destructive and
                    // confusing, the right thing is to land it where it goes.
                    std::string dest_root = port.root;
                    if (!importing_dlc) {
                        const Port *target = nullptr;
                        size_t best = 0;
                        const std::string parent_lowered = [&] {
                            std::string p = fs::path(single).parent_path().string();
                            std::transform(p.begin(), p.end(), p.begin(),
                                           [](unsigned char c) { return char(std::tolower(c)); });
                            return p;
                        }();
                        const std::string haystack = lowered + " " + parent_lowered;
                        for (const auto &g : games) {
                            std::string name_lowered = g.name;
                            std::transform(name_lowered.begin(), name_lowered.end(),
                                           name_lowered.begin(),
                                           [](unsigned char c) { return char(std::tolower(c)); });
                            const std::string keys[] = { g.slug, name_lowered };
                            for (const std::string &key : keys) {
                                if (!key.empty() && key.size() > best &&
                                    haystack.find(key) != std::string::npos) {
                                    best = key.size();
                                    target = &g;
                                }
                            }
                        }
                        if (target && target->root != port.root) {
                            // Switch the menu to the right game so the user
                            // sees the import under the correct tile.
                            for (size_t i = 0; i < games.size(); ++i)
                                if (games[i].root == target->root) { game_idx = (int)i; break; }
                            activate_game(game_idx);
                            dest_root = target->root;
                        }
                    }
                    if (direct_xex || direct_dlc) {
                        job.pid = -1;
                        job.fd = -1;
                        job.running = false;
                        job.lines.clear();
                        if (dest_root != port.root) {
                            const Port *t = nullptr;
                            for (const auto &g : games)
                                if (g.root == dest_root) { t = &g; break; }
                            if (t) job.lines.push_back("Routed to " + t->name +
                                " (file matched this game, not the previously selected one).");
                        }
                        if (direct_xex && xex_has_siblings(single)) {
                            // Disc-style tree: the XEX is one of many files;
                            // copying just the XEX leaves the game with no
                            // assets. Import the whole parent tree instead.
                            job.lines.push_back("Detected sibling files - importing parent tree instead of single XEX.");
                            job.exit_code = native_import_tree(dest_root,
                                fs::path(single).parent_path().string(),
                                job.lines) ? 0 : 1;
                        } else {
                            job.exit_code = direct_xex
                                ? (native_import_xex(dest_root, single, job.lines) ? 0 : 1)
                                : (native_import_dlc(dest_root, single, job.lines) ? 0 : 1);
                        }
                        job_is_play = false;
                        screen = Screen::Importing;
                        port.check_content();
                        if (game_idx >= 0 && game_idx < (int)games.size())
                            games[game_idx].content_ok = port.content_ok;
                    } else if (!importing_dlc && fs::is_directory(single)) {
                        job.pid = -1;
                        job.fd = -1;
                        job.running = false;
                        job.lines.clear();
                        job.exit_code = native_import_tree(dest_root, single, job.lines) ? 0 : 1;
                        job_is_play = false;
                        screen = Screen::Importing;
                        port.check_content();
                        if (game_idx >= 0 && game_idx < (int)games.size())
                            games[game_idx].content_ok = port.content_ok;
                    } else if (!importing_dlc &&
                               ((lowered.size() >= 4 && lowered.compare(lowered.size() - 4, 4, ".rar") == 0) ||
                                (lowered.size() >= 4 && lowered.compare(lowered.size() - 4, 4, ".zip") == 0) ||
                                (lowered.size() >= 3 && lowered.compare(lowered.size() - 3, 3, ".7z") == 0) ||
                                (lowered.size() >= 4 && lowered.compare(lowered.size() - 4, 4, ".iso") == 0))) {
                        std::error_code temp_ec;
                        // /tmp is often a small tmpfs; a 1.5+ GB Xbox 360 RAR
                        // cannot extract there. Use /var/tmp first (always on
                        // the real disk), then HOME/.cache as a fallback.
                        fs::path work = fs::path("/var/tmp") /
                            ("rexmenu-import-" + std::to_string(getpid()));
                        if (!fs::is_directory("/var/tmp", temp_ec)) {
                            const char *home = std::getenv("HOME");
                            work = fs::path(home ? home : "/tmp") /
                                ".cache" / "rexmenu-import" /
                                std::to_string(getpid());
                        }
                        fs::remove_all(work, temp_ec);
                        fs::create_directories(work, temp_ec);
                        fs::remove_all(work, temp_ec);
                        fs::create_directories(work, temp_ec);
                        job.lines.clear();
                        job.lines.push_back("Selected archive: " + base);
                        job.lines.push_back("Progress: extracting archive in the GUI...");
                        if (job.start_archive(single, work.string())) {
                            job_is_play = false;
                            screen = Screen::Importing;
                        } else {
                            job.lines.push_back("ERROR: could not start the archive extractor");
                            job.exit_code = 1;
                            screen = Screen::Importing;
                        }
                    } else {
                        job.pid = -1;
                        job.fd = -1;
                        job.running = false;
                        job.lines.clear();
                        job.lines.push_back("ERROR: this source is not supported by the native GUI importer");
                        job.exit_code = 1;
                        job_is_play = false;
                        screen = Screen::Importing;
                    }
                }
            } else if (browser.cancelled()) {
                screen = Screen::Home;
            }
        } else if (screen == Screen::Importing || screen == Screen::Playing) {
            job.poll();
            if (!job.running && job.archive_job) {
                // If the extractor (unrar/unzip/7z/rexiso) returned non-zero,
                // log it explicitly. The default fall-through below would
                // otherwise silently clean up and leave the user wondering
                // why nothing landed in assets/.
                if (job.exit_code != 0 && !job.stfs_job) {
                    job.lines.push_back(TextFormat("ERROR: archive extractor failed (exit %d) - the file may be corrupt, password-protected, or out of disk space.",
                                                    job.exit_code));
                    job.lines.push_back("Selected source: " + job.archive_source);
                }
                if (job.stfs_job) {
                    job.stfs_job = false;
                    if (job.exit_code == 0)
                        job.exit_code = native_import_tree(port.root, job.stfs_output, job.lines) ? 0 : 1;
                    std::error_code cleanup_ec;
                    fs::remove_all(job.archive_dir, cleanup_ec);
                    job.archive_job = false;
                    job.archive_dir.clear();
                    job.stfs_output.clear();
                } else if (job.exit_code == 0) {
                    const fs::path extracted(job.archive_dir);
                    const fs::path package = find_stfs_package(extracted);
                    const fs::path xex = [&] {
                        std::error_code find_ec;
                        for (const auto &entry : fs::recursive_directory_iterator(extracted, find_ec)) {
                            if (find_ec || !entry.is_regular_file(find_ec)) continue;
                            std::string name = entry.path().filename().string();
                            std::transform(name.begin(), name.end(), name.begin(),
                                           [](unsigned char c) { return char(std::tolower(c)); });
                            if (name == "default.xex") return entry.path();
                        }
                        return fs::path();
                    }();
                    if (!xex.empty()) {
                        job.exit_code = native_import_tree(port.root, extracted.string(), job.lines) ? 0 : 1;
                    } else if (!package.empty()) {
                        const fs::path stfs_out = extracted / "stfs-content";
                        std::error_code out_ec;
                        fs::create_directories(stfs_out, out_ec);
                        job.lines.push_back("Found STFS package: " + package.filename().string());
                        job.lines.push_back("Progress: unpacking Xbox content package...");
                        const auto prior = job.lines;
                        job.stfs_job = true;
                        job.stfs_output = stfs_out.string();
                        if (!job.start_command({"python3", "/home/jon/rexglue-vmx/tools/stfs_extract.py",
                                                "extract", package.string(), stfs_out.string()})) {
                            job.lines = prior;
                            job.lines.push_back("ERROR: could not start the STFS unpacker");
                            job.exit_code = 1;
                            job.stfs_job = false;
                        } else {
                            job.lines = prior;
                        }
                    } else {
                        job.lines.push_back("ERROR: archive contains neither default.xex nor an STFS package");
                        job.exit_code = 1;
                    }
                }
                if (!job.running && job.archive_job && !job.stfs_job) {
                    std::error_code cleanup_ec;
                    fs::remove_all(job.archive_dir, cleanup_ec);
                    job.archive_job = false;
                    job.archive_dir.clear();
                }
            }
            // Playing: the on-screen pad is the game's controller now -
            // embedded or windowed alike, the uinput device carries it.
            if (job.running && job_is_play)
                pad_forward.frame(pad, stick_state, virt);
            // Embedded play: pull the newest presented frame into a texture
            // (shm ring first, PPM fallback second).
            if (job.running && job_is_play && job.embedded)
                blitter.poll(job.framedir, job.shm, job.stream);
            // B and Start belong to the game. Only Escape ends embedded play.
            if (job.running && job_is_play && job.embedded &&
                IsKeyPressed(KEY_ESCAPE)) {
                std::fprintf(stderr, "Embedded play: Escape requested shutdown\n");
                user_quit_play = true;
                job.kill_group();
            }
            if (!job.running) {
                pad_forward.reset(virt);
                blitter.release();
                if (job_is_play) {
                    SetTargetFPS(60);
                    ClearWindowState(FLAG_WINDOW_HIDDEN);
                    port.check_content();
                    // User pressing ESC is a clean exit even if the kill left
                    // a non-zero status. Only treat a real failure (game
                    // crashed or returned an error) as a failed start.
                    if (job.exit_code != 0 && !user_quit_play) {
                        play_failed = true;
                        screen = Screen::Playing;
                    } else {
                        play_failed = false;
                        screen = Screen::Home;
                    }
                    user_quit_play = false;
                } else {
                    port.check_content();
                    games[game_idx].content_ok = port.content_ok;
                    if (job.exit_code != 0 || nav.b) screen = Screen::Home;
                    // A good import goes back to Home, where Play now works.
                    if (job.exit_code == 0) screen = Screen::Home;
                }
            }
        } else if (screen == Screen::Info) {
            if (!saves_loaded) {
                std::vector<std::pair<std::string, std::string>> library;
                for (const auto& game : games) library.push_back({game.root, game.name});
                saves.load_all(library); saves_loaded = true;
            }
            if (saves.confirming) {
                if (nav.b || nav.y) saves.confirming = false;
                else if (nav.a) {
                    saves.perform();
                    std::vector<std::pair<std::string, std::string>> library;
                    for (const auto& game : games) library.push_back({game.root, game.name});
                    saves.load_all(library);
                }
                nav.consume();
            } else if (nav.left || nav.right) info_tab = (info_tab + (nav.right ? 1 : 4)) % 5;
            if (info_tab == 3) {
                if (nav.up) saves.selected = std::max(0, saves.selected - 1);
                if (nav.down) saves.selected = std::min(std::max(0, (int)saves.entries.size()-1), saves.selected + 1);
                if (nav.a && !saves.entries.empty()) {
                    if (saves.action >= 2) saves.confirming = true;
                    else saves.perform();
                }
                // X cycles the save action; mouse selects an action directly.
                bool next_action = IsKeyPressed(KEY_X);
                for (int gp=0; gp<MAX_GAMEPADS; ++gp)
                    next_action |= IsGamepadAvailable(gp) && IsGamepadButtonPressed(gp, GAMEPAD_BUTTON_RIGHT_FACE_LEFT);
                if (next_action) saves.action = (saves.action + 1) % 4;
            }
            if (info_tab == 2) {
                if (nav.up || nav.down) files_sel = 1 - files_sel;
                if (nav.a) {
                    importing_dlc = files_sel == 1;
                    const fs::path collection_root = collection_root_of(port.root);
                    const fs::path collection_input = importing_dlc
                        ? collection_root / "dlc"
                        : collection_root;
                    std::error_code input_ec;
                    const char *home = std::getenv("HOME");
                    const fs::path downloads = home ? fs::path(home) / "Downloads" : fs::path();
                    const std::string browse_root = !downloads.empty() && fs::exists(downloads, input_ec)
                        ? downloads.string()
                        : fs::exists(collection_input, input_ec)
                            ? collection_input.string()
                            : port.root + "/content";
                    screen = Screen::Browse;
                    browser.open(browse_root);
                }
            } else if (nav.a && info_tab != 3) info_tab = (info_tab + 1) % 4;
            if (info_tab == 1 && !port.achievements.empty()) {
                if (nav.up) --achievement_sel;
                if (nav.down) ++achievement_sel;
                achievement_sel -= (int)GetMouseWheelMove();
                achievement_sel = std::clamp(achievement_sel, 0, (int)port.achievements.size() - 1);
            }
            if (nav.b || nav.y) screen = Screen::Home;
        } else if (screen == Screen::Settings) {
            // Per-game settings plus the doors the old Home action list had:
            // Game files / DLC (import) and Clear game files. Options cycle
            // with left/right and save immediately, so a Play right after
            // reflects the change.
            //
            // The "GPU renderer" row used to live here; xenos is the only
            // plugin that actually works and run.sh / embedded_play.sh hardcode
            // it - offering a switch would either silently do nothing or break
            // the game, so the row is gone.
            const int kSettingsCount = 4;
            if (clear_files_confirming) {
                if (nav.b || nav.y) {
                    clear_files_confirming = false;
                } else if (nav.a) {
                    std::error_code clear_ec;
                    fs::remove_all(fs::path(port.root) / "assets", clear_ec);
                    fs::create_directories(fs::path(port.root) / "assets", clear_ec);
                    if (clear_ec) clear_files_status = "Could not clear game files: " + clear_ec.message();
                    else clear_files_status = "Game files cleared. Import them again from Game files / DLC.";
                    port.check_content();
                    if (game_idx >= 0 && game_idx < (int)games.size())
                        games[game_idx].content_ok = port.content_ok;
                    clear_files_confirming = false;
                }
                nav.consume();
            } else {
            if (nav.up) settings_sel = (settings_sel + kSettingsCount - 1) % kSettingsCount;
            if (nav.down) settings_sel = (settings_sel + 1) % kSettingsCount;
            if (settings_sel == 0 && (nav.left || nav.right)) {
                settings.fps_cap_idx = (settings.fps_cap_idx +
                                        (nav.right ? 1 : MenuSettings::kFpsCapCount - 1)) %
                                       MenuSettings::kFpsCapCount;
                settings.save(port.root);
            }
            if (settings_sel == 1 && (nav.left || nav.right)) {
                settings.show_pad_while_playing = !settings.show_pad_while_playing;
                settings.save(port.root);
            }
            if (settings_sel == 2 && nav.a) { screen = Screen::Info; info_tab = 2; files_sel = 0; }
            if (settings_sel == 3 && nav.a) clear_files_confirming = true;
            if (nav.b || nav.y) screen = Screen::Home;
            }
        } else if (screen == Screen::About) {
            if (!games.empty() && (nav.left || nav.right))
                about_tab = (about_tab + (int)games.size() +
                             (nav.right ? 1 : -1)) % (int)games.size();
            if (nav.b || nav.y) screen = Screen::Home;
        }

        BeginDrawing();
        ClearBackground(Color{ 16, 18, 22, 255 });
        const int margin = 36;

        if (screen == Screen::Home) {
            ui_text(port.name.c_str(), margin, margin, 44, RAYWHITE);
            // Achievement summary for the selected game - same catalog and
            // unlock save the in-game overlay reads (game-info/achievements.toml
            // + <user_root>/achievements/<title_id>.toml), just read a second
            // time here rather than duplicated. Nothing shown if the catalog
            // was never extracted (`rexglue init achievements`) for this port.
            int ach_line_w = 0;
            if (!port.achievements.empty()) {
                int unlocked = 0, gamerscore = 0, gamerscore_total = 0;
                for (const auto &a : port.achievements) {
                    gamerscore_total += (int)a.gamerscore;
                    if (a.unlocked) { ++unlocked; gamerscore += (int)a.gamerscore; }
                }
                char ach_line[128];
                std::snprintf(ach_line, sizeof(ach_line), "%d / %zu achievements  -  %d / %d G",
                              unlocked, port.achievements.size(), gamerscore, gamerscore_total);
                ui_text(ach_line, margin, margin + 56, 16, Color{ 210, 190, 110, 255 });
                ach_line_w = ui_measure(ach_line, 16);
            }

            // Collection-wide totals over every title in games.index -
            // right-aligned on the same line so it reads as the library's
            // running score, not the selected game's. Same catalogs and
            // unlock states the per-game line uses, summed once per frame.
            {
                int all_unlocked = 0, all_count = 0, all_g = 0, all_g_total = 0;
                for (const auto &g : games) {
                    for (const auto &a : g.achievements) {
                        ++all_count; all_g_total += (int)a.gamerscore;
                        if (a.unlocked) { ++all_unlocked; all_g += (int)a.gamerscore; }
                    }
                }
                if (all_count > 0) {
                    char tot_line[128];
                    std::snprintf(tot_line, sizeof(tot_line),
                                  "All games: %d / %d achievements  -  %d / %d G",
                                  all_unlocked, all_count, all_g, all_g_total);
                    const int tw = ui_measure(tot_line, 16);
                    // Keep clear of the selected game's line on narrow windows.
                    if (margin + ach_line_w + 32 + tw < w)
                        ui_text(tot_line, w - margin - tw, margin + 56, 16,
                                Color{ 170, 155, 95, 255 });
                }
            }

            // The game rail: one dashboard tile per port in the family, laid
            // out from the centre. Click/touch an icon to select it; A (or a
            // click) on the selected one loads that game. Everything follows
            // the active game, so this row is also the switcher.
            const auto visible_games = filtered_games();
            // The rail is the whole menu now, so the tiles get the room the
            // old action list had: bigger icons centred on the free band
            // between header and footer. The selected tile stays centred when
            // the library becomes wider than the rail.
            const float cell = 252.0f, icon = 200.0f;
            const float rail_w = cell * (float)visible_games.size();
            auto current = std::find(visible_games.begin(), visible_games.end(), game_idx);
            const int current_pos = current == visible_games.end()
                                        ? 0 : (int)(current-visible_games.begin());
            const float target_rail_x = rail_w <= w - 72 ? (w - rail_w) / 2.0f :
                std::clamp(w / 2.0f - cell * (current_pos + 0.5f), w - 36 - rail_w, 36.0f);
            if (!rail_scroll_ready) {
                rail_scroll_x = target_rail_x;
                rail_scroll_ready = true;
            } else {
                const float easing = std::min(1.0f, GetFrameTime() * 9.0f);
                rail_scroll_x += (target_rail_x - rail_scroll_x) * easing;
                if (std::abs(target_rail_x - rail_scroll_x) < 0.25f)
                    rail_scroll_x = target_rail_x;
            }
            const float rail_x = rail_scroll_x;
            // Centred in the band between the header block and the footer
            // reservation (header ~150px, footer 84px).
            const float rail_y = std::max((float)margin + 130.0f,
                                          (margin + 150.0f + (float)h - 84.0f - icon - 60.0f) / 2.0f);
            rail_hover = -1;
            BeginScissorMode(margin, (int)rail_y-10, w-2*margin, (int)icon+70);
            for (int pos = 0; pos < (int)visible_games.size(); ++pos) {
                const int i = visible_games[pos];
                const float cx = rail_x + cell * (float)pos + cell / 2.0f;
                const float cy = rail_y + icon / 2.0f + 14.0f;
                const bool sel = (i == game_idx);
                const Rectangle cellrec{ cx - cell / 2.0f + 6, rail_y,
                                         cell - 12, icon + 28 };
                if (CheckCollisionPointRec(GetMousePosition(), cellrec))
                    rail_hover = i;
                // A gentle lift for the loaded game, a stronger one for the
                // icon under the finger. The rail is display-only for pad/
                // keyboard nav - only mouse hover and the loaded game affect
                // its look; Up/Down never touches it (L1/R1 does the actual
                // game switch, immediately).
                float lift = sel ? -4.0f : 0.0f;
                if (i == rail_hover) lift = -8.0f;
                const float s = (i == rail_hover) ? icon + 10.0f : icon;
                const Rectangle ic{ cx - s / 2.0f, cy - s / 2.0f + lift,
                                    s, s };
                if (i == rail_hover)
                    DrawRectangleRounded(cellrec, 0.18f, 8,
                                         Color{ 40, 110, 120, 120 });
                else if (sel)
                    DrawRectangleRounded(cellrec, 0.18f, 8,
                                         Color{ 255, 255, 255, 18 });
                if (tiles[i].ok()) {
                    const Color tint = !games[i].content_ok ? Color{38, 40, 48, 220} : (sel || i == rail_hover)
                                           ? WHITE
                                           : Color{ 200, 205, 212, 255 };
                    DrawTexturePro(tiles[i].tex(),
                                   { 0, 0, (float)tiles[i].tex().width,
                                     (float)tiles[i].tex().height },
                                   ic, { 0, 0 }, 0.0f, tint);
                    if (!games[i].content_ok) {
                        // "NO ASSETS" badge in the corner - unmistakable so a
                        // tile cannot be mistaken for a loaded-but-silent game.
                        const float bw = 130, bh = 22;
                        const float bx = cx + s / 2.0f - bw - 8;
                        const float by = cy + s / 2.0f - bh - 8 + lift;
                        DrawRectangleRounded({ bx, by, bw, bh }, 0.2f, 6,
                                             Color{ 0, 0, 0, 200 });
                        DrawRectangleRoundedLines({ bx, by, bw, bh }, 0.2f, 6,
                                                  Color{ 220, 170, 90, 230 });
                        ui_text("NO ASSETS", (int)(bx + 11), (int)(by + 4),
                                14, Color{ 230, 180, 100, 255 });
                    }
                } else {
                    DrawRectangleRounded(ic, 0.14f, 8, Color{ 36, 42, 52, 255 });
                    const std::string initial = games[i].name.empty()
                                                    ? "?"
                                                    : games[i].name.substr(0, 1);
                    ui_text(initial, (int)(cx - 12), (int)(cy - 16 + lift), 32,
                            Color{ 150, 200, 230, 255 });
                }
                {
                    ui_text(games[i].name.c_str(), (int)(cx -
                             ui_measure(games[i].name, 15) / 2.0f),
                             (int)(rail_y + icon + 20), 15,
                             Color{ 150, 200, 230, 255 });
                }
            }
            EndScissorMode();
            if (visible_games.empty())
                ui_text("No games match these filters", margin, (int)rail_y+55, 22, GRAY);
            game_sel = std::clamp(game_sel, 0, (int)games.size() - 1);
            if (rail_hover >= 0) {
                rail_hover_since = blink;
            } else {
                game_sel = game_idx;
            }
            // Hover tooltip: name, or the tile's filename when a tile failed
            // to load. Only after a short dwell, so scanning stays quiet.
            if (rail_hover >= 0 && blink - rail_hover_since > 0.45) {
                const std::string tip = tiles[rail_hover].ok()
                                            ? games[rail_hover].name
                                            : ("no tile: " + games[rail_hover].slug);
                ui_text(tip.c_str(),
                        (int)(w/2.0f -
                              ui_measure(tip, 15) / 2.0f),
                        (int)(rail_y + icon + 44), 15, Color{ 200, 205, 212, 255 });
            }

            // No action list - the rail above is the whole menu. The footer
            // band (state, source, hint) is the only fixed reservation.
            const char *state = port.content_ok
                                    ? "Game files: imported and verified"
                                    : "Game files: not imported yet";
            ui_text(state, margin, h - 72, 18,
                     port.content_ok ? Color{ 120, 200, 140, 255 }
                                     : Color{ 220, 170, 90, 255 });
            if (!port.source.empty())
                ui_text(port.source.c_str(), margin, h - 46, 15,
                         Color{ 110, 120, 135, 255 });
            {
                const std::string hint = "{A} play   {X} settings   {Y} info   {B} quit";
                hint_text(hint, w - margin - hint_measure(hint, 20), h - 34, 20,
                          Color{ 170, 178, 190, 255 });
            }
        } else if (screen == Screen::Games) {
            ui_text("Which game?", margin, margin - 8, 30, RAYWHITE);
            ui_text(
                "One shared save area - the games see each other's saves, like "
                "the console versions",
                margin, margin + 32, 15, Color{ 130, 140, 155, 255 });
            rail_hover = -1;

            // Filter strips at the top: media (All / XBLA / Disc) and A-Z.
            // Mouse clicks jump straight to that filter; X/Y cycle them with
            // the pad. Drawn as their own band so the list below is unaffected.
            const char *media_labels[] = { "All", "XBLA", "Disc" };
            const int media_count = 3;
            const int strip_w = 76, strip_h = 26, gap = 6;
            int strip_x = margin;
            const int strip_y = margin + 64;
            for (int i = 0; i < media_count; ++i) {
                Rectangle tab{ (float)strip_x, (float)strip_y,
                               (float)strip_w, (float)strip_h };
                const bool sel = i == media_filter;
                DrawRectangleRec(tab, sel ? Color{ 40, 110, 120, 255 }
                                          : Color{ 28, 32, 40, 255 });
                if (sel) DrawRectangleLinesEx(tab, 2.0f, Color{ 80, 210, 220, 255 });
                ui_text(media_labels[i], strip_x + 18, strip_y + 5, 16, RAYWHITE);
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
                    CheckCollisionPointRec(GetMousePosition(), tab))
                    media_filter = i;
                strip_x += strip_w + gap;
            }
            // Letter strip: All ("*") + A-Z. 27 entries; auto-shrinks the cell
            // width if there is not enough room.
            strip_x += gap * 2;
            const int letter_total = 27;
            const int letter_avail = w - strip_x - margin;
            const int letter_cell_w = std::max(14, std::min(28, letter_avail / letter_total));
            for (int i = 0; i < letter_total; ++i) {
                Rectangle tab{ (float)strip_x + i * letter_cell_w, (float)strip_y,
                               (float)letter_cell_w - 2, (float)strip_h };
                const bool sel = i == letter_filter;
                DrawRectangleRec(tab, sel ? Color{ 40, 110, 120, 255 }
                                          : Color{ 28, 32, 40, 255 });
                if (sel) DrawRectangleLinesEx(tab, 2.0f, Color{ 80, 210, 220, 255 });
                char lbl[2] = { i == 0 ? '*' : (char)('A' + i - 1), 0 };
                const int tw = ui_measure(lbl, 14);
                ui_text(lbl, (int)(tab.x + (tab.width - tw) / 2.0f),
                        strip_y + 5, 14, RAYWHITE);
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
                    CheckCollisionPointRec(GetMousePosition(), tab))
                    letter_filter = i;
            }
            const std::string media_label = std::string("Media: ") + media_labels[media_filter];
            const std::string letter_label = std::string("Letter: ") +
                (letter_filter == 0 ? std::string("All")
                                    : std::string(1, (char)('A' + letter_filter - 1)));
            const int filter_summary_y = strip_y + strip_h + 6;

            const auto visible = filtered_games();
            const int row_h = 54;
            const int list_top = filter_summary_y + 22;
            for (int pos = 0; pos < (int)visible.size(); ++pos) {
                const int i = visible[pos];
                const Rectangle row{ (float)margin, (float)(list_top + pos * row_h),
                                     w - margin * 2.0f, (float)(row_h - 10) };
                const bool is_sel = i == game_sel;
                const bool is_current = i == game_idx;
                DrawRectangleRec(row, is_sel ? Color{ 40, 110, 120, 255 }
                                             : Color{ 28, 32, 40, 255 });
                if (is_sel)
                    DrawRectangleLinesEx(row, 2.0f, Color{ 80, 210, 220, 255 });
                // The game's tile, at list size.
                if (tiles[i].ok()) {
                    const Rectangle ic{ row.x + 10, row.y + 5, 34, 34 };
                    DrawTexturePro(tiles[i].tex(),
                                   { 0, 0, (float)tiles[i].tex().width,
                                     (float)tiles[i].tex().height },
                                   ic, { 0, 0 }, 0.0f, WHITE);
                }
                std::string label = games[i].name;
                label += games[i].xbla ? "   [XBLA]" : "   [Disc]";
                if (is_current) label += "   (loaded)";
                if (!games[i].content_ok) label += "   -  not imported";
                ui_text(label.c_str(), margin + 58, (int)row.y + 12, 24,
                         games[i].content_ok ? RAYWHITE
                                             : Color{ 170, 175, 185, 255 });
            }
            if (visible.empty())
                ui_text("No games match the active filters - press Y to clear the letter filter.",
                        margin, list_top, 22, GRAY);
            ui_text(media_label.c_str(), margin, filter_summary_y, 15,
                    Color{ 110, 120, 135, 255 });
            const int mlw = ui_measure(media_label.c_str(), 15);
            ui_text(letter_label.c_str(), margin + mlw + 24, filter_summary_y, 15,
                    Color{ 110, 120, 135, 255 });
            const char *hint =
                "{A} use this game   {X} media   {Y} letter   Up/Down pick   {B} back";
            hint_text(hint, margin, h - 34, 18, Color{ 170, 178, 190, 255 });
        } else if (screen == Screen::Browse) {
            ui_text((port.name + (importing_dlc ? " - load DLC" : " - load game files")).c_str(), margin, margin - 8, 30, RAYWHITE);
            ui_text(browser.cwd().c_str(), margin, margin + 32, 15,
                     Color{ 130, 140, 155, 255 });

            const int row_h = 34;
            const int rows = (h - margin * 2 - 90) / row_h;
            // Filter out directories - this picker is for files only (game
            // rips), navigation between drives uses the L1/R1 drive chips.
            // Empty listing on a dir-only drive is still fine - press LB/RB
            // to hop to the next drive.
            int file_count = 0;
            for (const auto &e : browser.entries()) if (!e.is_dir) ++file_count;
            const int sel = browser.selection();
            const int top = std::clamp(sel - rows / 2, 0,
                                       std::max(0, file_count - rows));
            int vis = 0, drawn = 0;
            for (int i = 0; i < (int)browser.entries().size() && drawn < rows; ++i) {
                const auto &e = browser.entries()[i];
                if (e.is_dir) continue;
                if (vis++ < top) continue;
                const int y = margin + 66 + drawn * row_h;
                const bool is_sel = (vis - 1) == sel;
                if (is_sel)
                    DrawRectangle(margin - 8, y - 4, w - margin * 2 + 16,
                                  row_h - 6, Color{ 40, 110, 120, 255 });
                const std::string prefix =
                    browser.is_marked((fs::path(browser.cwd()) / e.name).string())
                        ? "[x] " : "     ";
                ui_text((prefix + e.name).c_str(), margin, y, 20,
                         is_sel ? RAYWHITE : Color{ 210, 215, 222, 255 });
                ++drawn;
            }
            if (file_count > rows)
                ui_text(TextFormat("%d..%d of %d files", top + 1,
                                    std::min(file_count, top + rows), file_count),
                         w - 200, margin + 32, 15,
                         Color{ 110, 120, 135, 255 });
            else if (file_count > 0)
                ui_text(TextFormat("%d files", file_count),
                         w - 100, margin + 32, 15,
                         Color{ 110, 120, 135, 255 });
            if (file_count == 0)
                ui_text("No importable files here. Drop your game rip into ~/Downloads.",
                        margin, margin + 80, 22, GRAY);
            if (browser.marked_count() > 0)
                ui_text(TextFormat("%d marked - A imports them", browser.marked_count()),
                        w - 340, margin + 32, 15, Color{ 120, 200, 140, 255 });
            ui_text(
                "A choose   X mark   Y import folder   B up/top cancels",
                margin, h - 34, 20, Color{ 170, 178, 190, 255 });
        } else if (screen == Screen::Importing || screen == Screen::Playing) {
            job.poll();
            // Embedded play: this window IS the display. The frame fills it;
            // menu chrome only until the first frame lands. Escape quits.
            if (job_is_play && job.embedded) {
                if (play_failed) {
                    DrawRectangle(0, 0, w, h, Color{16, 18, 22, 255});
                    ui_text("GAME FAILED TO START", margin, margin, 32,
                            Color{230, 120, 110, 255});
                    ui_text("See the runtime log for the missing content or startup error.",
                            margin, margin + 48, 19, RAYWHITE);
                    const int row_h = 22;
                    const int total = (int)job.lines.size();
                    const int first = total > 24 ? total - 24 : 0;
                    int row = 0;
                    for (int li = first; li < total; ++li, ++row)
                        ui_text(job.lines[li], margin, margin + 100 + row * row_h,
                                16, Color{190, 200, 210, 255});
                    ui_text("ESC / B  BACK", margin, h - 40, 22,
                            Color{200, 205, 212, 255});
                    if (nav.b || IsKeyPressed(KEY_ESCAPE)) {
                        play_failed = false;
                        job_is_play = false;
                        screen = Screen::Home;
                    }
                } else {
                // Embedded play: the game owns the screen. A small FPS
                // counter tucked in the top-left corner is the only chrome.
                blitter.draw(0, 0, (float)w, (float)h);
                if (blitter.has()) {
                    char fps[32];
                    std::snprintf(fps, sizeof(fps), "%.1f FPS", blitter.fps());
                    DrawRectangle(8, 8, ui_measure(fps, 14) + 12, 22,
                                 Color{ 0, 0, 0, 160 });
                    ui_text(fps, 14, 12, 14, Color{ 200, 210, 220, 255 });
                }
                }
            } else {
            const char *title = job_is_play ? "Playing..." : "Importing...";
            ui_text(job.running ? title : (job_is_play ? "Game exited"
                                                        : "Import finished"),
                     margin, margin, 30, RAYWHITE);
            if (!job.running && !job_is_play && job.exit_code == 0)
                ui_text("OK - the port verified what it imported.", margin,
                         margin + 40, 18, Color{ 120, 200, 140, 255 });
            if (!job.running && !job_is_play && job.exit_code != 0)
                ui_text(TextFormat("Failed (exit %d) - see the log below.",
                                    job.exit_code),
                         margin, margin + 40, 18, Color{ 230, 120, 110, 255 });
            if (!job.running && job_is_play)
                ui_text("Back to the menu.", margin, margin + 40, 18,
                         Color{ 130, 140, 155, 255 });

            // The script's own lines, as they arrive.
            const int row_h = 22;
            const int rows = (h - margin * 2 - 80) / row_h;
            const int total = (int)job.lines.size();
            const int first = total > rows ? total - rows : 0;
            int i = 0;
            for (int li = first; li < total; ++li, ++i) {
                std::string text = job.lines[li];
                if (text.size() > 110) text = text.substr(0, 110) + "...";
                ui_text(text.c_str(), margin, margin + 90 + i * row_h, 16,
                         Color{ 190, 200, 210, 255 });
            }
            if (job.running && ((int)(blink * 2) & 1))
                ui_text("|", w - margin - 20, margin + 90, 20, RAYWHITE);
            if (!job.running)
                ui_text(job_is_play ? "" : "B back to the menu", margin, h - 28,
                         15, Color{ 110, 120, 135, 255 });
            }   // end of windowed/import chrome
        } else if (screen == Screen::Info) {
            int title_x = margin;
            if (tiles[game_idx].ok()) {
                const auto t = tiles[game_idx].tex();
                DrawTexturePro(t, {0, 0, (float)t.width, (float)t.height},
                               {(float)margin, (float)margin, 64, 64}, {0, 0}, 0, WHITE);
                title_x += 82;
            }
            ui_text(port.name, title_x, margin, 28, RAYWHITE);
            int unlocked = 0, score = 0, total_score = 0;
            for (const auto& a : port.achievements) {
                unlocked += a.unlocked; total_score += a.gamerscore;
                if (a.unlocked) score += a.gamerscore;
            }
            ui_text(TextFormat("%d / %d achievements  |  %d / %d G", unlocked,
                               (int)port.achievements.size(), score, total_score),
                    title_x, margin + 37, 17, Color{210, 190, 110, 255});
            const char* tabs[] = {"Overview", "Achievements", "Game files / DLC", "Saves", "Review"};
            const float tab_step = (w - 2.0f * margin) / 5.0f;
            for (int i = 0; i < 5; ++i) {
                Rectangle tab{(float)margin + i * tab_step, (float)margin + 83,
                              tab_step - 8.0f, 36};
                DrawRectangleRec(tab, i == info_tab ? Color{40, 110, 120, 255} : Color{28, 32, 40, 255});
                int tab_font = tab_step < 140.0f ? 15 : 19;
                std::string tab_label = (tab_step < 115.0f && i == 2) ? "Files / DLC" : tabs[i];
                ui_text(tab_label, (int)tab.x + 8, (int)tab.y + 9, tab_font, RAYWHITE);
                if (!saves.confirming && IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), tab))
                    info_tab = i;
            }
            const int body_y = margin + 137;
            if (info_tab == 0) {
                int y = body_y;
                auto paragraph = [&](const std::string& label, const std::string& value) {
                    ui_text(label, margin, y, 17, Color{100, 200, 210, 255});
                    y = wrapped_text(value, margin, y + 21, w - 2 * margin, 16,
                                     Color{205, 212, 222, 255}) + 10;
                };
                std::ifstream stats_file(port.root + "/game-info/runtime-stats.txt");
                std::string stats; std::getline(stats_file, stats);
                if (!stats.empty()) paragraph("MEASURED CODE / OS IMPORTS", stats);
                paragraph("RECOMPILATION", "Xbox 360 PowerPC code recompiled to native " +
                          std::string(host.machine) + " code using ReXGlue" +
                          (port.sdk_version.empty() ? "." : " " + port.sdk_version + ".") +
                          " The shared runtime supplies Xbox 360 system services and graphics.");
                paragraph("GRAPHICS AND DISPLAY", "Xenos graphics translated to Vulkan; raylib/OpenGL launcher. "
                          "Embedded play targets 1280 x 720, scaled to the window. Direct GPU sharing has a readback fallback.");
                paragraph("THIS MACHINE", std::string(host.sysname) + " / " + host.machine +
                          " | " + cpu_name + " | " + gpu_name);
                paragraph("GAME AND SAVES", std::string(port.content_ok ? "Game files imported and verified. " : "Game files not imported. ") +
                          "Saves and achievement unlocks use the shared family profile.");
            } else if (info_tab == 4) {
                int y = body_y;
                const char* labels[] = {"DESCRIPTION", "NEXT STEPS", "ANDROID"};
                for (int i = 0; i < 3; ++i) {
                    ui_text(labels[i], margin, y, 17, Color{100, 200, 210, 255});
                    const std::string value = i < (int)port.review.size()
                                                  ? port.review[i]
                                                  : "Review metadata is not available.";
                    y = wrapped_text(value, margin, y + 24, w - 2*margin, 18,
                                     Color{205, 212, 222, 255}) + 18;
                }
            } else if (info_tab == 3) {
                const char* actions[] = {"Backup selected", "Backup all", "Delete selected", "Delete all"};
                for (int i=0; i<4; ++i) {
                    Rectangle area{(float)margin + i*210, (float)body_y, 200, 40};
                    DrawRectangleRec(area, saves.action == i ? Color{40,110,120,255} : Color{28,32,40,255});
                    ui_text(actions[i], (int)area.x+10, (int)area.y+10, 18, RAYWHITE);
                    if (!saves.confirming && IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), area)) saves.action = i;
                }
                const int rows = std::max(1,(h-body_y-180)/32);
                const int first = std::max(0,saves.selected-rows+1);
                if (saves.entries.empty()) ui_text("No saves in the library.", margin, body_y+65, 20, GRAY);
                for (int i=first;i<(int)saves.entries.size() && i<first+rows;++i) {
                    Rectangle area{(float)margin,(float)body_y+60+(i-first)*32,(float)w-2*margin,30};
                    if(i==saves.selected) DrawRectangleRec(area,Color{40,80,95,255});
                    ui_text(saves.entries[i].label,margin+8,(int)area.y+5,18,RAYWHITE);
                    if(!saves.confirming && IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(),area)) saves.selected=i;
                }
                wrapped_text(saves.status, margin,h-110,w-2*margin,16,LIGHTGRAY);
                ui_text("Up/Down: save   X: action   A: run action (delete requires confirmation)",margin,h-58,19,LIGHTGRAY);
            } else if (info_tab == 2) {
                ui_text(port.content_ok ? "Game files installed" : "Game files missing - Play is unavailable", margin, body_y, 22,
                        port.content_ok ? Color{120, 200, 140, 255} : GRAY);
                const char* actions[] = {"Load game files...", "Load DLC package..."};
                for (int i = 0; i < 2; ++i) {
                    Rectangle row{(float)margin, (float)body_y + 50 + i * 60, 440, 48};
                    DrawRectangleRec(row, files_sel == i ? Color{40, 110, 120, 255} : Color{28, 32, 40, 255});
                    ui_text(actions[i], margin + 16, (int)row.y + 12, 22, RAYWHITE);
                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), row)) {
                        files_sel = i; importing_dlc = i == 1;
                        const fs::path collection_root = collection_root_of(port.root);
                        const fs::path collection_input = importing_dlc
                            ? collection_root / "dlc"
                            : collection_root;
                        std::error_code input_ec;
                        const char *home = std::getenv("HOME");
                        const fs::path downloads = home ? fs::path(home) / "Downloads" : fs::path();
                        const std::string browse_root = !downloads.empty() && fs::exists(downloads, input_ec)
                            ? downloads.string()
                            : fs::exists(collection_input, input_ec)
                                ? collection_input.string()
                                : port.root + "/content";
                        screen = Screen::Browse; browser.open(browse_root);
                    }
                }
                wrapped_text("Files are loaded for " + port.name + ". DLC packages must match this game and are installed in its shared profile content folder.",
                             margin, body_y + 190, w - 2 * margin, 20, LIGHTGRAY);
            } else if (port.achievements.empty()) {
                ui_text("No achievement catalog is available for this game.", margin, body_y, 20,
                        Color{170, 180, 195, 255});
            } else {
                std::vector<const AchievementInfo*> ordered;
                for (const auto& a : port.achievements) if (a.unlocked) ordered.push_back(&a);
                for (const auto& a : port.achievements) if (!a.unlocked) ordered.push_back(&a);
                const int rows = std::max(1, (h - body_y - 150) / 31);
                const int first = (achievement_sel / (rows * 2)) * rows * 2;
                const int column_width = (w - 2 * margin) / 2;
                for (int row = 0; row < rows * 2 && first + row < (int)ordered.size(); ++row) {
                    const int idx = first + row;
                    const auto& a = *ordered[idx];
                    const int y = body_y + (row % rows) * 31;
                    const int x = margin + (row / rows) * column_width;
                    Rectangle area{(float)x - 6, (float)y - 3, (float)column_width - 10, 29};
                    if (idx == achievement_sel) DrawRectangleRec(area, Color{40, 80, 95, 255});
                    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), area))
                        achievement_sel = idx;
                    std::string label = (a.unlocked ? "Unlocked  " : "Locked  ") + a.label;
                    while (label.size() > 3 && ui_measure(label, 18) > column_width - 90) label.pop_back();
                    ui_text(label, x + 5, y, 18, a.unlocked ? Color{230, 205, 120, 255} : RAYWHITE);
                    ui_text(TextFormat("%u G", a.gamerscore), x + column_width - 75, y, 18, Color{160, 170, 185, 255});
                }
                const auto& selected = *ordered[achievement_sel];
                wrapped_text(selected.description, margin, h - 123, w - 2 * margin, 17,
                             Color{185, 195, 210, 255});
                ui_text(TextFormat("%d / %d", achievement_sel + 1, (int)ordered.size()),
                        w - margin - 75, margin + 91, 17, Color{170, 180, 195, 255});
            }
            ui_text("Left/Right: tabs   Up/Down: select   A: open   LB/RB: game   B/Y: back", margin, h - 32, 18,
                    Color{170, 178, 190, 255});
        } else if (screen == Screen::Settings) {
            ui_text(port.name.c_str(), margin, margin, 36, RAYWHITE);
            ui_text("Settings for this game", margin, margin + 44, 16,
                     Color{ 130, 140, 155, 255 });

            const char *const kSettingsLabels[] = { "FPS cap", "On-screen pad while playing", "Game files / DLC", "Clear game files" };
            // The item list shrinks to whatever room is left above the
            // reserved footer band, so a short or tiled window compresses
            // rows instead of running them under the footer text.
            const int list_y = margin + 100;
            const int footer_h = 84;
            const int item_h = std::clamp((h - footer_h - list_y) / 4, 30, 56);
            const int item_font = std::clamp(item_h - 26, 15, 24);
            for (int i = 0; i < 4; ++i) {
                const Rectangle row{ (float)margin, (float)(list_y + i * item_h),
                                     520.0f, (float)(item_h - std::min(10, item_h / 5)) };
                const bool sel = i == settings_sel;
                DrawRectangleRec(row, sel ? Color{ 40, 110, 120, 255 }
                                          : Color{ 28, 32, 40, 255 });
                if (sel)
                    DrawRectangleLinesEx(row, 2.0f, Color{ 80, 210, 220, 255 });
                std::string value = i == 0
                                        ? settings.fps_cap_label()
                                        : i == 1 ? (settings.show_pad_while_playing ? "Shown" : "Hidden")
                                                  : i == 2 ? "A to open"
                                                           : "A to confirm";
                std::string label = std::string(kSettingsLabels[i]) + ": < " + value + " >";
                ui_text(label.c_str(), margin + 18,
                         (int)(row.y + (row.height - item_font) / 2), item_font, RAYWHITE);
            }
            // The runtime-composition panel is a second column, only drawn
            // when there is real width for it - otherwise it would either
            // overlap the item list on the left or run off the right edge.
            // The old About screen's paragraphs live at the bottom of this
            // column now, so the collection has exactly one explanatory pane.
            const int panel_x = margin + 570;
            if (w - panel_x > 260) {
                int py = list_y;
                ui_text("Runtime composition", panel_x, py, 23, RAYWHITE);
                py += 34;
                if (port.runtime_stats.empty()) {
                    ui_text("Run _shared/update_library_metadata.py to analyse this game.",
                            panel_x, py, 16, GRAY);
                    py += 26;
                } else {
                    py = wrapped_text(port.runtime_stats, panel_x, py,
                                      w - margin - panel_x, 17,
                                      Color{185, 195, 210, 255}) + 12;
                }
                ui_text("About", panel_x, py, 23, RAYWHITE);
                py += 32;
                ui_text("RECOMPILATION", panel_x, py, 15, Color{ 100, 200, 210, 255 });
                py = wrapped_text("Xbox 360 PowerPC code recompiled ahead of time to native " +
                                  std::string(host.machine) + " code using ReXGlue" +
                                  (port.sdk_version.empty() ? "." : " " + port.sdk_version + ".") +
                                  " No Xbox 360 hardware or emulation is involved at runtime.",
                                  panel_x, py + 20, w - margin - panel_x, 15,
                                  Color{ 205, 212, 222, 255 }) + 10;
                ui_text("GAME FILES", panel_x, py, 15, Color{ 100, 200, 210, 255 });
                wrapped_text(port.content_ok
                                 ? "Imported and verified."
                                 : "Not imported yet - use Game files / DLC above.",
                             panel_x, py + 19, w - margin - panel_x, 15,
                             Color{ 205, 212, 222, 255 });
            }
            ui_text("Left/Right change   B or Y back", margin, h - 32, 20,
                     Color{ 170, 178, 190, 255 });
            if (!clear_files_status.empty())
                ui_text(clear_files_status.c_str(), margin, h - 52, 16,
                        Color{ 220, 170, 90, 255 });
        } else if (screen == Screen::About) {
            ui_text("About this collection", margin, margin, 36, RAYWHITE);
            ui_text("What's being rendered and converted - one tab per game",
                     margin, margin + 44, 16, Color{ 130, 140, 155, 255 });

            const int tab_count = std::max(1, (int)games.size());
            const float tab_step = (w - 2.0f * margin) / (float)tab_count;
            for (int i = 0; i < (int)games.size(); ++i) {
                Rectangle tab{ margin + i * tab_step, (float)margin + 76,
                               tab_step - 8.0f, 40 };
                DrawRectangleRec(tab, i == about_tab ? Color{ 40, 110, 120, 255 }
                                                     : Color{ 28, 32, 40, 255 });
                if (i == about_tab)
                    DrawRectangleLinesEx(tab, 2.0f, Color{ 80, 210, 220, 255 });
                int tab_font = 19;
                while (tab_font > 13 && ui_measure(games[i].name, tab_font) > tab.width - 16)
                    --tab_font;
                ui_text(games[i].name, (int)tab.x + 10, (int)(tab.y + (tab.height - tab_font) / 2),
                        tab_font, RAYWHITE);
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
                    CheckCollisionPointRec(GetMousePosition(), tab))
                    about_tab = i;
            }

            if (about_tab >= 0 && about_tab < (int)games.size()) {
                const Port &g = games[about_tab];
                int y = margin + 134;
                auto paragraph = [&](const std::string &label, const std::string &value) {
                    ui_text(label, margin, y, 17, Color{ 100, 200, 210, 255 });
                    y = wrapped_text(value, margin, y + 22, w - 2 * margin, 17,
                                     Color{ 205, 212, 222, 255 }) + 14;
                };
                paragraph("RECOMPILATION", "Xbox 360 PowerPC code recompiled ahead of time to native " +
                          std::string(host.machine) + " code using ReXGlue" +
                          (g.sdk_version.empty() ? "." : " " + g.sdk_version + ".") +
                          " The shared runtime supplies Xbox 360 system services and graphics; "
                          "no Xbox 360 hardware or emulation is involved at runtime.");
                paragraph("GRAPHICS AND DISPLAY", "The game's own code runs natively - only its Xenos GPU "
                          "command stream and shaders are translated to Vulkan for display. raylib/OpenGL "
                          "launcher; embedded play targets 1280 x 720, scaled to the window. Direct GPU "
                          "sharing has a readback fallback.");
                if (!g.runtime_stats.empty())
                    paragraph("MEASURED CODE / OS IMPORTS", g.runtime_stats);
                paragraph("GAME FILES", g.content_ok
                          ? "Imported and verified."
                          : "Not imported yet - use Game files / DLC from Home.");
            }
            ui_text("Left/Right: game   B/Y: back", margin, h - 34, 22,
                     Color{ 170, 178, 190, 255 });
        }

        if (clear_files_confirming) {
            DrawRectangle(0, 0, w, h, Color{ 0, 0, 0, 220 });
            ui_text("Clear imported game files?", margin, h / 2 - 55, 30,
                    Color{ 240, 190, 120, 255 });
            ui_text("This removes only the imported game content, not saves or settings.",
                    margin, h / 2 - 10, 18, RAYWHITE);
            ui_text("A confirm   B/Y cancel", margin, h / 2 + 35, 22,
                    Color{ 200, 205, 212, 255 });
        }

        if (saves.confirming) {
            DrawRectangle(0,0,w,h,Color{0,0,0,220});
            ui_text(saves.action == 3 ? "Delete ALL saves in the library?" : "Delete the selected save?",margin,h/2-50,28,RAYWHITE);
            ui_text(saves.action == 3 ? "Every listed game" : saves.entries[saves.selected].label,margin,h/2-10,24,RAYWHITE);
            ui_text("A / Enter: confirm   B / Backspace: cancel. A backup is kept.",margin,h/2+35,20,LIGHTGRAY);
        }
        // Keep gameplay clean: the real controller/uinput path remains live,
        // but no left/right touch-pad columns are painted over the game.
        if (screen != Screen::Playing)
            pad.draw({ 0, 0 }, { (float)w, (float)h });
        // The RetroRecomp mark on the chrome screens, tucked bottom-right out
        // of the footers' way. Never over the game itself - a running title
        // carries its own in-game badge.
        if (brand_tex.ok() && (screen == Screen::Home || screen == Screen::Games ||
                               screen == Screen::Info || screen == Screen::Settings)) {
            const Texture2D &bt = brand_tex.tex();
            const float bw = 240.0f;
            const float bh = bw * bt.height / bt.width;
            // Above the footer band, which every chrome screen reserves.
            DrawTextureEx(bt, { (float)w - bw - 16.0f, (float)h - bh - 52.0f },
                          0, bw / bt.width, WHITE);
        }
        EndDrawing();
    }

    // Closing the window must also stop its game/compositor process group.
    // Otherwise a later launch competes with an invisible orphan for the GPU.
    if (job.running) {
        job.kill_group();
        job.poll();
    }
    blitter.release();
    tiles.clear();
    // Leaving mid-run: the pad must not hold a button into whatever comes next.
    touchpad::Sink quiet{};
    pad.release_all(quiet);
    virt.release_all();
    CloseWindow();
    return 0;
}
