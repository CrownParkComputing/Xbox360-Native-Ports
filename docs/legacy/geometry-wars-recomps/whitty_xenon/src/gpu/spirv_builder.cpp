#include "whitty_xenon/gpu/spirv_builder.h"

#include <cstring>

namespace whitty_xenon::gpu {

void spirv_builder::emit(spirv_section section, uint32_t opcode,
                         const std::vector<uint32_t>& operands) {
    std::vector<uint32_t>& words = m_sections[static_cast<std::size_t>(section)];
    const uint32_t word_count = 1 + static_cast<uint32_t>(operands.size());
    words.push_back((word_count << 16) | (opcode & 0xFFFF));
    words.insert(words.end(), operands.begin(), operands.end());
}

uint32_t spirv_builder::type_void() {
    return cached({spv::OpTypeVoid}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypeVoid, {id});
    });
}

uint32_t spirv_builder::type_bool() {
    return cached({spv::OpTypeBool}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypeBool, {id});
    });
}

uint32_t spirv_builder::type_int(bool is_signed, uint32_t width) {
    const uint32_t sign = is_signed ? 1 : 0;
    return cached({spv::OpTypeInt, width, sign}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypeInt, {id, width, sign});
    });
}

uint32_t spirv_builder::type_float(uint32_t width) {
    return cached({spv::OpTypeFloat, width}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypeFloat, {id, width});
    });
}

uint32_t spirv_builder::type_vector(uint32_t component_type, uint32_t count) {
    return cached({spv::OpTypeVector, component_type, count}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypeVector, {id, component_type, count});
    });
}

uint32_t spirv_builder::type_array(uint32_t element_type, uint32_t length) {
    return cached({spv::OpTypeArray, element_type, length}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypeArray, {id, element_type, length});
    });
}

uint32_t spirv_builder::type_pointer(uint32_t storage_class, uint32_t pointee) {
    return cached({spv::OpTypePointer, storage_class, pointee}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpTypePointer,
             {id, storage_class, pointee});
    });
}

uint32_t spirv_builder::type_function(uint32_t return_type,
                                      const std::vector<uint32_t>& params) {
    std::vector<uint32_t> key = {spv::OpTypeFunction, return_type};
    key.insert(key.end(), params.begin(), params.end());
    return cached(key, [&](uint32_t id) {
        std::vector<uint32_t> operands = {id, return_type};
        operands.insert(operands.end(), params.begin(), params.end());
        emit(spirv_section::types, spv::OpTypeFunction, operands);
    });
}

uint32_t spirv_builder::constant_float(float value) {
    uint32_t bits;
    std::memcpy(&bits, &value, sizeof(bits));
    const uint32_t float_type = type_float();
    return cached({spv::OpConstant, float_type, bits}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpConstant, {float_type, id, bits});
    });
}

uint32_t spirv_builder::constant_uint(uint32_t value) {
    const uint32_t uint_type = type_int(false);
    return cached({spv::OpConstant, uint_type, value}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpConstant, {uint_type, id, value});
    });
}

uint32_t spirv_builder::constant_int(int32_t value) {
    const uint32_t int_type = type_int(true);
    const auto bits = static_cast<uint32_t>(value);
    return cached({spv::OpConstant, int_type, bits}, [&](uint32_t id) {
        emit(spirv_section::types, spv::OpConstant, {int_type, id, bits});
    });
}

uint32_t spirv_builder::constant_bool(bool value) {
    const uint32_t bool_type = type_bool();
    const uint32_t opcode = value ? spv::OpConstantTrue : spv::OpConstantFalse;
    return cached({opcode, bool_type}, [&](uint32_t id) {
        emit(spirv_section::types, opcode, {bool_type, id});
    });
}

uint32_t spirv_builder::constant_composite(
    uint32_t type, const std::vector<uint32_t>& components) {
    std::vector<uint32_t> key = {spv::OpConstantComposite, type};
    key.insert(key.end(), components.begin(), components.end());
    return cached(key, [&](uint32_t id) {
        std::vector<uint32_t> operands = {type, id};
        operands.insert(operands.end(), components.begin(), components.end());
        emit(spirv_section::types, spv::OpConstantComposite, operands);
    });
}

std::vector<uint32_t> spirv_builder::string_words(const std::string& text) {
    std::vector<uint32_t> words;
    uint32_t current = 0;
    int shift = 0;
    for (char c : text) {
        current |= static_cast<uint32_t>(static_cast<uint8_t>(c)) << (8 * shift);
        if (++shift == 4) {
            words.push_back(current);
            current = 0;
            shift = 0;
        }
    }
    // Always push the trailing word: when shift is non-zero it holds the last
    // bytes with the NUL terminator and padding in the high positions; when it
    // is zero (length a multiple of four) it is a full NUL word, the terminator.
    words.push_back(current);
    return words;
}

const std::vector<uint32_t>& spirv_builder::section_words(
    spirv_section section) const {
    return m_sections[static_cast<std::size_t>(section)];
}

std::vector<uint32_t> spirv_builder::assemble() const {
    std::vector<uint32_t> module;
    module.push_back(spv::kMagic);
    module.push_back(spv::kVersion_1_3);
    module.push_back(0);         // generator magic (0 = not registered)
    module.push_back(m_next_id); // bound: one past the largest id
    module.push_back(0);         // schema (reserved)
    for (std::size_t s = 0; s < static_cast<std::size_t>(spirv_section::count);
         ++s)
        module.insert(module.end(), m_sections[s].begin(), m_sections[s].end());
    return module;
}

} // namespace whitty_xenon::gpu
