#include "whitty_xenon/memory.h"

#include <sys/mman.h>
#include <unistd.h>

#include <cstdio>
#include <cstring>

namespace whitty_xenon {
namespace {

constexpr uint64_t kPageCount = kAddressSpaceSize / kPageSize;
constexpr std::size_t kBitmapBytes = static_cast<std::size_t>(kPageCount / 8);

uint32_t page_index(uint32_t address) noexcept { return address / kPageSize; }

// Round a byte range out to the pages that contain it. Returns false when the
// range would run past the end of the address space.
bool page_range(uint32_t address, uint32_t size, uint32_t& first,
                uint32_t& last) noexcept {
    if (size == 0) return false;
    const uint64_t end = static_cast<uint64_t>(address) + size;
    if (end > kAddressSpaceSize) return false;
    first = page_index(address);
    last = page_index(static_cast<uint32_t>(end - 1));
    return true;
}

} // namespace

// The host's own page size, which is NOT the console's.
//
// kPageSize is the guest's commit granularity - the console's small page, 4 KiB
// - and this file used it raw as the argument to mprotect and as an mmap file
// offset. That is correct only while the host agrees, and until recently every
// host did. Android does not: arm64 devices from the Pixel 9 class onwards ship
// 16 KiB-page kernels, and Google Play requires new submissions to support
// them. On such a kernel mprotect and mmap reject anything not aligned to
// 16 KiB with EINVAL, so a runtime that assumes 4 KiB does not start at all -
// which is at least a loud failure, and this makes it a specific one.
//
// Read once. sysconf is a function call and commit() is on the allocation path.
std::size_t host_page_size() noexcept {
    static const std::size_t size = [] {
        const long value = ::sysconf(_SC_PAGESIZE);
        return value > 0 ? static_cast<std::size_t>(value)
                         : static_cast<std::size_t>(kPageSize);
    }();
    return size;
}

namespace {

// The granularity mprotect has to be given: the larger of the two page sizes.
// On a 4 KiB host this is kPageSize and every rounding below is a no-op, so
// the desktop path is unchanged byte for byte.
uint64_t protect_granularity() noexcept {
    const uint64_t host = host_page_size();
    return host > kPageSize ? host : kPageSize;
}

} // namespace

guest_memory::~guest_memory() { shutdown(); }

// Make a guest byte range readable and writable, at whatever granularity this
// host's mprotect insists on.
//
// On a 4 KiB host the rounding is a no-op and this is the call that was here
// before. On a larger-page host it makes the whole host page containing the
// range accessible, which reaches a little further than the guest asked for.
// That does NOT change what the runtime believes is committed: the bitmap
// records the pages the caller named and nothing else, so committed() and
// host() answer exactly as they did. What it costs is that a guest read of an
// uncommitted page adjacent to a committed one no longer faults on such a host
// - a loss of diagnosis, not of correctness, and stated so nobody later reads
// a missing fault as evidence the address was valid.
bool guest_memory::protect_committed(uint64_t offset, uint64_t length) noexcept {
    if (length == 0) return true;
    const uint64_t granularity = protect_granularity();
    const uint64_t start = offset & ~(granularity - 1);
    uint64_t end = offset + length;
    end = (end + granularity - 1) & ~(granularity - 1);
    if (end > kAddressSpaceSize) end = kAddressSpaceSize;
    if (end <= start) return true;
    return ::mprotect(m_base + start, static_cast<std::size_t>(end - start),
                      PROT_READ | PROT_WRITE) == 0;
}

bool guest_memory::initialize(std::string& error) {
    if (m_base) return true;
    // Reserve without committing: PROT_NONE + MAP_NORESERVE means the kernel
    // charges us nothing until a page is actually made accessible.
    void* mapping = ::mmap(nullptr, kAddressSpaceSize, PROT_NONE,
                           MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (mapping == MAP_FAILED) {
        error = "could not reserve the 4 GiB guest address space";
        return false;
    }
    m_base = static_cast<uint8_t*>(mapping);

    // Whether this host can express the console's physical windows at all.
    //
    // The 4 KiB window starts 0x1000 into physical memory while the other two
    // start at 0, so the three aliases differ by a 0x1000 file offset at
    // guest addresses that are all congruent modulo any host page size >= 8 KiB.
    // mmap requires both the address and the file offset to be page-aligned, so
    // on a 16 KiB-page kernel there is no pair of mappings that satisfies both -
    // this is arithmetic, not a missing feature, and no amount of work here
    // fixes it. What would fix it is changing how the 0xE0000000 window is
    // reached at all, which means translating guest pointers rather than adding
    // a base to them, and the recompiled CPU adds a base.
    //
    // Said here, once, and precisely - because the alternative is mapping the
    // window flat and being wrong by one page, which is invisible until a title
    // writes through one view and reads through another. Geometry Wars' ring
    // read-pointer write-back is exactly that.
    if (host_page_size() > kSmallPageWindowOffset) {
        char detail[256];
        std::snprintf(
            detail, sizeof(detail),
            "this host uses %zu-byte pages; the console's 4 KiB physical "
            "window starts 0x%X into physical memory, and an mmap offset that "
            "small cannot be expressed at that page size",
            host_page_size(), kSmallPageWindowOffset);
        error = detail;
        shutdown();
        return false;
    }

    // Physical memory is backed by a shared object so it can be mapped at all
    // three alias bases at once; a write through any one of them then lands in
    // the same page, which is what the hardware does. The object is sparse, so
    // reserving the full 512 MiB costs nothing until pages are touched.
    m_physical_fd = ::memfd_create("whitty_xenon_physical", 0);
    if (m_physical_fd < 0 ||
        ::ftruncate(m_physical_fd, kPhysicalAliasSize) != 0) {
        error = "could not create the physical memory object";
        shutdown();
        return false;
    }
    for (uint32_t alias : kPhysicalAliasBases) {
        // The 4 KiB window starts 0x1000 into physical memory rather than at
        // its beginning, so it maps from that offset and reaches 0x1000 less of
        // it. Mapping it flat like the other two would make 0xE0000000 and
        // 0xA0000000 name the same byte, which is one page away from what the
        // console - and the title's own address arithmetic - means by each.
        const uint32_t window_offset = physical_window_offset(alias);
        // PROT_NONE, so an alias page stays unreachable until it is committed
        // exactly like the rest of the address space.
        if (::mmap(m_base + alias, kPhysicalAliasSize - window_offset,
                   PROT_NONE, MAP_SHARED | MAP_FIXED, m_physical_fd,
                   window_offset) == MAP_FAILED) {
            error = "could not map a physical memory alias";
            shutdown();
            return false;
        }
    }
    m_commit_bits.assign(kBitmapBytes, '\0');
    return true;
}

void guest_memory::shutdown() {
    if (m_base) {
        ::munmap(m_base, kAddressSpaceSize);
        m_base = nullptr;
    }
    if (m_physical_fd >= 0) {
        ::close(m_physical_fd);
        m_physical_fd = -1;
    }
    m_commit_bits.clear();
}

bool guest_memory::commit(uint32_t address, uint32_t size, std::string& error) {
    const std::lock_guard<std::mutex> lock(m_commit_mutex);
    if (!m_base) {
        error = "guest memory is not initialized";
        return false;
    }
    uint32_t first = 0;
    uint32_t last = 0;
    if (!page_range(address, size, first, last)) {
        error = "commit range is empty or outside the guest address space";
        return false;
    }
    const uint64_t offset = static_cast<uint64_t>(first) * kPageSize;
    const uint64_t length =
        (static_cast<uint64_t>(last) - first + 1) * kPageSize;

    // Committing physical memory commits it in all three windows: they are the
    // same pages, and a title is free to hand out an address through one and
    // read it back through another.
    if (is_physical_alias(address)) {
        const uint32_t physical =
            physical_address_of(static_cast<uint32_t>(offset));
        if (static_cast<uint64_t>(physical) + length > kPhysicalAliasSize) {
            error = "commit range runs past the end of physical memory";
            return false;
        }
        for (uint32_t alias : kPhysicalAliasBases) {
            // Physical memory's first page has no 4 KiB-window address, so a
            // range starting below 0x1000 is committed in that window only from
            // wherever it does become reachable. Skipping the whole range would
            // leave committed physical memory unreachable through one of its
            // windows; failing would refuse a commit the console allows.
            const uint32_t window_offset = physical_window_offset(alias);
            const uint32_t alias_physical =
                physical < window_offset ? window_offset : physical;
            const uint32_t unreachable = alias_physical - physical;
            if (unreachable >= length) continue;
            const uint64_t alias_length = length - unreachable;
            const uint32_t alias_address =
                physical_in_window(alias_physical, alias);
            if (!protect_committed(alias_address, alias_length)) {
                error = "could not commit physical guest pages";
                return false;
            }
            const uint32_t alias_first = page_index(alias_address);
            const uint32_t alias_pages =
                static_cast<uint32_t>(alias_length / kPageSize);
            for (uint32_t page = 0; page < alias_pages; ++page) {
                const uint32_t index = alias_first + page;
                m_commit_bits[index / 8] |=
                    static_cast<char>(1u << (index % 8));
            }
        }
        return true;
    }

    // mprotect is idempotent, so overlapping commits are safe and cheap.
    if (!protect_committed(offset, length)) {
        error = "could not commit guest pages";
        return false;
    }
    for (uint32_t page = first; page <= last; ++page)
        m_commit_bits[page / 8] |= static_cast<char>(1u << (page % 8));
    return true;
}

bool guest_memory::committed(uint32_t address, uint32_t size) const noexcept {
    const std::lock_guard<std::mutex> lock(m_commit_mutex);
    if (!m_base) return false;
    uint32_t first = 0;
    uint32_t last = 0;
    if (!page_range(address, size, first, last)) return false;
    for (uint32_t page = first; page <= last; ++page) {
        if ((m_commit_bits[page / 8] & static_cast<char>(1u << (page % 8))) == 0)
            return false;
    }
    return true;
}

void* guest_memory::host(uint32_t address, uint32_t size) noexcept {
    if (!committed(address, size)) return nullptr;
    return m_base + address;
}

const void* guest_memory::host(uint32_t address, uint32_t size) const noexcept {
    if (!committed(address, size)) return nullptr;
    return m_base + address;
}

// Reads and writes go through memcpy so unaligned guest accesses stay defined,
// and through the builtin byte swaps so the compiler emits a single bswap.
uint8_t guest_memory::read_u8(uint32_t address) const noexcept {
    uint8_t value = 0;
    std::memcpy(&value, m_base + address, sizeof(value));
    return value;
}

uint16_t guest_memory::read_u16(uint32_t address) const noexcept {
    uint16_t value = 0;
    std::memcpy(&value, m_base + address, sizeof(value));
    return __builtin_bswap16(value);
}

uint32_t guest_memory::read_u32(uint32_t address) const noexcept {
    uint32_t value = 0;
    std::memcpy(&value, m_base + address, sizeof(value));
    return __builtin_bswap32(value);
}

uint64_t guest_memory::read_u64(uint32_t address) const noexcept {
    uint64_t value = 0;
    std::memcpy(&value, m_base + address, sizeof(value));
    return __builtin_bswap64(value);
}

float guest_memory::read_f32(uint32_t address) const noexcept {
    const uint32_t bits = read_u32(address);
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

double guest_memory::read_f64(uint32_t address) const noexcept {
    const uint64_t bits = read_u64(address);
    double value = 0.0;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

void guest_memory::write_u8(uint32_t address, uint8_t value) noexcept {
    std::memcpy(m_base + address, &value, sizeof(value));
}

void guest_memory::write_u16(uint32_t address, uint16_t value) noexcept {
    const uint16_t swapped = __builtin_bswap16(value);
    std::memcpy(m_base + address, &swapped, sizeof(swapped));
}

void guest_memory::write_u32(uint32_t address, uint32_t value) noexcept {
    const uint32_t swapped = __builtin_bswap32(value);
    std::memcpy(m_base + address, &swapped, sizeof(swapped));
}

void guest_memory::write_u64(uint32_t address, uint64_t value) noexcept {
    const uint64_t swapped = __builtin_bswap64(value);
    std::memcpy(m_base + address, &swapped, sizeof(swapped));
}

void guest_memory::write_f32(uint32_t address, float value) noexcept {
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    write_u32(address, bits);
}

void guest_memory::write_f64(uint32_t address, double value) noexcept {
    uint64_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    write_u64(address, bits);
}

bool guest_memory::read_block(uint32_t address, void* destination,
                              uint32_t size) const noexcept {
    if (!destination || !committed(address, size)) return false;
    std::memcpy(destination, m_base + address, size);
    return true;
}

bool guest_memory::write_block(uint32_t address, const void* source,
                               uint32_t size) noexcept {
    if (!source || !committed(address, size)) return false;
    std::memcpy(m_base + address, source, size);
    return true;
}

bool guest_memory::zero_block(uint32_t address, uint32_t size) noexcept {
    if (!committed(address, size)) return false;
    std::memset(m_base + address, 0, size);
    return true;
}

uint64_t guest_memory::committed_bytes() const noexcept {
    const std::lock_guard<std::mutex> lock(m_commit_mutex);
    if (!m_base) return 0;
    uint64_t pages = 0;
    for (std::size_t index = 0; index < m_commit_bits.size(); ++index) {
        uint8_t byte = static_cast<uint8_t>(m_commit_bits[index]);
        while (byte) {
            pages += byte & 1u;
            byte >>= 1;
        }
    }
    return pages * kPageSize;
}

} // namespace whitty_xenon
