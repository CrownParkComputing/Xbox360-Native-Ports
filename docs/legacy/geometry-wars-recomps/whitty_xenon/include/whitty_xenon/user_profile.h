// user_profile.h - the signed-in profile's settings, and where they persist.
//
// An Xbox Live Arcade title of this era has no save file and no save device.
// Its save IS a profile setting: the title hands XAM a binary blob under a
// title-specific key (XPROFILE_TITLE_SPECIFIC1..3) and reads it back the same
// way. Geometry Wars 2 does exactly that - it imports no XamContent* function
// other than the licence-mask query - so "saving content" for it means
// XamUserWriteProfileSettings landing somewhere that survives the process.
//
// That is why this is a store and not a stub. A read that always answers "no
// value" makes a title lose the player's progress every launch; a write that
// answers SUCCESS without writing anything loses it silently, which is worse.
// So the settings live in a host file, a load failure is distinguishable from
// an empty profile, and save() reports whether the bytes actually landed.
//
// Settings are scoped the way the console scopes them: a title-scoped setting
// belongs to one title id, and the profile-wide settings (gamertag, zone,
// controller preferences) sit under title id 0 where every title sees them.
//
// The same store also holds the two things that belong to the PLAYER rather than
// to any title's save: which achievements have been unlocked, and the local
// high-score table. They are here rather than in a store of their own so there is
// one persistence layer with one atomic-write path and one corrupt-file rule -
// three copies of that logic is three places for the same bug. Both are keyed by
// title id, so two titles can never see each other's achievements or scores, and
// a title that has never run simply has no records.
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <utility>
#include <vector>

namespace whitty_xenon {

// The four bits at the top of a setting key say how to read its value.
// From Xenia's X_USER_DATA_TYPE.
enum class user_data_type : uint8_t {
    context = 0,
    int32 = 1,
    int64 = 2,
    real64 = 3,
    wstring = 4,
    real32 = 5,
    binary = 6,
    datetime = 7,
    unset = 0xFF,
};

// Where a setting's value came from, as the guest reads it out of
// X_USER_PROFILE_SETTING::source. This is the field a title checks to find out
// whether a setting has ever been written - NO_VALUE is a successful read of a
// setting that is simply not set yet, which is what a first run must see.
namespace setting_source {
inline constexpr uint32_t no_value = 0;
inline constexpr uint32_t from_default = 1;
inline constexpr uint32_t from_title = 2;
inline constexpr uint32_t permission_denied = 3;
} // namespace setting_source

// A setting key packs three things into 32 bits: the data type in bits 28..31,
// the maximum data size in bits 16..27, and the setting id in bits 0..15.
// So XPROFILE_TITLE_SPECIFIC1 = 0x63E83FFF is a BINARY setting of at most
// 0x3E8 (1000) bytes with id 0x3FFF.
struct setting_key {
    uint32_t value{0};

    constexpr uint16_t id() const noexcept {
        return static_cast<uint16_t>(value & 0xFFFFu);
    }
    constexpr uint16_t max_size() const noexcept {
        return static_cast<uint16_t>((value >> 16) & 0xFFFu);
    }
    constexpr user_data_type type() const noexcept {
        return static_cast<user_data_type>(value >> 28);
    }
    // A wstring or binary setting keeps its bytes outside the eight-byte union
    // in the guest structure: the union holds a size and a pointer to them.
    constexpr bool has_payload() const noexcept {
        return type() == user_data_type::wstring ||
               type() == user_data_type::binary;
    }
};

// One unlocked achievement. `id` is the id out of the running title's own
// achievement table, so it is the same number the title unlocks by.
// `unlock_time` is a Windows FILETIME (100 ns ticks since 1601), which is what
// the console stores and what a GPD achievement record holds - so this can
// become a real GPD later without reinterpreting times.
struct achievement_unlock {
    uint16_t id{0};
    uint64_t unlock_time{0};
};

// One entry of a title's local high-score table.
struct local_score {
    uint64_t score{0};
    // Which of the title's leaderboards the score belongs to. A title can have
    // several (Geometry Wars has "Evolved" and "Retro"), and it identifies them
    // by the leaderboard id it writes stats under.
    uint32_t leaderboard_id{0};
    uint64_t when{0}; // FILETIME, as above
    // Who set it. Local play has one player, so this is the gamertag we report
    // rather than anything looked up.
    std::string name;
};

// A Windows FILETIME for now.
uint64_t current_filetime();

// The name a score is recorded under. There is exactly one local player and no
// gamertag service behind XamUserGetName, so every local score carries this
// rather than a per-score name the player was never asked for.
inline constexpr const char* kLocalPlayerName = "WHITTY";

// One setting's stored value. Scalar types (int32, int64, float, double,
// datetime, context) live in `scalar` exactly as the guest's eight-byte union
// held them; wstring and binary settings put their bytes in `payload`.
struct user_setting {
    uint32_t key{0};
    uint64_t scalar{0};
    std::vector<uint8_t> payload;
};

// The profile's settings, backed by a host file.
class profile_store {
public:
    // Where the profile lives on the host. Empty means "not persisted", which
    // is what a unit test wants and what a runtime with nowhere to write has:
    // in that case a write still takes effect for this run, and save() says so
    // rather than claiming to have written a file.
    void set_path(std::string path) { m_path = std::move(path); }
    const std::string& path() const noexcept { return m_path; }
    bool persistent() const noexcept { return !m_path.empty(); }

    // Reads the file at path(). A file that is not there is not an error - a
    // profile with no settings yet is exactly what a first run has, and it
    // reports true with an empty store. False means a file WAS there and could
    // not be understood; a caller must not treat that as "empty", because
    // overwriting it would discard the player's save.
    bool load();
    // True when load() found a file and read it. Distinguishes "first run"
    // from "loaded".
    bool loaded_from_file() const noexcept { return m_loaded_from_file; }

    // Writes every setting back, through a temporary file and a rename so an
    // interrupted save cannot leave a half-written profile. False means the
    // save did NOT happen, and the caller must report a failure to the guest
    // rather than a success.
    bool save() const;

    // The stored value for a key, or nullptr when the profile has never had
    // one. Title id 0 is the profile-wide scope.
    const user_setting* find(uint32_t title_id, uint32_t key) const noexcept;
    void store(uint32_t title_id, const user_setting& value);

    std::size_t setting_count() const noexcept { return m_settings.size(); }
    // How many bytes of payload the store holds, for reporting.
    std::size_t payload_bytes() const noexcept;

    // --- achievements, per title -------------------------------------------
    //
    // Marks one unlocked and persists immediately. True means the state changed
    // AND, if persistent, reached the file - a caller that gets false with
    // `already` clear must NOT tell the guest the write succeeded, or the player
    // loses the achievement at exit with nothing said.
    //
    // An achievement already unlocked keeps its original unlock time and returns
    // false with `already` set. That is not a failure: it is the console's own
    // behaviour, and it is why a title can fire the same unlock every time its
    // condition triggers.
    bool unlock_achievement(uint32_t title_id, uint16_t id, uint64_t when,
                            bool* already = nullptr);
    // A definite answer, never "unknown": an achievement with no record is
    // locked. A read that could not say either way would leave a caller with
    // nothing to branch on.
    bool is_unlocked(uint32_t title_id, uint16_t id) const noexcept;
    uint64_t unlock_time(uint32_t title_id, uint16_t id) const noexcept;
    std::vector<achievement_unlock> unlocks(uint32_t title_id) const;
    std::size_t unlock_count(uint32_t title_id) const noexcept;

    // --- the local high-score table, per title -----------------------------
    //
    // How many scores are kept per leaderboard. A high-score table is a top-N
    // list, not a log: anything past the tail is dropped on insert.
    static constexpr std::size_t kScoresPerBoard = 10;

    // Records a score and persists immediately, with the same contract as
    // unlock_achievement: true means it placed AND the file was written.
    bool add_score(uint32_t title_id, uint32_t leaderboard_id, uint64_t score,
                   uint64_t when, const std::string& name,
                   bool* placed = nullptr);
    // Highest first. An empty table is an answer, not an error.
    std::vector<local_score> scores(uint32_t title_id) const;
    std::vector<local_score> scores(uint32_t title_id,
                                    uint32_t leaderboard_id) const;

    // Throws away everything held in memory without touching the file. Used by
    // tests to prove a reload really reads the file rather than remembering.
    void forget();

private:
    // Keyed by (title id, setting key). std::map rather than a hash map so the
    // file is written in a stable order and two saves of the same state
    // produce the same bytes.
    std::map<std::pair<uint32_t, uint32_t>, user_setting> m_settings;
    // Keyed by title id for the same reason the settings are: so nothing one
    // title earned can be read, listed or overwritten by another.
    std::map<uint32_t, std::vector<achievement_unlock>> m_unlocks;
    std::map<uint32_t, std::vector<local_score>> m_scores;
    std::string m_path;
    bool m_loaded_from_file{false};
};

} // namespace whitty_xenon
