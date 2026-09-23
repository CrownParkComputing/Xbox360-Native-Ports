// spirv_builder.h - assembling SPIR-V modules by hand.
//
// The decoders answer what a shader does; the translator has to say it again in
// a language a modern GPU speaks. That language is SPIR-V: a flat stream of
// 32-bit words - a five-word header, then a sequence of instructions, each a
// word packing its length and opcode followed by its operands, all referring to
// each other by integer result ids. There is no need for a heavyweight library
// to produce it; this is a small builder that owns the id counter and the word
// stream and knows how to encode an instruction and a string literal.
//
// Two rules of the format shape the builder. Instructions must appear in
// sections in a fixed order (capabilities, then the memory model, then entry
// points, ... , then types and constants, then functions), so the builder emits
// into sections and concatenates them in that order at the end. And types and
// constants must be declared exactly once - a module with two `OpTypeFloat 32`
// is invalid - so the type and constant helpers deduplicate: ask for the same
// type twice and you get the same id.
//
// Every module it produces is checked against the Khronos validator, so a
// malformed encoding is caught by the reference tool rather than by us.
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace whitty_xenon::gpu {

// The SPIR-V constants this layer needs. Values are from the SPIR-V spec and are
// stable. Only what is used so far is listed; more are added as the translator
// grows.
namespace spv {
inline constexpr uint32_t kMagic = 0x07230203;
inline constexpr uint32_t kVersion_1_3 = 0x00010300;

// Opcodes.
inline constexpr uint32_t OpMemoryModel = 14;
inline constexpr uint32_t OpEntryPoint = 15;
inline constexpr uint32_t OpExecutionMode = 16;
inline constexpr uint32_t OpCapability = 17;
inline constexpr uint32_t OpTypeVoid = 19;
inline constexpr uint32_t OpTypeBool = 20;
inline constexpr uint32_t OpTypeInt = 21;
inline constexpr uint32_t OpTypeFloat = 22;
inline constexpr uint32_t OpTypeVector = 23;
inline constexpr uint32_t OpTypeImage = 25;
inline constexpr uint32_t OpTypeSampledImage = 27;
inline constexpr uint32_t OpTypeArray = 28;
inline constexpr uint32_t OpTypeStruct = 30;
inline constexpr uint32_t OpTypePointer = 32;
inline constexpr uint32_t OpTypeFunction = 33;
inline constexpr uint32_t OpAccessChain = 65;
inline constexpr uint32_t OpConstantTrue = 41;
inline constexpr uint32_t OpConstantFalse = 42;
inline constexpr uint32_t OpConstant = 43;
inline constexpr uint32_t OpConstantComposite = 44;
inline constexpr uint32_t OpFunction = 54;
inline constexpr uint32_t OpFunctionEnd = 56;
inline constexpr uint32_t OpVariable = 59;
inline constexpr uint32_t OpLoad = 61;
inline constexpr uint32_t OpStore = 62;
inline constexpr uint32_t OpVectorShuffle = 79;
inline constexpr uint32_t OpCompositeConstruct = 80;
inline constexpr uint32_t OpCompositeExtract = 81;
inline constexpr uint32_t OpCompositeInsert = 82;
inline constexpr uint32_t OpImageSampleImplicitLod = 87;
// Float to SIGNED int, which is what the address register a0 is: its value
// runs from -256 to 255, so a conversion to unsigned would fold the negative
// half of that range onto four billion.
inline constexpr uint32_t OpConvertFToS = 110;
inline constexpr uint32_t OpConvertSToF = 111;
// Reinterprets the bits, rather than converting the value. The loop constant
// is one 32-bit word holding three packed fields, one of them signed, so
// reading the signed field means bitcasting the word and extracting - a
// conversion would round the whole word instead.
inline constexpr uint32_t OpBitcast = 124;
inline constexpr uint32_t OpFNegate = 127;
inline constexpr uint32_t OpIAdd = 128;
inline constexpr uint32_t OpFAdd = 129;
inline constexpr uint32_t OpISub = 130;
inline constexpr uint32_t OpFSub = 131;
inline constexpr uint32_t OpFMul = 133;
inline constexpr uint32_t OpFDiv = 136;
inline constexpr uint32_t OpExtInstImport = 11;
inline constexpr uint32_t OpExtInst = 12;
inline constexpr uint32_t OpDecorate = 71;
inline constexpr uint32_t OpMemberDecorate = 72;
inline constexpr uint32_t OpDot = 148;
inline constexpr uint32_t OpLogicalOr = 166;
inline constexpr uint32_t OpLogicalAnd = 167;
inline constexpr uint32_t OpLogicalNot = 168;
inline constexpr uint32_t OpSelect = 169;
inline constexpr uint32_t OpIEqual = 170;
inline constexpr uint32_t OpINotEqual = 171;
inline constexpr uint32_t OpFOrdEqual = 180;
inline constexpr uint32_t OpFOrdNotEqual = 182;
// The UNORDERED inequality: true when either operand is NaN, where the ordered
// form above is false. Both are here because the two are not interchangeable
// and the Xenos uses one of each - see the setp_*_push family in
// shader_translator.cpp, which needs this one.
inline constexpr uint32_t OpFUnordNotEqual = 183;
inline constexpr uint32_t OpFOrdLessThan = 184;
inline constexpr uint32_t OpFOrdLessThanEqual = 188;
inline constexpr uint32_t OpFOrdGreaterThan = 186;
inline constexpr uint32_t OpFOrdGreaterThanEqual = 190;
inline constexpr uint32_t OpShiftRightLogical = 194;
inline constexpr uint32_t OpBitwiseAnd = 199;
// Extracts a run of bits as an integer. The console packs a loop's trip count,
// its starting aL and its aL step into one 32-bit loop constant, three
// eight-bit fields, and the step is SIGNED - so the two forms are not
// interchangeable and using the unsigned one on the step turns a loop that
// walks backwards into one that walks four billion forwards.
inline constexpr uint32_t OpBitFieldSExtract = 202;
inline constexpr uint32_t OpBitFieldUExtract = 203;
// The loop header's merge instruction. SPIR-V has no arbitrary branches: a
// loop must declare, in its header, the block execution leaves by and the
// block the back edge comes from.
inline constexpr uint32_t OpLoopMerge = 246;
inline constexpr uint32_t OpSelectionMerge = 247;
inline constexpr uint32_t OpLabel = 248;
inline constexpr uint32_t OpBranch = 249;
inline constexpr uint32_t OpBranchConditional = 250;
inline constexpr uint32_t OpAny = 154;
// muls_prev2 turns a non-finite input into "no specular highlight" rather than
// propagating it, so it has to be able to ASK - and a comparison cannot: every
// comparison with a NaN is false, including the one that would detect it.
inline constexpr uint32_t OpIsNan = 156;
inline constexpr uint32_t OpIsInf = 157;
// Discards the fragment. A terminator, so the block containing it ends there.
inline constexpr uint32_t OpKill = 252;
inline constexpr uint32_t OpReturn = 253;
inline constexpr uint32_t OpEmitVertex = 218;
inline constexpr uint32_t OpEndPrimitive = 219;

// Enumerants.
inline constexpr uint32_t CapabilityShader = 1;
inline constexpr uint32_t CapabilityGeometry = 2;
inline constexpr uint32_t AddressingModelLogical = 0;
inline constexpr uint32_t MemoryModelGLSL450 = 1;
inline constexpr uint32_t ExecutionModelVertex = 0;
inline constexpr uint32_t ExecutionModelGeometry = 3;
inline constexpr uint32_t ExecutionModelFragment = 4;
inline constexpr uint32_t ExecutionModelGLCompute = 5;
inline constexpr uint32_t ExecutionModeInvocations = 0;
inline constexpr uint32_t ExecutionModeOriginUpperLeft = 7;
inline constexpr uint32_t ExecutionModeLocalSize = 17;
inline constexpr uint32_t ExecutionModeInputPoints = 19;
inline constexpr uint32_t ExecutionModeTriangles = 22;
inline constexpr uint32_t ExecutionModeOutputVertices = 26;
inline constexpr uint32_t ExecutionModeOutputTriangleStrip = 29;
inline constexpr uint32_t FunctionControlNone = 0;
inline constexpr uint32_t StorageClassUniformConstant = 0;
inline constexpr uint32_t StorageClassInput = 1;
inline constexpr uint32_t StorageClassUniform = 2;
inline constexpr uint32_t StorageClassOutput = 3;
inline constexpr uint32_t StorageClassFunction = 7;
inline constexpr uint32_t Dim2D = 1;
inline constexpr uint32_t ImageFormatUnknown = 0;
inline constexpr uint32_t DecorationBlock = 2;
inline constexpr uint32_t DecorationArrayStride = 6;
inline constexpr uint32_t DecorationBuiltIn = 11;
inline constexpr uint32_t DecorationBinding = 33;
inline constexpr uint32_t DecorationDescriptorSet = 34;
inline constexpr uint32_t DecorationOffset = 35;
inline constexpr uint32_t DecorationLocation = 30;
inline constexpr uint32_t BuiltInPosition = 0;
inline constexpr uint32_t BuiltInFragCoord = 15;
inline constexpr uint32_t BuiltInVertexIndex = 42;
} // namespace spv

// GLSL.std.450 extended instruction numbers used by the translator.
namespace glsl {
inline constexpr uint32_t Trunc = 3;
inline constexpr uint32_t FAbs = 4;
inline constexpr uint32_t Floor = 8;
inline constexpr uint32_t Fract = 10;
inline constexpr uint32_t Sin = 13;
inline constexpr uint32_t Cos = 14;
inline constexpr uint32_t Exp2 = 29;
inline constexpr uint32_t Log2 = 30;
inline constexpr uint32_t Sqrt = 31;
inline constexpr uint32_t InverseSqrt = 32;
inline constexpr uint32_t FMin = 37;
inline constexpr uint32_t FMax = 40;
inline constexpr uint32_t FClamp = 43;
// The SIGNED integer clamp, for holding an index built from the address
// register inside the constant bank. Reading a uniform out of range is
// undefined behaviour in SPIR-V, not a wrapped read, so this is not a
// tidiness measure.
inline constexpr uint32_t SClamp = 45;
inline constexpr uint32_t Fma = 50;
// The NaN-aware clamp: NClamp(NaN, lo, hi) is lo, where FClamp is undefined.
// Xenia uses it for exactly one thing - the value a maxas writes into a0 -
// and the reason is the same as SClamp's above: that value ends up indexing a
// uniform.
inline constexpr uint32_t NClamp = 81;
} // namespace glsl

// The ordered module sections. assemble() concatenates them in this order,
// which is the order SPIR-V requires.
enum class spirv_section : uint8_t {
    capabilities = 0,
    extensions,
    ext_imports, // OpExtInstImport
    memory_model,
    entry_points,
    execution_modes,
    debug,
    decorations,
    types,     // types, constants and global variables
    functions, // function definitions
    count,
};

class spirv_builder {
public:
    // Allocates a fresh result id. Ids start at 1; 0 is never a valid id.
    uint32_t allocate_id() noexcept { return m_next_id++; }

    // The id upper bound: one past the largest id allocated.
    uint32_t bound() const noexcept { return m_next_id; }

    // Emits one instruction into a section: a header word packing the total word
    // count and the opcode, followed by the operands.
    void emit(spirv_section section, uint32_t opcode,
              const std::vector<uint32_t>& operands);

    // --- type and constant declarations (deduplicated) ------------------
    uint32_t type_void();
    uint32_t type_bool();
    uint32_t type_int(bool is_signed, uint32_t width = 32);
    uint32_t type_float(uint32_t width = 32);
    uint32_t type_vector(uint32_t component_type, uint32_t count);
    // An array type. `length` is the id of an integer CONSTANT, not a literal:
    // SPIR-V sizes an array with a constant id, and passing the count itself
    // would name whatever id happened to have that number.
    uint32_t type_array(uint32_t element_type, uint32_t length);
    uint32_t type_pointer(uint32_t storage_class, uint32_t pointee);
    uint32_t type_function(uint32_t return_type,
                           const std::vector<uint32_t>& params = {});
    // A 32-bit float constant, by value (deduplicated by its bit pattern).
    uint32_t constant_float(float value);
    // A 32-bit unsigned-int constant.
    uint32_t constant_uint(uint32_t value);
    // A 32-bit SIGNED-int constant. Not interchangeable with the one above:
    // the two have different types, and SPIR-V requires the operands of an
    // integer instruction to agree on theirs.
    uint32_t constant_int(int32_t value);
    // A bool constant (OpConstantTrue / OpConstantFalse).
    uint32_t constant_bool(bool value);
    // A composite (e.g. a vec4) built from component constant ids.
    uint32_t constant_composite(uint32_t type,
                                const std::vector<uint32_t>& components);

    // Encodes a string as SPIR-V literal words: UTF-8 bytes packed low-to-high,
    // NUL-terminated, zero-padded to a word boundary.
    static std::vector<uint32_t> string_words(const std::string& text);

    // The raw words emitted into one section (for inspection/testing).
    const std::vector<uint32_t>& section_words(spirv_section section) const;

    // Assembles the complete module: the five-word header followed by every
    // section in order.
    std::vector<uint32_t> assemble() const;

private:
    // Returns the id for `key`, creating it via `emit_with_id` the first time.
    template <typename Emit>
    uint32_t cached(std::vector<uint32_t> key, Emit emit_with_id) {
        auto it = m_cache.find(key);
        if (it != m_cache.end()) return it->second;
        const uint32_t id = allocate_id();
        emit_with_id(id);
        m_cache.emplace(std::move(key), id);
        return id;
    }

    uint32_t m_next_id{1};
    std::vector<uint32_t>
        m_sections[static_cast<std::size_t>(spirv_section::count)];
    // Dedup cache, keyed by a signature (opcode tag plus defining operands).
    std::map<std::vector<uint32_t>, uint32_t> m_cache;
};

} // namespace whitty_xenon::gpu
