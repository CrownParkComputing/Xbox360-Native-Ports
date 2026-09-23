// frame_selection.h - which frames of a run get captured, and where each goes.
//
// WHITTY_GPU_DUMP names the frame to dump. It used to name exactly one, and
// that is the whole reason this file exists: every frame anybody wanted cost a
// separate launch of the title, because the only way to ask for a second frame
// was to run the whole thing again.
//
// MEASURED, on one afternoon's work: 61 title launches, of which most differed
// from another launch only in the frame number asked for - nine boots of
// Geometry Wars 1, eight of Space Giraffe, eight of Geometry Wars 2, six of
// Jetpac. Jetpac's boot is about forty seconds and it was paid twelve times to
// look at twelve moments of what is otherwise the same run. The conversion from
// PPM to PNG, which is the part that looks wasteful, was measured at 0.064 s a
// capture against runs of 25 to 70 seconds; it was never the cost. Re-booting
// the title was.
//
// So the variable takes a LIST. `WHITTY_GPU_DUMP=900,1200,2400` captures three
// frames in one run, each written as it passes.
#pragma once

#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// Parses the frame list. "900" gives {900}; "900,1200,2400" gives all three.
//
// SORTED AND DEDUPED, which matters for two things downstream: a run that stops
// once every requested frame has been captured needs to know how many distinct
// frames it is waiting for, and the report of what was never reached is easier
// to read in order. The order the caller wrote them in cannot matter anyway,
// because frames arrive in the order the title presents them.
//
// A piece that is not a number parses as 0, exactly as strtoull did when this
// took a single value - so a malformed variable behaves as it always has rather
// than newly meaning "no frames". Empty pieces are skipped, which is what makes
// a trailing comma harmless.
inline std::vector<uint64_t> parse_frame_list(const char* text) {
    std::vector<uint64_t> frames;
    if (text == nullptr) return frames;
    const std::string all = text;
    std::size_t at = 0;
    while (at <= all.size()) {
        const std::size_t comma = all.find(',', at);
        const std::size_t end = comma == std::string::npos ? all.size() : comma;
        std::string piece = all.substr(at, end - at);
        // Spaces either side of a comma are somebody being tidy, not an error.
        const std::size_t first = piece.find_first_not_of(" \t");
        const std::size_t last = piece.find_last_not_of(" \t");
        if (first != std::string::npos)
            piece = piece.substr(first, last - first + 1);
        else
            piece.clear();
        if (!piece.empty())
            frames.push_back(std::strtoull(piece.c_str(), nullptr, 10));
        if (comma == std::string::npos) break;
        at = comma + 1;
    }
    // The variable being SET with nothing usable in it kept its old meaning:
    // strtoull("") is 0, so frame 0 was the frame asked for. Preserved rather
    // than quietly turned into "capture nothing", because the two are
    // indistinguishable in a log and one of them is a silent no-op.
    if (frames.empty() && text[0] != '\0') frames.push_back(0);
    std::sort(frames.begin(), frames.end());
    frames.erase(std::unique(frames.begin(), frames.end()), frames.end());
    return frames;
}

// Where one capture is written.
//
// A SINGLE frame keeps the path exactly as given. That is not tidiness, it is
// the compatibility rule: every gate, profile and script in this project passes
// one frame number and one path, and all of them have to keep writing the file
// they always wrote. Only a run asking for several frames needs the number
// folded in, and it goes before the extension so the files sort in frame order
// and keep the suffix whatever tool reads them next expects.
inline std::string frame_capture_path(const std::string& base, uint64_t frame,
                                      bool single) {
    if (single) return base;
    char suffix[32];
    std::snprintf(suffix, sizeof(suffix), "_%04llu",
                  static_cast<unsigned long long>(frame));
    const std::size_t dot = base.find_last_of('.');
    const std::size_t slash = base.find_last_of('/');
    // A dot has to be in the FILE NAME to be an extension. "captures/run.1/f"
    // has a dot in a directory and no extension at all.
    if (dot == std::string::npos ||
        (slash != std::string::npos && dot < slash))
        return base + suffix;
    return base.substr(0, dot) + suffix + base.substr(dot);
}

} // namespace whitty_xenon::gpu
