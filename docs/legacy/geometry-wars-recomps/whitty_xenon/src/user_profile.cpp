#include "whitty_xenon/user_profile.h"

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>

namespace whitty_xenon {
namespace {

// The file's own format, not the guest's: little-endian, host-side, versioned
// so a later change can be recognised rather than misread. Byte order is
// spelled out by hand instead of dumping structs, because a profile written on
// one machine has to be readable on another.
constexpr char kMagic[6] = {'W', 'X', 'P', 'R', 'O', 'F'};
// Version 1 held settings only. Version 2 appends the player's achievements and
// local high scores. A version-1 file still loads - it is simply a profile with
// nothing earned yet - and the next save writes version 2, so nobody's existing
// save is lost by the upgrade. A version we do not know is refused rather than
// read with these rules.
constexpr uint16_t kVersion = 2;
constexpr uint16_t kVersionSettingsOnly = 1;
// A guard against a corrupt length turning into a huge allocation. The console
// caps a single setting's data at 1000 bytes; this leaves room to spare.
constexpr uint32_t kMaxPayload = 0x10000;
// Guards against a corrupt count turning into an enormous allocation. A title
// has tens of achievements, not thousands.
constexpr uint32_t kMaxRecords = 4096;
constexpr uint32_t kMaxNameLength = 64;

void put_u16(std::string& out, uint16_t value) {
    out.push_back(static_cast<char>(value & 0xFF));
    out.push_back(static_cast<char>((value >> 8) & 0xFF));
}
void put_u32(std::string& out, uint32_t value) {
    for (int i = 0; i < 4; ++i)
        out.push_back(static_cast<char>((value >> (i * 8)) & 0xFF));
}
void put_u64(std::string& out, uint64_t value) {
    for (int i = 0; i < 8; ++i)
        out.push_back(static_cast<char>((value >> (i * 8)) & 0xFF));
}

struct reader {
    const unsigned char* data;
    std::size_t size;
    std::size_t at{0};

    bool take(void* out, std::size_t count) {
        if (at + count > size) return false;
        std::memcpy(out, data + at, count);
        at += count;
        return true;
    }
    bool u16(uint16_t& out) {
        unsigned char bytes[2];
        if (!take(bytes, 2)) return false;
        out = static_cast<uint16_t>(bytes[0] | (bytes[1] << 8));
        return true;
    }
    bool u32(uint32_t& out) {
        unsigned char bytes[4];
        if (!take(bytes, 4)) return false;
        out = 0;
        for (int i = 0; i < 4; ++i)
            out |= static_cast<uint32_t>(bytes[i]) << (i * 8);
        return true;
    }
    bool u64(uint64_t& out) {
        unsigned char bytes[8];
        if (!take(bytes, 8)) return false;
        out = 0;
        for (int i = 0; i < 8; ++i)
            out |= static_cast<uint64_t>(bytes[i]) << (i * 8);
        return true;
    }
};

} // namespace

bool profile_store::load() {
    m_loaded_from_file = false;
    if (m_path.empty()) return true;

    std::ifstream file(m_path, std::ios::binary);
    // No file yet is a first run, not a failure.
    if (!file) return true;

    const std::string contents((std::istreambuf_iterator<char>(file)),
                               std::istreambuf_iterator<char>());
    reader in{reinterpret_cast<const unsigned char*>(contents.data()),
              contents.size()};

    char magic[sizeof(kMagic)] = {};
    uint16_t version = 0;
    uint32_t count = 0;
    if (!in.take(magic, sizeof(magic)) ||
        std::memcmp(magic, kMagic, sizeof(kMagic)) != 0)
        return false;
    if (!in.u16(version)) return false;
    if (version != kVersion && version != kVersionSettingsOnly) return false;
    if (!in.u32(count)) return false;

    std::map<std::pair<uint32_t, uint32_t>, user_setting> settings;
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t title_id = 0;
        uint32_t payload_length = 0;
        user_setting value;
        if (!in.u32(title_id) || !in.u32(value.key) || !in.u64(value.scalar) ||
            !in.u32(payload_length))
            return false;
        if (payload_length > kMaxPayload) return false;
        value.payload.resize(payload_length);
        if (payload_length != 0 &&
            !in.take(value.payload.data(), payload_length))
            return false;
        settings[{title_id, value.key}] = std::move(value);
    }

    // Achievements and scores, present from version 2 on. Read into locals so a
    // truncated file leaves the store as it was rather than half-filled.
    std::map<uint32_t, std::vector<achievement_unlock>> unlocks;
    std::map<uint32_t, std::vector<local_score>> scores;
    if (version >= kVersion) {
        uint32_t unlock_count = 0;
        if (!in.u32(unlock_count) || unlock_count > kMaxRecords) return false;
        for (uint32_t i = 0; i < unlock_count; ++i) {
            uint32_t title_id = 0;
            achievement_unlock unlocked;
            if (!in.u32(title_id) || !in.u16(unlocked.id) ||
                !in.u64(unlocked.unlock_time))
                return false;
            unlocks[title_id].push_back(unlocked);
        }
        uint32_t score_count = 0;
        if (!in.u32(score_count) || score_count > kMaxRecords) return false;
        for (uint32_t i = 0; i < score_count; ++i) {
            uint32_t title_id = 0;
            uint16_t name_length = 0;
            local_score score;
            if (!in.u32(title_id) || !in.u64(score.score) ||
                !in.u32(score.leaderboard_id) || !in.u64(score.when) ||
                !in.u16(name_length))
                return false;
            if (name_length > kMaxNameLength) return false;
            score.name.resize(name_length);
            if (name_length != 0 && !in.take(&score.name[0], name_length))
                return false;
            scores[title_id].push_back(score);
        }
    }

    for (auto& entry : unlocks)
        std::sort(entry.second.begin(), entry.second.end(),
                  [](const achievement_unlock& a, const achievement_unlock& b) {
                      return a.id < b.id;
                  });
    for (auto& entry : scores)
        std::stable_sort(entry.second.begin(), entry.second.end(),
                         [](const local_score& a, const local_score& b) {
                             return a.score > b.score;
                         });

    m_settings = std::move(settings);
    m_unlocks = std::move(unlocks);
    m_scores = std::move(scores);
    m_loaded_from_file = true;
    return true;
}

bool profile_store::save() const {
    if (m_path.empty()) return false;

    std::string out;
    out.append(kMagic, sizeof(kMagic));
    put_u16(out, kVersion);
    put_u32(out, static_cast<uint32_t>(m_settings.size()));
    for (const auto& entry : m_settings) {
        put_u32(out, entry.first.first); // title id
        put_u32(out, entry.second.key);
        put_u64(out, entry.second.scalar);
        put_u32(out, static_cast<uint32_t>(entry.second.payload.size()));
        out.append(reinterpret_cast<const char*>(entry.second.payload.data()),
                   entry.second.payload.size());
    }
    std::size_t unlock_total = 0;
    for (const auto& entry : m_unlocks) unlock_total += entry.second.size();
    put_u32(out, static_cast<uint32_t>(unlock_total));
    for (const auto& entry : m_unlocks)
        for (const achievement_unlock& unlocked : entry.second) {
            put_u32(out, entry.first); // title id
            put_u16(out, unlocked.id);
            put_u64(out, unlocked.unlock_time);
        }
    std::size_t score_total = 0;
    for (const auto& entry : m_scores) score_total += entry.second.size();
    put_u32(out, static_cast<uint32_t>(score_total));
    for (const auto& entry : m_scores)
        for (const local_score& score : entry.second) {
            put_u32(out, entry.first); // title id
            put_u64(out, score.score);
            put_u32(out, score.leaderboard_id);
            put_u64(out, score.when);
            const uint16_t name_length = static_cast<uint16_t>(
                std::min<std::size_t>(score.name.size(), kMaxNameLength));
            put_u16(out, name_length);
            out.append(score.name, 0, name_length);
        }

    std::error_code ec;
    const std::filesystem::path final_path(m_path);
    if (final_path.has_parent_path())
        std::filesystem::create_directories(final_path.parent_path(), ec);

    // Write beside the real file and rename over it: a save interrupted
    // halfway leaves the previous profile intact rather than a truncated one.
    const std::filesystem::path temp_path = final_path.string() + ".new";
    {
        std::ofstream file(temp_path, std::ios::binary | std::ios::trunc);
        if (!file) return false;
        file.write(out.data(), static_cast<std::streamsize>(out.size()));
        file.flush();
        if (!file) return false;
    }
    std::filesystem::rename(temp_path, final_path, ec);
    if (ec) {
        std::filesystem::remove(temp_path, ec);
        return false;
    }
    return true;
}

const user_setting* profile_store::find(uint32_t title_id,
                                        uint32_t key) const noexcept {
    const auto found = m_settings.find({title_id, key});
    return found == m_settings.end() ? nullptr : &found->second;
}

void profile_store::store(uint32_t title_id, const user_setting& value) {
    m_settings[{title_id, value.key}] = value;
}

std::size_t profile_store::payload_bytes() const noexcept {
    std::size_t total = 0;
    for (const auto& entry : m_settings) total += entry.second.payload.size();
    return total;
}

uint64_t current_filetime() {
    // FILETIME counts 100 ns ticks from 1601-01-01; the Unix epoch is
    // 11644473600 seconds later.
    constexpr uint64_t kEpochDelta = 11644473600ull * 10000000ull;
    const auto now = std::chrono::system_clock::now().time_since_epoch();
    const auto ticks = std::chrono::duration_cast<
        std::chrono::duration<uint64_t, std::ratio<1, 10000000>>>(now);
    return kEpochDelta + ticks.count();
}

bool profile_store::unlock_achievement(uint32_t title_id, uint16_t id,
                                       uint64_t when, bool* already) {
    if (already != nullptr) *already = false;
    std::vector<achievement_unlock>& earned = m_unlocks[title_id];
    for (const achievement_unlock& unlocked : earned) {
        if (unlocked.id != id) continue;
        if (already != nullptr) *already = true;
        return false;
    }
    achievement_unlock added;
    added.id = id;
    added.unlock_time = when;
    earned.push_back(added);
    std::sort(earned.begin(), earned.end(),
              [](const achievement_unlock& a, const achievement_unlock& b) {
                  return a.id < b.id;
              });
    // Written through at once. An unlock that is only in memory is lost the
    // moment the title exits, which is indistinguishable from never having
    // earned it.
    if (!m_path.empty()) return save();
    return true;
}

bool profile_store::is_unlocked(uint32_t title_id,
                                uint16_t id) const noexcept {
    const auto found = m_unlocks.find(title_id);
    if (found == m_unlocks.end()) return false;
    for (const achievement_unlock& unlocked : found->second)
        if (unlocked.id == id) return true;
    return false;
}

uint64_t profile_store::unlock_time(uint32_t title_id,
                                    uint16_t id) const noexcept {
    const auto found = m_unlocks.find(title_id);
    if (found == m_unlocks.end()) return 0;
    for (const achievement_unlock& unlocked : found->second)
        if (unlocked.id == id) return unlocked.unlock_time;
    return 0;
}

std::vector<achievement_unlock> profile_store::unlocks(
    uint32_t title_id) const {
    const auto found = m_unlocks.find(title_id);
    if (found == m_unlocks.end()) return {};
    return found->second;
}

std::size_t profile_store::unlock_count(uint32_t title_id) const noexcept {
    const auto found = m_unlocks.find(title_id);
    return found == m_unlocks.end() ? 0 : found->second.size();
}

bool profile_store::add_score(uint32_t title_id, uint32_t leaderboard_id,
                              uint64_t score, uint64_t when,
                              const std::string& name, bool* placed) {
    if (placed != nullptr) *placed = false;
    std::vector<local_score>& table = m_scores[title_id];

    std::size_t held = 0;
    uint64_t lowest = UINT64_MAX;
    for (const local_score& existing : table) {
        if (existing.leaderboard_id != leaderboard_id) continue;
        ++held;
        if (existing.score < lowest) lowest = existing.score;
    }
    if (held >= kScoresPerBoard && score <= lowest) return false;

    local_score added;
    added.score = score;
    added.leaderboard_id = leaderboard_id;
    added.when = when;
    added.name = name;
    table.push_back(added);
    std::stable_sort(table.begin(), table.end(),
                     [](const local_score& a, const local_score& b) {
                         return a.score > b.score;
                     });
    // Trim this board back to the top N. Another board's table is untouched.
    std::size_t kept = 0;
    for (auto it = table.begin(); it != table.end();) {
        if (it->leaderboard_id != leaderboard_id) {
            ++it;
            continue;
        }
        if (++kept > kScoresPerBoard)
            it = table.erase(it);
        else
            ++it;
    }
    if (placed != nullptr) *placed = true;
    if (!m_path.empty()) return save();
    return true;
}

std::vector<local_score> profile_store::scores(uint32_t title_id) const {
    const auto found = m_scores.find(title_id);
    if (found == m_scores.end()) return {};
    return found->second;
}

std::vector<local_score> profile_store::scores(uint32_t title_id,
                                               uint32_t leaderboard_id) const {
    std::vector<local_score> found;
    for (const local_score& score : scores(title_id))
        if (score.leaderboard_id == leaderboard_id) found.push_back(score);
    return found;
}

void profile_store::forget() {
    m_settings.clear();
    m_unlocks.clear();
    m_scores.clear();
    m_loaded_from_file = false;
}

} // namespace whitty_xenon
