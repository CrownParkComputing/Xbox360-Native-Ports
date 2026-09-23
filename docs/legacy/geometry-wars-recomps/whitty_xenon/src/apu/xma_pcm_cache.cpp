#include "whitty_xenon/apu/xma_pcm_cache.h"

#include <cstdio>
#include <cstring>
#include <sys/stat.h>

namespace whitty_xenon::apu {

uint64_t xma_pcm_hash(const uint8_t* data, std::size_t size,
                      uint32_t sample_rate, uint32_t channels) noexcept {
    // FNV-1a 64-bit.
    uint64_t hash = 1469598103934665603ull;
    const auto mix = [&](uint64_t byte) {
        hash ^= byte;
        hash *= 1099511628211ull;
    };
    for (std::size_t i = 0; i < size; ++i) mix(data[i]);
    mix(sample_rate & 0xFF); mix((sample_rate >> 8) & 0xFF);
    mix((sample_rate >> 16) & 0xFF); mix((sample_rate >> 24) & 0xFF);
    mix(channels & 0xFF);
    return hash;
}

namespace {

bool directory_exists(const std::string& path) {
    struct stat st{};
    return ::stat(path.c_str(), &st) == 0 && (st.st_mode & S_IFDIR) != 0;
}

bool make_directory(const std::string& path) {
    if (directory_exists(path)) return true;
    return ::mkdir(path.c_str(), 0755) == 0;
}

} // namespace

bool xma_pcm_cache::load(const std::string& dir, std::string& error) {
    m_entries.clear();
    m_blob.clear();

    const std::string manifest_path = dir + "/manifest.tsv";
    const std::string blob_path = dir + "/pcm.blob";

    std::FILE* manifest = std::fopen(manifest_path.c_str(), "rb");
    if (manifest == nullptr) {
        // No cache yet is a normal, silent state - not an error the caller
        // needs to report.
        return false;
    }
    std::FILE* blob = std::fopen(blob_path.c_str(), "rb");
    if (blob == nullptr) {
        std::fclose(manifest);
        error = "manifest.tsv exists but pcm.blob does not: " + blob_path;
        return false;
    }

    std::fseek(blob, 0, SEEK_END);
    const long blob_size = std::ftell(blob);
    std::fseek(blob, 0, SEEK_SET);
    if (blob_size > 0) {
        m_blob.resize(static_cast<std::size_t>(blob_size) / sizeof(int16_t));
        if (std::fread(m_blob.data(), 1, static_cast<std::size_t>(blob_size),
                       blob) != static_cast<std::size_t>(blob_size)) {
            std::fclose(manifest);
            std::fclose(blob);
            error = "short read on " + blob_path;
            return false;
        }
    }
    std::fclose(blob);

    char line[256];
    while (std::fgets(line, sizeof(line), manifest) != nullptr) {
        unsigned long long hash_hex = 0;
        unsigned long long byte_offset = 0, sample_count = 0;
        unsigned rate = 0, channels = 0;
        // hash  rate  channels  sample_count  byte_offset
        if (std::sscanf(line, "%llx %u %u %llu %llu", &hash_hex, &rate,
                        &channels, &sample_count, &byte_offset) != 5)
            continue;
        entry e;
        e.offset = static_cast<std::size_t>(byte_offset / sizeof(int16_t));
        e.sample_count = static_cast<std::size_t>(sample_count);
        m_entries[static_cast<uint64_t>(hash_hex)] = e;
    }
    std::fclose(manifest);
    return true;
}

bool xma_pcm_cache::lookup(const uint8_t* data, std::size_t size,
                           uint32_t sample_rate, uint32_t channels,
                           std::vector<int16_t>& out) const {
    if (m_entries.empty()) return false;
    const uint64_t hash = xma_pcm_hash(data, size, sample_rate, channels);
    const auto it = m_entries.find(hash);
    if (it == m_entries.end()) return false;
    const entry& e = it->second;
    if (e.offset + e.sample_count > m_blob.size()) return false; // corrupt cache
    out.insert(out.end(), m_blob.begin() + static_cast<std::ptrdiff_t>(e.offset),
              m_blob.begin() +
                  static_cast<std::ptrdiff_t>(e.offset + e.sample_count));
    return true;
}

bool xma_pcm_bake_writer::open(const std::string& dir, std::string& error) {
    if (!make_directory(dir)) {
        error = "cannot create " + dir;
        return false;
    }
    m_dir = dir;
    m_manifest_path = dir + "/manifest.tsv";
    m_blob_path = dir + "/pcm.blob";
    m_known.clear();
    m_blob_bytes = 0;

    // Read what is already cached, both to avoid duplicate writes and to
    // learn where the blob currently ends (new entries append after it).
    if (std::FILE* manifest = std::fopen(m_manifest_path.c_str(), "rb")) {
        char line[256];
        while (std::fgets(line, sizeof(line), manifest) != nullptr) {
            unsigned long long hash_hex = 0, byte_offset = 0, sample_count = 0;
            unsigned rate = 0, channels = 0;
            if (std::sscanf(line, "%llx %u %u %llu %llu", &hash_hex, &rate,
                            &channels, &sample_count, &byte_offset) != 5)
                continue;
            m_known[static_cast<uint64_t>(hash_hex)] = true;
            const std::size_t end =
                static_cast<std::size_t>(byte_offset) +
                static_cast<std::size_t>(sample_count) * sizeof(int16_t);
            if (end > m_blob_bytes) m_blob_bytes = end;
        }
        std::fclose(manifest);
    }
    return true;
}

bool xma_pcm_bake_writer::store(const uint8_t* data, std::size_t size,
                                uint32_t sample_rate, uint32_t channels,
                                const std::vector<int16_t>& pcm) {
    if (m_dir.empty() || pcm.empty()) return false;
    const uint64_t hash = xma_pcm_hash(data, size, sample_rate, channels);
    if (m_known.find(hash) != m_known.end()) return false; // already cached

    std::FILE* blob = std::fopen(m_blob_path.c_str(), "ab");
    if (blob == nullptr) return false;
    const std::size_t offset = m_blob_bytes;
    const std::size_t bytes = pcm.size() * sizeof(int16_t);
    if (std::fwrite(pcm.data(), 1, bytes, blob) != bytes) {
        std::fclose(blob);
        return false;
    }
    std::fclose(blob);
    m_blob_bytes += bytes;

    std::FILE* manifest = std::fopen(m_manifest_path.c_str(), "ab");
    if (manifest == nullptr) return false;
    std::fprintf(manifest, "%016llx %u %u %llu %llu\n",
                static_cast<unsigned long long>(hash), sample_rate, channels,
                static_cast<unsigned long long>(pcm.size()),
                static_cast<unsigned long long>(offset));
    std::fclose(manifest);

    m_known[hash] = true;
    return true;
}

namespace {
xma_pcm_cache* g_cache = nullptr;
xma_pcm_bake_writer* g_bake_writer = nullptr;
} // namespace

void install_xma_pcm_cache(xma_pcm_cache* cache) noexcept { g_cache = cache; }
xma_pcm_cache* active_xma_pcm_cache() noexcept { return g_cache; }
void install_xma_pcm_bake_writer(xma_pcm_bake_writer* writer) noexcept {
    g_bake_writer = writer;
}
xma_pcm_bake_writer* active_xma_pcm_bake_writer() noexcept {
    return g_bake_writer;
}

} // namespace whitty_xenon::apu
