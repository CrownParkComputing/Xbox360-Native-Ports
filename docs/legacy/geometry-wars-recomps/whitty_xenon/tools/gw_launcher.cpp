// gw_launcher.cpp - a controller-navigable launcher for the Geometry Wars
// family (and anything else imported into it the same way), matching how the
// ReXGlue collection GUIs work: box art tiles you move between with a
// d-pad/stick, A plays, and two more actions cover the things a player
// actually needs day to day without a mouse - installing a title from a XEX,
// adding DLC to one that takes it, and managing save data. See
// tools/run_gui.py for the OTHER kind of tool this project has, the
// developer's bring-up status board - this one has no opinion about bring-up
// stages, because a player does not care how a title got here, only whether
// it is ready to play.
//
// A tile is "ready" (full brightness, A plays it) only when everything it
// needs is actually present: built, its XEX in place, and - for a title
// marked as taking DLC, currently just Geometry Wars 3 - its DLC installed
// too. Anything short of that is dimmed and says what is missing rather than
// pretending the game is one tap away when it is not.
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>

#include "whitty_xenon/gpu/embedded/recomp_logo.h"

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <unistd.h>
#include <vector>

namespace fs = std::filesystem;

namespace {

struct title_entry {
    std::string name;
    std::string display;
    bool takes_dlc;
};

// New titles land here once imported; the three below are the ones this
// build ships knowing about by name so their display names read properly
// before anything has been probed.
const title_entry kKnownTitles[] = {
    {"geometrywars", "Geometry Wars", false},
    {"geometrywars2", "Geometry Wars 2", false},
    {"geometrywars3", "Geometry Wars 3", true},
    {"banjokazooie", "Banjo-Kazooie", false},
    {"banjotooie", "Banjo-Tooie", false},
};

// A title's own id (title_probe's "xex: title XXXXXXXX") to the canonical
// project name it belongs under, for the titles this repository already
// knows about by name. Used so an import lands in the same project a title
// already has regardless of what the source file itself was called - see
// import_xex(). Extend this table, not the display-name one above, when a
// title's import keeps creating a differently-named duplicate of something
// that already exists.
struct known_title_id {
    const char* title_id;
    const char* project_name;
};
const known_title_id kKnownTitleIds[] = {
    {"584107ED", "geometrywars"},
    {"584108FF", "geometrywars2"},
    {"58411453", "geometrywars3"},
    {"58410954", "banjokazooie"},
    {"58410955", "banjotooie"},
};

std::string canonical_name_for_title_id(const std::string& title_id) {
    std::string upper = title_id;
    for (char& c : upper) c = static_cast<char>(std::toupper(c));
    for (const known_title_id& entry : kKnownTitleIds)
        if (upper == entry.title_id) return entry.project_name;
    return "";
}

constexpr int kTileSize = 220;
constexpr int kTileGap = 40;
constexpr SDL_Color kBackground{0x0b, 0x0c, 0x10, 0xff};
constexpr SDL_Color kTileBackground{0x1c, 0x1e, 0x24, 0xff};
constexpr SDL_Color kSelected{0x4a, 0xd0, 0xff, 0xff};
// Full white, not the soft grey a status label wants - button-hint text sits
// against dark chrome the whole time and reads poorly at anything less.
constexpr SDL_Color kText{0xff, 0xff, 0xff, 0xff};
constexpr SDL_Color kTextDim{0x70, 0x74, 0x7a, 0xff};
constexpr SDL_Color kWarn{0xe0, 0xb0, 0x40, 0xff};
constexpr SDL_Color kDanger{0xe0, 0x60, 0x60, 0xff};
constexpr SDL_Color kPanelBackground{0x14, 0x15, 0x19, 0xf0};
constexpr SDL_Color kGold{0xf0, 0xc8, 0x40, 0xff};

// Xbox face-button colours, for the little glyph drawn before a hint instead
// of spelling the button's letter out in prose every time.
constexpr SDL_Color kButtonA{0x4c, 0xaf, 0x50, 0xff}; // green
constexpr SDL_Color kButtonB{0xe5, 0x39, 0x35, 0xff}; // red
constexpr SDL_Color kButtonX{0x1e, 0x88, 0xe5, 0xff}; // blue
constexpr SDL_Color kButtonY{0xfd, 0xd8, 0x35, 0xff}; // yellow

constexpr int kMaxVisibleTiles = 5;
constexpr int kLogoAreaHeight = 90;

// The same baked marquee bitmap the corner watermark and the ReXGlue side
// panel use (see whitty_xenon's gpu/overlay.cpp), reused here rather than
// shipping a second copy of the artwork - one logo, one place it comes from.
SDL_Texture* load_logo_texture(SDL_Renderer* renderer) {
    SDL_Surface* surface = SDL_CreateSurface(
        static_cast<int>(whitty_xenon::gpu::kRecompLogoWidth),
        static_cast<int>(whitty_xenon::gpu::kRecompLogoHeight), SDL_PIXELFORMAT_RGBA32);
    if (surface == nullptr) return nullptr;
    auto* pixels = static_cast<uint8_t*>(surface->pixels);
    for (uint32_t y = 0; y < whitty_xenon::gpu::kRecompLogoHeight; ++y) {
        for (uint32_t x = 0; x < whitty_xenon::gpu::kRecompLogoWidth; ++x) {
            const std::size_t src =
                (static_cast<std::size_t>(y) * whitty_xenon::gpu::kRecompLogoWidth + x) * 3;
            const uint8_t r = whitty_xenon::gpu::kRecompLogoRgb[src + 0];
            const uint8_t g = whitty_xenon::gpu::kRecompLogoRgb[src + 1];
            const uint8_t b = whitty_xenon::gpu::kRecompLogoRgb[src + 2];
            uint8_t* dest = pixels +
                static_cast<std::size_t>(y) * surface->pitch + x * 4;
            dest[0] = r;
            dest[1] = g;
            dest[2] = b;
            dest[3] = std::max({r, g, b}); // ink on black: dark is transparent
        }
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_DestroySurface(surface);
    return texture;
}

fs::path runtime_dir() {
    std::error_code error;
    const fs::path exe = fs::weakly_canonical(fs::path("/proc/self/exe"), error);
    return exe.parent_path().parent_path(); // .../build/gw_launcher -> .../
}

fs::path save_root() {
    const char* home = std::getenv("HOME");
    return fs::path(home != nullptr ? home : "/") / ".local" / "share" /
          "whitty_xenon" / "content";
}

// Runs a command and returns everything it wrote to stdout. Used for the
// quick, cheap calls (title_probe on a single XEX); the long-running
// recompile/build steps use run_streamed() below instead, which reports
// progress rather than making the caller wait for the whole thing silently.
std::string run_captured(const std::vector<std::string>& args) {
    std::string command;
    for (const std::string& arg : args) {
        command += "'";
        for (char c : arg) {
            if (c == '\'')
                command += "'\\''";
            else
                command += c;
        }
        command += "' ";
    }
    command += "2>&1";
    std::string output;
    FILE* pipe = popen(command.c_str(), "r");
    if (pipe == nullptr) return output;
    char buffer[4096];
    std::size_t read;
    while ((read = std::fread(buffer, 1, sizeof(buffer), pipe)) > 0)
        output.append(buffer, read);
    pclose(pipe);
    return output;
}

std::string probe_title_id(const fs::path& title_probe, const fs::path& xex) {
    std::error_code error;
    if (!fs::exists(title_probe, error) || !fs::exists(xex, error)) return "";
    const std::string output =
        run_captured({title_probe.string(), xex.string()});
    const std::size_t at = output.find("xex: title ");
    if (at == std::string::npos) return "";
    const std::string id = output.substr(at + 11, 8);
    return id.size() == 8 ? id : "";
}

std::uintmax_t directory_size(const fs::path& dir) {
    std::uintmax_t total = 0;
    std::error_code error;
    if (!fs::exists(dir, error)) return 0;
    for (const auto& entry : fs::recursive_directory_iterator(
             dir, fs::directory_options::skip_permission_denied, error)) {
        if (entry.is_regular_file(error)) total += entry.file_size(error);
    }
    return total;
}

std::string human_size(std::uintmax_t bytes) {
    const char* units[] = {"B", "KB", "MB", "GB"};
    double value = static_cast<double>(bytes);
    int unit = 0;
    while (value >= 1024.0 && unit < 3) {
        value /= 1024.0;
        ++unit;
    }
    char buffer[32];
    std::snprintf(buffer, sizeof(buffer), "%.1f %s", value, units[unit]);
    return buffer;
}

struct tile {
    std::string name;
    std::string display;
    fs::path project_dir;
    fs::path assets_dir;
    fs::path xex;
    fs::path binary;
    // A title whose real game data ships as an STFS content package rather
    // than loose files - Alien Breed is the first of these - mounts this
    // instead of assets_dir at launch. run_title.cpp auto-detects a package
    // vs a directory from whatever path it is given, so passing this instead
    // is the only difference; nothing else about launching changes.
    fs::path content_package;
    bool built{false};
    bool has_xex{false};
    bool takes_dlc{false};
    bool dlc_installed{false};
    std::string title_id; // filled in lazily, once a probe can succeed
    SDL_Texture* icon{nullptr};
    // Optional override: if non-empty, A spawns this command via /bin/sh
    // instead of the default whitty_xenon execl. Used for titles where
    // a different runtime (e.g. ReXGlue) renders correctly while ours
    // struggles with a title-screen-only bug. The shell quoting is the
    // operator's responsibility.
    std::string launch_command;

    bool ready() const { return built && has_xex && (!takes_dlc || dlc_installed); }
    fs::path mount_argument() const {
        return content_package.empty() ? assets_dir : content_package;
    }
};

fs::path dlc_marker(const tile& t) { return t.assets_dir / ".dlc_installed"; }

std::string display_name_for(const std::string& project_name) {
    for (const title_entry& known : kKnownTitles)
        if (known.name == project_name) return known.display;
    // A newly-imported title with no hand-written display name: title-case
    // the project name rather than showing the raw directory name verbatim.
    std::string name = project_name;
    if (!name.empty()) name[0] = static_cast<char>(std::toupper(name[0]));
    return name;
}

bool takes_dlc_for(const std::string& project_name) {
    for (const title_entry& known : kKnownTitles)
        if (known.name == project_name) return known.takes_dlc;
    return false;
}

// Which titles the launcher shows, one project directory name per line.
// Deliberately NOT a scan of PROJECTS_DIR: that directory holds every title
// under active bring-up, most of them nowhere near playable, and a player
// opening this launcher should see the titles someone has actually decided
// belong here - not whatever happens to have a _recomp.toml at the moment.
// A title earns its place on this list once its conversion has been played
// and judged working, added by hand; this file does not add to it on its
// own, including after a successful "Install" import (a build that links
// cleanly is not the same claim as a title that plays correctly - the exact
// distinction docs/BRINGUP.md and run_gui.py's own verdict system exist to
// keep separate).
fs::path launcher_config_path(const fs::path& runtime, const std::string& filename) {
    return runtime / filename;
}

// `seed` is written only when the config file does not exist yet - the
// titles this particular launcher instance (Geometry Wars, Banjo, ...)
// starts out showing, so a fresh run is useful out of the box rather than
// empty. Which titles those are is the one thing that actually differs
// between launcher instances; everything else about discovery, import and
// play is identical, which is why this is a parameter rather than a second
// copy of this whole file.
std::vector<std::string> read_launcher_config(const fs::path& runtime,
                                              const std::string& filename,
                                              const std::vector<std::string>& seed) {
    const fs::path path = launcher_config_path(runtime, filename);
    std::vector<std::string> names;
    std::ifstream in(path.string());
    if (!in) {
        std::ofstream out(path.string());
        out << "# One project directory name per line - titles the launcher shows.\n"
              "# Add a title here once its conversion has been played and judged\n"
              "# working, not merely once it builds - see docs/BRINGUP.md.\n";
        for (const std::string& name : seed) out << name << '\n';
        out.close();
        in.open(path.string());
    }
    std::string line;
    while (in && std::getline(in, line)) {
        while (!line.empty() && (line.back() == '\r' || line.back() == ' '))
            line.pop_back();
        std::size_t start = 0;
        while (start < line.size() && line[start] == ' ') ++start;
        if (start >= line.size() || line[start] == '#') continue;
        // Per-title launch-command overrides look like `name = command...`.
        // Those are not title names - read_launcher_overrides picks them up
        // separately - so skip them here, otherwise the launcher's tile
        // label becomes the entire override line and visibly overflows.
        if (line.find('=', start) != std::string::npos) continue;
        names.push_back(line.substr(start));
    }
    // A config that contains only override lines (`name = command...`)
    // parses to an empty name list - the overrides were correct, but the
    // file never had bare names in it. Fall back to the seed in that case
    // so the launcher still shows the right titles by default. (The
    // missing file path above already seeds - this is the parallel case
    // for "file exists but lists nothing but overrides".)
    if (names.empty() && !seed.empty()) names = seed;
    return names;
}

// Per-title launch-command overrides. Lines of the form `name = command...`
// in the same launcher config file replace the default whitty_xenon execl
// for that title. Used to plug in a different runtime (ReXGlue for the
// Banjo titles while the whitty_xenon title-screen gfx bug is being tracked)
// without rewriting the launcher's project-discovery path.
std::map<std::string, std::string> read_launcher_overrides(
        const fs::path& runtime, const std::string& filename) {
    std::map<std::string, std::string> overrides;
    const fs::path path = launcher_config_path(runtime, filename);
    std::ifstream in(path.string());
    if (!in) return overrides;
    std::string line;
    while (in && std::getline(in, line)) {
        while (!line.empty() && (line.back() == '\r' || line.back() == ' '))
            line.pop_back();
        std::size_t start = 0;
        while (start < line.size() && line[start] == ' ') ++start;
        if (start >= line.size() || line[start] == '#') continue;
        const std::size_t eq = line.find('=', start);
        if (eq == std::string::npos) continue;
        std::string name = line.substr(start, eq - start);
        // Trim whitespace around the '=' on both sides.
        while (!name.empty() && name.back() == ' ') name.pop_back();
        std::size_t val = eq + 1;
        while (val < line.size() && line[val] == ' ') ++val;
        std::string command = line.substr(val);
        if (!name.empty() && !command.empty())
            overrides.emplace(std::move(name), std::move(command));
    }
    return overrides;
}

std::vector<tile> discover_tiles(const fs::path& runtime, const fs::path& projects,
                                 const std::string& config_filename,
                                 const std::vector<std::string>& seed) {
    std::vector<tile> tiles;
    std::error_code error;
    // Two passes so per-title overrides (lines of the form
    // `name = command...`) can be applied after the bare-name lookup.
    // Per-title overrides win; titles without an override fall through to
    // the whitty_xenon execl.
    const auto overrides = read_launcher_overrides(runtime, config_filename);
    for (const std::string& name : read_launcher_config(runtime, config_filename, seed)) {
        const fs::path project_dir = projects / name;
        // No "continue" for a missing project directory: a title can be
        // listed here before it exists at all - the state Geometry Wars 1/2/3
        // are in the moment their content is removed for a clean import
        // test - and it should show as a real, selectable "needs install"
        // tile rather than silently vanishing from the grid.
        tile t;
        t.name = name;
        t.display = display_name_for(name);
        t.project_dir = project_dir;
        t.assets_dir = project_dir / "assets";
        t.xex = t.assets_dir / "default.xex";
        {
            const fs::path package = project_dir / "content" / "package.bin";
            if (fs::exists(package, error)) t.content_package = package;
        }
        t.has_xex = fs::exists(t.xex, error);
        t.binary = runtime / "build" / "recompiled" / name / name;
        t.built = fs::exists(t.binary, error);
        const auto it = overrides.find(name);
        if (it != overrides.end()) t.launch_command = it->second;
        t.takes_dlc = takes_dlc_for(name);
        t.dlc_installed = fs::exists(dlc_marker(t), error);
        tiles.push_back(std::move(t));
    }
    return tiles;
}

SDL_Texture* load_icon(SDL_Renderer* renderer, const fs::path& assets_dir,
                       const std::string& display_name) {
    // Not every title's rip uses "game.png"/"boxart.png" - Banjo-Kazooie's
    // own ships as "BanjoKazooieIconPng" style names instead, the display
    // name with its punctuation stripped plus a fixed suffix. Both are tried
    // so a title needs nothing special done to it to get an icon if its own
    // rip already has an image named the way its own store listing was.
    std::string stripped;
    for (char c : display_name)
        if (std::isalnum(static_cast<unsigned char>(c))) stripped += c;
    const std::string name_icon = stripped + "Icon.png";
    const std::string name_marketplace = stripped + "Marketplace.png";
    const char* candidates[] = {"game.png", "boxart.png", name_icon.c_str(),
                                name_marketplace.c_str()};
    for (const char* file : candidates) {
        const fs::path path = assets_dir / file;
        std::error_code error;
        if (!fs::exists(path, error)) continue;
        SDL_Surface* surface = IMG_Load(path.string().c_str());
        if (surface == nullptr) continue;
        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_DestroySurface(surface);
        if (texture != nullptr) return texture;
    }
    return nullptr;
}

void fill_rect(SDL_Renderer* renderer, SDL_FRect rect, SDL_Color colour) {
    SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
    SDL_RenderFillRect(renderer, &rect);
}

void outline_rect(SDL_Renderer* renderer, SDL_FRect rect, int thickness,
                  SDL_Color colour) {
    SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
    for (int i = 0; i < thickness; ++i) {
        SDL_FRect r{rect.x - i, rect.y - i, rect.w + i * 2, rect.h + i * 2};
        SDL_RenderRect(renderer, &r);
    }
}

void draw_text(SDL_Renderer* renderer, TTF_Font* font, const std::string& text,
              int x, int y, SDL_Color colour, bool centre) {
    if (text.empty() || font == nullptr) return;
    SDL_Surface* surface =
        TTF_RenderText_Blended(font, text.c_str(), text.size(), colour);
    if (surface == nullptr) return;
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    if (texture != nullptr) {
        const SDL_FRect dest{static_cast<float>(centre ? x - surface->w / 2 : x),
                             static_cast<float>(y),
                             static_cast<float>(surface->w),
                             static_cast<float>(surface->h)};
        SDL_RenderTexture(renderer, texture, nullptr, &dest);
        SDL_DestroyTexture(texture);
    }
    SDL_DestroySurface(surface);
}

int text_width(TTF_Font* font, const std::string& text) {
    if (font == nullptr || text.empty()) return 0;
    int w = 0, h = 0;
    TTF_GetStringSize(font, text.c_str(), text.size(), &w, &h);
    return w;
}

// A filled circle with a single dark letter in it, matching how the physical
// pad marks its own face buttons - a hint row reads at a glance that way in a
// way "X to manage saves" spelled out in prose does not, and it is the same
// alphabet a player's thumb already knows.
constexpr int kGlyphRadius = 11;

int draw_button_glyph(SDL_Renderer* renderer, TTF_Font* font, int centre_x,
                      int centre_y, char letter, SDL_Color colour) {
    SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
    for (int dy = -kGlyphRadius; dy <= kGlyphRadius; ++dy) {
        const int dx = static_cast<int>(
            std::sqrt(static_cast<double>(kGlyphRadius * kGlyphRadius - dy * dy)));
        SDL_RenderLine(renderer, static_cast<float>(centre_x - dx),
                       static_cast<float>(centre_y + dy),
                       static_cast<float>(centre_x + dx),
                       static_cast<float>(centre_y + dy));
    }
    const std::string letter_text(1, letter);
    const int width = text_width(font, letter_text);
    draw_text(renderer, font, letter_text, centre_x - width / 2,
             centre_y - kGlyphRadius + 3, SDL_Color{0x10, 0x10, 0x12, 0xff}, false);
    return kGlyphRadius * 2;
}

// Draws one "[glyph] label" pair starting at (x, y) and returns the x just
// past it, so a row of these can be laid out left to right without each call
// site measuring the previous one's text itself.
int draw_hint(SDL_Renderer* renderer, TTF_Font* font, int x, int y,
             char letter, SDL_Color button_colour, const std::string& label) {
    draw_button_glyph(renderer, font, x + kGlyphRadius, y + kGlyphRadius,
                      letter, button_colour);
    const int label_x = x + kGlyphRadius * 2 + 8;
    draw_text(renderer, font, label, label_x, y + 3, kText, false);
    return label_x + text_width(font, label) + 24;
}

void launch(const tile& t) {
    if (!t.ready()) return;
    const pid_t child = fork();
    if (child == 0) {
        setsid();
        if (!t.launch_command.empty()) {
            // Per-title override: spawn via /bin/sh so quoting and env
            // work the way the operator wrote them. The whitty_xenon
            // binaries (built into runtime/build/recompiled) are not
            // used for this tile at all - the operator's command owns
            // everything from argv onward.
            execl("/bin/sh", "/bin/sh", "-c", t.launch_command.c_str(),
                 static_cast<char*>(nullptr));
        } else {
            const std::string binary = t.binary.string();
            const std::string xex = t.xex.string();
            const std::string mount_arg = t.mount_argument().string();
            setenv("WHITTY_WINDOW", "1", 0);
            execl(binary.c_str(), binary.c_str(), xex.c_str(), mount_arg.c_str(),
                 static_cast<char*>(nullptr));
        }
        _exit(127);
    }
}

// -- background install/import work -----------------------------------
//
// Runs on its own thread so the launcher keeps redrawing and responding to
// input while a recompile (which can take minutes) is in progress. The log
// lines and the two atomics are the entire interface back to the render
// loop; everything else about the pipeline lives inside run().
// Where every import's full log goes, on disk - the on-screen log in
// install_job::log_lines is capped at 500 lines and gone the moment the
// launcher closes, which makes reporting a failure back mean re-typing what
// scrolled past. This file is truncated fresh at the start of each import
// (single or batch) and keeps every line for as long as the launcher itself
// keeps running, so "here's the log" is a real file to hand over rather than
// a screenshot of a window.
fs::path import_log_path() {
    const char* home = std::getenv("HOME");
    const fs::path dir =
        fs::path(home != nullptr ? home : "/tmp") / ".local" / "share" /
        "whitty_xenon";
    std::error_code error;
    fs::create_directories(dir, error);
    return dir / "launcher_import.log";
}

struct install_job {
    std::mutex log_mutex;
    std::vector<std::string> log_lines;
    std::ofstream log_file;
    std::atomic<bool> running{false};
    std::atomic<bool> succeeded{false};
    std::atomic<bool> finished{false};
    std::thread worker;

    void append(const std::string& line) {
        std::istringstream stream(line);
        std::string piece;
        const std::lock_guard<std::mutex> lock(log_mutex);
        while (std::getline(stream, piece)) {
            log_lines.push_back(piece);
            if (log_file.is_open()) log_file << piece << '\n' << std::flush;
        }
        if (log_lines.size() > 500) log_lines.erase(log_lines.begin());
    }

    void run_streamed(const std::vector<std::string>& args, const fs::path& cwd,
                      bool* ok, const std::string& env_prefix = "") {
        std::string command = "cd '" + cwd.string() + "' && " + env_prefix;
        for (const std::string& arg : args) {
            command += "'";
            for (char c : arg) {
                if (c == '\'')
                    command += "'\\''";
                else
                    command += c;
            }
            command += "' ";
        }
        command += "2>&1";
        append("$ " + command);
        FILE* pipe = popen(command.c_str(), "r");
        if (pipe == nullptr) {
            append("failed to start command");
            *ok = false;
            return;
        }
        char buffer[1024];
        while (std::fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            std::string line(buffer);
            while (!line.empty() && (line.back() == '\n' || line.back() == '\r'))
                line.pop_back();
            append(line);
        }
        const int status = pclose(pipe);
        *ok = (status == 0);
    }

    // Derives a project name from a source file's own name - shared between
    // the single- and batch-import paths so a name picked one file at a time
    // and a name picked as part of a multi-select come out the same way.
    static std::string derive_name(const fs::path& source) {
        std::string name = source.stem().string();
        std::string cleaned;
        for (char c : name)
            if (std::isalnum(static_cast<unsigned char>(c)))
                cleaned += static_cast<char>(std::tolower(c));
        return cleaned.empty() ? "newtitle" : cleaned;
    }

    // Imports several titles one after another in the one background thread,
    // so picking a folder of rars and importing "all the games at once" is
    // one Y-press and one file dialog rather than one round trip per title.
    // Each import is independent: one failing (a missing XenonRecomp, a jump
    // table that needs a human) does not stop the rest from being tried, and
    // the log says which of the batch succeeded at the end rather than only
    // the last one's result.
    // `reuse_name`, when non-empty, names a tile that was selected and does
    // not have a project directory yet - reimporting Geometry Wars for a
    // clean-install test, say. A single-file import then lands back under
    // that same name instead of whatever the picked file happens to be
    // called, so the tile that was "needs install" becomes ready rather
    // than staying that way forever next to an oddly-named duplicate. A
    // multi-file batch always derives each name from its own file: a
    // preferred name only means anything for the one tile it was chosen on.
    void start_xex_import_batch(fs::path runtime, std::vector<fs::path> sources,
                                std::string reuse_name = "",
                                fs::path dlc_fallback_dir = {}) {
        if (running.load()) return;
        running = true;
        finished = false;
        succeeded = false;
        log_lines.clear();
        log_file.open(import_log_path().string(), std::ios::trunc);
        worker = std::thread([this, runtime, sources, reuse_name,
                              dlc_fallback_dir] {
            std::size_t ok_count = 0;
            std::vector<fs::path> dlc_fallbacks;
            for (std::size_t i = 0; i < sources.size(); ++i) {
                if (sources.size() > 1)
                    append("== title " + std::to_string(i + 1) + " of " +
                          std::to_string(sources.size()) + ": " +
                          sources[i].filename().string() + " ==");
                const std::string name =
                    (sources.size() == 1 && !reuse_name.empty())
                        ? reuse_name
                        : derive_name(sources[i]);
                if (import_xex(runtime, sources[i], name)) {
                    ++ok_count;
                } else {
                    // No XEX content inside the archive - might be a DLC
                    // package instead. Hold on to it for a DLC install
                    // fallback below if the tile we're importing for
                    // takes DLC; otherwise the import simply fails for
                    // this file as before.
                    dlc_fallbacks.push_back(sources[i]);
                }
            }
            if (!dlc_fallbacks.empty() && !dlc_fallback_dir.empty()) {
                append("== retrying " + std::to_string(dlc_fallbacks.size()) +
                      " file(s) as DLC for " + dlc_fallback_dir.string() + " ==");
                const std::size_t before = ok_count;
                if (install_dlc_files(dlc_fallback_dir, dlc_fallbacks)) {
                    std::ofstream marker(
                        (dlc_fallback_dir / ".dlc_installed").string());
                    append("DLC installed (" +
                          std::to_string(dlc_fallbacks.size()) + " file(s)).");
                    ok_count += dlc_fallbacks.size();
                } else {
                    append("DLC install partially failed: " +
                          std::to_string(ok_count - before) + " of " +
                          std::to_string(dlc_fallbacks.size()));
                }
            }
            if (sources.size() > 1)
                append("== " + std::to_string(ok_count) + " of " +
                      std::to_string(sources.size()) + " imported ==");
            succeeded = ok_count == sources.size();
            finished = true;
            running = false;
        });
        worker.detach();
    }

    void start_dlc_import(fs::path assets_dir, std::vector<fs::path> files) {
        if (running.load()) return;
        running = true;
        finished = false;
        succeeded = false;
        log_lines.clear();
        log_file.open(import_log_path().string(), std::ios::trunc);
        worker = std::thread([this, assets_dir, files] {
            bool ok = install_dlc_files(assets_dir, files);
            if (ok) {
                std::ofstream marker((assets_dir / ".dlc_installed").string());
                append("DLC installed.");
            }
            succeeded = ok;
            finished = true;
            running = false;
        });
        worker.detach();
    }

    // The DLC install core - extracted so the same code is used both when
    // the launcher routes Y to import_dlc directly and when a batch XEX
    // import falls back to DLC install for a file that had no XEX content
    // inside. Splits file sources by type: archives are extracted to a
    // temp dir and walked for the XBLA DLC layout
    // (<archive_root>/<title_id>/<content_type>/<file>, where the two
    // directory names are 8 hex chars - the runtime expects those exact
    // files at <content_root>/<title_id>/<content_type>/<file>, see
    // kernel_handlers.cpp content_package_path); loose files go into the
    // project's assets_dir as a fallback for non-XBLA titles.
    bool install_dlc_files(const fs::path& assets_dir,
                            const std::vector<fs::path>& files) {
        bool ok = true;
        std::error_code dir_error;
        fs::create_directories(assets_dir, dir_error);
        if (dir_error) {
            append("failed to create assets dir " + assets_dir.string() +
                  ": " + dir_error.message());
            return false;
        }
        const fs::path content_root = save_root();
        for (const fs::path& source : files) {
            std::string extension = source.extension().string();
            for (char& c : extension) c = static_cast<char>(std::tolower(c));
            if (extension != ".rar" && extension != ".zip" && extension != ".7z") {
                // Loose file - copy into the project's assets/ folder;
                // the runtime can pick it up from there for any title
                // whose DLC layout is file-based rather than STFS-content.
                std::error_code copy_error;
                fs::copy_file(source, assets_dir / source.filename(),
                             fs::copy_options::overwrite_existing, copy_error);
                if (!copy_error) append("copied " + source.filename().string());
                else {
                    append("failed to copy " + source.string() +
                          ": " + copy_error.message());
                    ok = false;
                }
                continue;
            }
            append("extracting " + source.string() + " ...");
            const fs::path temp_dir = fs::temp_directory_path() /
                ("whitty_dlc_" + std::to_string(::getpid()) + "_" +
                 std::to_string(reinterpret_cast<std::uintptr_t>(&files)));
            std::error_code error;
            fs::remove_all(temp_dir, error);
            fs::create_directories(temp_dir, error);
            std::string command = "7z x -o'" + temp_dir.string() + "' '" +
                                  source.string() + "' -y 2>&1";
            FILE* pipe = popen(command.c_str(), "r");
            if (pipe == nullptr) {
                append("failed to start 7z");
                ok = false;
                continue;
            }
            char buffer[1024];
            while (std::fgets(buffer, sizeof(buffer), pipe) != nullptr) {
                std::string line(buffer);
                while (!line.empty() && (line.back() == '\n' || line.back() == '\r'))
                    line.pop_back();
                if (!line.empty()) append(line);
            }
            if (pclose(pipe) != 0) {
                append("extraction failed for " + source.filename().string());
                ok = false;
                fs::remove_all(temp_dir, error);
                continue;
            }
            // Walk for XBLA DLC layout. The first 8-hex-char directory
            // whose parent is also 8 hex chars is the title_id directory;
            // the directories inside it are content_type slots
            // (00000001 = game data, 00000002 = DLC, 00000003 = another
            // DLC, etc - whatever the source happens to call them). Each
            // such content_type slot's contents are copied into the
            // runtime's content_root under the same title_id/content_type,
            // with the existing slot wiped first so a re-install can't
            // shadow old files. Files OUTSIDE that layout (like a
            // readme) are skipped - they are not what the runtime needs.
            bool found_layout = false;
            for (fs::recursive_directory_iterator it(
                     temp_dir, fs::directory_options::skip_permission_denied,
                     error);
                 !error && it != fs::recursive_directory_iterator(); ++it) {
                if (!it->is_directory(error)) continue;
                const fs::path& dir_path = it->path();
                const std::string dir_name = dir_path.filename().string();
                if (dir_name.size() != 8) continue;
                bool all_hex = true;
                for (char c : dir_name)
                    if (!std::isxdigit(static_cast<unsigned char>(c))) {
                        all_hex = false; break;
                    }
                if (!all_hex) continue;
                const fs::path title_id_dir = dir_path.parent_path();
                const std::string title_id = title_id_dir.filename().string();
                if (title_id.size() != 8) continue;
                all_hex = true;
                for (char c : title_id)
                    if (!std::isxdigit(static_cast<unsigned char>(c))) {
                        all_hex = false; break;
                    }
                if (!all_hex) continue;
                const fs::path dest = content_root / title_id / dir_name;
                fs::create_directories(dest.parent_path(), error);
                if (fs::exists(dest, error)) {
                    append("clearing existing " + dest.string());
                    fs::remove_all(dest, error);
                }
                fs::create_directories(dest, error);
                if (error) {
                    append("failed to prepare " + dest.string() + ": " +
                          error.message());
                    ok = false;
                    continue;
                }
                for (const auto& entry : fs::directory_iterator(
                         dir_path, fs::directory_options::skip_permission_denied,
                         error)) {
                    if (!entry.is_regular_file(error)) continue;
                    std::error_code copy_error;
                    fs::copy_file(entry.path(),
                                 dest / entry.path().filename(),
                                 fs::copy_options::overwrite_existing,
                                 copy_error);
                    if (!copy_error) {
                        append("installed " + entry.path().filename().string() +
                              " -> " + dest.string());
                        found_layout = true;
                    } else {
                        append("failed to copy " +
                              entry.path().filename().string() + ": " +
                              copy_error.message());
                        ok = false;
                    }
                }
            }
            if (!found_layout) {
                append("DLC archive did not match XBLA layout "
                      "(<title_id>/<content_type>/) - no files installed");
                ok = false;
            }
            fs::remove_all(temp_dir, error);
        }
        return ok;
    }

    // A rip is as often a compressed archive (.rar/.zip/.7z - the shape
    // everything already sitting in a Downloads folder actually takes) as it
    // is an already-extracted XEX or content package. `7z` reads all three
    // formats through one code path, so there is no format to detect beyond
    // "does the extension say archive" - extract everything, then find the
    // one file inside that is actually a title's content by asking
    // title_probe about each candidate, the same tool that answers that
    // question everywhere else in this pipeline.
    //
    // Returns the path to use as the real import source (the original path,
    // unchanged, when it was not an archive) and leaves `extracted_dir` set
    // to the temporary directory to clean up afterwards, or empty if there
    // is none.
    fs::path resolve_archive(const fs::path& source, const fs::path& title_probe_bin,
                             fs::path& extracted_dir) {
        std::string extension = source.extension().string();
        for (char& c : extension) c = static_cast<char>(std::tolower(c));
        if (extension != ".rar" && extension != ".zip" && extension != ".7z")
            return source;

        extracted_dir = fs::temp_directory_path() /
                        ("whitty_import_" + std::to_string(::getpid()));
        std::error_code error;
        fs::create_directories(extracted_dir, error);
        append("extracting " + source.string() + " ...");
        std::string command = "7z x -o'" + extracted_dir.string() + "' '" +
                              source.string() + "' -y 2>&1";
        FILE* pipe = popen(command.c_str(), "r");
        if (pipe != nullptr) {
            char buffer[1024];
            while (std::fgets(buffer, sizeof(buffer), pipe) != nullptr) {
                std::string line(buffer);
                while (!line.empty() && (line.back() == '\n' || line.back() == '\r'))
                    line.pop_back();
                if (!line.empty()) append(line);
            }
            pclose(pipe);
        }

        // Candidates ranked biggest first: a XEX or a content package is
        // reliably the largest file in a rip (the game itself, versus
        // read-mes, screenshots, XML manifests), so probing in that order
        // finds the real one first almost every time and stops there rather
        // than spending a title_probe call - which decompresses and decrypts
        // the whole thing - on every small file in the archive.
        std::vector<std::pair<std::uintmax_t, fs::path>> candidates;
        for (const auto& entry : fs::recursive_directory_iterator(
                 extracted_dir, fs::directory_options::skip_permission_denied,
                 error)) {
            if (!entry.is_regular_file(error)) continue;
            const std::uintmax_t size = entry.file_size(error);
            if (size < 256 * 1024) continue; // too small to be a XEX or a package
            candidates.emplace_back(size, entry.path());
        }
        std::sort(candidates.begin(), candidates.end(),
                 [](const auto& a, const auto& b) { return a.first > b.first; });

        for (const auto& [size, path] : candidates) {
            const std::string probe =
                run_captured({title_probe_bin.string(), path.string()});
            if (probe.find("xex: title ") != std::string::npos) {
                append("found the title's content: " + path.filename().string());
                return path;
            }
        }
        append("nothing inside the archive looked like a XEX or a content "
              "package - see what 7z listed above.");
        return fs::path();
    }

    bool import_xex(const fs::path& runtime, const fs::path& xex_source_arg,
                    const std::string& name_hint) {
        const fs::path title_probe_bin = runtime / "build" / "title_probe";
        fs::path extracted_dir;
        const fs::path xex_source =
            resolve_archive(xex_source_arg, title_probe_bin, extracted_dir);
        std::error_code error;
        const auto cleanup_extraction = [&] {
            if (!extracted_dir.empty()) fs::remove_all(extracted_dir, error);
        };
        if (xex_source.empty()) {
            cleanup_extraction();
            return false;
        }

        // The title's own id, not the source file's name, decides which
        // project this becomes - "Geometry Wars Evolved.rar" and
        // "geometrywars_v2_final.rar" are the same title id (58411453) and
        // have to land in the same project either way, or a multi-file
        // import of titles this repository already knows by their canonical
        // short names creates duplicates under whatever the files happened
        // to be called instead of updating the real tiles. A quick probe
        // (no --xex, so nothing is written yet) is all this needs.
        std::string name = name_hint;
        {
            const std::string quick_probe =
                run_captured({title_probe_bin.string(), xex_source.string()});
            const std::size_t at = quick_probe.find("xex: title ");
            if (at != std::string::npos) {
                const std::string title_id = quick_probe.substr(at + 11, 8);
                const std::string canonical = canonical_name_for_title_id(title_id);
                if (!canonical.empty()) {
                    if (canonical != name)
                        append("title id " + title_id + " is " + canonical +
                              " - importing under that name, not \"" + name_hint + "\"");
                    name = canonical;
                }
            }
        }

        const fs::path project_dir = runtime.parent_path() / name;
        // The project directory may already exist for a title the
        // repository ships pre-set-up: the recompiled PPC source is
        // committed inside it (geometrywars/ppc, ..._recomp.toml, etc.)
        // and the only thing the import actually contributes is the
        // assets/ folder next to it. Refusing on the basis that the dir
        // exists blocks the normal "I have the game's content, drop it
        // in" flow, so we let it through and rely on the rest of the
        // import being idempotent - create_directories is a no-op on
        // an existing folder, the XEX/asset copy calls all use
        // overwrite_existing, and nothing here deletes the committed
        // recompiled code.
        if (fs::exists(project_dir, error))
            append("project " + name + " already exists - adding assets to it");

        const fs::path assets_dir = project_dir / "assets";
        fs::create_directories(assets_dir, error);
        const fs::path target_xex = assets_dir / "default.xex";

        // The source may be a loose .xex, or - for an XBLA title - a content
        // package, which on disk has no file extension at all (its name is a
        // content hash, not "default.xex"). title_probe handles either: given
        // --xex it extracts and writes the real XEX regardless of which kind
        // it was handed, so this never needs to guess which one it has.
        append("probing the content for its helper addresses...");
        const std::string probe_output = run_captured(
            {title_probe_bin.string(), xex_source.string(), "--xex",
            target_xex.string()});
        append(probe_output);
        if (!fs::exists(target_xex, error)) {
            append("title_probe did not produce a XEX - see the log above.");
            fs::remove_all(project_dir, error);
            cleanup_extraction();
            return false;
        }
        // Loose-XEX rips typically put the tile icon next to the XEX in the
        // same directory. Pick whichever of game.png / boxart.png /
        // marketplace.png is sitting next to the source and copy it into
        // assets/ so the launcher's load_icon finds it. The package branch
        // below extracts these from inside the STFS archive; this branch
        // covers the no-package (loose rip) case.
        {
            const fs::path icon_source_dir = xex_source.parent_path();
            for (const char* icon_name : {"game.png", "boxart.png",
                                          "marketplace.png"}) {
                const fs::path source_icon = icon_source_dir / icon_name;
                std::error_code icon_exists;
                if (!fs::exists(source_icon, icon_exists)) continue;
                std::error_code icon_copy_error;
                fs::copy_file(source_icon, assets_dir / icon_name,
                              fs::copy_options::overwrite_existing,
                              icon_copy_error);
                if (!icon_copy_error)
                    append("imported " + std::string(icon_name) +
                          " from rip");
            }
        }
        // A package's OWN content (textures, audio, everything besides the
        // XEX) still has to be reachable at runtime, which is what mounting
        // the package itself under content/package.bin is for - see
        // tile::mount_argument(). A loose .xex has nothing to mount besides
        // its own assets directory, so this is skipped for that case.
        if (probe_output.rfind("package:", 0) == 0) {
            const fs::path content_dir = project_dir / "content";
            fs::create_directories(content_dir, error);
            fs::copy_file(xex_source, content_dir / "package.bin", error);
            if (error)
                append("warning: could not copy the content package itself: " +
                      error.message());
            else
                append("copied the content package for runtime file access");

            // The package's own game.png/boxart.png (or <TitleName>Icon.png -
            // see load_icon()) is what the launcher grid shows, and it lives
            // inside the package alongside the XEX rather than as a loose
            // file next to it in the rip. Extracting the WHOLE package just
            // for a couple of small images only makes sense while the
            // package itself is small - past a few hundred MB (a disc
            // title's package, not an XBLA one) this is skipped rather than
            // spending minutes unpacking gigabytes nothing here needs.
            const std::uintmax_t package_size = fs::file_size(xex_source, error);
            if (!error && package_size < 200 * 1024 * 1024) {
                const fs::path stfs_extract = runtime / "tools" / "stfs_extract.py";
                const fs::path icon_extract_dir =
                    fs::temp_directory_path() /
                    ("whitty_icon_extract_" + std::to_string(::getpid()));
                run_captured({"python3", stfs_extract.string(), "extract",
                             xex_source.string(), icon_extract_dir.string()});
                for (const char* icon_name :
                    {"game.png", "boxart.png", "marketplace.png"}) {
                    std::error_code find_error;
                    for (const auto& entry : fs::recursive_directory_iterator(
                             icon_extract_dir,
                             fs::directory_options::skip_permission_denied,
                             find_error)) {
                        if (entry.path().filename() != icon_name) continue;
                        fs::copy_file(entry.path(), assets_dir / icon_name,
                                     fs::copy_options::overwrite_existing, error);
                        if (!error) append("extracted " + std::string(icon_name));
                        break;
                    }
                }
                fs::remove_all(icon_extract_dir, error);
            }
        }
        const std::string marker = "# paste into the [main] block of <title>_recomp.toml\n";
        const std::size_t at = probe_output.find(marker);
        if (at == std::string::npos) {
            append("title_probe did not produce a [main] block - see the log above.");
            fs::remove_all(project_dir, error);
            cleanup_extraction();
            return false;
        }
        const std::string main_block = probe_output.substr(at + marker.size());

        const fs::path config_path = project_dir / (name + "_recomp.toml");
        const fs::path jumptable_path = project_dir / (name + "_jumptable.toml");
        // Both files are hand-curated for titles this repository ships:
        // _recomp.toml carries [[main.functions]] entries with sizes for
        // every recompiled function (the title's own config on top of the
        // boilerplate) and _jumptable.toml holds every recovered computed
        // jump table the recompiler could not find on its own. Writing
        // either from scratch here, on a re-import, silently destroys
        // that work; instead only create the files when they don't
        // already exist, and log the skip so it is visible.
        std::error_code exists_error;
        const bool config_exists = fs::exists(config_path, exists_error);
        const bool jumptable_exists = fs::exists(jumptable_path, exists_error);
        if (jumptable_exists) {
            append("keeping existing " + jumptable_path.string() +
                  " - not overwriting hand-curated jump tables");
        } else {
            std::ofstream(jumptable_path.string()).close();
            append("wrote empty " + jumptable_path.string());
        }
        if (config_exists) {
            append("keeping existing " + config_path.string() +
                  " - not overwriting hand-curated [[main.functions]]");
        } else {
            std::ofstream config(config_path.string());
            config << "[main]\n"
                      "file_path = \"assets/default.xex\"\n"
                      "out_directory_path = \"ppc\"\n"
                      "switch_table_file_path = \"" << name << "_jumptable.toml\"\n"
                   << main_block;
            config.close();
            append("wrote " + config_path.string());
        }

        // The three titles this repository ships commit their recompiled
        // PPC source under <project_dir>/ppc/ - importing one of them is
        // an asset drop, not a fresh recompile. Detect that case here and
        // skip the recompile + build steps (which would otherwise fail on
        // any machine without XenonRecomp built - the recompiled source
        // does not need to be regenerated from the just-imported XEX when
        // it already exists in the right place). A new title with no ppc/
        // yet falls through to the recompile path below as before.
        {
            const fs::path ppc_dir = project_dir / "ppc";
            bool has_ppc = false;
            std::error_code ppc_error;
            if (fs::is_directory(ppc_dir, ppc_error)) {
                for (const auto& entry : fs::directory_iterator(
                         ppc_dir, fs::directory_options::skip_permission_denied,
                         ppc_error)) {
                    if (entry.is_regular_file(ppc_error)) { has_ppc = true; break; }
                }
            }
            if (has_ppc) {
                append("found existing recompiled source under " +
                      ppc_dir.string() + " - skipping recompile");
                append("== " + name + " is ready ==");
                cleanup_extraction();
                return true;
            }
        }

        // A brand-new title needs the actual recompiler to turn its PPC code
        // into C++; the three titles this repository ships do not, because
        // that output is already committed - so this is the one prerequisite
        // that only bites on an import, and recompile_title.sh's own error
        // for it ("no recompiler at ...") does not say what to do about it.
        // Caught here, before that script ever runs, with the fix spelled
        // out rather than a path.
        //
        // Two layouts both exist and have to both work: this repository's
        // own (flattened - repos/ sits directly beside whitty_xenon/, one
        // level up) and the private dev tree's (repos/ and projects/ are
        // BOTH children of one xenon-native/ directory, so repos/ is two
        // levels up from whitty_xenon/ inside projects/). Tried in that
        // order and whichever actually has XenonRecomp built wins; this is
        // the only thing that differs between them, so XENON_ROOT is set to
        // match whichever one answered rather than assumed.
        const fs::path flat_root = runtime.parent_path();
        const fs::path nested_root = runtime.parent_path().parent_path();
        const auto xenon_recomp_at = [](const fs::path& root) {
            return root / "repos" / "XenonRecomp" / "build_new" /
                  "XenonRecomp" / "XenonRecomp";
        };
        fs::path xenon_root = flat_root;
        if (!fs::exists(xenon_recomp_at(flat_root), error) &&
            fs::exists(xenon_recomp_at(nested_root), error))
            xenon_root = nested_root;
        if (!fs::exists(xenon_recomp_at(xenon_root), error)) {
            append("XenonRecomp is not built yet - a new title needs it to");
            append("turn its PowerPC code into C++ (the three titles this");
            append("repository ships did not need this: their recompiled");
            append("source is already committed). One-time setup:");
            append("  cd " + flat_root.string());
            append("  mkdir -p repos && cd repos");
            append("  git clone --recurse-submodules --branch geometry-wars-opcodes \\");
            append("        https://github.com/CrownParkComputing/XenonRecomp");
            append("  cmake -S XenonRecomp -B XenonRecomp/build_new \\");
            append("        -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang");
            append("  cmake --build XenonRecomp/build_new -j");
            append("(needs --recurse-submodules and clang specifically - see the README)");
            append("Then try this import again.");
            // The assets/ folder, content package, and icons this import
            // just wrote are intentionally LEFT IN PLACE rather than
            // wiped: the user almost certainly wants them back next time,
            // and removing project_dir here has historically nuked the
            // committed recompiled ppc/ source for a title that was
            // shipped already pre-recompiled (a previous version of this
            // branch literally deleted <repo>/geometrywars/ on this path).
            cleanup_extraction();
            return false;
        }

        append("== recompiling (this can take several minutes) ==");
        bool ok = false;
        run_streamed({(runtime / "tools" / "recompile_title.sh").string(), name,
                     "--converge"},
                    runtime, &ok, "XENON_ROOT='" + xenon_root.string() + "' ");
        if (!ok) {
            append("recompile failed - see the log above; a jump table or "
                  "function boundary may need a human judgement call "
                  "(docs/BRINGUP.md).");
            cleanup_extraction();
            return false;
        }

        append("== building ==");
        std::string build_command =
            "cd '" + runtime.string() + "' && TITLE='" + name +
            "' ./tools/build_recompiled_cpu.sh 2>&1";
        append("$ " + build_command);
        FILE* pipe = popen(build_command.c_str(), "r");
        if (pipe == nullptr) {
            append("failed to start the build");
            cleanup_extraction();
            return false;
        }
        char buffer[1024];
        while (std::fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            std::string line(buffer);
            while (!line.empty() && (line.back() == '\n' || line.back() == '\r'))
                line.pop_back();
            append(line);
        }
        const int status = pclose(pipe);
        if (status != 0) {
            append("build failed - see the log above.");
            cleanup_extraction();
            return false;
        }
        append("== " + name + " is ready ==");
        cleanup_extraction();
        return true;
    }
};

struct achievement_row {
    std::string name;
    std::string description;
    unsigned gamerscore{0};
    bool unlocked{false};
};

// Shells out to the title's own binary with WHITTY_DUMP_ACHIEVEMENTS=1 (see
// run_title.cpp), which prints its achievement list and exits before
// anything else runs. Reusing that rather than re-parsing the XDBF/SPA
// resource here means this can never disagree with what the running game
// itself would say - the whole reason that dump exists.
std::vector<achievement_row> load_achievements(const tile& t) {
    std::vector<achievement_row> rows;
    if (!t.built || !t.has_xex) return rows;
    std::string command = "'" + t.binary.string() + "' '" + t.xex.string() +
                          "' '" + t.mount_argument().string() + "' 2>/dev/null";
    std::string full_command = "WHITTY_DUMP_ACHIEVEMENTS=1 " + command;
    FILE* pipe = popen(full_command.c_str(), "r");
    if (pipe == nullptr) return rows;
    char buffer[4096];
    while (std::fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        std::string line(buffer);
        if (line.rfind("ACH\t", 0) != 0) continue;
        std::vector<std::string> fields;
        std::size_t start = 4; // past "ACH\t"
        for (std::size_t i = start; i <= line.size(); ++i) {
            if (i == line.size() || line[i] == '\t' || line[i] == '\n') {
                fields.push_back(line.substr(start, i - start));
                start = i + 1;
            }
        }
        if (fields.size() < 5) continue;
        achievement_row row;
        row.name = fields[1];
        row.description = fields[2];
        row.gamerscore = static_cast<unsigned>(std::atoi(fields[3].c_str()));
        row.unlocked = fields[4] == "1";
        rows.push_back(std::move(row));
    }
    pclose(pipe);
    return rows;
}

enum class screen { grid, saves, install_log, achievements };

struct dialog_result {
    std::mutex mutex;
    std::vector<std::string> paths;
    bool ready{false};
};

void SDLCALL open_file_callback(void* userdata, const char* const* filelist, int) {
    dialog_result* result = static_cast<dialog_result*>(userdata);
    const std::lock_guard<std::mutex> lock(result->mutex);
    result->paths.clear();
    if (filelist != nullptr)
        for (const char* const* p = filelist; *p != nullptr; ++p)
            result->paths.push_back(*p);
    result->ready = true;
}

} // namespace

int main(int argc, char** argv) {
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) {
        std::fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }
    if (!TTF_Init()) {
        std::fprintf(stderr, "TTF_Init failed: %s\n", SDL_GetError());
        return 1;
    }

    // One binary, several collections: `gw_launcher [config-file] [window
    // title]`. Discovery, import, saves and achievements are identical for
    // any collection - the config file naming which titles it shows is the
    // only thing that actually differs, so a second collection is a second
    // config file and a shortcut, not a second copy of this program.
    const std::string config_filename = argc > 1 ? argv[1] : "launcher_titles.cfg";
    const std::string window_title = argc > 2 ? argv[2] : "Geometry Wars";
    const std::vector<std::string> seed_titles =
        config_filename.find("banjo") != std::string::npos
            ? std::vector<std::string>{"banjokazooie", "banjotooie"}
            : std::vector<std::string>{"geometrywars", "geometrywars2", "geometrywars3"};

    const fs::path runtime = runtime_dir();
    const fs::path projects = runtime.parent_path();
    const fs::path title_probe_bin = runtime / "build" / "title_probe";
    std::vector<tile> tiles =
        discover_tiles(runtime, projects, config_filename, seed_titles);

    // At most kMaxVisibleTiles tiles wide - the window does not grow without
    // bound as more titles are added to launcher_titles.cfg. Beyond that the
    // grid scrolls, tracked by scroll_offset below.
    const int columns =
        std::max<int>(1, std::min<int>(kMaxVisibleTiles,
                                       static_cast<int>(tiles.size())));
    const int window_width = columns * (kTileSize + kTileGap) + kTileGap;
    const int window_height = kLogoAreaHeight + kTileSize + kTileGap * 2 + 100;
    SDL_Window* window = SDL_CreateWindow(window_title.c_str(), window_width,
                                         window_height, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);

    for (tile& t : tiles) t.icon = load_icon(renderer, t.assets_dir, t.display);
    SDL_Texture* logo_texture = load_logo_texture(renderer);

    TTF_Font* title_font =
        TTF_OpenFont("/usr/share/fonts/TTF/DejaVuSans-Bold.ttf", 20);
    TTF_Font* hint_font =
        TTF_OpenFont("/usr/share/fonts/TTF/DejaVuSans.ttf", 16);
    TTF_Font* mono_font =
        TTF_OpenFont("/usr/share/fonts/TTF/DejaVuSansMono.ttf", 15);
    if (mono_font == nullptr) mono_font = hint_font;

    SDL_Gamepad* pad = nullptr;
    int selected = 0;
    int scroll_offset = 0;
    screen current_screen = screen::grid;
    int saves_selected = 0;
    bool saves_confirm_delete = false;
    std::vector<achievement_row> achievement_rows;
    int achievements_scroll = 0;
    install_job job;
    dialog_result dialog;
    bool waiting_for_dialog = false;
    enum class dialog_purpose { none, import_xex, import_dlc } pending_dialog =
        dialog_purpose::none;

    bool running = true;
    bool prev_left = false, prev_right = false, prev_up = false, prev_down = false;
    bool prev_a = false, prev_b = false, prev_x = false, prev_y = false;
    bool prev_start = false;

    const auto clamp_scroll = [&]() {
        if (selected < scroll_offset) scroll_offset = selected;
        if (selected >= scroll_offset + columns)
            scroll_offset = selected - columns + 1;
        const int max_offset =
            std::max<int>(0, static_cast<int>(tiles.size()) - columns);
        scroll_offset = std::clamp(scroll_offset, 0, max_offset);
    };

    const auto refresh_tiles = [&]() {
        for (tile& t : tiles)
            if (t.icon != nullptr) SDL_DestroyTexture(t.icon);
        tiles = discover_tiles(runtime, projects, config_filename, seed_titles);
        for (tile& t : tiles) t.icon = load_icon(renderer, t.assets_dir, t.display);
        if (selected >= static_cast<int>(tiles.size()))
            selected = static_cast<int>(tiles.size()) - 1;
        if (selected < 0) selected = 0;
        clamp_scroll();
    };

    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) running = false;
            if (event.type == SDL_EVENT_GAMEPAD_ADDED && pad == nullptr)
                pad = SDL_OpenGamepad(event.gdevice.which);
            if (event.type == SDL_EVENT_GAMEPAD_REMOVED && pad != nullptr &&
                SDL_GetGamepadID(pad) == event.gdevice.which) {
                SDL_CloseGamepad(pad);
                pad = nullptr;
            }
        }

        // The file dialog answers on the main thread via a callback SDL
        // invokes from inside its own event pump, so the result is picked up
        // here rather than at the point the dialog was opened.
        if (waiting_for_dialog) {
            const std::lock_guard<std::mutex> lock(dialog.mutex);
            if (dialog.ready) {
                waiting_for_dialog = false;
                dialog.ready = false;
                if (!dialog.paths.empty()) {
                    if (pending_dialog == dialog_purpose::import_xex) {
                        // One or several - picking a folder of rars and
                        // selecting them all imports every one of them in
                        // turn, not just the first. Files that turn out
                        // not to be a base game (no XEX inside) get a
                        // second chance as DLC for the selected tile, if
                        // that tile takes DLC - so a batch of "GW1 +
                        // GW2 + GW3 + GW3 DLC" works regardless of which
                        // tile the player happened to be parked on when
                        // they hit Y.
                        std::vector<fs::path> sources;
                        for (const std::string& p : dialog.paths) sources.emplace_back(p);
                        current_screen = screen::install_log;
                        tile* target_tile = nullptr;
                        if (selected >= 0 && selected < static_cast<int>(tiles.size()))
                            target_tile = &tiles[static_cast<std::size_t>(selected)];
                        const std::string reuse_name =
                            target_tile != nullptr ? target_tile->name : std::string();
                        // DLC fallback for files that turn out not to be
                        // a base game: pick the currently-selected tile
                        // when it takes DLC, otherwise fall back to ANY
                        // tile that takes DLC across the whole launcher
                        // - so a "GW1 + GW2 + GW3 + GW3 DLC" batch works
                        // regardless of which tile the player happened
                        // to be parked on when they hit Y.
                        fs::path dlc_fallback_dir;
                        if (target_tile != nullptr && target_tile->takes_dlc) {
                            dlc_fallback_dir = target_tile->assets_dir;
                        } else {
                            for (const tile& t : tiles) {
                                if (t.takes_dlc) {
                                    dlc_fallback_dir = t.assets_dir;
                                    break;
                                }
                            }
                        }
                        job.start_xex_import_batch(runtime, sources, reuse_name,
                                                  dlc_fallback_dir);
                    } else if (pending_dialog == dialog_purpose::import_dlc) {
                        std::vector<fs::path> files;
                        for (const std::string& p : dialog.paths) files.emplace_back(p);
                        current_screen = screen::install_log;
                        job.start_dlc_import(tiles[static_cast<std::size_t>(selected)]
                                                 .assets_dir, files);
                    }
                }
                pending_dialog = dialog_purpose::none;
            }
        }

        // -- edge-detected input, shared shape for pad and keyboard --------
        const bool* keys = SDL_GetKeyboardState(nullptr);
        bool left_now = keys[SDL_SCANCODE_LEFT];
        bool right_now = keys[SDL_SCANCODE_RIGHT];
        bool up_now = keys[SDL_SCANCODE_UP];
        bool down_now = keys[SDL_SCANCODE_DOWN];
        bool a_now = keys[SDL_SCANCODE_RETURN] || keys[SDL_SCANCODE_SPACE];
        bool b_now = keys[SDL_SCANCODE_BACKSPACE];
        bool x_now = keys[SDL_SCANCODE_TAB];
        bool y_now = keys[SDL_SCANCODE_I];
        bool start_now = keys[SDL_SCANCODE_ESCAPE];
        if (pad != nullptr) {
            left_now = left_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_LEFT) ||
                      SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX) < -16000;
            right_now = right_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_RIGHT) ||
                       SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX) > 16000;
            up_now = up_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_UP) ||
                    SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY) < -16000;
            down_now = down_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_DPAD_DOWN) ||
                      SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY) > 16000;
            a_now = a_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_SOUTH);
            b_now = b_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_EAST);
            x_now = x_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_WEST);
            y_now = y_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_NORTH);
            start_now = start_now || SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_START);
        }
        const bool left_pressed = left_now && !prev_left;
        const bool right_pressed = right_now && !prev_right;
        const bool up_pressed = up_now && !prev_up;
        const bool down_pressed = down_now && !prev_down;
        const bool a_pressed = a_now && !prev_a;
        const bool b_pressed = b_now && !prev_b;
        const bool x_pressed = x_now && !prev_x;
        const bool y_pressed = y_now && !prev_y;
        const bool start_pressed = start_now && !prev_start;
        prev_left = left_now; prev_right = right_now;
        prev_up = up_now; prev_down = down_now;
        prev_a = a_now; prev_b = b_now; prev_x = x_now; prev_y = y_now;
        prev_start = start_now;

        if (start_pressed && current_screen == screen::grid) running = false;

        if (current_screen == screen::grid && !tiles.empty()) {
            if (left_pressed) {
                selected = (selected + static_cast<int>(tiles.size()) - 1) %
                          static_cast<int>(tiles.size());
                clamp_scroll();
            }
            if (right_pressed) {
                selected = (selected + 1) % static_cast<int>(tiles.size());
                clamp_scroll();
            }
            tile& current = tiles[static_cast<std::size_t>(selected)];
            if (a_pressed) launch(current);
            if (x_pressed) {
                current_screen = screen::saves;
                saves_selected = selected;
                saves_confirm_delete = false;
            }
            if (y_pressed && !waiting_for_dialog) {
                // Y is always the install path, regardless of tile state.
                // On a tile that is not yet ready, this is the only way to
                // install; on a tile that IS ready, the same flow handles
                // DLC install (via the takes_dlc fallback in
                // start_xex_import_batch) or a deliberate re-import that
                // wipes assets/ before the new files land. Hiding Y on a
                // ready tile would leave the user with no way to add DLC
                // or fix a bad install, which is worse than offering a
                // dialog every press.
                pending_dialog = dialog_purpose::import_xex;
                waiting_for_dialog = true;
                // No filter: an XBLA title's content package is the real
                // source to hand this, and on disk that file has no
                // extension at all (its name is a content hash) - filtering
                // to *.xex would hide the exact file a player has.
                // Multi-select: importing several titles at once is one
                // trip through the picker rather than one Y-press each.
                // DLC files in a mixed batch go through start_xex_import_batch
                // and fall back to a DLC install on a tile that takes DLC -
                // see start_xex_import_batch and its dlc_fallback_dir arg.
                SDL_ShowOpenFileDialog(open_file_callback, &dialog, window,
                                       nullptr, 0, nullptr, true);
            }
            if (b_pressed) {
                achievement_rows = load_achievements(current);
                achievements_scroll = 0;
                current_screen = screen::achievements;
            }
        } else if (current_screen == screen::achievements) {
            if (up_pressed && achievements_scroll > 0) --achievements_scroll;
            if (down_pressed) ++achievements_scroll;
            if (b_pressed) current_screen = screen::grid;
        } else if (current_screen == screen::saves) {
            if (up_pressed)
                saves_selected = (saves_selected + static_cast<int>(tiles.size()) - 1) %
                                 std::max<int>(1, static_cast<int>(tiles.size()));
            if (down_pressed)
                saves_selected = (saves_selected + 1) %
                                 std::max<int>(1, static_cast<int>(tiles.size()));
            if ((up_pressed || down_pressed)) saves_confirm_delete = false;
            if (x_pressed && !tiles.empty()) {
                tile& t = tiles[static_cast<std::size_t>(saves_selected)];
                if (t.title_id.empty() && t.has_xex)
                    t.title_id = probe_title_id(title_probe_bin, t.xex);
                const fs::path save_dir = save_root() / t.title_id;
                std::error_code error;
                if (!t.title_id.empty() && fs::exists(save_dir, error)) {
                    if (saves_confirm_delete) {
                        fs::remove_all(save_dir, error);
                        saves_confirm_delete = false;
                    } else {
                        saves_confirm_delete = true;
                    }
                }
            }
            if (b_pressed) {
                current_screen = screen::grid;
                saves_confirm_delete = false;
            }
        } else if (current_screen == screen::install_log) {
            if (b_pressed && job.finished.load()) {
                current_screen = screen::grid;
                refresh_tiles();
            }
        }

        // -- draw --------------------------------------------------------
        fill_rect(renderer, SDL_FRect{0, 0, static_cast<float>(window_width),
                                      static_cast<float>(window_height)},
                 kBackground);

        // The marquee, centred at the top of every screen - the one thing a
        // player should never lose sight of no matter which screen they are
        // on, the same way the corner watermark never leaves the game itself.
        if (logo_texture != nullptr) {
            float lw = 0, lh = 0;
            SDL_GetTextureSize(logo_texture, &lw, &lh);
            const float target_h = kLogoAreaHeight - 30.0f;
            const float scale = target_h / lh;
            const SDL_FRect dest{(window_width - lw * scale) / 2.0f, 12.0f,
                                 lw * scale, target_h};
            SDL_RenderTexture(renderer, logo_texture, nullptr, &dest);
        }

        if (current_screen == screen::grid) {
            const int last_visible =
                std::min<int>(static_cast<int>(tiles.size()), scroll_offset + columns);
            for (int i = scroll_offset; i < last_visible; ++i) {
                const tile& t = tiles[static_cast<std::size_t>(i)];
                const int column = i - scroll_offset;
                const float x = static_cast<float>(kTileGap + column * (kTileSize + kTileGap));
                const float y = static_cast<float>(kLogoAreaHeight + kTileGap);
                const SDL_FRect box{x, y, static_cast<float>(kTileSize),
                                   static_cast<float>(kTileSize)};
                fill_rect(renderer, box, kTileBackground);
                if (t.icon != nullptr) {
                    float iw = 0, ih = 0;
                    SDL_GetTextureSize(t.icon, &iw, &ih);
                    const float scale = std::min(kTileSize / iw, kTileSize / ih) * 0.9f;
                    const SDL_FRect dest{x + (kTileSize - iw * scale) / 2,
                                        y + (kTileSize - ih * scale) / 2,
                                        iw * scale, ih * scale};
                    const Uint8 alpha = t.ready() ? 255 : 100;
                    SDL_SetTextureAlphaMod(t.icon, alpha);
                    SDL_RenderTexture(renderer, t.icon, nullptr, &dest);
                    SDL_SetTextureAlphaMod(t.icon, 255);
                }
                if (i == selected)
                    outline_rect(renderer, box, 3, kSelected);
                draw_text(renderer, title_font, t.display,
                         static_cast<int>(x + kTileSize / 2.0f),
                         static_cast<int>(y + kTileSize + 10),
                         t.ready() ? kText : kTextDim, true);
                std::string status;
                SDL_Color status_colour = kWarn;
                if (!t.built) status = "needs install";
                else if (!t.has_xex) { status = "missing XEX"; status_colour = kDanger; }
                else if (t.takes_dlc && !t.dlc_installed) status = "needs DLC";
                if (!status.empty())
                    draw_text(renderer, hint_font, status,
                             static_cast<int>(x + kTileSize / 2.0f),
                             static_cast<int>(y + kTileSize + 36), status_colour, true);
            }
            // A scroll indicator, only shown when there is somewhere to
            // scroll to - a static "<" or ">" the whole time would claim
            // there is always more, which is only true past five titles.
            const float row_y = kLogoAreaHeight + kTileGap + kTileSize / 2.0f;
            if (scroll_offset > 0)
                draw_text(renderer, title_font, "<", 8,
                         static_cast<int>(row_y - 12), kSelected, false);
            if (last_visible < static_cast<int>(tiles.size()))
                draw_text(renderer, title_font, ">", window_width - 20,
                         static_cast<int>(row_y - 12), kSelected, false);

            int hint_x = kTileGap;
            const int hint_y = window_height - 34;
            hint_x = draw_hint(renderer, hint_font, hint_x, hint_y, 'A', kButtonA, "Play");
            hint_x = draw_hint(renderer, hint_font, hint_x, hint_y, 'X', kButtonX, "Saves");
            hint_x = draw_hint(renderer, hint_font, hint_x, hint_y, 'Y', kButtonY, "Install / DLC");
            draw_hint(renderer, hint_font, hint_x, hint_y, 'B', kButtonB, "Achievements");
        } else if (current_screen == screen::saves) {
            const float panel_y = static_cast<float>(kLogoAreaHeight);
            fill_rect(renderer, SDL_FRect{0, panel_y, static_cast<float>(window_width),
                                          static_cast<float>(window_height) - panel_y},
                     kPanelBackground);
            draw_text(renderer, title_font, "Save data", kTileGap,
                     kLogoAreaHeight + 12, kText, false);
            int row_y = kLogoAreaHeight + 52;
            for (std::size_t i = 0; i < tiles.size(); ++i) {
                tile& t = tiles[i];
                if (t.title_id.empty() && t.has_xex)
                    t.title_id = probe_title_id(title_probe_bin, t.xex);
                const fs::path save_dir = save_root() / t.title_id;
                std::error_code error;
                const bool has_save = !t.title_id.empty() && fs::exists(save_dir, error);
                const SDL_Color colour = static_cast<int>(i) == saves_selected
                                             ? kSelected : kText;
                std::string line = t.display;
                line += t.title_id.empty() ? "  (no title id yet)"
                                           : ("  [" + t.title_id + "]");
                draw_text(renderer, mono_font, line, kTileGap, row_y, colour, false);
                std::string detail = has_save
                    ? ("save present, " + human_size(directory_size(save_dir)))
                    : "no save data";
                draw_text(renderer, hint_font, detail, kTileGap + 40, row_y + 22,
                         has_save ? kText : kTextDim, false);
                if (static_cast<int>(i) == saves_selected && has_save)
                    draw_text(renderer, hint_font,
                             saves_confirm_delete ? "press X again to confirm delete"
                                                  : "X to delete",
                             window_width - 260, row_y + 22, kDanger, false);
                row_y += 56;
            }
            int hint_x = kTileGap;
            const int hint_y = window_height - 34;
            hint_x = draw_hint(renderer, hint_font, hint_x, hint_y, 'X', kButtonX, "Delete (confirm)");
            draw_hint(renderer, hint_font, hint_x, hint_y, 'B', kButtonB, "Back");
        } else if (current_screen == screen::achievements) {
            const float panel_y = static_cast<float>(kLogoAreaHeight);
            fill_rect(renderer, SDL_FRect{0, panel_y, static_cast<float>(window_width),
                                          static_cast<float>(window_height) - panel_y},
                     kPanelBackground);
            const tile& current = tiles[static_cast<std::size_t>(
                std::clamp(selected, 0, static_cast<int>(tiles.size()) - 1))];
            unsigned earned = 0, total = 0;
            for (const achievement_row& row : achievement_rows) {
                total += row.gamerscore;
                if (row.unlocked) earned += row.gamerscore;
            }
            std::string heading = current.display + " achievements";
            draw_text(renderer, title_font, heading, kTileGap,
                     kLogoAreaHeight + 12, kText, false);
            if (!achievement_rows.empty()) {
                std::string score = std::to_string(earned) + " / " +
                                    std::to_string(total) + "G";
                draw_text(renderer, hint_font, score, window_width - 140,
                         kLogoAreaHeight + 18, kGold, false);
            }
            const int row_height = 44;
            const int max_rows = (window_height - kLogoAreaHeight - 100) / row_height;
            achievements_scroll = std::clamp(
                achievements_scroll, 0,
                std::max<int>(0, static_cast<int>(achievement_rows.size()) - max_rows));
            int row_y = kLogoAreaHeight + 52;
            if (achievement_rows.empty()) {
                draw_text(renderer, hint_font, "no achievement data for this title",
                         kTileGap, row_y, kTextDim, false);
            }
            for (int i = achievements_scroll;
                 i < static_cast<int>(achievement_rows.size()) &&
                 i < achievements_scroll + max_rows;
                 ++i) {
                const achievement_row& row = achievement_rows[static_cast<std::size_t>(i)];
                draw_text(renderer, mono_font, row.name, kTileGap, row_y,
                         row.unlocked ? kGold : kText, false);
                draw_text(renderer, hint_font, row.description, kTileGap + 30,
                         row_y + 20, row.unlocked ? kText : kTextDim, false);
                draw_text(renderer, hint_font, std::to_string(row.gamerscore) + "G",
                         window_width - 90, row_y, row.unlocked ? kGold : kTextDim,
                         false);
                if (!row.unlocked)
                    draw_text(renderer, hint_font, "locked", window_width - 190,
                             row_y, kTextDim, false);
                row_y += row_height;
            }
            draw_hint(renderer, hint_font, kTileGap, window_height - 34, 'B',
                     kButtonB, "Back");
        } else if (current_screen == screen::install_log) {
            const float panel_y = static_cast<float>(kLogoAreaHeight);
            fill_rect(renderer, SDL_FRect{0, panel_y, static_cast<float>(window_width),
                                          static_cast<float>(window_height) - panel_y},
                     kPanelBackground);
            const bool done = job.finished.load();
            const bool ok = job.succeeded.load();
            draw_text(renderer, title_font,
                     done ? (ok ? "Done" : "Failed") : "Working...",
                     kTileGap, kLogoAreaHeight + 8, done ? (ok ? kText : kDanger) : kWarn,
                     false);
            draw_text(renderer, hint_font, "full log: " + import_log_path().string(),
                     window_width - 500, kLogoAreaHeight + 16, kTextDim, false);
            std::vector<std::string> lines;
            {
                const std::lock_guard<std::mutex> lock(job.log_mutex);
                lines = job.log_lines;
            }
            const int max_lines = (window_height - kLogoAreaHeight - 90) / 18;
            const int start = std::max<int>(0, static_cast<int>(lines.size()) - max_lines);
            int row_y = kLogoAreaHeight + 44;
            for (std::size_t i = static_cast<std::size_t>(start); i < lines.size(); ++i) {
                draw_text(renderer, mono_font, lines[i], kTileGap, row_y, kText, false);
                row_y += 18;
            }
            if (done)
                draw_hint(renderer, hint_font, kTileGap, window_height - 34, 'B',
                         kButtonB, "Return");
        }

        SDL_RenderPresent(renderer);
        SDL_Delay(16);
    }

    for (tile& t : tiles)
        if (t.icon != nullptr) SDL_DestroyTexture(t.icon);
    if (logo_texture != nullptr) SDL_DestroyTexture(logo_texture);
    if (title_font != nullptr) TTF_CloseFont(title_font);
    if (hint_font != nullptr) TTF_CloseFont(hint_font);
    if (mono_font != nullptr && mono_font != hint_font) TTF_CloseFont(mono_font);
    if (pad != nullptr) SDL_CloseGamepad(pad);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
    return 0;
}
