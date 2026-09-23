#include "whitty_xenon/kernel_printf.h"

#include "whitty_xenon/kernel_state.h"

#include <cstdio>
#include <string>

namespace whitty_xenon {
namespace {

// Reads a NUL-terminated guest string, with a ceiling so a missing terminator
// cannot walk the whole address space.
std::string read_guest_string(uint32_t address, std::size_t limit = 4096) {
    guest_memory& memory = active_kernel()->memory();
    std::string text;
    for (std::size_t i = 0; i < limit; ++i) {
        const uint32_t at = address + static_cast<uint32_t>(i);
        // A pointer that came from the title is data, not a promise. A %s whose
        // argument is wrong must produce a wrong string, not take the process
        // down inside a diagnostic - which is exactly when it would happen.
        if (!memory.committed(at, 1)) break;
        const uint8_t c = memory.read_u8(at);
        if (c == 0) break;
        text.push_back(static_cast<char>(c));
    }
    return text;
}

// One conversion, rebuilt as a host format string and handed to snprintf. The
// alternative - reimplementing width, precision, flags and every length
// modifier - is a great deal of surface for no benefit, and the host's
// formatter is the same one the guest's was modelled on.
void append_formatted(std::string& out, const std::string& spec, char kind,
                      format_arguments& args) {
    char buffer[512];
    switch (kind) {
        case 'd':
        case 'i':
            std::snprintf(buffer, sizeof(buffer), spec.c_str(),
                          static_cast<int>(args.next_u32()));
            break;
        case 'u':
        case 'o':
        case 'x':
        case 'X':
            std::snprintf(buffer, sizeof(buffer), spec.c_str(),
                          static_cast<unsigned>(args.next_u32()));
            break;
        case 'c':
            std::snprintf(buffer, sizeof(buffer), spec.c_str(),
                          static_cast<int>(args.next_u32() & 0xFF));
            break;
        case 'p': {
            // The guest's pointers are 32-bit; printing the host's would be
            // both wrong and a leak of host addresses.
            std::string hex = spec;
            hex[hex.size() - 1] = 'X';
            hex.insert(hex.size() - 1, "08");
            std::snprintf(buffer, sizeof(buffer), hex.c_str(),
                          static_cast<unsigned>(args.next_u32()));
            break;
        }
        case 'e':
        case 'E':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
            std::snprintf(buffer, sizeof(buffer), spec.c_str(),
                          args.next_double());
            break;
        case 's': {
            const std::string value = read_guest_string(args.next_u32());
            std::snprintf(buffer, sizeof(buffer), spec.c_str(), value.c_str());
            break;
        }
        default:
            // An unknown conversion is copied through verbatim rather than
            // dropped, so a format the guest understands and we do not is
            // visible in the output instead of silently vanishing.
            out += spec;
            return;
    }
    out += buffer;
}

} // namespace

uint32_t guest_array_arguments::next_u32() {
    // Each argument occupies a whole 8-byte slot, because the callee spilled it
    // with `std` - a 64-bit store of a 64-bit register. On a big-endian machine
    // a 32-bit argument is therefore in the slot's SECOND four bytes; the first
    // four hold the sign extension the 32-bit instruction that produced it left
    // in the register's upper half.
    //
    // That extension is not usually zero. `lis r9,0x822E` sign-extends, so a
    // pointer into the title's image spills as FFFFFFFF_822Exxxx and reading
    // the slot's first word yields FFFFFFFF - which for a %s is a walk off the
    // end of the address space. Direct3D's GPU-hang report is a _vsnprintf with
    // exactly that shape ("D3D version %i.%i %s, ...", the %s being a string in
    // the image), so the report on a hang faulted rather than printing.
    const uint32_t value =
        active_kernel()->memory().read_u32(m_array + m_index * 8 + 4);
    ++m_index;
    return value;
}

uint64_t guest_array_arguments::next_u64() {
    const uint64_t value =
        active_kernel()->memory().read_u64(m_array + m_index * 8);
    ++m_index;
    return value;
}

double guest_array_arguments::next_double() {
    const uint64_t bits = next_u64();
    double value = 0.0;
    static_assert(sizeof(value) == sizeof(bits), "double is not 8 bytes");
    __builtin_memcpy(&value, &bits, sizeof(value));
    return value;
}

int32_t format_to_guest(uint32_t buffer, std::size_t limit,
                        uint32_t format_ptr, format_arguments& args) {
    if (buffer == 0 || format_ptr == 0) return -1;
    const std::string format = read_guest_string(format_ptr);

    std::string out;
    for (std::size_t i = 0; i < format.size(); ++i) {
        if (format[i] != '%') {
            out.push_back(format[i]);
            continue;
        }
        if (i + 1 < format.size() && format[i + 1] == '%') {
            out.push_back('%');
            ++i;
            continue;
        }
        // Collect the whole conversion - flags, width, precision, length - and
        // stop at the character that says what kind it is.
        std::string spec = "%";
        std::size_t j = i + 1;
        while (j < format.size() &&
               std::string("-+ #0123456789.*hlLqjzt").find(format[j]) !=
                   std::string::npos) {
            // A '*' takes its width from the argument list, so it has to be
            // consumed now and substituted, not passed through.
            if (format[j] == '*') {
                spec += std::to_string(static_cast<int>(args.next_u32()));
            } else if (format[j] != 'h' && format[j] != 'l' &&
                       format[j] != 'L' && format[j] != 'q' &&
                       format[j] != 'j' && format[j] != 'z' &&
                       format[j] != 't') {
                spec.push_back(format[j]);
            }
            ++j;
        }
        if (j >= format.size()) {
            out += spec; // a trailing '%' with nothing after it
            break;
        }
        spec.push_back(format[j]);
        append_formatted(out, spec, format[j], args);
        i = j;
    }

    guest_memory& memory = active_kernel()->memory();
    const std::size_t written = out.size() < limit ? out.size() : limit;
    if (written != 0)
        memory.write_block(buffer, out.data(), static_cast<uint32_t>(written));
    memory.write_u8(buffer + static_cast<uint32_t>(written), 0);
    // The full length, even when it did not fit - that is how a caller knows.
    return static_cast<int32_t>(out.size());
}

} // namespace whitty_xenon
