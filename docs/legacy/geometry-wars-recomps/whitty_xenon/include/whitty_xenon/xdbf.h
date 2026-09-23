// xdbf.h - the achievement metadata a title carries inside its own XEX.
//
// Every 360 title embeds an XDBF resource (an "SPA" when it is the one built
// into the executable) holding the definitions of its achievements: the id the
// title later unlocks by, the name and the two descriptions the dashboard shows
// for a locked and an unlocked achievement, the gamerscore and the icon id -
// once per language. That resource is the ONLY authoritative list of "every
// achievement this title has"; there is no API that tells you and no place else
// to look, which is why this parser exists rather than a table of names.
//
// The resource is found in the XEX resource table under the title id written as
// eight uppercase hex digits ("58410800"), exactly as Xenia's
// KernelState::module_xdbf does, and it lives in the mapped image rather than in
// the container, so the image has to be loaded before it can be read.
//
// Everything in the format is big-endian. Three details in it are easy to get
// wrong and each one is silent:
//
//  * The entry table and the free-space table are sized by their CAPACITY
//    fields (entry_count / free_count), not by how many of their slots are
//    used, and the data area starts after both tables at full capacity. Using
//    the used-counts puts every entry's data at the wrong offset.
//  * An entry record is 18 bytes with an unaligned 64-bit id in the middle, so
//    it cannot be read by casting a struct over it.
//  * A string-table entry's length is a BYTE count over UTF-8 text with no
//    terminator - SPA strings are not UTF-16, unlike the strings inside a GPD.
#pragma once

#include <cstddef>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace whitty_xenon {

// Section ids ("namespaces") inside an SPA.
namespace xdbf_spa_section {
inline constexpr uint16_t metadata = 0x0001;
inline constexpr uint16_t image = 0x0002;
inline constexpr uint16_t string_table = 0x0003;
} // namespace xdbf_spa_section

// Entry ids inside the metadata section. Each is a four-character code read as
// a big-endian integer and widened to the entry table's 64-bit id field.
namespace xdbf_metadata_id {
inline constexpr uint64_t xach = 0x58414348ull; // achievement table
inline constexpr uint64_t xstc = 0x58535443ull; // default language
inline constexpr uint64_t xthd = 0x58544844ull; // title header
inline constexpr uint64_t xvc2 = 0x58564332ull; // stats views (leaderboards)
inline constexpr uint64_t xpbm = 0x5850424Dull; // property bag, inside XVC2
} // namespace xdbf_metadata_id

// Language ids, which double as the entry id of that language's string table.
namespace xdbf_language {
inline constexpr uint32_t unknown = 0;
inline constexpr uint32_t english = 1;
inline constexpr uint32_t max = 18; // exclusive
} // namespace xdbf_language

// Achievement flag bits, from Xenia's AchievementFlags. The type occupies the
// low three bits; `achieved` is what marks one earned in a profile.
namespace xdbf_achievement_flag {
inline constexpr uint32_t type_mask = 0x7;
inline constexpr uint32_t show_unachieved = 0x8;
inline constexpr uint32_t achieved_online = 0x10000;
inline constexpr uint32_t achieved = 0x20000;
inline constexpr uint32_t not_achievable = 0x40000;
inline constexpr uint32_t platform_mask = 0x700000;
} // namespace xdbf_achievement_flag

// One achievement as the title defines it. The three string ids are resolved
// against a language's string table; `name`, `description` and
// `locked_description` hold the result for the language that was asked for.
struct xdbf_achievement {
    uint16_t id{0};
    uint16_t name_id{0};
    uint16_t description_id{0};
    uint16_t locked_description_id{0};
    uint32_t image_id{0};
    uint16_t gamerscore{0};
    uint32_t flags{0};

    std::string name;
    std::string description;        // shown once it is unlocked
    std::string locked_description; // shown while it is still locked

    uint32_t type() const noexcept {
        return flags & xdbf_achievement_flag::type_mask;
    }
};

// --- leaderboards ----------------------------------------------------------
//
// A title's leaderboards are declared in its SPA's XVC2 section, as "stats
// views". This is the ONLY place the ids exist: a leaderboard id is not
// derivable from anything else, and a title submitting a score names its board
// by that id. Without this table a board number means nothing and could only be
// invented, which is why the parser is here rather than a mapping written by
// hand.
//
// Layout and field meanings follow Xenia's SpaInfo::LoadStatsViews and
// spa_info.h (StatsViewTableEntry, ViewFieldEntry, SharedViewMetaTableEntry,
// PropertyBagEntry).

// How a leaderboard combines the values a title submits, from Xenia's
// AggregationType. `last` is what an ordinary high-score board uses for its
// ranked column on a per-session board; `max` keeps the best ever seen.
namespace xdbf_aggregation {
inline constexpr uint16_t last = 0x8001;
inline constexpr uint16_t sum = 0x8003;
inline constexpr uint16_t min = 0x8009;
inline constexpr uint16_t max = 0x800B;
} // namespace xdbf_aggregation

// Reserved attribute ids, from Xenia's AttributeIdToName. A column carrying one
// of these is the console's own, not one of the title's stats: `rating` is the
// ranked value a board sorts on.
namespace xdbf_attribute {
inline constexpr uint16_t rank = 0xFFFF;
inline constexpr uint16_t rating = 0xFFFE;
inline constexpr uint16_t gamertag = 0xFFFD;
inline constexpr uint16_t attachment_size = 0xFFFA;
} // namespace xdbf_attribute

// The low nibble of a view's flags says what kind of view it is; only
// `leaderboard` is one a score is submitted to.
namespace xdbf_view_type {
inline constexpr uint32_t mask = 0xF;
inline constexpr uint32_t leaderboard = 0;
} // namespace xdbf_view_type

// One column (or row) of a leaderboard. `property_id` is the XUSER property a
// title sets to fill it in - the link between what the title submits and what
// the board displays.
struct xdbf_view_field {
    uint32_t property_id{0};
    uint32_t flags{0};
    uint16_t attribute_id{0};
    uint16_t string_id{0};
    uint16_t aggregation_type{0};
    uint8_t ordinal{0};
    uint8_t field_type{0};
    std::string name;
};

// One leaderboard, as the title declares it.
struct xdbf_leaderboard {
    uint32_t id{0};
    uint32_t flags{0};
    uint16_t shared_index{0};
    uint16_t string_id{0};
    std::string name;
    std::vector<xdbf_view_field> columns;
    std::vector<xdbf_view_field> rows;

    bool is_leaderboard() const noexcept {
        return (flags & xdbf_view_type::mask) == xdbf_view_type::leaderboard;
    }
    // The column a board ranks on: the one carrying the reserved `rating`
    // attribute, or failing that the first column the title defines. Returns
    // nullptr only when the board declares no columns at all.
    const xdbf_view_field* ranked_column() const noexcept;
};

// A parsed XDBF entry: where its blob is and what it is called.
struct xdbf_entry {
    uint16_t section{0};
    uint64_t id{0};
    uint32_t offset{0}; // relative to the data area, not to the file
    uint32_t size{0};
};

// A parsed SPA resource.
class xdbf_file {
public:
    // Parses the whole resource. Returns false with `error` set when the data
    // is not an XDBF or a table runs past the end of the buffer; a resource
    // with no achievement section is NOT an error - a title may define none -
    // and reports true with an empty achievement list.
    bool parse(const uint8_t* data, std::size_t size, std::string& error);

    bool parsed() const noexcept { return m_parsed; }

    // Achievements in the order the title lists them, with strings resolved in
    // `language`, falling back to the resource's own default language and then
    // to English when a string is missing.
    const std::vector<xdbf_achievement>& achievements() const noexcept {
        return m_achievements;
    }
    // Sum of every achievement's gamerscore - the title's total.
    uint32_t total_gamerscore() const noexcept;

    // Every stats view the title declares, in the order it declares them. A
    // title with no XVC2 section has none, which is not an error.
    const std::vector<xdbf_leaderboard>& leaderboards() const noexcept {
        return m_leaderboards;
    }
    // The board with that id, or nullptr. This is what turns a submitted board
    // id into something with a name, rather than a bare number.
    const xdbf_leaderboard* leaderboard(uint32_t id) const noexcept;

    // The title id out of the XTHD section, or 0 when there is none.
    uint32_t title_id() const noexcept { return m_title_id; }
    // The default language out of the XSTC section, or 0 when there is none.
    uint32_t default_language() const noexcept { return m_default_language; }

    const std::vector<xdbf_entry>& entries() const noexcept {
        return m_entries;
    }
    // The blob for one entry, or nullptr when there is no such entry. `size`
    // receives its length.
    const uint8_t* entry_data(uint16_t section, uint64_t id,
                              uint32_t& size) const noexcept;

    // A single string out of one language's table. Empty when absent.
    std::string string(uint32_t language, uint16_t id) const;

    // Re-resolves every achievement's strings in the requested language. Called
    // by parse() with the resource's default language; call it again to switch.
    void resolve_strings(uint32_t language);

private:
    bool m_parsed{false};
    std::vector<uint8_t> m_data;
    std::size_t m_data_start{0};
    std::vector<xdbf_entry> m_entries;
    std::vector<xdbf_achievement> m_achievements;
    std::vector<xdbf_leaderboard> m_leaderboards;
    // language -> (string id -> text)
    std::map<uint32_t, std::map<uint16_t, std::string>> m_strings;
    uint32_t m_title_id{0};
    uint32_t m_default_language{0};
};

// Finds the SPA resource inside a loaded title and parses it. The resource is
// named after the title id in eight uppercase hex digits. `image` points at the
// mapped guest image and `image_base` is the address it is mapped at, so a
// resource's guest address can be turned into an offset. Returns false with
// `error` set when the resource is absent or unreadable.
//
// `language` is the language to resolve the strings in - the language the console
// is CONFIGURED for, which is what a title's own dashboard would use, not
// whichever one the resource lists as its default. Those differ: a Japanese
// release's default is Japanese while the machine is set to English. Zero means
// "use the resource's own default".
struct xex_info;
bool load_title_spa(const xex_info& info, const uint8_t* image,
                    std::size_t image_size, uint32_t image_base,
                    xdbf_file& out, std::string& error,
                    uint32_t language = 0);

} // namespace whitty_xenon
