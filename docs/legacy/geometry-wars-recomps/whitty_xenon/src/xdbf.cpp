#include "whitty_xenon/xdbf.h"

#include "whitty_xenon/xex.h"

#include <cstdio>
#include <cstring>

namespace whitty_xenon {
namespace {

constexpr uint32_t kXdbfMagic = 0x58444246;   // "XDBF"
constexpr uint32_t kXachMagic = 0x58414348;   // "XACH"
constexpr uint32_t kXstrMagic = 0x58535452;   // "XSTR"
constexpr uint32_t kXvc2Magic = 0x58564332;   // "XVC2"
constexpr uint32_t kXpbmMagic = 0x5850424D;   // "XPBM"

constexpr std::size_t kHeaderSize = 24;
constexpr std::size_t kEntrySize = 18;
constexpr std::size_t kFreeEntrySize = 8;
// XdbfSectionHeaderEx: magic, version, size, then a 16-bit count. Packed, so
// 14 bytes and not 16 - a struct cast over it would read the count from the
// wrong place.
constexpr std::size_t kSectionHeaderExSize = 14;
constexpr std::size_t kSectionHeaderSize = 12;
// AchievementTableEntry, 0x24 bytes.
constexpr std::size_t kAchievementSize = 0x24;
// XVC2's tables, sizes from Xenia's spa_info.h static_assert_size lines.
constexpr std::size_t kSharedViewMetaSize = 0x0C; // SharedViewMetaTableEntry
constexpr std::size_t kViewFieldSize = 0x20;      // ViewFieldEntry
constexpr std::size_t kStatsViewSize = 0x10;      // StatsViewTableEntry

uint16_t be16(const uint8_t* p) noexcept {
    return static_cast<uint16_t>((static_cast<uint16_t>(p[0]) << 8) | p[1]);
}
uint32_t be32(const uint8_t* p) noexcept {
    return (static_cast<uint32_t>(p[0]) << 24) |
           (static_cast<uint32_t>(p[1]) << 16) |
           (static_cast<uint32_t>(p[2]) << 8) | static_cast<uint32_t>(p[3]);
}
uint64_t be64(const uint8_t* p) noexcept {
    uint64_t value = 0;
    for (int i = 0; i < 8; ++i)
        value = (value << 8) | static_cast<uint64_t>(p[i]);
    return value;
}

} // namespace

bool xdbf_file::parse(const uint8_t* data, std::size_t size,
                      std::string& error) {
    m_parsed = false;
    m_data.clear();
    m_entries.clear();
    m_achievements.clear();
    m_strings.clear();
    m_title_id = 0;
    m_default_language = 0;

    if (data == nullptr || size < kHeaderSize) {
        error = "XDBF resource is smaller than its header";
        return false;
    }
    if (be32(data) != kXdbfMagic) {
        error = "not an XDBF resource (bad magic)";
        return false;
    }
    // The two capacity fields, not the used-counts that follow them. The data
    // area begins after both tables at full capacity, so reading the used
    // counts here places every blob at the wrong offset - and the entries at
    // the start of the table would still look plausible.
    const uint32_t entry_capacity = be32(data + 0x08);
    const uint32_t entry_used = be32(data + 0x0C);
    const uint32_t free_capacity = be32(data + 0x10);

    if (entry_used > entry_capacity) {
        error = "XDBF entry table claims more entries than it has slots";
        return false;
    }
    // Guard the arithmetic before it is used as a length: a corrupt capacity
    // would otherwise be multiplied into an enormous offset.
    const std::size_t entry_bytes =
        static_cast<std::size_t>(entry_capacity) * kEntrySize;
    const std::size_t free_bytes =
        static_cast<std::size_t>(free_capacity) * kFreeEntrySize;
    if (entry_bytes > size || free_bytes > size ||
        kHeaderSize + entry_bytes + free_bytes > size) {
        error = "XDBF tables run past the end of the resource";
        return false;
    }
    m_data_start = kHeaderSize + entry_bytes + free_bytes;

    m_data.assign(data, data + size);
    const uint8_t* table = m_data.data() + kHeaderSize;
    for (uint32_t i = 0; i < entry_used; ++i) {
        const uint8_t* record = table + static_cast<std::size_t>(i) * kEntrySize;
        xdbf_entry entry;
        entry.section = be16(record + 0x00);
        entry.id = be64(record + 0x02); // unaligned by design
        entry.offset = be32(record + 0x0A);
        entry.size = be32(record + 0x0E);
        // An entry whose blob leaves the resource is dropped rather than
        // trusted: the alternative is a read past the end of the buffer.
        const std::size_t at = m_data_start + entry.offset;
        if (at > size || entry.size > size - at) continue;
        m_entries.push_back(entry);
    }

    // The title header, when present.
    uint32_t xthd_size = 0;
    if (const uint8_t* xthd = entry_data(xdbf_spa_section::metadata,
                                        xdbf_metadata_id::xthd, xthd_size)) {
        if (xthd_size >= kSectionHeaderSize + 4)
            m_title_id = be32(xthd + kSectionHeaderSize);
    }
    // The default language, from XSTC. Its one field sits after the 12-byte
    // section header.
    uint32_t xstc_size = 0;
    if (const uint8_t* xstc = entry_data(xdbf_spa_section::metadata,
                                        xdbf_metadata_id::xstc, xstc_size)) {
        if (xstc_size >= kSectionHeaderSize + 4)
            m_default_language = be32(xstc + kSectionHeaderSize);
    }

    // Every language's string table. The entry id IS the language id.
    for (uint32_t language = 1; language < xdbf_language::max; ++language) {
        uint32_t table_size = 0;
        const uint8_t* strings = entry_data(xdbf_spa_section::string_table,
                                           language, table_size);
        if (strings == nullptr || table_size < kSectionHeaderExSize) continue;
        if (be32(strings) != kXstrMagic) continue;
        const uint32_t count = be16(strings + 12);
        std::size_t at = kSectionHeaderExSize;
        std::map<uint16_t, std::string>& into = m_strings[language];
        for (uint32_t i = 0; i < count; ++i) {
            if (at + 4 > table_size) break;
            const uint16_t id = be16(strings + at);
            const uint16_t length = be16(strings + at + 2);
            at += 4;
            if (at + length > table_size) break;
            // Byte count over UTF-8 text, no terminator.
            into[id] = std::string(reinterpret_cast<const char*>(strings + at),
                                   length);
            at += length;
        }
    }

    // The achievement table.
    uint32_t xach_size = 0;
    const uint8_t* xach = entry_data(xdbf_spa_section::metadata,
                                     xdbf_metadata_id::xach, xach_size);
    if (xach != nullptr && xach_size >= kSectionHeaderExSize &&
        be32(xach) == kXachMagic) {
        const uint32_t count = be16(xach + 12);
        for (uint32_t i = 0; i < count; ++i) {
            const std::size_t at =
                kSectionHeaderExSize + static_cast<std::size_t>(i) *
                                           kAchievementSize;
            if (at + kAchievementSize > xach_size) break;
            const uint8_t* record = xach + at;
            xdbf_achievement achievement;
            achievement.id = be16(record + 0x00);
            achievement.name_id = be16(record + 0x02);
            achievement.description_id = be16(record + 0x04);
            achievement.locked_description_id = be16(record + 0x06);
            achievement.image_id = be32(record + 0x08);
            achievement.gamerscore = be16(record + 0x0C);
            achievement.flags = be32(record + 0x10);
            m_achievements.push_back(achievement);
        }
    }

    // The stats views - the title's leaderboards. Walked exactly as Xenia's
    // SpaInfo::LoadStatsViews does, with one difference: every step is bounds
    // checked instead of asserted, and a table that does not fit abandons the
    // list rather than reading past the blob. Xenia can assert because it runs
    // under a developer; here a malformed SPA is a wild read.
    //
    // The section is two tables back to back. First the SHARED views, each one
    // a column list, a row list and a property bag, and each of a different
    // length - so they can only be found by walking, not indexed. Then the view
    // table proper, whose entries name a shared view by index. Getting the walk
    // wrong lands the second table's offset inside the first one's data, where
    // it still parses into plausible-looking ids.
    uint32_t xvc2_size = 0;
    const uint8_t* xvc2 = entry_data(xdbf_spa_section::metadata,
                                     xdbf_metadata_id::xvc2, xvc2_size);
    if (xvc2 != nullptr && xvc2_size >= kSectionHeaderSize + 2 &&
        be32(xvc2) == kXvc2Magic) {
        // One shared view: the columns and rows a leaderboard displays.
        struct shared_view {
            std::vector<xdbf_view_field> columns;
            std::vector<xdbf_view_field> rows;
        };
        const auto read_field = [](const uint8_t* record) {
            xdbf_view_field field;
            // ViewFieldEntry: size, property_id, flags, attribute_id,
            // string_id, aggregation_type, ordinal, field_type, format_type,
            // then two unused words.
            field.property_id = be32(record + 0x04);
            field.flags = be32(record + 0x08);
            field.attribute_id = be16(record + 0x0C);
            field.string_id = be16(record + 0x0E);
            field.aggregation_type = be16(record + 0x10);
            field.ordinal = record[0x12];
            field.field_type = record[0x13];
            return field;
        };

        std::vector<shared_view> shared;
        std::size_t at = kSectionHeaderSize;
        const uint32_t shared_count = be16(xvc2 + at);
        at += 2;
        bool truncated = false;
        for (uint32_t i = 0; i < shared_count && !truncated; ++i) {
            if (at + kSharedViewMetaSize > xvc2_size) { truncated = true; break; }
            const uint32_t columns = be16(xvc2 + at);
            const uint32_t rows = be16(xvc2 + at + 2);
            at += kSharedViewMetaSize;
            const std::size_t fields_bytes =
                (static_cast<std::size_t>(columns) + rows) * kViewFieldSize;
            if (fields_bytes > xvc2_size || at + fields_bytes > xvc2_size) {
                truncated = true;
                break;
            }
            shared_view view;
            for (uint32_t column = 0; column < columns; ++column)
                view.columns.push_back(
                    read_field(xvc2 + at + column * kViewFieldSize));
            for (uint32_t row = 0; row < rows; ++row)
                view.rows.push_back(read_field(
                    xvc2 + at + (columns + row) * kViewFieldSize));
            shared.push_back(std::move(view));
            at += fields_bytes;

            // The property bag closing this shared view. Its length is what
            // says where the next shared view begins, so a bag that does not
            // announce a sane size stops the walk instead of guessing.
            if (at + kSectionHeaderSize > xvc2_size ||
                be32(xvc2 + at) != kXpbmMagic) {
                truncated = true;
                break;
            }
            // The section header's size field is measured from just after the
            // magic, so the whole section is four bytes longer than it says.
            const uint32_t bag_bytes = be32(xvc2 + at + 0x08) + 4u;
            if (bag_bytes < kSectionHeaderSize ||
                bag_bytes > xvc2_size - at) {
                truncated = true;
                break;
            }
            at += bag_bytes;
        }

        if (!truncated && at + 2 <= xvc2_size) {
            const uint32_t view_count = be16(xvc2 + at);
            at += 2;
            for (uint32_t i = 0; i < view_count; ++i) {
                if (at + kStatsViewSize > xvc2_size) break;
                const uint8_t* record = xvc2 + at;
                xdbf_leaderboard board;
                board.id = be32(record + 0x00);
                board.flags = be32(record + 0x04);
                board.shared_index = be16(record + 0x08);
                board.string_id = be16(record + 0x0A);
                if (board.shared_index < shared.size()) {
                    board.columns = shared[board.shared_index].columns;
                    board.rows = shared[board.shared_index].rows;
                }
                m_leaderboards.push_back(std::move(board));
                at += kStatsViewSize;
            }
        }
    }

    resolve_strings(m_default_language != 0 ? m_default_language
                                            : xdbf_language::english);
    m_parsed = true;
    return true;
}

const xdbf_view_field* xdbf_leaderboard::ranked_column() const noexcept {
    // The console's own "rating" column is the value a board sorts on, and a
    // title that declares one means it. Only when there is none does the first
    // column stand in - a board with columns always has something to rank by,
    // and answering "no column" for one that has several would lose a score
    // that was submitted correctly.
    for (const xdbf_view_field& column : columns)
        if (column.attribute_id == xdbf_attribute::rating) return &column;
    return columns.empty() ? nullptr : &columns.front();
}

const xdbf_leaderboard* xdbf_file::leaderboard(uint32_t id) const noexcept {
    for (const xdbf_leaderboard& board : m_leaderboards)
        if (board.id == id) return &board;
    return nullptr;
}

const uint8_t* xdbf_file::entry_data(uint16_t section, uint64_t id,
                                     uint32_t& size) const noexcept {
    for (const xdbf_entry& entry : m_entries) {
        if (entry.section != section || entry.id != id) continue;
        size = entry.size;
        return m_data.data() + m_data_start + entry.offset;
    }
    size = 0;
    return nullptr;
}

std::string xdbf_file::string(uint32_t language, uint16_t id) const {
    const auto table = m_strings.find(language);
    if (table == m_strings.end()) return std::string();
    const auto found = table->second.find(id);
    if (found == table->second.end()) return std::string();
    return found->second;
}

void xdbf_file::resolve_strings(uint32_t language) {
    // A missing string falls back to the resource's default language and then
    // to English, rather than being left blank: a title localised into a
    // language whose table is incomplete would otherwise show empty rows.
    const auto pick = [&](uint16_t id) {
        if (id == 0) return std::string();
        std::string text = string(language, id);
        if (text.empty() && m_default_language != 0)
            text = string(m_default_language, id);
        if (text.empty()) text = string(xdbf_language::english, id);
        return text;
    };
    for (xdbf_achievement& achievement : m_achievements) {
        achievement.name = pick(achievement.name_id);
        achievement.description = pick(achievement.description_id);
        achievement.locked_description = pick(achievement.locked_description_id);
    }
    for (xdbf_leaderboard& board : m_leaderboards) {
        board.name = pick(board.string_id);
        for (xdbf_view_field& column : board.columns)
            column.name = pick(column.string_id);
        for (xdbf_view_field& row : board.rows) row.name = pick(row.string_id);
    }
}

uint32_t xdbf_file::total_gamerscore() const noexcept {
    uint32_t total = 0;
    for (const xdbf_achievement& achievement : m_achievements)
        total += achievement.gamerscore;
    return total;
}

bool load_title_spa(const xex_info& info, const uint8_t* image,
                    std::size_t image_size, uint32_t image_base,
                    xdbf_file& out, std::string& error, uint32_t language) {
    // The resource is named after the title id in eight uppercase hex digits.
    char wanted[16];
    std::snprintf(wanted, sizeof(wanted), "%08X", info.title_id);

    for (const xex_resource& resource : info.resources) {
        if (resource.name != wanted) continue;
        if (resource.address < image_base) {
            error = "SPA resource lies below the image base";
            return false;
        }
        const std::size_t at = resource.address - image_base;
        if (at >= image_size || resource.size > image_size - at) {
            error = "SPA resource runs past the end of the image";
            return false;
        }
        if (!out.parse(image + at, resource.size, error)) return false;
        if (language != 0) out.resolve_strings(language);
        return true;
    }
    error = std::string("no resource named ") + wanted;
    return false;
}

} // namespace whitty_xenon
