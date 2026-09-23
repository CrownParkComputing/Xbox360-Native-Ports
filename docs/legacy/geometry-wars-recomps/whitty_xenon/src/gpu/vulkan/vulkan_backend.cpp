#include "whitty_xenon/gpu/vulkan/vulkan_backend.h"

#include "whitty_xenon/gpu/overlay.h"
#include "whitty_xenon/gpu/present_panes.h"
#include "whitty_xenon/gpu/render_target.h"
#include "whitty_xenon/gpu/shader_translator.h"
#include "whitty_xenon/gpu/vertex_format.h"

#include <vulkan/vulkan.h>

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include "whitty_xenon/gpu/overlay_toggles.h"

#include <atomic>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <functional>
#include <deque>
#include <map>

namespace whitty_xenon::gpu {
namespace {

// Where a pipeline cache blob is kept, with a trailing separator, or empty when
// this machine has told us nowhere to put one.
//
// WHITTY_PIPELINE_CACHE_DIR wins, then the ordinary cache location. On Android
// the entry point points XDG_CACHE_HOME at the app's own cache directory, which
// is the only place an app may write without asking - so the same rule covers
// both hosts and there is no Android-specific branch here.
std::string pipeline_cache_directory() {
    std::string base;
    if (const char* set = std::getenv("WHITTY_PIPELINE_CACHE_DIR")) {
        base = set;
    } else if (const char* xdg = std::getenv("XDG_CACHE_HOME")) {
        base = std::string(xdg) + "/whitty_xenon";
    } else if (const char* home = std::getenv("HOME")) {
        base = std::string(home) + "/.cache/whitty_xenon";
    } else {
        return {};
    }
    std::error_code ec;
    std::filesystem::create_directories(base, ec);
    if (ec) return {};
    return base + "/";
}

// Adds the time between construction and destruction to a counter, in
// nanoseconds. Nanoseconds because several of the spans it wraps are a few
// hundred of them and repeated thousands of times a frame - truncating each to
// a whole microsecond would report the frequent-and-cheap ones as free, which
// is exactly the reading that sends you optimising the wrong thing.
struct span_timer {
    explicit span_timer(uint64_t& sink) noexcept
        : m_sink(&sink), m_started(std::chrono::steady_clock::now()) {}
    ~span_timer() {
        *m_sink += static_cast<uint64_t>(
            std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::steady_clock::now() - m_started)
                .count());
    }
    span_timer(const span_timer&) = delete;
    span_timer& operator=(const span_timer&) = delete;

    uint64_t* m_sink;
    std::chrono::steady_clock::time_point m_started;
};

// Finds a memory type index satisfying `type_bits` with the requested
// properties, or UINT32_MAX if none.
uint32_t find_memory_type(VkPhysicalDevice physical, uint32_t type_bits,
                          VkMemoryPropertyFlags properties) {
    VkPhysicalDeviceMemoryProperties memory;
    vkGetPhysicalDeviceMemoryProperties(physical, &memory);
    for (uint32_t i = 0; i < memory.memoryTypeCount; ++i) {
        if ((type_bits & (1u << i)) &&
            (memory.memoryTypes[i].propertyFlags & properties) == properties)
            return i;
    }
    return UINT32_MAX;
}

// The same, but preferring a memory type that also has `preferred` set, and
// settling for one that does not.
//
// This exists for one property, HOST_CACHED, and for one reason. Reading a
// finished frame back means the CPU reads host-visible memory, and the first
// host-visible type a discrete card offers is uncached: written by the GPU at
// full speed and read by the CPU one cache line at a time with no prefetch.
// Measured here, mapping and copying a 1280x720 frame out of the uncached type
// took 20 ms - about 180 MB/s, which is not a plausible speed for a memcpy and
// is the tell. The device advertises a cached type as well; asking for it is
// the whole fix. Falling back matters because the property is optional and a
// UINT32_MAX from a hard requirement would fail the allocation outright.
uint32_t find_memory_type_preferring(VkPhysicalDevice physical,
                                     uint32_t type_bits,
                                     VkMemoryPropertyFlags required,
                                     VkMemoryPropertyFlags preferred) {
    const uint32_t best =
        find_memory_type(physical, type_bits, required | preferred);
    if (best != UINT32_MAX) return best;
    return find_memory_type(physical, type_bits, required);
}

// The shared offscreen path: make a colour target and a readback buffer, clear
// it, run `record` inside the render pass, copy the result out, and read it
// back. The caller owns `render_pass` (and any pipeline `record` uses), which is
// safe to destroy once this returns because it waits for the GPU to finish.
bool render_to_target(VkDevice device, VkPhysicalDevice physical, VkQueue queue,
                      VkCommandPool pool, uint32_t width, uint32_t height,
                      VkFormat format, VkRenderPass render_pass,
                      const float clear[4],
                      const std::function<void(VkCommandBuffer)>& record,
                      std::vector<uint8_t>& out, std::string& error) {
    VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = format;
    image_info.extent = {width, height, 1};
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT |
                       VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VkImage image = VK_NULL_HANDLE;
    if (vkCreateImage(device, &image_info, nullptr, &image) != VK_SUCCESS) {
        error = "vkCreateImage failed";
        return false;
    }
    VkMemoryRequirements image_req;
    vkGetImageMemoryRequirements(device, image, &image_req);
    VkMemoryAllocateInfo image_alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    image_alloc.allocationSize = image_req.size;
    image_alloc.memoryTypeIndex = find_memory_type(
        physical, image_req.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    VkDeviceMemory image_memory = VK_NULL_HANDLE;
    vkAllocateMemory(device, &image_alloc, nullptr, &image_memory);
    vkBindImageMemory(device, image, image_memory, 0);

    VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view_info.image = image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = format;
    view_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    VkImageView view = VK_NULL_HANDLE;
    vkCreateImageView(device, &view_info, nullptr, &view);

    VkFramebufferCreateInfo fb_info{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
    fb_info.renderPass = render_pass;
    fb_info.attachmentCount = 1;
    fb_info.pAttachments = &view;
    fb_info.width = width;
    fb_info.height = height;
    fb_info.layers = 1;
    VkFramebuffer framebuffer = VK_NULL_HANDLE;
    vkCreateFramebuffer(device, &fb_info, nullptr, &framebuffer);

    const VkDeviceSize buffer_size = VkDeviceSize(width) * height * 4;
    VkBufferCreateInfo buf_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    buf_info.size = buffer_size;
    buf_info.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT;
    VkBuffer readback = VK_NULL_HANDLE;
    vkCreateBuffer(device, &buf_info, nullptr, &readback);
    VkMemoryRequirements buf_req;
    vkGetBufferMemoryRequirements(device, readback, &buf_req);
    VkMemoryAllocateInfo buf_alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    buf_alloc.allocationSize = buf_req.size;
    buf_alloc.memoryTypeIndex =
        find_memory_type(physical, buf_req.memoryTypeBits,
                         VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                             VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VkDeviceMemory readback_memory = VK_NULL_HANDLE;
    vkAllocateMemory(device, &buf_alloc, nullptr, &readback_memory);
    vkBindBufferMemory(device, readback, readback_memory, 0);

    VkCommandBufferAllocateInfo cmd_alloc{
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    cmd_alloc.commandPool = pool;
    cmd_alloc.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cmd_alloc.commandBufferCount = 1;
    VkCommandBuffer cmd = VK_NULL_HANDLE;
    vkAllocateCommandBuffers(device, &cmd_alloc, &cmd);

    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cmd, &begin);

    VkClearValue clear_value{};
    clear_value.color = {{clear[0], clear[1], clear[2], clear[3]}};
    VkRenderPassBeginInfo rp_begin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
    rp_begin.renderPass = render_pass;
    rp_begin.framebuffer = framebuffer;
    rp_begin.renderArea = {{0, 0}, {width, height}};
    rp_begin.clearValueCount = 1;
    rp_begin.pClearValues = &clear_value;
    vkCmdBeginRenderPass(cmd, &rp_begin, VK_SUBPASS_CONTENTS_INLINE);
    if (record) record(cmd);
    vkCmdEndRenderPass(cmd);

    VkBufferImageCopy copy{};
    copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    copy.imageExtent = {width, height, 1};
    vkCmdCopyImageToBuffer(cmd, image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                           readback, 1, &copy);
    vkEndCommandBuffer(cmd);

    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1;
    submit.pCommandBuffers = &cmd;
    vkQueueSubmit(queue, 1, &submit, VK_NULL_HANDLE);
    vkQueueWaitIdle(queue);

    out.resize(static_cast<std::size_t>(buffer_size));
    void* mapped = nullptr;
    vkMapMemory(device, readback_memory, 0, buffer_size, 0, &mapped);
    std::memcpy(out.data(), mapped, out.size());
    vkUnmapMemory(device, readback_memory);

    vkFreeCommandBuffers(device, pool, 1, &cmd);
    vkDestroyBuffer(device, readback, nullptr);
    vkFreeMemory(device, readback_memory, nullptr);
    vkDestroyFramebuffer(device, framebuffer, nullptr);
    vkDestroyImageView(device, view, nullptr);
    vkDestroyImage(device, image, nullptr);
    vkFreeMemory(device, image_memory, nullptr);
    return true;
}

// The render pass every path shares: clear the colour attachment and leave it
// in `final_layout`.
//
// A target that only gets copied out is left as a transfer source. A frame's
// passes need more than that: a pass's result can be the next pass's texture,
// so its target is left ready to sample and the subpass dependency below makes
// the write visible to the fragment shader that reads it. Without that
// dependency the read is a race - it happens to work and is undefined.
// `keep` loads what the attachment already holds instead of clearing it, for a
// pass that continues another - the EDRAM a resolve copied out is still full,
// and the next pass into that surface starts from it. The framebuffer and the
// pipelines are shared with the clearing pass: render-pass compatibility is
// decided by attachment formats and sample counts, not by load and store ops.
// THE SCENE NEEDS A DEPTH BUFFER.
//
// Every draw carries a depth mode decoded from RB_DEPTHCONTROL, and until this
// existed none of it did anything: the scene render pass was built with no
// depth attachment, so `depthTestEnable` was inert and the frame was drawn in
// submission order. A 2D title is unharmed by that - Geometry Wars composites
// back to front and looks right - and a 3D one cannot be: characters draw
// through walls, and whichever surface happens to be submitted last wins.
//
// D32_SFLOAT because the console's depth is 24-bit unorm or 20e4 float and a
// 32-bit float host buffer holds either without losing ordering, which is all
// the test needs.
constexpr VkFormat kSceneDepthFormat = VK_FORMAT_D32_SFLOAT;

// WHITTY_NO_DEPTH=1 goes back to drawing in submission order with no depth
// attachment at all. Two uses: telling a depth fault from any other kind on a
// title that changed appearance, and carrying on with a title whose depth
// state this runtime still decodes wrongly.
VkFormat scene_depth_format() {
    static const VkFormat format = [] {
        const char* off = std::getenv("WHITTY_NO_DEPTH");
        return off != nullptr && off[0] == '1' ? VK_FORMAT_UNDEFINED
                                               : kSceneDepthFormat;
    }();
    return format;
}

VkRenderPass make_render_pass(
    VkDevice device, VkFormat format,
    VkImageLayout final_layout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
    bool keep = false, VkFormat depth_format = VK_FORMAT_UNDEFINED,
    bool keep_depth = false) {
    VkAttachmentDescription attachments[2]{};
    uint32_t attachment_count = 1;
    attachments[0].format = format;
    attachments[0].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[0].loadOp = keep ? VK_ATTACHMENT_LOAD_OP_LOAD
                                 : VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachments[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[0].initialLayout = keep
                                       ? VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL
                                       : VK_IMAGE_LAYOUT_UNDEFINED;
    attachments[0].finalLayout = final_layout;
    VkAttachmentReference color_ref{0,
                                    VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkAttachmentReference depth_ref{};
    if (depth_format != VK_FORMAT_UNDEFINED) {
        attachment_count = 2;
        attachments[1].format = depth_format;
        attachments[1].samples = VK_SAMPLE_COUNT_1_BIT;
        attachments[1].loadOp = keep_depth ? VK_ATTACHMENT_LOAD_OP_LOAD
                                           : VK_ATTACHMENT_LOAD_OP_CLEAR;
        attachments[1].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        attachments[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachments[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachments[1].initialLayout =
            keep_depth ? VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL
                       : VK_IMAGE_LAYOUT_UNDEFINED;
        attachments[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        depth_ref.attachment = 1;
        depth_ref.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    }
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &color_ref;
    if (depth_format != VK_FORMAT_UNDEFINED)
        subpass.pDepthStencilAttachment = &depth_ref;
    VkSubpassDependency after{};
    after.srcSubpass = 0;
    after.dstSubpass = VK_SUBPASS_EXTERNAL;
    after.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    after.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    after.dstStageMask = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT |
                         VK_PIPELINE_STAGE_TRANSFER_BIT;
    after.dstAccessMask =
        VK_ACCESS_SHADER_READ_BIT | VK_ACCESS_TRANSFER_READ_BIT;
    VkSubpassDependency before{};
    before.srcSubpass = VK_SUBPASS_EXTERNAL;
    before.dstSubpass = 0;
    before.srcStageMask = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
    before.srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
    before.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    before.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    if (depth_format != VK_FORMAT_UNDEFINED) {
        after.srcStageMask |=
            VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT |
            VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
        after.srcAccessMask |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        before.dstStageMask |=
            VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT |
            VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
        before.dstAccessMask |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
    }
    const VkSubpassDependency dependencies[2] = {before, after};
    VkRenderPassCreateInfo rp_info{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    rp_info.attachmentCount = attachment_count;
    rp_info.pAttachments = attachments;
    rp_info.subpassCount = 1;
    rp_info.pSubpasses = &subpass;
    rp_info.dependencyCount = 2;
    rp_info.pDependencies = dependencies;
    VkRenderPass render_pass = VK_NULL_HANDLE;
    vkCreateRenderPass(device, &rp_info, nullptr, &render_pass);
    return render_pass;
}

VkShaderModule make_shader_module(VkDevice device,
                                  const std::vector<uint32_t>& spirv) {
    VkShaderModuleCreateInfo info{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
    info.codeSize = spirv.size() * sizeof(uint32_t);
    info.pCode = spirv.data();
    VkShaderModule module = VK_NULL_HANDLE;
    vkCreateShaderModule(device, &info, nullptr, &module);
    return module;
}

// A triangle-list graphics pipeline with one vec2 position input, filling the
// whole viewport. The caller owns the returned pipeline and `out_layout`.
VkPrimitiveTopology to_vk_topology(topology topo) {
    switch (topo) {
        case topology::triangle_list: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case topology::triangle_strip:
            return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
        case topology::triangle_fan: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN;
        case topology::line_list: return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
        case topology::line_strip: return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
        case topology::point_list: return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
    }
    return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
}

VkPipeline make_pipeline(VkDevice device, VkRenderPass render_pass,
                         uint32_t width, uint32_t height, VkShaderModule vs,
                         VkShaderModule fs, bool blend, topology topo,
                         VkDescriptorSetLayout set_layout,
                         VkPipelineLayout& out_layout) {
    VkPipelineShaderStageCreateInfo stages[2]{};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = vs;
    stages[0].pName = "main";
    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = fs;
    stages[1].pName = "main";

    VkVertexInputBindingDescription binding{0, sizeof(float) * 2,
                                            VK_VERTEX_INPUT_RATE_VERTEX};
    VkVertexInputAttributeDescription attribute{0, 0, VK_FORMAT_R32G32_SFLOAT,
                                                0};
    VkPipelineVertexInputStateCreateInfo vertex_input{
        VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vertex_input.vertexBindingDescriptionCount = 1;
    vertex_input.pVertexBindingDescriptions = &binding;
    vertex_input.vertexAttributeDescriptionCount = 1;
    vertex_input.pVertexAttributeDescriptions = &attribute;

    VkPipelineInputAssemblyStateCreateInfo input_assembly{
        VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    input_assembly.topology = to_vk_topology(topo);

    VkViewport viewport{0.0f, 0.0f, float(width), float(height), 0.0f, 1.0f};
    VkRect2D scissor{{0, 0}, {width, height}};
    VkPipelineViewportStateCreateInfo viewport_state{
        VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport_state.viewportCount = 1;
    viewport_state.pViewports = &viewport;
    viewport_state.scissorCount = 1;
    viewport_state.pScissors = &scissor;

    VkPipelineRasterizationStateCreateInfo raster{
        VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    raster.cullMode = VK_CULL_MODE_NONE;
    raster.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    raster.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo multisample{
        VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineColorBlendAttachmentState blend_attachment{};
    blend_attachment.colorWriteMask =
        VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
        VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    if (blend) {
        // Standard alpha-over: result = src.rgb*src.a + dst.rgb*(1 - src.a).
        blend_attachment.blendEnable = VK_TRUE;
        blend_attachment.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        blend_attachment.dstColorBlendFactor =
            VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        blend_attachment.colorBlendOp = VK_BLEND_OP_ADD;
        blend_attachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend_attachment.dstAlphaBlendFactor =
            VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        blend_attachment.alphaBlendOp = VK_BLEND_OP_ADD;
    }
    VkPipelineColorBlendStateCreateInfo blend_state{
        VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    blend_state.attachmentCount = 1;
    blend_state.pAttachments = &blend_attachment;

    VkPipelineLayoutCreateInfo layout_info{
        VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    if (set_layout != VK_NULL_HANDLE) {
        layout_info.setLayoutCount = 1;
        layout_info.pSetLayouts = &set_layout;
    }
    out_layout = VK_NULL_HANDLE;
    vkCreatePipelineLayout(device, &layout_info, nullptr, &out_layout);

    VkGraphicsPipelineCreateInfo pipeline_info{
        VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    pipeline_info.stageCount = 2;
    pipeline_info.pStages = stages;
    pipeline_info.pVertexInputState = &vertex_input;
    pipeline_info.pInputAssemblyState = &input_assembly;
    pipeline_info.pViewportState = &viewport_state;
    pipeline_info.pRasterizationState = &raster;
    pipeline_info.pMultisampleState = &multisample;
    pipeline_info.pColorBlendState = &blend_state;
    pipeline_info.layout = out_layout;
    pipeline_info.renderPass = render_pass;
    pipeline_info.subpass = 0;
    VkPipeline pipeline = VK_NULL_HANDLE;
    vkCreateGraphicsPipelines(device, VK_NULL_HANDLE, 1, &pipeline_info, nullptr,
                              &pipeline);
    return pipeline;
}

// Uploads clip-space positions into a host-visible vertex buffer.
VkBuffer make_vertex_buffer(VkDevice device, VkPhysicalDevice physical,
                            const std::vector<float>& positions,
                            VkDeviceMemory& out_memory) {
    const VkDeviceSize size = positions.size() * sizeof(float);
    VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    info.size = size;
    info.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
    VkBuffer buffer = VK_NULL_HANDLE;
    vkCreateBuffer(device, &info, nullptr, &buffer);
    VkMemoryRequirements req;
    vkGetBufferMemoryRequirements(device, buffer, &req);
    VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc.allocationSize = req.size;
    alloc.memoryTypeIndex = find_memory_type(
        physical, req.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    out_memory = VK_NULL_HANDLE;
    vkAllocateMemory(device, &alloc, nullptr, &out_memory);
    vkBindBufferMemory(device, buffer, out_memory, 0);
    void* mapped = nullptr;
    vkMapMemory(device, out_memory, 0, size, 0, &mapped);
    std::memcpy(mapped, positions.data(), static_cast<std::size_t>(size));
    vkUnmapMemory(device, out_memory);
    return buffer;
}

// Maps a Xenos depth format onto the Vulkan format that reads it.
// D24S8 and D24X8 both map to D24_UNORM_S8_UINT (the stencil attachment is
// required for the combined format even when stencil is not used).
VkFormat to_vk_depth_format(uint8_t format) {
    switch (static_cast<depth_format>(format)) {
        case depth_format::d24s8:
        case depth_format::d24x8:  return VK_FORMAT_D24_UNORM_S8_UINT;
        case depth_format::f32:    return VK_FORMAT_D32_SFLOAT;
        case depth_format::d16:    return VK_FORMAT_D16_UNORM;
    }
    return VK_FORMAT_UNDEFINED;
}

// Maps a Xenos compare_function to the Vulkan equivalent.
VkCompareOp to_vk_compare_op(uint8_t func) {
    switch (static_cast<compare_function>(func)) {
        case compare_function::never:          return VK_COMPARE_OP_NEVER;
        case compare_function::less:           return VK_COMPARE_OP_LESS;
        case compare_function::equal:          return VK_COMPARE_OP_EQUAL;
        case compare_function::less_equal:     return VK_COMPARE_OP_LESS_OR_EQUAL;
        case compare_function::greater:        return VK_COMPARE_OP_GREATER;
        case compare_function::not_equal:      return VK_COMPARE_OP_NOT_EQUAL;
        case compare_function::greater_equal:  return VK_COMPARE_OP_GREATER_OR_EQUAL;
        case compare_function::always:         return VK_COMPARE_OP_ALWAYS;
    }
    return VK_COMPARE_OP_LESS_OR_EQUAL;
}

// A host-visible buffer holding a copy of `bytes`. Used for the general path's
// vertex, index and constant buffers, which all come from guest memory.
VkBuffer make_host_buffer(VkDevice device, VkPhysicalDevice physical,
                          const void* bytes, VkDeviceSize size,
                          VkBufferUsageFlags usage,
                          VkDeviceMemory& out_memory) {
    // A zero-sized buffer is not legal, and a draw with no data of some kind is
    // a real case (no indices, no constants), so round up to one element.
    const VkDeviceSize allocated = size != 0 ? size : 4;
    VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    info.size = allocated;
    info.usage = usage;
    VkBuffer buffer = VK_NULL_HANDLE;
    if (vkCreateBuffer(device, &info, nullptr, &buffer) != VK_SUCCESS)
        return VK_NULL_HANDLE;
    VkMemoryRequirements req;
    vkGetBufferMemoryRequirements(device, buffer, &req);
    VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc.allocationSize = req.size;
    alloc.memoryTypeIndex = find_memory_type(physical, req.memoryTypeBits,
                                             VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                                 VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    out_memory = VK_NULL_HANDLE;
    vkAllocateMemory(device, &alloc, nullptr, &out_memory);
    vkBindBufferMemory(device, buffer, out_memory, 0);
    void* mapped = nullptr;
    vkMapMemory(device, out_memory, 0, allocated, 0, &mapped);
    std::memset(mapped, 0, static_cast<std::size_t>(allocated));
    if (bytes != nullptr && size != 0)
        std::memcpy(mapped, bytes, static_cast<std::size_t>(size));
    vkUnmapMemory(device, out_memory);
    return buffer;
}

// Maps a Xenos vertex format onto the Vulkan format that reads it. Only the
// formats a title actually declares are mapped; an unmapped one returns
// VK_FORMAT_UNDEFINED so the caller reports it rather than reading the
// attribute as something else.
VkFormat to_vk_vertex_format(uint8_t format) {
    switch (static_cast<vertex_format>(format)) {
        case vertex_format::k_32_float: return VK_FORMAT_R32_SFLOAT;
        case vertex_format::k_32_32_float: return VK_FORMAT_R32G32_SFLOAT;
        case vertex_format::k_32_32_32_float: return VK_FORMAT_R32G32B32_SFLOAT;
        case vertex_format::k_32_32_32_32_float:
            return VK_FORMAT_R32G32B32A32_SFLOAT;
        case vertex_format::k_16_16_float: return VK_FORMAT_R16G16_SFLOAT;
        case vertex_format::k_16_16_16_16_float:
            return VK_FORMAT_R16G16B16A16_SFLOAT;
        case vertex_format::k_8_8_8_8: return VK_FORMAT_R8G8B8A8_UNORM;
        case vertex_format::k_16_16: return VK_FORMAT_R16G16_SNORM;
        case vertex_format::k_16_16_16_16: return VK_FORMAT_R16G16B16A16_SNORM;
        case vertex_format::k_2_10_10_10:
            return VK_FORMAT_A2B10G10R10_UNORM_PACK32;
        case vertex_format::k_32: return VK_FORMAT_R32_UINT;
        case vertex_format::k_32_32: return VK_FORMAT_R32G32_UINT;
        case vertex_format::k_32_32_32_32: return VK_FORMAT_R32G32B32A32_UINT;
        default: return VK_FORMAT_UNDEFINED;
    }
}

// A texture whose image exists but whose pixels are still in a staging buffer,
// waiting to be copied by a command buffer somebody else is recording.
//
// upload_texture below does the whole thing itself, ending in a queue submit
// and a WAIT for the device to go idle - which is correct, and is fine for the
// one-off uploads at start-up, and is ruinous per texture per frame: measured
// on Hydro Thunder, 58 uploads cost 122 ms, nearly all of it the fifty-eight
// full pipeline drains rather than the copying. This splits the work so a
// frame's uploads can be recorded into the frame's OWN command buffer and ride
// its single existing submit.
struct staged_texture {
    VkImage image{VK_NULL_HANDLE};
    VkBuffer staging{VK_NULL_HANDLE};
    VkDeviceMemory staging_memory{VK_NULL_HANDLE};
    uint32_t width{0};
    uint32_t height{0};
};

// Creates the device image and fills a staging buffer, recording nothing and
// submitting nothing. The view is usable immediately - a descriptor may name an
// image whose contents arrive later, as long as they arrive before the draw
// that samples it, which recording into the same command buffer guarantees.
VkImageView create_texture_image(VkDevice device, VkPhysicalDevice physical,
                                 const std::vector<uint8_t>& rgba,
                                 uint32_t width, uint32_t height,
                                 VkImage& out_image, VkDeviceMemory& out_memory,
                                 staged_texture& out_staged) {
    const VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
    VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = format;
    image_info.extent = {width, height, 1};
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage =
        VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    if (vkCreateImage(device, &image_info, nullptr, &out_image) != VK_SUCCESS)
        return VK_NULL_HANDLE;
    VkMemoryRequirements req;
    vkGetImageMemoryRequirements(device, out_image, &req);
    VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc.allocationSize = req.size;
    alloc.memoryTypeIndex = find_memory_type(physical, req.memoryTypeBits,
                                             VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (vkAllocateMemory(device, &alloc, nullptr, &out_memory) != VK_SUCCESS)
        return VK_NULL_HANDLE;
    vkBindImageMemory(device, out_image, out_memory, 0);

    VkBufferCreateInfo buf_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    buf_info.size = rgba.size();
    buf_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    VkBuffer staging = VK_NULL_HANDLE;
    vkCreateBuffer(device, &buf_info, nullptr, &staging);
    VkMemoryRequirements sreq;
    vkGetBufferMemoryRequirements(device, staging, &sreq);
    VkMemoryAllocateInfo salloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    salloc.allocationSize = sreq.size;
    salloc.memoryTypeIndex =
        find_memory_type(physical, sreq.memoryTypeBits,
                         VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                             VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VkDeviceMemory staging_memory = VK_NULL_HANDLE;
    vkAllocateMemory(device, &salloc, nullptr, &staging_memory);
    vkBindBufferMemory(device, staging, staging_memory, 0);
    void* mapped = nullptr;
    vkMapMemory(device, staging_memory, 0, rgba.size(), 0, &mapped);
    std::memcpy(mapped, rgba.data(), rgba.size());
    vkUnmapMemory(device, staging_memory);

    VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view_info.image = out_image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = format;
    view_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    VkImageView view = VK_NULL_HANDLE;
    vkCreateImageView(device, &view_info, nullptr, &view);
    out_staged = {out_image, staging, staging_memory, width, height};
    return view;
}

// Records every staged upload into `cmd`: one barrier batch to transfer-dst,
// the copies, one barrier batch to shader-read. Two barriers for the whole
// frame's textures rather than two per texture, and no submit of its own.
void record_staged_uploads(VkCommandBuffer cmd,
                           const std::vector<staged_texture>& staged) {
    if (staged.empty()) return;
    std::vector<VkImageMemoryBarrier> to_dst;
    to_dst.reserve(staged.size());
    for (const staged_texture& one : staged) {
        VkImageMemoryBarrier bar{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        bar.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        bar.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        bar.image = one.image;
        bar.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        bar.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        to_dst.push_back(bar);
    }
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                         nullptr, static_cast<uint32_t>(to_dst.size()),
                         to_dst.data());
    for (const staged_texture& one : staged) {
        VkBufferImageCopy copy{};
        copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        copy.imageExtent = {one.width, one.height, 1};
        vkCmdCopyBufferToImage(cmd, one.staging, one.image,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);
    }
    std::vector<VkImageMemoryBarrier> to_read;
    to_read.reserve(staged.size());
    for (const staged_texture& one : staged) {
        VkImageMemoryBarrier bar{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        bar.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        bar.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        bar.image = one.image;
        bar.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        bar.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        bar.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        to_read.push_back(bar);
    }
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, nullptr,
                         0, nullptr, static_cast<uint32_t>(to_read.size()),
                         to_read.data());
}

// Uploads RGBA8 pixels into a device-local sampled image and returns a view of
// it (in shader-read layout). The image and its memory are returned too.
VkImageView upload_texture(VkDevice device, VkPhysicalDevice physical,
                           VkQueue queue, VkCommandPool pool,
                           const std::vector<uint8_t>& rgba, uint32_t width,
                           uint32_t height, VkImage& out_image,
                           VkDeviceMemory& out_memory) {
    const VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
    VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = format;
    image_info.extent = {width, height, 1};
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage =
        VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    vkCreateImage(device, &image_info, nullptr, &out_image);
    VkMemoryRequirements req;
    vkGetImageMemoryRequirements(device, out_image, &req);
    VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc.allocationSize = req.size;
    alloc.memoryTypeIndex = find_memory_type(physical, req.memoryTypeBits,
                                             VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    vkAllocateMemory(device, &alloc, nullptr, &out_memory);
    vkBindImageMemory(device, out_image, out_memory, 0);

    // Staging buffer with the pixels.
    VkBufferCreateInfo buf_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    buf_info.size = rgba.size();
    buf_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    VkBuffer staging = VK_NULL_HANDLE;
    vkCreateBuffer(device, &buf_info, nullptr, &staging);
    VkMemoryRequirements sreq;
    vkGetBufferMemoryRequirements(device, staging, &sreq);
    VkMemoryAllocateInfo salloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    salloc.allocationSize = sreq.size;
    salloc.memoryTypeIndex =
        find_memory_type(physical, sreq.memoryTypeBits,
                         VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                             VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VkDeviceMemory staging_memory = VK_NULL_HANDLE;
    vkAllocateMemory(device, &salloc, nullptr, &staging_memory);
    vkBindBufferMemory(device, staging, staging_memory, 0);
    void* mapped = nullptr;
    vkMapMemory(device, staging_memory, 0, rgba.size(), 0, &mapped);
    std::memcpy(mapped, rgba.data(), rgba.size());
    vkUnmapMemory(device, staging_memory);

    // Transition to transfer-dst, copy, transition to shader-read.
    VkCommandBufferAllocateInfo cmd_alloc{
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    cmd_alloc.commandPool = pool;
    cmd_alloc.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cmd_alloc.commandBufferCount = 1;
    VkCommandBuffer cmd = VK_NULL_HANDLE;
    vkAllocateCommandBuffers(device, &cmd_alloc, &cmd);
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cmd, &begin);

    VkImageMemoryBarrier to_dst{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_dst.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    to_dst.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_dst.image = out_image;
    to_dst.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_dst.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_dst);

    VkBufferImageCopy copy{};
    copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    copy.imageExtent = {width, height, 1};
    vkCmdCopyBufferToImage(cmd, staging, out_image,
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);

    VkImageMemoryBarrier to_read{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_read.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_read.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    to_read.image = out_image;
    to_read.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_read.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    to_read.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_read);
    vkEndCommandBuffer(cmd);
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1;
    submit.pCommandBuffers = &cmd;
    vkQueueSubmit(queue, 1, &submit, VK_NULL_HANDLE);
    vkQueueWaitIdle(queue);
    vkFreeCommandBuffers(device, pool, 1, &cmd);
    vkDestroyBuffer(device, staging, nullptr);
    vkFreeMemory(device, staging_memory, nullptr);

    VkImageViewCreateInfo view_info{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view_info.image = out_image;
    view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view_info.format = format;
    view_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    VkImageView view = VK_NULL_HANDLE;
    vkCreateImageView(device, &view_info, nullptr, &view);
    return view;
}

VkSampler make_sampler(VkDevice device) {
    VkSamplerCreateInfo info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    info.magFilter = VK_FILTER_LINEAR;
    info.minFilter = VK_FILTER_LINEAR;
    info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    VkSampler sampler = VK_NULL_HANDLE;
    vkCreateSampler(device, &info, nullptr, &sampler);
    return sampler;
}

// The console's addressing modes, in their own numeric order, as the nearest
// thing Vulkan has. Two have no equivalent: clamp-to-halfway (half edge, half
// border - not in Direct3D 9 either, so nothing sane asks for it) becomes
// clamp-to-edge, and the mirrored forms other than mirror-clamp-to-edge become
// that, which is Xenia's substitution too.
constexpr VkSamplerAddressMode kAddressModes[] = {
    VK_SAMPLER_ADDRESS_MODE_REPEAT,               // repeat
    VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,      // mirrored_repeat
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,        // clamp_to_edge
    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE, // mirror_clamp_to_edge
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,        // clamp_to_halfway
    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE, // mirror_clamp_to_halfway
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,      // clamp_to_border
    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE, // mirror_clamp_to_border
};

// Builds the host sampler one resolved state asks for. `max_anisotropy` is the
// device's own limit, because asking for more than a device supports is not a
// hint, it is an invalid VkSamplerCreateInfo.
VkSampler make_sampler(VkDevice device, const sampler_state& state,
                       bool mirror_clamp_supported, float max_anisotropy) {
    const auto address = [&](texture_clamp_mode mode) {
        VkSamplerAddressMode chosen =
            kAddressModes[static_cast<uint32_t>(mode) & 0x7];
        if (chosen == VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE &&
            !mirror_clamp_supported)
            chosen = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
        return chosen;
    };
    VkSamplerCreateInfo info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    info.magFilter = state.mag_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.minFilter = state.min_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.mipmapMode = state.mip_linear ? VK_SAMPLER_MIPMAP_MODE_LINEAR
                                       : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    info.addressModeU = address(state.clamp_x);
    info.addressModeV = address(state.clamp_y);
    info.addressModeW = address(state.clamp_z);
    if (state.aniso != texture_aniso_filter::disabled && max_anisotropy > 1.0f) {
        info.anisotropyEnable = VK_TRUE;
        const float wanted = static_cast<float>(
            1u << (static_cast<uint32_t>(state.aniso) -
                   static_cast<uint32_t>(texture_aniso_filter::max_1_1)));
        info.maxAnisotropy = wanted < max_anisotropy ? wanted : max_anisotropy;
    } else {
        info.maxAnisotropy = 1.0f;
    }
    info.minLod = static_cast<float>(state.mip_min_level);
    // "Base map" is the mip filter saying to read the base level and nothing
    // below it, which is a level clamp rather than a filter. A hair above the
    // minimum, so the level itself is still readable.
    info.maxLod = state.mip_base_map ? info.minLod + 0.25f : VK_LOD_CLAMP_NONE;
    info.borderColor = state.border == texture_border_color::abgr_white
                           ? VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE
                           : VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    VkSampler sampler = VK_NULL_HANDLE;
    if (vkCreateSampler(device, &info, nullptr, &sampler) != VK_SUCCESS)
        return VK_NULL_HANDLE;
    return sampler;
}

} // namespace

vulkan_backend::~vulkan_backend() { shutdown(); }

namespace {

// Everything presentation needs. Kept apart from the render path: the frame is
// drawn into the same offscreen target with or without a window, and this only
// gets it onto the screen.
struct display_state {
    VkSwapchainKHR swapchain{VK_NULL_HANDLE};
    VkFormat format{VK_FORMAT_UNDEFINED};
    // Kept beside the format because a rebuilt swapchain has to be created with
    // the same pair: the credit and the system page have already been byte-
    // swapped for this format, and a swapchain that came back in the other one
    // would show them with red and blue exchanged.
    VkColorSpaceKHR color_space{VK_COLOR_SPACE_SRGB_NONLINEAR_KHR};
    uint32_t width{0};
    uint32_t height{0};
    // The frame's own size, remembered from the last present so a rebuild can
    // place the credit against the same picture the panes will hold. Zero until
    // a frame has been presented, when the surface's own shape stands in.
    uint32_t source_width{0};
    uint32_t source_height{0};
    std::vector<VkImage> images;
    VkSemaphore acquired{VK_NULL_HANDLE};
    VkSemaphore rendered{VK_NULL_HANDLE};
    VkCommandBuffer command_buffer{VK_NULL_HANDLE};
    VkFence fence{VK_NULL_HANDLE};
    // The "WhittyArcade" credit: a small picture uploaded once, and the regions
    // of it that get copied over the finished frame every present. Empty when
    // the credit is switched off or the window is too small to hold it.
    VkBuffer credit{VK_NULL_HANDLE};
    VkDeviceMemory credit_memory{VK_NULL_HANDLE};
    std::vector<VkBufferImageCopy> credit_regions;

    // A page of the runtime's own UI over the frame, which unlike the credit
    // changes while the runtime is up. Kept beside the credit rather than
    // folded into it so that taking a page down cannot disturb the credit.
    //
    // There are two of these because two independent things want one: the
    // achievement blade (slot 0) and the frame-rate readout (slot 1). They have
    // to be separate buffers, not one taking turns, or showing the blade would
    // blank the readout and hiding it would blank both.
    struct overlay_page {
        VkBuffer buffer{VK_NULL_HANDLE};
        VkDeviceMemory memory{VK_NULL_HANDLE};
        VkDeviceSize capacity{0};
        std::vector<VkBufferImageCopy> regions;
        std::vector<uint8_t> pixels; // what is currently uploaded
    };
    static constexpr uint32_t kOverlayPages = 2;
    overlay_page pages[kOverlayPages];

    // The cabinet surround: artwork the size of the whole surface, held in a
    // DEVICE-LOCAL image and copied from there into the swapchain every
    // present.
    //
    // An image rather than a buffer because of what it costs. The surround
    // around a 1080p picture on a 5120x1440 display is 6.5 megapixels - 26 MB -
    // and it changes when the title's score table does, which is a handful of
    // times a session. Copied out of host memory that would be about a
    // millisecond of DMA on every one of 60 frames a second forever; uploaded
    // once into video memory it is a copy the GPU does at its own bandwidth.
    // The regions are computed per present from the pane layout, so they follow
    // the picture without the artwork being rebuilt.
    VkImage surround{VK_NULL_HANDLE};
    VkDeviceMemory surround_memory{VK_NULL_HANDLE};
    uint32_t surround_width{0};
    uint32_t surround_height{0};

    // The audio meter, which is the one part of the surround that changes every
    // frame. Same shape as the panel above - a small host-visible buffer copied
    // into place - and separate from the surround so a moving bar never
    // re-uploads the artwork behind it.
    VkBuffer meter{VK_NULL_HANDLE};
    VkDeviceMemory meter_memory{VK_NULL_HANDLE};
    VkDeviceSize meter_capacity{0};
    std::vector<VkBufferImageCopy> meter_regions;

    // Whether the surface is divided into two side-by-side panes showing the
    // same frame. Latched here at swapchain creation rather than read per frame,
    // because the credit's copy regions are placed per pane when the swapchain
    // is built: a value that changed mid-run would leave the credit in the
    // coordinates of a layout that is no longer being used.
    bool twin_panes{false};

    // Whether the screen the picture does not cover is painted as a border
    // rather than left black. Latched here for the same reason twin_panes is.
    bool bordered{true};

    // Whether this swapchain deliberately presents with a preTransform the
    // surface does not itself report. See build_swapchain: when it does, every
    // acquire and present answers SUBOPTIMAL and that answer means nothing.
    bool rotation_is_deliberate{false};

    // Whether the picture is currently taking the whole screen because the
    // surround is hidden. Remembered rather than recomputed so a present can
    // tell that the toggle MOVED and re-place the credit, which is placed once
    // against a picture of a particular size and is wrong after it changes.
    bool fill_picture{false};
};

// Creates the swapchain and collects its images, for a surface of whatever size
// it currently is. Shared by the first set-up and by every rebuild after a
// resize or a mode change, so the two cannot drift apart - a rebuild that chose
// its images or its present mode differently from the original would be a
// difference nothing tests and only some hardware notices.
//
// `fallback_width`/`fallback_height` are used only where the surface declines to
// state its own extent (currentExtent of 0xFFFFFFFF, which Wayland does): there
// the swapchain's size is the application's choice, and the host's window size
// is the best answer available.
bool build_swapchain(VkDevice device, VkPhysicalDevice physical,
                     VkSurfaceKHR surface, display_state& state,
                     uint32_t fallback_width, uint32_t fallback_height,
                     std::string& error) {
    VkSurfaceCapabilitiesKHR capabilities{};
    if (vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physical, surface,
                                                  &capabilities) !=
        VK_SUCCESS) {
        error = "the surface reports no capabilities";
        return false;
    }
    uint32_t width = capabilities.currentExtent.width != UINT32_MAX
                         ? capabilities.currentExtent.width
                         : fallback_width;
    uint32_t height = capabilities.currentExtent.height != UINT32_MAX
                          ? capabilities.currentExtent.height
                          : fallback_height;
    // A surface the compositor has sized to nothing - a minimised window - has
    // no swapchain that can be created for it. Reported rather than clamped to
    // one pixel, so the caller waits for a real size instead of presenting into
    // a surface nobody can see.
    if (width < capabilities.minImageExtent.width)
        width = capabilities.minImageExtent.width;
    if (height < capabilities.minImageExtent.height)
        height = capabilities.minImageExtent.height;
    if (width > capabilities.maxImageExtent.width)
        width = capabilities.maxImageExtent.width;
    if (height > capabilities.maxImageExtent.height)
        height = capabilities.maxImageExtent.height;
    if (width == 0 || height == 0) {
        error = "the surface has no area";
        return false;
    }

    VkSwapchainCreateInfoKHR swap_info{
        VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    swap_info.surface = surface;
    swap_info.minImageCount =
        capabilities.minImageCount < 2 ? 2 : capabilities.minImageCount;
    if (capabilities.maxImageCount != 0 &&
        swap_info.minImageCount > capabilities.maxImageCount)
        swap_info.minImageCount = capabilities.maxImageCount;
    swap_info.imageFormat = state.format;
    swap_info.imageColorSpace = state.color_space;
    swap_info.imageExtent = {width, height};
    swap_info.imageArrayLayers = 1;
    // The frame arrives by blit, not by being rendered into.
    swap_info.imageUsage = VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    swap_info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    // What the presentation engine is told the application has ALREADY done to
    // the image. That is what preTransform means, and it is not a description
    // of the surface - passing currentTransform straight through is a claim to
    // have applied it, and nothing here applies anything: the blit below writes
    // the frame the same way up whatever the surface reports.
    //
    // On a desktop that claim is free, because currentTransform is always
    // identity there. On a handheld it is not. The Retroid Pocket Flip2's panel
    // is natively 1080x1920 and its whole system runs at ROTATION_90 (measured:
    // `dumpsys display` reports a 1080x1920 device with a 1920x1080 logical
    // frame), so its surface reports a 90-degree transform - and claiming to
    // have pre-rotated when nothing did puts the picture on its side.
    //
    // So identity is REQUESTED wherever the surface allows it, which is the
    // documented "let the platform rotate" path: the compositor applies what is
    // left, at the cost of a composition pass. Where identity is not offered the
    // surface's own transform is the only legal answer and is used unchanged.
    swap_info.preTransform =
        (capabilities.supportedTransforms &
         VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR)
            ? VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR
            : capabilities.currentTransform;
    // Said out loud when the surface is not upright, because this is the one
    // thing here that cannot be checked without the device in hand and its
    // symptom - a sideways picture - looks like a renderer fault rather than a
    // swapchain setting. The numbers are what a second opinion would need.
    // Presenting with a preTransform that is not the surface's own is legal and
    // is what "let the platform rotate" means - and it makes every acquire and
    // every present return VK_SUBOPTIMAL_KHR, forever, by design. That is
    // recorded here because SUBOPTIMAL otherwise reads as "the surface moved,
    // rebuild", and rebuilding a swapchain that is working is a loop: on the
    // Retroid it rebuilt on EVERY present, which repainted the cabinet every
    // frame and halved the frame rate. Measured at 28.6 fps against 60.
    state.rotation_is_deliberate =
        swap_info.preTransform != capabilities.currentTransform;
    // Said out loud ONCE per swapchain rather than per present - it was the
    // volume of this line that gave the loop away, so it keeps its place.
    if (capabilities.currentTransform != VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR)
        std::printf("  [gpu] surface transform 0x%X (supported 0x%X), "
                    "presenting with 0x%X into %ux%u%s\n",
                    capabilities.currentTransform,
                    capabilities.supportedTransforms,
                    static_cast<unsigned>(swap_info.preTransform), width,
                    height,
                    state.rotation_is_deliberate
                        ? " - SUBOPTIMAL is expected and is not a rebuild"
                        : "");
    swap_info.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    // FIFO is the only mode required to exist, and it paces the title to the
    // display rather than letting it run free.
    swap_info.presentMode = VK_PRESENT_MODE_FIFO_KHR;
    swap_info.clipped = VK_TRUE;
    // The driver is told which swapchain this replaces, so it can hand the
    // images over rather than reallocate them; the old handle is still ours to
    // destroy afterwards.
    swap_info.oldSwapchain = state.swapchain;
    VkSwapchainKHR fresh = VK_NULL_HANDLE;
    if (vkCreateSwapchainKHR(device, &swap_info, nullptr, &fresh) !=
        VK_SUCCESS) {
        error = "vkCreateSwapchainKHR failed";
        return false;
    }
    if (state.swapchain != VK_NULL_HANDLE)
        vkDestroySwapchainKHR(device, state.swapchain, nullptr);
    state.swapchain = fresh;
    state.width = width;
    state.height = height;
    uint32_t image_count = 0;
    vkGetSwapchainImagesKHR(device, state.swapchain, &image_count, nullptr);
    state.images.resize(image_count);
    vkGetSwapchainImagesKHR(device, state.swapchain, &image_count,
                            state.images.data());
    return true;
}

// Frees the credit so it can be built again at a new surface size. Its copy
// regions are coordinates in the swapchain image, so a surface that changed
// shape leaves every one of them wrong - and a region running off the image is
// undefined behaviour, not a copy that quietly does less.
void destroy_credit(VkDevice device, display_state& state) {
    if (state.credit) vkDestroyBuffer(device, state.credit, nullptr);
    if (state.credit_memory) vkFreeMemory(device, state.credit_memory, nullptr);
    state.credit = VK_NULL_HANDLE;
    state.credit_memory = VK_NULL_HANDLE;
    state.credit_regions.clear();
}

// Copies RGBA8 into mapped memory, exchanging red and blue on the way when the
// swapchain wants BGRA.
//
// The point is that the mapped side is only ever WRITTEN. Host-visible memory
// on a discrete GPU is typically write-combined, where a read costs an order of
// magnitude more than a write, so the obvious "memcpy then swap in place" pays
// for a full read of everything it just wrote. Over the surround's 29 MB that
// measured at 21.6 ms.
void copy_swapping(void* mapped, const uint8_t* source, std::size_t bytes,
                   bool blue_first) {
    if (!blue_first) {
        std::memcpy(mapped, source, bytes);
        return;
    }
    auto* out = static_cast<uint8_t*>(mapped);
    std::size_t at = 0;
    for (; at + 3 < bytes; at += 4) {
        out[at + 0] = source[at + 2];
        out[at + 1] = source[at + 1];
        out[at + 2] = source[at + 0];
        out[at + 3] = source[at + 3];
    }
    for (; at < bytes; ++at) out[at] = source[at];
}

// Frees the cabinet surround. Its image is the size of the surface it was built
// for, so a surface that changed shape leaves it the wrong size - and a copy
// whose source is smaller than the region asked for is undefined behaviour, not
// a copy that quietly does less. The caller supplies a new one for the new
// surface; until it does, the flat border stands.
void destroy_surround(VkDevice device, display_state& state) {
    if (state.surround) vkDestroyImage(device, state.surround, nullptr);
    if (state.surround_memory)
        vkFreeMemory(device, state.surround_memory, nullptr);
    state.surround = VK_NULL_HANDLE;
    state.surround_memory = VK_NULL_HANDLE;
    state.surround_width = 0;
    state.surround_height = 0;
}

// Uploads the credit and works out the copies that will draw it. Done once, at
// the size of the window it will be shown in, so presenting a frame costs only
// the copies - no per-frame CPU work and nothing to keep in step.
//
// `source_width`/`source_height` are the aspect the frame will be presented at,
// needed only to place the credit inside a twin pane's letterboxed picture
// rather than out in its black bars.
void build_credit(VkDevice device, VkPhysicalDevice physical,
                  display_state& state, uint32_t source_width,
                  uint32_t source_height) {
    if (!credit_overlay::enabled_by_environment()) return;
    const credit_overlay credit;
    // One credit per pane. In twin mode each pane IS a screen somebody is
    // looking at, and a credit in the corner of the surface would sit inside the
    // second player's half only - so player one would never see it at all. With
    // a single pane this is one placement in the corner of the whole image,
    // exactly as before.
    present_pane panes[2]{};
    const int pane_count =
        layout_present_panes(state.width, state.height, source_width,
                             source_height, state.twin_panes, panes,
                             state.fill_picture,
                             plain_border().load(std::memory_order_relaxed),
        picture_width_cap().load(std::memory_order_relaxed));
    int32_t origins_x[2]{};
    int32_t origins_y[2]{};
    int placed = 0;
    for (int i = 0; i < pane_count; ++i) {
        int32_t x = 0;
        int32_t y = 0;
        if (!credit.placement(static_cast<uint32_t>(panes[i].width),
                              static_cast<uint32_t>(panes[i].height), x, y))
            continue;
        origins_x[placed] = panes[i].x + x;
        origins_y[placed] = panes[i].y + y;
        ++placed;
    }
    // Every pane too small to hold the credit: nothing to draw, and nothing to
    // allocate for it either.
    if (placed == 0) return;

    // The swapchain decides the byte order; everything else about the picture is
    // the same either way.
    const bool blue_first = state.format == VK_FORMAT_B8G8R8A8_UNORM ||
                            state.format == VK_FORMAT_B8G8R8A8_SRGB;
    const std::vector<uint8_t> pixels =
        blue_first ? credit.bgra() : credit.rgba();

    VkBufferCreateInfo buffer_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    buffer_info.size = pixels.size();
    buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    if (vkCreateBuffer(device, &buffer_info, nullptr, &state.credit) !=
        VK_SUCCESS)
        return;
    VkMemoryRequirements requirements{};
    vkGetBufferMemoryRequirements(device, state.credit, &requirements);
    VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    allocate.allocationSize = requirements.size;
    allocate.memoryTypeIndex =
        find_memory_type(physical, requirements.memoryTypeBits,
                         VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                             VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    if (allocate.memoryTypeIndex == UINT32_MAX ||
        vkAllocateMemory(device, &allocate, nullptr, &state.credit_memory) !=
            VK_SUCCESS) {
        vkDestroyBuffer(device, state.credit, nullptr);
        state.credit = VK_NULL_HANDLE;
        return;
    }
    vkBindBufferMemory(device, state.credit, state.credit_memory, 0);
    void* mapped = nullptr;
    vkMapMemory(device, state.credit_memory, 0, pixels.size(), 0, &mapped);
    std::memcpy(mapped, pixels.data(), pixels.size());
    vkUnmapMemory(device, state.credit_memory);

    // One region per span, per pane. bufferRowLength keeps the copy reading the
    // credit's own rows, so a span several rows tall is still a single region.
    state.credit_regions.reserve(credit.spans().size() *
                                 static_cast<std::size_t>(placed));
    for (int i = 0; i < placed; ++i) {
        for (const overlay_span& span : credit.spans()) {
            VkBufferImageCopy region{};
            region.bufferOffset =
                (VkDeviceSize(span.y) * credit.width() + span.x) * 4;
            region.bufferRowLength = credit.width();
            region.bufferImageHeight = credit.height();
            region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            region.imageOffset = {origins_x[i] + static_cast<int32_t>(span.x),
                                  origins_y[i] + static_cast<int32_t>(span.y),
                                  0};
            region.imageExtent = {span.width, span.height, 1};
            state.credit_regions.push_back(region);
        }
    }
}

} // namespace

bool vulkan_backend::initialize(std::string& error,
                                const display_config* display) {
    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "whitty_xenon";
    app.apiVersion = VK_API_VERSION_1_1;

    VkInstanceCreateInfo instance_info{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    instance_info.pApplicationInfo = &app;
    // A surface can only be created from an instance that was told about it,
    // so the host's windowing extensions have to go in here, before anything
    // else exists.
    std::vector<const char*> instance_extensions;
    if (display != nullptr)
        for (const std::string& name : display->instance_extensions)
            instance_extensions.push_back(name.c_str());
    // WHITTY_VULKAN_VALIDATION=1 turns the Khronos validation layer on AND
    // routes its messages here. Both halves are needed: with the layer loaded
    // but no messenger, recent versions report nothing at all, and silence then
    // looks exactly like correctness. Anything the layer says is printed, so a
    // run that says nothing has actually been checked.
    const char* validation = std::getenv("WHITTY_VULKAN_VALIDATION");
    const bool want_validation = validation != nullptr && validation[0] == '1';
    static const char* const kValidationLayer = "VK_LAYER_KHRONOS_validation";
    if (want_validation) {
        instance_extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
        instance_info.enabledLayerCount = 1;
        instance_info.ppEnabledLayerNames = &kValidationLayer;
    }
    if (!instance_extensions.empty()) {
        instance_info.enabledExtensionCount =
            static_cast<uint32_t>(instance_extensions.size());
        instance_info.ppEnabledExtensionNames = instance_extensions.data();
    }
    VkInstance instance = VK_NULL_HANDLE;
    if (vkCreateInstance(&instance_info, nullptr, &instance) != VK_SUCCESS) {
        error = "vkCreateInstance failed";
        return false;
    }
    m_instance = instance;

    if (want_validation) {
        auto create = reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(
            vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT"));
        if (create != nullptr) {
            VkDebugUtilsMessengerCreateInfoEXT info{
                VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT};
            info.messageSeverity =
                VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
            info.messageType =
                VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
            info.pfnUserCallback =
                [](VkDebugUtilsMessageSeverityFlagBitsEXT,
                   VkDebugUtilsMessageTypeFlagsEXT,
                   const VkDebugUtilsMessengerCallbackDataEXT* data,
                   void*) -> VkBool32 {
                std::printf("  [vulkan] %s\n",
                            data != nullptr && data->pMessage != nullptr
                                ? data->pMessage
                                : "(no message)");
                std::fflush(stdout);
                return VK_FALSE;
            };
            VkDebugUtilsMessengerEXT messenger = VK_NULL_HANDLE;
            create(instance, &info, nullptr, &messenger);
            m_debug_messenger = messenger;
        }
        std::printf("  [gpu] Vulkan validation on\n");
    }

    // Pick the first physical device with a graphics-capable queue family.
    uint32_t device_count = 0;
    vkEnumeratePhysicalDevices(instance, &device_count, nullptr);
    if (device_count == 0) {
        error = "no Vulkan physical devices";
        shutdown();
        return false;
    }
    std::vector<VkPhysicalDevice> devices(device_count);
    vkEnumeratePhysicalDevices(instance, &device_count, devices.data());

    VkPhysicalDevice chosen = VK_NULL_HANDLE;
    uint32_t chosen_family = 0;
    for (VkPhysicalDevice device : devices) {
        uint32_t family_count = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(device, &family_count, nullptr);
        std::vector<VkQueueFamilyProperties> families(family_count);
        vkGetPhysicalDeviceQueueFamilyProperties(device, &family_count,
                                                 families.data());
        for (uint32_t i = 0; i < family_count; ++i) {
            if (families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
                chosen = device;
                chosen_family = i;
                break;
            }
        }
        if (chosen != VK_NULL_HANDLE) break;
    }
    if (chosen == VK_NULL_HANDLE) {
        error = "no graphics-capable queue family";
        shutdown();
        return false;
    }
    m_physical_device = chosen;
    m_queue_family = chosen_family;

    VkPhysicalDeviceProperties props;
    vkGetPhysicalDeviceProperties(chosen, &props);
    m_device_name = props.deviceName;

    // What this device can actually do, printed once, from the driver.
    //
    // Everything here has been the subject of a confident second-hand claim at
    // some point in this project's life, and several of those claims were
    // wrong in both directions - "no Adreno or Mali has a geometry stage" is
    // false for every one of the four phones this was written for, and "mobile
    // has no block compression" is false for Adreno and true for the RDNA2
    // Xclipse. A table someone read is not evidence about the machine in front
    // of you; one vkGetPhysicalDeviceFeatures call is. Six lines, printed
    // before the first draw, so the first run on any new device settles them.
    {
        VkPhysicalDeviceFeatures features{};
        vkGetPhysicalDeviceFeatures(chosen, &features);
        std::printf(
            "  [gpu] %s, Vulkan %u.%u.%u, driver %u\n"
            "  [gpu] geometryShader %s, textureCompressionBC %s, "
            "samplerAnisotropy %s\n"
            "  [gpu] maxPerStageDescriptorSampledImages %u, "
            "maxUniformBufferRange %u\n",
            props.deviceName, VK_VERSION_MAJOR(props.apiVersion),
            VK_VERSION_MINOR(props.apiVersion),
            VK_VERSION_PATCH(props.apiVersion), props.driverVersion,
            features.geometryShader ? "yes" : "NO",
            features.textureCompressionBC ? "yes" : "no",
            features.samplerAnisotropy ? "yes" : "no",
            props.limits.maxPerStageDescriptorSampledImages,
            props.limits.maxUniformBufferRange);
    }

    // Logical device with one graphics queue.
    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue_info{
        VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    queue_info.queueFamilyIndex = chosen_family;
    queue_info.queueCount = 1;
    queue_info.pQueuePriorities = &priority;
    VkDeviceCreateInfo device_info{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    device_info.queueCreateInfoCount = 1;
    device_info.pQueueCreateInfos = &queue_info;
    // The geometry stage, if the device has one. It is what completes a Xenos
    // rectangle list, and an unenabled feature is not merely unavailable - using
    // it is undefined behaviour, so it has to be asked for here and its absence
    // recorded for callers to check.
    VkPhysicalDeviceFeatures available{};
    vkGetPhysicalDeviceFeatures(chosen, &available);
    VkPhysicalDeviceFeatures enabled{};
    enabled.geometryShader = available.geometryShader;
    m_geometry_shaders = available.geometryShader == VK_TRUE;
    // Anisotropic filtering, for the slots whose fetch constant asks for it.
    // Same rule as the geometry stage: a feature that is available but not
    // enabled is undefined behaviour to use, not a no-op.
    enabled.samplerAnisotropy = available.samplerAnisotropy;
    device_info.pEnabledFeatures = &enabled;
    const char* swapchain_extension = VK_KHR_SWAPCHAIN_EXTENSION_NAME;
    if (display != nullptr) {
        device_info.enabledExtensionCount = 1;
        device_info.ppEnabledExtensionNames = &swapchain_extension;
    }
    VkDevice device = VK_NULL_HANDLE;
    if (vkCreateDevice(chosen, &device_info, nullptr, &device) != VK_SUCCESS) {
        error = "vkCreateDevice failed";
        shutdown();
        return false;
    }
    m_device = device;

    VkQueue queue = VK_NULL_HANDLE;
    vkGetDeviceQueue(device, chosen_family, 0, &queue);
    m_queue = queue;

    VkCommandPoolCreateInfo pool_info{
        VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    pool_info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pool_info.queueFamilyIndex = chosen_family;
    VkCommandPool pool = VK_NULL_HANDLE;
    if (vkCreateCommandPool(device, &pool_info, nullptr, &pool) != VK_SUCCESS) {
        error = "vkCreateCommandPool failed";
        shutdown();
        return false;
    }
    m_command_pool = pool;

    // The pipeline cache, seeded from the last run's blob if there is one.
    //
    // Keyed on the driver's own pipelineCacheUUID, so a driver update or a
    // different GPU never even offers a blob the driver would reject: the
    // driver validates the header anyway and ignoring a stale one is legal, but
    // a file named after what wrote it is the difference between "no cache
    // today" and a silent, permanent miss nobody notices.
    //
    // Nothing about a picture depends on this. A cache hit and a cache miss
    // produce the same pipeline; only the time to build it differs.
    {
        VkPhysicalDeviceProperties props{};
        vkGetPhysicalDeviceProperties(chosen, &props);
        char name[128];
        std::snprintf(name, sizeof(name),
                      "pipeline_cache_%08X_%08X_"
                      "%02X%02X%02X%02X%02X%02X%02X%02X.bin",
                      props.vendorID, props.deviceID,
                      props.pipelineCacheUUID[0], props.pipelineCacheUUID[1],
                      props.pipelineCacheUUID[2], props.pipelineCacheUUID[3],
                      props.pipelineCacheUUID[4], props.pipelineCacheUUID[5],
                      props.pipelineCacheUUID[6], props.pipelineCacheUUID[7]);
        m_pipeline_cache_path = pipeline_cache_directory();
        if (!m_pipeline_cache_path.empty())
            m_pipeline_cache_path += name;

        std::vector<uint8_t> blob;
        if (!m_pipeline_cache_path.empty()) {
            std::ifstream in(m_pipeline_cache_path, std::ios::binary);
            if (in)
                blob.assign(std::istreambuf_iterator<char>(in),
                            std::istreambuf_iterator<char>());
        }
        VkPipelineCacheCreateInfo cache_info{
            VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO};
        cache_info.initialDataSize = blob.size();
        cache_info.pInitialData = blob.empty() ? nullptr : blob.data();
        VkPipelineCache cache = VK_NULL_HANDLE;
        if (vkCreatePipelineCache(device, &cache_info, nullptr, &cache) !=
            VK_SUCCESS) {
            // A rejected blob is the one case worth retrying empty: the driver
            // refuses data it does not recognise, and losing the cache is not a
            // reason to lose the run.
            cache_info.initialDataSize = 0;
            cache_info.pInitialData = nullptr;
            vkCreatePipelineCache(device, &cache_info, nullptr, &cache);
        }
        m_pipeline_cache = cache;
        // Printed always, not behind a trace flag. On Android there is no
        // driver-side pipeline blob cache at all - Arm say so explicitly - so
        // this file is the only thing standing between a player and rebuilding
        // every pipeline on every launch, and "was it seeded" is the one fact
        // that says whether it is working.
        std::printf("  [gpu] pipeline cache: %s, %zu byte(s) seeded\n",
                    m_pipeline_cache_path.empty() ? "in memory only"
                                                  : m_pipeline_cache_path.c_str(),
                    blob.size());
    }

    if (display == nullptr) return true;

    // The surface comes from the host's windowing; everything after it is
    // ordinary Vulkan.
    void* surface_handle = nullptr;
    if (!display->create_surface || !display->create_surface(m_instance,
                                                             &surface_handle) ||
        surface_handle == nullptr) {
        error = "could not create a window surface";
        shutdown();
        return false;
    }
    m_surface = surface_handle;
    auto surface = static_cast<VkSurfaceKHR>(surface_handle);

    VkBool32 supported = VK_FALSE;
    vkGetPhysicalDeviceSurfaceSupportKHR(chosen, chosen_family, surface,
                                         &supported);
    if (!supported) {
        error = "the graphics queue cannot present to this surface";
        shutdown();
        return false;
    }

    uint32_t format_count = 0;
    vkGetPhysicalDeviceSurfaceFormatsKHR(chosen, surface, &format_count,
                                         nullptr);
    std::vector<VkSurfaceFormatKHR> formats(format_count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(chosen, surface, &format_count,
                                         formats.data());
    if (formats.empty()) {
        error = "the surface reports no formats";
        shutdown();
        return false;
    }
    VkSurfaceFormatKHR chosen_format = formats[0];
    for (const VkSurfaceFormatKHR& f : formats) {
        if (f.format == VK_FORMAT_B8G8R8A8_UNORM ||
            f.format == VK_FORMAT_R8G8B8A8_UNORM) {
            chosen_format = f;
            break;
        }
    }

    auto* state = new display_state();
    state->format = chosen_format.format;
    state->color_space = chosen_format.colorSpace;
    if (!build_swapchain(device, chosen, surface, *state, display->width,
                         display->height, error)) {
        delete state;
        shutdown();
        return false;
    }

    VkSemaphoreCreateInfo semaphore_info{
        VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    vkCreateSemaphore(device, &semaphore_info, nullptr, &state->acquired);
    vkCreateSemaphore(device, &semaphore_info, nullptr, &state->rendered);
    VkFenceCreateInfo fence_info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
    vkCreateFence(device, &fence_info, nullptr, &state->fence);
    VkCommandBufferAllocateInfo cmd_alloc{
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    cmd_alloc.commandPool = pool;
    cmd_alloc.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cmd_alloc.commandBufferCount = 1;
    vkAllocateCommandBuffers(device, &cmd_alloc, &state->command_buffer);

    // WHITTY_TWIN=1 divides the surface into two panes showing the same frame.
    // Latched before the credit is built, because the credit is placed per pane.
    state->twin_panes = twin_panes_enabled_by_environment();
    // And whether what the picture does not cover is painted as a border.
    state->bordered = display->bordered;

    // The credit that says whose port this is. Built here rather than on the
    // first present so nothing is allocated inside a frame.
    //
    // The surface's own dimensions stand in for the frame's aspect, which is not
    // known until the title renders one. They agree in practice - the window is
    // opened at the frame's shape - and where they do not, the only consequence
    // is the credit sitting a little inside or outside a twin pane's picture. It
    // is always within the pane, so it can never land outside the image.
    build_credit(device, chosen, *state, state->width, state->height);

    m_display_state = state;
    m_swapchain = state->swapchain;
    return true;
}

// Defined below, with the cached objects it owns.
void destroy_scene_cache(VkDevice device, VkCommandPool pool, void* opaque);

// Writes the pipeline cache out, if there is one and somewhere to put it.
//
// Called at shutdown AND from the render path whenever new pipelines were
// built, because on this project's own capture path the process ends with
// std::_Exit(0) - the guest's threads are still running and a clean unwind
// would race them - and _Exit runs no destructor and no atexit handler. A cache
// that is only written by shutdown() is therefore never written at all on the
// exact path a device run takes, which would look like the cache not working
// rather than never being saved.
//
// Written to a temporary and renamed. A run killed mid-write would otherwise
// leave a truncated blob, which the driver rejects at the next start - so the
// symptom of an interrupted run would be a permanently cold cache with nothing
// saying why.
void vulkan_backend::save_pipeline_cache() {
    auto device = static_cast<VkDevice>(m_device);
    auto cache = static_cast<VkPipelineCache>(m_pipeline_cache);
    if (device == nullptr || cache == VK_NULL_HANDLE) return;
    if (m_pipeline_cache_path.empty()) return;
    std::size_t size = 0;
    if (vkGetPipelineCacheData(device, cache, &size, nullptr) != VK_SUCCESS ||
        size == 0)
        return;
    std::vector<uint8_t> blob(size);
    if (vkGetPipelineCacheData(device, cache, &size, blob.data()) != VK_SUCCESS)
        return;
    const std::string temporary = m_pipeline_cache_path + ".new";
    {
        std::ofstream out(temporary, std::ios::binary | std::ios::trunc);
        out.write(reinterpret_cast<const char*>(blob.data()),
                  static_cast<std::streamsize>(size));
    }
    std::error_code ec;
    std::filesystem::rename(temporary, m_pipeline_cache_path, ec);
    if (ec) std::filesystem::remove(temporary, ec);
}

void vulkan_backend::shutdown() {
    auto device = static_cast<VkDevice>(m_device);
    if (device) {
        vkDeviceWaitIdle(device);
        // Cached render objects go before the pool and device they came from.
        destroy_scene_cache(device, static_cast<VkCommandPool>(m_command_pool),
                            m_scene_cache);
        m_scene_cache = nullptr;
        if (m_display_state != nullptr) {
            auto* state = static_cast<display_state*>(m_display_state);
            if (state->credit) vkDestroyBuffer(device, state->credit, nullptr);
            if (state->credit_memory)
                vkFreeMemory(device, state->credit_memory, nullptr);
            for (auto& page : state->pages) {
                if (page.buffer) vkDestroyBuffer(device, page.buffer, nullptr);
                if (page.memory) vkFreeMemory(device, page.memory, nullptr);
                page.buffer = VK_NULL_HANDLE;
                page.memory = VK_NULL_HANDLE;
                page.capacity = 0;
            }
            if (state->meter) vkDestroyBuffer(device, state->meter, nullptr);
            if (state->meter_memory)
                vkFreeMemory(device, state->meter_memory, nullptr);
            destroy_surround(device, *state);
            if (state->fence) vkDestroyFence(device, state->fence, nullptr);
            if (state->acquired)
                vkDestroySemaphore(device, state->acquired, nullptr);
            if (state->rendered)
                vkDestroySemaphore(device, state->rendered, nullptr);
            if (state->command_buffer && m_command_pool)
                vkFreeCommandBuffers(
                    device, static_cast<VkCommandPool>(m_command_pool), 1,
                    &state->command_buffer);
            if (state->swapchain)
                vkDestroySwapchainKHR(device, state->swapchain, nullptr);
            delete state;
            m_display_state = nullptr;
            m_swapchain = nullptr;
        }
        save_pipeline_cache();
        if (m_pipeline_cache) {
            vkDestroyPipelineCache(
                device, static_cast<VkPipelineCache>(m_pipeline_cache), nullptr);
            m_pipeline_cache = nullptr;
        }
        if (m_command_pool)
            vkDestroyCommandPool(device, static_cast<VkCommandPool>(m_command_pool),
                                 nullptr);
        vkDestroyDevice(device, nullptr);
    }
    if (m_surface && m_instance)
        vkDestroySurfaceKHR(static_cast<VkInstance>(m_instance),
                            static_cast<VkSurfaceKHR>(m_surface), nullptr);
    m_surface = nullptr;
    if (m_debug_messenger && m_instance) {
        auto destroy = reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(
            vkGetInstanceProcAddr(static_cast<VkInstance>(m_instance),
                                  "vkDestroyDebugUtilsMessengerEXT"));
        if (destroy != nullptr)
            destroy(static_cast<VkInstance>(m_instance),
                    static_cast<VkDebugUtilsMessengerEXT>(m_debug_messenger),
                    nullptr);
    }
    m_debug_messenger = nullptr;
    if (m_instance)
        vkDestroyInstance(static_cast<VkInstance>(m_instance), nullptr);
    m_instance = m_physical_device = m_device = m_queue = m_command_pool =
        nullptr;
    m_geometry_shaders = false;
}

bool vulkan_backend::render_clear(uint32_t width, uint32_t height,
                                  const float clear[4],
                                  std::vector<uint8_t>& out,
                                  std::string& error) {
    if (!initialized()) {
        error = "backend not initialized";
        return false;
    }
    auto device = static_cast<VkDevice>(m_device);
    const VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
    VkRenderPass render_pass = make_render_pass(device, format);
    const bool ok = render_to_target(
        device, static_cast<VkPhysicalDevice>(m_physical_device),
        static_cast<VkQueue>(m_queue),
        static_cast<VkCommandPool>(m_command_pool), width, height, format,
        render_pass, clear, nullptr, out, error);
    vkDestroyRenderPass(device, render_pass, nullptr);
    return ok;
}

bool vulkan_backend::render_frame(uint32_t width, uint32_t height,
                                  const float clear[4],
                                  const std::vector<frame_draw>& draws,
                                  std::vector<uint8_t>& out,
                                  std::string& error) {
    if (!initialized()) {
        error = "backend not initialized";
        return false;
    }
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    const VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
    VkRenderPass render_pass = make_render_pass(device, format);

    // Build the per-draw pipeline and vertex buffer up front; they all render
    // into the same target in one render pass.
    struct draw_resources {
        VkShaderModule vs, fs;
        VkPipelineLayout layout;
        VkPipeline pipeline;
        VkBuffer vbuf;
        VkDeviceMemory vmem;
        uint32_t count;
    };
    std::vector<draw_resources> res;
    res.reserve(draws.size());
    for (const frame_draw& d : draws) {
        draw_resources r{};
        r.vs = make_shader_module(device, *d.vertex_spirv);
        r.fs = make_shader_module(device, *d.fragment_spirv);
        r.pipeline = make_pipeline(device, render_pass, width, height, r.vs,
                                   r.fs, d.blend, d.topo, VK_NULL_HANDLE,
                                   r.layout);
        r.vbuf = make_vertex_buffer(device, physical, *d.positions, r.vmem);
        r.count = d.vertex_count;
        res.push_back(r);
    }

    const bool ok = render_to_target(
        device, physical, static_cast<VkQueue>(m_queue),
        static_cast<VkCommandPool>(m_command_pool), width, height, format,
        render_pass, clear,
        [&](VkCommandBuffer cmd) {
            for (const draw_resources& r : res) {
                vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS,
                                  r.pipeline);
                const VkDeviceSize offset = 0;
                vkCmdBindVertexBuffers(cmd, 0, 1, &r.vbuf, &offset);
                vkCmdDraw(cmd, r.count, 1, 0, 0);
            }
        },
        out, error);

    for (const draw_resources& r : res) {
        vkDestroyBuffer(device, r.vbuf, nullptr);
        vkFreeMemory(device, r.vmem, nullptr);
        vkDestroyPipeline(device, r.pipeline, nullptr);
        vkDestroyPipelineLayout(device, r.layout, nullptr);
        vkDestroyShaderModule(device, r.vs, nullptr);
        vkDestroyShaderModule(device, r.fs, nullptr);
    }
    vkDestroyRenderPass(device, render_pass, nullptr);
    return ok;
}


namespace {

// One of the console's blend factors, as the host's. Anything unrecognised
// becomes ONE for a source and ZERO for a destination, which is the same as no
// blending - visible as an effect drawn flat rather than as a crash.
VkBlendFactor to_vk_blend_factor(uint8_t factor, bool is_source) {
    switch (static_cast<blend_factor>(factor)) {
        case blend_factor::zero: return VK_BLEND_FACTOR_ZERO;
        case blend_factor::one: return VK_BLEND_FACTOR_ONE;
        case blend_factor::src_color: return VK_BLEND_FACTOR_SRC_COLOR;
        case blend_factor::one_minus_src_color:
            return VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
        case blend_factor::src_alpha: return VK_BLEND_FACTOR_SRC_ALPHA;
        case blend_factor::one_minus_src_alpha:
            return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case blend_factor::dst_color: return VK_BLEND_FACTOR_DST_COLOR;
        case blend_factor::one_minus_dst_color:
            return VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
        case blend_factor::dst_alpha: return VK_BLEND_FACTOR_DST_ALPHA;
        case blend_factor::one_minus_dst_alpha:
            return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        case blend_factor::constant_color: return VK_BLEND_FACTOR_CONSTANT_COLOR;
        case blend_factor::one_minus_constant_color:
            return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
        case blend_factor::constant_alpha: return VK_BLEND_FACTOR_CONSTANT_ALPHA;
        case blend_factor::one_minus_constant_alpha:
            return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA;
        case blend_factor::src_alpha_saturate:
            return VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
    }
    return is_source ? VK_BLEND_FACTOR_ONE : VK_BLEND_FACTOR_ZERO;
}

VkBlendOp to_vk_blend_op(uint8_t op) {
    switch (static_cast<blend_op>(op)) {
        case blend_op::add: return VK_BLEND_OP_ADD;
        case blend_op::subtract: return VK_BLEND_OP_SUBTRACT;
        case blend_op::min: return VK_BLEND_OP_MIN;
        case blend_op::max: return VK_BLEND_OP_MAX;
        case blend_op::reverse_subtract: return VK_BLEND_OP_REVERSE_SUBTRACT;
    }
    return VK_BLEND_OP_ADD;
}

// A pipeline for the general path: the caller's own vertex input layout, and a
// layout covering the descriptor sets a translated shader declares.
VkPipeline make_scene_pipeline(
    VkDevice device, VkPipelineCache pipeline_cache, VkRenderPass render_pass,
    uint32_t width, uint32_t height,
    VkShaderModule vs, VkShaderModule fs, VkShaderModule gs,
    const vulkan_backend::scene_draw::scene_blend& blend, topology topo,
    const std::vector<VkVertexInputBindingDescription>& bindings,
    const std::vector<VkVertexInputAttributeDescription>& attributes,
    const std::vector<VkDescriptorSetLayout>& set_layouts,
    VkPipelineLayout& out_layout,
    bool depth_test_enabled, bool depth_write_enabled,
    uint8_t depth_compare_op, uint8_t cull_mode, bool front_face_ccw,
    bool color_write_enabled) {
    // Vertex and fragment always; a geometry stage only where one was given -
    // which for this backend means a rectangle list, whose fourth vertex it
    // builds.
    VkPipelineShaderStageCreateInfo stages[3]{};
    uint32_t stage_count = 0;
    stages[stage_count].sType =
        VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[stage_count].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[stage_count].module = vs;
    stages[stage_count].pName = "main";
    ++stage_count;
    if (gs != VK_NULL_HANDLE) {
        stages[stage_count].sType =
            VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
        stages[stage_count].stage = VK_SHADER_STAGE_GEOMETRY_BIT;
        stages[stage_count].module = gs;
        stages[stage_count].pName = "main";
        ++stage_count;
    }
    stages[stage_count].sType =
        VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[stage_count].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[stage_count].module = fs;
    stages[stage_count].pName = "main";
    ++stage_count;

    VkPipelineVertexInputStateCreateInfo vertex_input{
        VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vertex_input.vertexBindingDescriptionCount =
        static_cast<uint32_t>(bindings.size());
    vertex_input.pVertexBindingDescriptions =
        bindings.empty() ? nullptr : bindings.data();
    vertex_input.vertexAttributeDescriptionCount =
        static_cast<uint32_t>(attributes.size());
    vertex_input.pVertexAttributeDescriptions =
        attributes.empty() ? nullptr : attributes.data();

    VkPipelineInputAssemblyStateCreateInfo input_assembly{
        VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    input_assembly.topology = to_vk_topology(topo);

    VkViewport viewport{0.0f, 0.0f, float(width), float(height), 0.0f, 1.0f};
    VkRect2D scissor{{0, 0}, {width, height}};
    VkPipelineViewportStateCreateInfo viewport_state{
        VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport_state.viewportCount = 1;
    viewport_state.pViewports = &viewport;
    viewport_state.scissorCount = 1;
    viewport_state.pScissors = &scissor;

    VkPipelineRasterizationStateCreateInfo raster{
        VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    // The console's winding and culling, decoded per draw. A title that draws
    // an enclosing world - terrain, a sky, the inside of a room - depends on
    // this: with nothing culled the far side of every surface is drawn over
    // the near side as a huge flat triangle.
    raster.cullMode = cull_mode == 3   ? VK_CULL_MODE_FRONT_AND_BACK
                      : cull_mode == 2 ? VK_CULL_MODE_BACK_BIT
                      : cull_mode == 1 ? VK_CULL_MODE_FRONT_BIT
                                       : VK_CULL_MODE_NONE;
    raster.frontFace = front_face_ccw ? VK_FRONT_FACE_COUNTER_CLOCKWISE
                                      : VK_FRONT_FACE_CLOCKWISE;
    raster.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo multisample{
        VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineDepthStencilStateCreateInfo depth_stencil{
        VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    depth_stencil.depthTestEnable = depth_test_enabled ? VK_TRUE : VK_FALSE;
    depth_stencil.depthWriteEnable = depth_write_enabled ? VK_TRUE : VK_FALSE;
    depth_stencil.depthCompareOp = to_vk_compare_op(depth_compare_op);
    depth_stencil.depthBoundsTestEnable = VK_FALSE;
    depth_stencil.stencilTestEnable = VK_FALSE;

    VkPipelineColorBlendAttachmentState blend_attachment{};
    blend_attachment.colorWriteMask =
        color_write_enabled ? VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                              VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT
                            : 0;
    if (blend.enabled) {
        blend_attachment.blendEnable = VK_TRUE;
        blend_attachment.srcColorBlendFactor =
            to_vk_blend_factor(blend.color_src, true);
        blend_attachment.dstColorBlendFactor =
            to_vk_blend_factor(blend.color_dst, false);
        blend_attachment.colorBlendOp = to_vk_blend_op(blend.color_op);
        blend_attachment.srcAlphaBlendFactor =
            to_vk_blend_factor(blend.alpha_src, true);
        blend_attachment.dstAlphaBlendFactor =
            to_vk_blend_factor(blend.alpha_dst, false);
        blend_attachment.alphaBlendOp = to_vk_blend_op(blend.alpha_op);
    }
    VkPipelineColorBlendStateCreateInfo blend_info{
        VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    blend_info.attachmentCount = 1;
    blend_info.pAttachments = &blend_attachment;

    VkPipelineLayoutCreateInfo layout_info{
        VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    layout_info.setLayoutCount = static_cast<uint32_t>(set_layouts.size());
    layout_info.pSetLayouts = set_layouts.empty() ? nullptr : set_layouts.data();
    out_layout = VK_NULL_HANDLE;
    if (vkCreatePipelineLayout(device, &layout_info, nullptr, &out_layout) !=
        VK_SUCCESS)
        return VK_NULL_HANDLE;

    VkGraphicsPipelineCreateInfo pipeline_info{
        VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    pipeline_info.stageCount = stage_count;
    pipeline_info.pStages = stages;
    pipeline_info.pVertexInputState = &vertex_input;
    pipeline_info.pInputAssemblyState = &input_assembly;
    pipeline_info.pViewportState = &viewport_state;
    pipeline_info.pRasterizationState = &raster;
    pipeline_info.pMultisampleState = &multisample;
    pipeline_info.pColorBlendState = &blend_info;
    pipeline_info.pDepthStencilState = &depth_stencil;
    pipeline_info.layout = out_layout;
    pipeline_info.renderPass = render_pass;
    pipeline_info.subpass = 0;
    VkPipeline pipeline = VK_NULL_HANDLE;
    vkCreateGraphicsPipelines(device, pipeline_cache, 1, &pipeline_info, nullptr,
                              &pipeline);
    return pipeline;
}

// What makes two draws need different pipelines. Everything here is compared,
// so a key that omits something renders the second draw with the first one's
// state - which is far harder to see than a crash.
struct pipeline_key {
    VkShaderModule vs{VK_NULL_HANDLE};
    VkShaderModule fs{VK_NULL_HANDLE};
    // Null for most draws; the rectangle-completing stage for a rectangle list.
    VkShaderModule gs{VK_NULL_HANDLE};
    vulkan_backend::scene_draw::scene_blend blend;
    topology topo{topology::triangle_list};
    VkDescriptorSetLayout texture_layout{VK_NULL_HANDLE};
    bool depth_test_enabled{false};
    bool depth_write_enabled{false};
    uint8_t depth_compare_op{0};
    uint8_t cull_mode{0};
    bool front_face_ccw{true};
    bool color_write_enabled{true};
    // A pipeline bakes in the viewport, so a target of a different size is a
    // different pipeline. Part of the key rather than a reason to throw the
    // cache away: a frame has several pass sizes live at once, and invalidating
    // on every size change would rebuild every pipeline several times a frame.
    uint32_t width{0};
    uint32_t height{0};
    std::vector<uint32_t> binding_strides;
    // location, binding, offset and format packed into one comparable value.
    std::vector<uint64_t> attributes;

    bool operator<(const pipeline_key& other) const {
        if (vs != other.vs) return vs < other.vs;
        if (fs != other.fs) return fs < other.fs;
        if (gs != other.gs) return gs < other.gs;
        if (width != other.width) return width < other.width;
        if (height != other.height) return height < other.height;
        if (blend < other.blend) return true;
        if (other.blend < blend) return false;
        if (topo != other.topo) return topo < other.topo;
        if (texture_layout != other.texture_layout)
            return texture_layout < other.texture_layout;
        if (depth_test_enabled != other.depth_test_enabled)
            return depth_test_enabled < other.depth_test_enabled;
        if (depth_write_enabled != other.depth_write_enabled)
            return depth_write_enabled < other.depth_write_enabled;
        if (depth_compare_op != other.depth_compare_op)
            return depth_compare_op < other.depth_compare_op;
        if (cull_mode != other.cull_mode) return cull_mode < other.cull_mode;
        if (front_face_ccw != other.front_face_ccw)
            return front_face_ccw < other.front_face_ccw;
        if (color_write_enabled != other.color_write_enabled)
            return color_write_enabled < other.color_write_enabled;
        if (binding_strides != other.binding_strides)
            return binding_strides < other.binding_strides;
        return attributes < other.attributes;
    }
};

// Everything render_scene keeps between frames. Rebuilding these per frame
// costs more than the drawing does: at Geometry Wars' eleven draws a frame it
// was the difference between 22 and 60+ frames a second.
struct scene_cache {
    VkRenderPass render_pass{VK_NULL_HANDLE};
    // The same render pass, loading the target instead of clearing it, for a
    // pass that continues another - see scene_pass::continues_pass.
    VkRenderPass keep_pass{VK_NULL_HANDLE};

    // A colour target per pass of the frame, kept between frames because a
    // title's pass structure does not change.
    //
    // Keyed by the pass's position in the frame as well as its size: two passes
    // of the same size are still two images, and sharing one would mean the
    // second overwrote the first's result before anything could sample it.
    struct render_target {
        VkImage image{VK_NULL_HANDLE};
        VkDeviceMemory memory{VK_NULL_HANDLE};
        VkImageView view{VK_NULL_HANDLE};
        // The pass's depth buffer. Never sampled and never resolved - the
        // titles brought up so far read depth back as a texture nowhere - so
        // it is an attachment and nothing else.
        VkImage depth_image{VK_NULL_HANDLE};
        VkDeviceMemory depth_memory{VK_NULL_HANDLE};
        VkImageView depth_view{VK_NULL_HANDLE};
        VkFramebuffer framebuffer{VK_NULL_HANDLE};
        // What layout the image is in between frames. A pass's image can be
        // sampled by a draw in an EARLIER pass - which is how a title reads its
        // own previous frame - and a descriptor read needs the image to actually
        // be in the layout it names. Two cases are not: a freshly created image
        // (undefined) and the presented one (left a transfer source for the
        // blit). Both are fixed up before the passes run, which needs knowing
        // where they stand.
        VkImageLayout layout{VK_IMAGE_LAYOUT_UNDEFINED};
        // The guest address this image was last resolved to, or 0 if it never
        // was. This is what makes an image findable by what it MEANS to the
        // title rather than by the ordinal it happened to sit at, which the
        // key above is and which changes with the frame's shape. It is read
        // when a history has to be seeded from the surface's own last picture -
        // console memory at an address holds the last resolve of that address,
        // and which pass of which frame shape made it is not part of that.
        uint32_t last_resolve_address{0};
    };
    std::map<std::tuple<uint32_t, uint32_t, uint32_t>, render_target> targets;

    // A copy of a resolved surface as it stood at the end of the LAST frame,
    // for whichever draw samples the address a pass of this frame resolves to -
    // a draw in that pass itself, or one in an earlier pass, for which the copy
    // is by construction the previous frame's. Made only for an address some
    // draw actually reads this way, because it costs an image and a full-target
    // copy every frame.
    //
    // KEYED BY THE GUEST ADDRESS AND THE SIZE, deliberately NOT by the pass's
    // position in the frame - which is what `targets` above is keyed by, and
    // what this used to live inside.
    //
    // A title's pass structure is NOT the same every frame. Ridge Racer 6
    // alternates: a frame that draws the scene has three passes and composites
    // it in pass 1, and the frame after it re-presents that composite with two
    // passes, reading it back in pass 0. Same guest surface, same size, two
    // different pass ordinals - so keyed by ordinal they were two images, the
    // re-present frame's fed only by other re-present frames, which read from it
    // before anything had ever written it. It stayed at the black it was cleared
    // to and every second frame of the title presented black, for as long as the
    // title ran. Nothing reported anything wrong: the history existed, the
    // descriptor bound it, the draw ran, and the sample was the colour it held.
    struct history_image {
        VkImage image{VK_NULL_HANDLE};
        VkDeviceMemory memory{VK_NULL_HANDLE};
        VkImageView view{VK_NULL_HANDLE};
        VkImageLayout layout{VK_IMAGE_LAYOUT_UNDEFINED};
    };
    std::map<std::tuple<uint32_t, uint32_t, uint32_t>, history_image> histories;

    // The presented pass's target, borrowed from the map above - present() and
    // the readback both want it, and neither cares which pass produced it.
    uint32_t width{0};
    uint32_t height{0};
    VkImage image{VK_NULL_HANDLE};
    VkBuffer readback{VK_NULL_HANDLE};
    VkDeviceMemory readback_memory{VK_NULL_HANDLE};
    VkDeviceSize readback_size{0};

    // Bound wherever a shader declares a texture the caller gave no pixels
    // for; see render_scene.
    VkImage placeholder_image{VK_NULL_HANDLE};
    VkDeviceMemory placeholder_memory{VK_NULL_HANDLE};
    VkImageView placeholder_view{VK_NULL_HANDLE};
    // The sampler a slot gets when the caller said nothing about how it wants
    // to sample - the old whole-runtime default, kept for that one case.
    VkSampler sampler{VK_NULL_HANDLE};
    // One sampler per distinct state a draw actually asks for, built on demand
    // and kept for the run. A title uses a handful: point-clamp for its UI,
    // linear-clamp for a resolved pass, linear-wrap for a tiling surface. That
    // is three objects, not one per slot per draw, which is why this is keyed
    // by the state rather than by the slot.
    std::map<sampler_state, VkSampler> samplers;
    // The device's own anisotropy ceiling, read once. Asking for more than a
    // device supports is not a hint that gets clamped, it is invalid.
    float max_anisotropy{1.0f};
    bool mirror_clamp_supported{false};

    // A texture uploaded from guest memory, kept for the run. The pixels are
    // kept alongside the image so an upload can be skipped when a title rebinds
    // an unchanged texture - which is every texture, every frame.
    struct uploaded_texture {
        VkImage image{VK_NULL_HANDLE};
        VkDeviceMemory memory{VK_NULL_HANDLE};
        VkImageView view{VK_NULL_HANDLE};
        uint32_t width{0};
        uint32_t height{0};
        std::vector<uint8_t> pixels;
    };
    std::map<uint64_t, uploaded_texture> textures;

    // The size of the readback buffer's target, so it is rebuilt only when the
    // presented pass changes size.
    uint32_t readback_width{0};
    uint32_t readback_height{0};

    VkDescriptorSetLayout constant_layout{VK_NULL_HANDLE};
    VkDescriptorSetLayout empty_layout{VK_NULL_HANDLE};
    std::map<std::vector<uint32_t>, VkDescriptorSetLayout> texture_layouts;

    // Shader modules keyed by the address of the SPIR-V the caller holds. The
    // frame renderer caches translated shaders in a std::map, whose elements
    // never move, so the address identifies the module for the whole run.
    std::map<const void*, VkShaderModule> modules;
    std::map<pipeline_key, std::pair<VkPipeline, VkPipelineLayout>> pipelines;

    VkDescriptorPool descriptor_pool{VK_NULL_HANDLE};
    uint32_t pool_draws{0};

    // One host-visible buffer that every vertex, index and constant buffer of
    // a frame is suballocated from, mapped once and left mapped.
    //
    // The obvious implementation - a VkBuffer per buffer per draw - costs a
    // vkAllocateMemory each, and vkAllocateMemory is a kernel-level allocation
    // measured in whole milliseconds. At a dozen draws a frame that was the
    // entire frame budget: 37 ms of a 38 ms frame, dwarfing both the drawing
    // and the work of gathering the data.
    VkBuffer arena{VK_NULL_HANDLE};
    VkDeviceMemory arena_memory{VK_NULL_HANDLE};
    VkDeviceSize arena_size{0};
    uint8_t* arena_mapped{nullptr};
    VkDeviceSize uniform_alignment{256};

    VkCommandBuffer command_buffer{VK_NULL_HANDLE};

    // Two timestamps around the frame's command buffer, so the profile can say
    // how much of the submit-and-wait span the GPU was actually EXECUTING for.
    //
    // Without this the only number available is wall time across
    // vkQueueSubmit + vkQueueWaitIdle, which is GPU execution plus submission
    // and fence latency with nothing to separate them - and the two want
    // opposite fixes. That ambiguity is what made "the GPU is idling on the
    // PCIe bus" a plausible reading of a 24 ms span: the span tracked the bytes
    // staged, so the bytes looked like the cause. They were not.
    VkQueryPool timestamps{VK_NULL_HANDLE};
    float timestamp_period{0.0f}; // nanoseconds per tick, 0 if unsupported

    // Buffers for the frame in flight, released at the start of the next one.
    std::vector<VkBuffer> buffers;
    std::vector<VkDeviceMemory> memories;
};

} // namespace

// Frees everything render_scene cached. Separate from shutdown() only so the
// Vulkan types can stay inside this file.
void destroy_scene_cache(VkDevice device, VkCommandPool pool, void* opaque) {
    if (opaque == nullptr) return;
    auto* cache = static_cast<scene_cache*>(opaque);
    for (VkBuffer b : cache->buffers) vkDestroyBuffer(device, b, nullptr);
    for (VkDeviceMemory m : cache->memories) vkFreeMemory(device, m, nullptr);
    for (const auto& entry : cache->pipelines) {
        vkDestroyPipeline(device, entry.second.first, nullptr);
        vkDestroyPipelineLayout(device, entry.second.second, nullptr);
    }
    for (const auto& entry : cache->modules)
        vkDestroyShaderModule(device, entry.second, nullptr);
    for (const auto& entry : cache->texture_layouts)
        vkDestroyDescriptorSetLayout(device, entry.second, nullptr);
    if (cache->constant_layout)
        vkDestroyDescriptorSetLayout(device, cache->constant_layout, nullptr);
    if (cache->empty_layout)
        vkDestroyDescriptorSetLayout(device, cache->empty_layout, nullptr);
    if (cache->descriptor_pool)
        vkDestroyDescriptorPool(device, cache->descriptor_pool, nullptr);
    if (cache->timestamps) vkDestroyQueryPool(device, cache->timestamps, nullptr);
    if (cache->arena_mapped) vkUnmapMemory(device, cache->arena_memory);
    if (cache->arena) vkDestroyBuffer(device, cache->arena, nullptr);
    if (cache->arena_memory) vkFreeMemory(device, cache->arena_memory, nullptr);
    if (cache->command_buffer)
        vkFreeCommandBuffers(device, pool, 1, &cache->command_buffer);
    for (const auto& entry : cache->textures) {
        if (entry.second.view)
            vkDestroyImageView(device, entry.second.view, nullptr);
        if (entry.second.image) vkDestroyImage(device, entry.second.image, nullptr);
        if (entry.second.memory)
            vkFreeMemory(device, entry.second.memory, nullptr);
    }
    if (cache->sampler) vkDestroySampler(device, cache->sampler, nullptr);
    for (const auto& entry : cache->samplers)
        if (entry.second) vkDestroySampler(device, entry.second, nullptr);
    if (cache->placeholder_view)
        vkDestroyImageView(device, cache->placeholder_view, nullptr);
    if (cache->placeholder_image)
        vkDestroyImage(device, cache->placeholder_image, nullptr);
    if (cache->placeholder_memory)
        vkFreeMemory(device, cache->placeholder_memory, nullptr);
    for (const auto& entry : cache->targets) {
        if (entry.second.framebuffer)
            vkDestroyFramebuffer(device, entry.second.framebuffer, nullptr);
        if (entry.second.depth_view)
            vkDestroyImageView(device, entry.second.depth_view, nullptr);
        if (entry.second.depth_image)
            vkDestroyImage(device, entry.second.depth_image, nullptr);
        if (entry.second.depth_memory)
            vkFreeMemory(device, entry.second.depth_memory, nullptr);
        if (entry.second.view)
            vkDestroyImageView(device, entry.second.view, nullptr);
        if (entry.second.image)
            vkDestroyImage(device, entry.second.image, nullptr);
        if (entry.second.memory)
            vkFreeMemory(device, entry.second.memory, nullptr);
    }
    for (const auto& entry : cache->histories) {
        if (entry.second.view)
            vkDestroyImageView(device, entry.second.view, nullptr);
        if (entry.second.image)
            vkDestroyImage(device, entry.second.image, nullptr);
        if (entry.second.memory)
            vkFreeMemory(device, entry.second.memory, nullptr);
    }
    if (cache->readback) vkDestroyBuffer(device, cache->readback, nullptr);
    if (cache->readback_memory)
        vkFreeMemory(device, cache->readback_memory, nullptr);
    if (cache->render_pass)
        vkDestroyRenderPass(device, cache->render_pass, nullptr);
    if (cache->keep_pass)
        vkDestroyRenderPass(device, cache->keep_pass, nullptr);
    delete cache;
}

bool vulkan_backend::render_scene(uint32_t width, uint32_t height,
                                  const float clear[4],
                                  const std::vector<scene_draw>& draws,
                                  std::vector<uint8_t>* out,
                                  std::string& error) {
    std::vector<scene_pass> passes(1);
    passes[0].width = width;
    passes[0].height = height;
    passes[0].draws = draws;
    passes[0].presented = true;
    return render_passes(passes, clear, out, error);
}

bool vulkan_backend::render_passes(const std::vector<scene_pass>& passes,
                                   const float clear[4],
                                   std::vector<uint8_t>* out,
                                   std::string& error) {
    if (!initialized()) {
        error = "backend not initialized";
        return false;
    }
    if (passes.empty()) {
        error = "a frame with no passes";
        return false;
    }
    // This frame's breakdown, not the run's. See submit_profile.
    m_profile = submit_profile{};
    const auto frame_started = std::chrono::steady_clock::now();
    // The pass whose pixels are the frame. Without one there is nothing to read
    // back or present, so the first stands in rather than failing.
    std::size_t presented = 0;
    for (std::size_t i = 0; i < passes.size(); ++i)
        if (passes[i].presented) presented = i;
    const uint32_t width = passes[presented].width;
    const uint32_t height = passes[presented].height;
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    auto queue = static_cast<VkQueue>(m_queue);
    auto command_pool = static_cast<VkCommandPool>(m_command_pool);
    const VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;

    if (m_scene_cache == nullptr) {
        auto* fresh = new scene_cache();
        // A uniform buffer's offset into the arena has to satisfy the device's
        // alignment. Assuming a value would work on most hardware and fail on
        // some, which is the worst kind of bug to ship.
        VkPhysicalDeviceProperties properties;
        vkGetPhysicalDeviceProperties(physical, &properties);
        fresh->uniform_alignment =
            properties.limits.minUniformBufferOffsetAlignment != 0
                ? properties.limits.minUniformBufferOffsetAlignment
                : 256;
        m_scene_cache = fresh;
    }
    auto* cache = static_cast<scene_cache*>(m_scene_cache);

    // The previous frame has been waited on, so its buffers can go now. Doing
    // it here rather than at the end keeps the frame's data alive until the
    // GPU is definitely finished with it.
    for (VkBuffer b : cache->buffers) vkDestroyBuffer(device, b, nullptr);
    for (VkDeviceMemory m : cache->memories) vkFreeMemory(device, m, nullptr);
    cache->buffers.clear();
    cache->memories.clear();

    if (cache->render_pass == VK_NULL_HANDLE) {
        // Left ready to sample: any pass's result can be a later pass's
        // texture, and the presented one is transitioned to a transfer source
        // once, at the end of the frame.
        // The depth buffer is cleared by both: a pass that CONTINUES another
        // keeps the colour it inherited, but the console's depth is cleared
        // with the surface it belongs to, and carrying depth across a resolve
        // would reject the next pass's geometry against the last one's.
        cache->render_pass = make_render_pass(
            device, format, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, false,
            scene_depth_format());
        cache->keep_pass = make_render_pass(
            device, format, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, true,
            scene_depth_format());
    }

    // A colour target for each pass, made once and then reused - a title's pass
    // structure is the same every frame, so after the first this finds them all.
    const auto targets_started = std::chrono::steady_clock::now();
    std::vector<scene_cache::render_target*> pass_targets(passes.size(),
                                                          nullptr);
    for (std::size_t i = 0; i < passes.size(); ++i) {
        const uint32_t pass_width = passes[i].width;
        const uint32_t pass_height = passes[i].height;
        if (pass_width == 0 || pass_height == 0) continue;
        const auto key = std::make_tuple(static_cast<uint32_t>(i), pass_width,
                                         pass_height);
        auto found = cache->targets.find(key);
        if (found == cache->targets.end()) {
            scene_cache::render_target target;
            VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
            image_info.imageType = VK_IMAGE_TYPE_2D;
            image_info.format = format;
            image_info.extent = {pass_width, pass_height, 1};
            image_info.mipLevels = 1;
            image_info.arrayLayers = 1;
            image_info.samples = VK_SAMPLE_COUNT_1_BIT;
            image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
            // Sampled as well as drawn into and copied out of: a resolved pass
            // is read straight back as a texture, with no trip through memory.
            //
            // And copied INTO: a pass that continues another starts from that
            // one's pixels, which is a vkCmdCopyImage with this image as the
            // destination. TRANSFER_DST was missing, so every frame of every
            // title with a continuing pass - Ridge Racer 6's presented pass is
            // one, on every frame it draws - issued a barrier to a layout the
            // image was not allowed to be in and a copy it was not allowed to
            // receive. It worked on this driver and it is undefined behaviour;
            // the validation layer is the only thing that ever said so, which
            // is the argument for running it.
            image_info.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT |
                               VK_IMAGE_USAGE_TRANSFER_SRC_BIT |
                               VK_IMAGE_USAGE_TRANSFER_DST_BIT |
                               VK_IMAGE_USAGE_SAMPLED_BIT;
            image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            if (vkCreateImage(device, &image_info, nullptr, &target.image) !=
                VK_SUCCESS) {
                error = "vkCreateImage failed";
                return false;
            }
            VkMemoryRequirements image_req;
            vkGetImageMemoryRequirements(device, target.image, &image_req);
            VkMemoryAllocateInfo image_alloc{
                VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
            image_alloc.allocationSize = image_req.size;
            image_alloc.memoryTypeIndex = find_memory_type(
                physical, image_req.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
            vkAllocateMemory(device, &image_alloc, nullptr, &target.memory);
            vkBindImageMemory(device, target.image, target.memory, 0);

            VkImageViewCreateInfo view_info{
                VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
            view_info.image = target.image;
            view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
            view_info.format = format;
            view_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            vkCreateImageView(device, &view_info, nullptr, &target.view);

            // The depth buffer for this pass, at the same size.
            if (scene_depth_format() != VK_FORMAT_UNDEFINED) {
            VkImageCreateInfo depth_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
            depth_info.imageType = VK_IMAGE_TYPE_2D;
            depth_info.format = kSceneDepthFormat;
            depth_info.extent = {pass_width, pass_height, 1};
            depth_info.mipLevels = 1;
            depth_info.arrayLayers = 1;
            depth_info.samples = VK_SAMPLE_COUNT_1_BIT;
            depth_info.tiling = VK_IMAGE_TILING_OPTIMAL;
            depth_info.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
            depth_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            if (vkCreateImage(device, &depth_info, nullptr,
                              &target.depth_image) != VK_SUCCESS) {
                error = "vkCreateImage failed for the depth buffer";
                return false;
            }
            VkMemoryRequirements depth_req;
            vkGetImageMemoryRequirements(device, target.depth_image, &depth_req);
            VkMemoryAllocateInfo depth_alloc{
                VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
            depth_alloc.allocationSize = depth_req.size;
            depth_alloc.memoryTypeIndex = find_memory_type(
                physical, depth_req.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
            vkAllocateMemory(device, &depth_alloc, nullptr,
                             &target.depth_memory);
            vkBindImageMemory(device, target.depth_image, target.depth_memory,
                              0);
            VkImageViewCreateInfo depth_view_info{
                VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
            depth_view_info.image = target.depth_image;
            depth_view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
            depth_view_info.format = kSceneDepthFormat;
            depth_view_info.subresourceRange = {VK_IMAGE_ASPECT_DEPTH_BIT, 0, 1,
                                                0, 1};
            vkCreateImageView(device, &depth_view_info, nullptr,
                              &target.depth_view);
            }

            const VkImageView attachments[2] = {target.view, target.depth_view};
            VkFramebufferCreateInfo fb_info{
                VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
            fb_info.renderPass = cache->render_pass;
            fb_info.attachmentCount =
                scene_depth_format() != VK_FORMAT_UNDEFINED ? 2u : 1u;
            fb_info.pAttachments = attachments;
            fb_info.width = pass_width;
            fb_info.height = pass_height;
            fb_info.layers = 1;
            vkCreateFramebuffer(device, &fb_info, nullptr, &target.framebuffer);
            found = cache->targets.emplace(key, target).first;
        }
        pass_targets[i] = &found->second;
    }

    // The history image for each pass whose PREVIOUS frame's result some draw
    // reads. Made on demand: most passes never need one, and it is a whole extra
    // target plus a copy per frame.
    //
    // Keyed by the pass being READ - texture.resolved_pass - and not by the pass
    // doing the reading. The two are the same pass only in one of the two
    // feedback cases: a pass sampling the address it resolves to itself. In the
    // other, a pass samples the destination of a LATER pass, whose copy is
    // necessarily the previous frame's, and the history has to sit on that later
    // pass. Allocating it on the reader instead leaves the read with no image at
    // all: it falls through to the white placeholder, and a full-screen surface
    // whose colour is that read comes out WHITE, which then saturates every
    // additive pass built on it - the whole frame ends white, with no stage
    // reporting anything wrong. The reader, meanwhile, gets an image it never
    // samples and pays a full-target copy a frame for it.
    //
    // The key is the ADDRESS the pass resolves to and the size it resolves at,
    // so a title whose pass structure changes from frame to frame still finds
    // the same surface's copy - see scene_cache::histories for what that costs
    // when it does not.
    const auto history_key = [&](std::size_t pass) {
        return std::make_tuple(passes[pass].resolve_address, passes[pass].width,
                               passes[pass].height);
    };
    std::vector<bool> wants_history(passes.size(), false);
    for (const scene_pass& pass : passes)
        for (const scene_draw& d : pass.draws)
            for (const scene_texture& t : d.textures)
                if (t.own_history && t.resolved_pass >= 0 &&
                    static_cast<std::size_t>(t.resolved_pass) < passes.size())
                    wants_history[static_cast<std::size_t>(t.resolved_pass)] =
                        true;
    for (std::size_t i = 0; i < passes.size(); ++i) {
        if (pass_targets[i] == nullptr) continue;
        if (!wants_history[i] || passes[i].resolve_address == 0) continue;
        if (cache->histories.find(history_key(i)) != cache->histories.end())
            continue;
        scene_cache::history_image made;
        VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
        image_info.imageType = VK_IMAGE_TYPE_2D;
        image_info.format = format;
        image_info.extent = {passes[i].width, passes[i].height, 1};
        image_info.mipLevels = 1;
        image_info.arrayLayers = 1;
        image_info.samples = VK_SAMPLE_COUNT_1_BIT;
        image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
        image_info.usage =
            VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        if (vkCreateImage(device, &image_info, nullptr, &made.image) !=
            VK_SUCCESS) {
            error = "vkCreateImage failed for a feedback history";
            return false;
        }
        VkMemoryRequirements req;
        vkGetImageMemoryRequirements(device, made.image, &req);
        VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        alloc.allocationSize = req.size;
        alloc.memoryTypeIndex = find_memory_type(
            physical, req.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        vkAllocateMemory(device, &alloc, nullptr, &made.memory);
        vkBindImageMemory(device, made.image, made.memory, 0);
        VkImageViewCreateInfo view_info{
            VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view_info.image = made.image;
        view_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view_info.format = format;
        view_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        vkCreateImageView(device, &view_info, nullptr, &made.view);
        made.layout = VK_IMAGE_LAYOUT_UNDEFINED;
        cache->histories.emplace(history_key(i), made);
    }
    // Which history each pass of THIS frame writes and reads. A pass keeps a
    // history whenever one exists for what it resolves to, whether or not this
    // frame is the one that reads it: the frame that fills the surface and the
    // frame that reads it back are different frames, and only the writer knows
    // the picture.
    std::vector<scene_cache::history_image*> pass_history(passes.size(),
                                                          nullptr);
    for (std::size_t i = 0; i < passes.size(); ++i) {
        if (pass_targets[i] == nullptr || passes[i].resolve_address == 0)
            continue;
        const auto found = cache->histories.find(history_key(i));
        if (found != cache->histories.end())
            pass_history[i] = &found->second;
    }
    if (pass_targets[presented] == nullptr) {
        error = "the presented pass has no size";
        return false;
    }
    cache->image = pass_targets[presented]->image;
    cache->width = width;
    cache->height = height;

    // The readback buffer, sized to whatever is being presented.
    if (cache->readback_width != width || cache->readback_height != height) {
        if (cache->readback) vkDestroyBuffer(device, cache->readback, nullptr);
        if (cache->readback_memory)
            vkFreeMemory(device, cache->readback_memory, nullptr);
        cache->readback_size = VkDeviceSize(width) * height * 4;
        VkBufferCreateInfo buf_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
        buf_info.size = cache->readback_size;
        buf_info.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT;
        vkCreateBuffer(device, &buf_info, nullptr, &cache->readback);
        VkMemoryRequirements buf_req;
        vkGetBufferMemoryRequirements(device, cache->readback, &buf_req);
        VkMemoryAllocateInfo buf_alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        buf_alloc.allocationSize = buf_req.size;
        // Cached where the device has it: this buffer is read by the CPU and
        // nothing else. See find_memory_type_preferring. Coherent is kept as a
        // requirement so no explicit invalidate is needed - a cached AND
        // coherent type is what this device reports, and where one is not
        // offered the fallback is exactly the memory this always used.
        buf_alloc.memoryTypeIndex = find_memory_type_preferring(
            physical, buf_req.memoryTypeBits,
            VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
            VK_MEMORY_PROPERTY_HOST_CACHED_BIT);
        vkAllocateMemory(device, &buf_alloc, nullptr, &cache->readback_memory);
        vkBindBufferMemory(device, cache->readback, cache->readback_memory, 0);
        cache->readback_width = width;
        cache->readback_height = height;
    }

    // The fallback for a declared texture slot the caller supplied no pixels
    // for: a descriptor set that is declared but not written is invalid, so
    // something has to be bound. White, so a draw that expects a texture it did
    // not get still shows its own colour rather than vanishing.
    if (cache->placeholder_view == VK_NULL_HANDLE) {
        const std::vector<uint8_t> pixels(4, 0xFF);
        cache->placeholder_view = upload_texture(
            device, physical, queue, command_pool, pixels, 1, 1,
            cache->placeholder_image, cache->placeholder_memory);
        VkSamplerCreateInfo sampler_info{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
        sampler_info.magFilter = VK_FILTER_LINEAR;
        sampler_info.minFilter = VK_FILTER_LINEAR;
        sampler_info.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
        sampler_info.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
        sampler_info.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
        vkCreateSampler(device, &sampler_info, nullptr, &cache->sampler);

        // What this device will let a sampler ask for. Read once, here, so the
        // per-state samplers below can be built without querying per draw.
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(physical, &properties);
        VkPhysicalDeviceFeatures features{};
        vkGetPhysicalDeviceFeatures(physical, &features);
        cache->max_anisotropy = features.samplerAnisotropy
                                    ? properties.limits.maxSamplerAnisotropy
                                    : 1.0f;
        cache->mirror_clamp_supported = false;

        // A timestamp pool, where the queue supports timestamps at all. A
        // period of zero means the device does not, and the profile then
        // reports no execution time rather than a made-up one.
        cache->timestamp_period = properties.limits.timestampPeriod;
        if (cache->timestamp_period > 0.0f) {
            VkQueryPoolCreateInfo query{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO};
            query.queryType = VK_QUERY_TYPE_TIMESTAMP;
            query.queryCount = 2;
            if (vkCreateQueryPool(device, &query, nullptr, &cache->timestamps) !=
                VK_SUCCESS)
                cache->timestamps = VK_NULL_HANDLE;
        }
    }

    // Set 0 is the float constant bank the translator reads; set 1 is unused
    // but must exist so set 2 keeps its number; set 2 holds texture samplers.
    if (cache->constant_layout == VK_NULL_HANDLE) {
        // Binding 0 is the float constant bank every shader reads; binding 1
        // is the boolean and loop bank only a shader with control flow reads.
        // Both are always in the layout and always written, whether or not the
        // module declares them: a descriptor a shader does not use costs
        // nothing, and a layout that changes per shader would need a pipeline
        // layout per shader too.
        const VkDescriptorSetLayoutBinding constant_bindings[2] = {
            {0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1,
             VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT,
             nullptr},
            {1, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1,
             VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT,
             nullptr},
        };
        VkDescriptorSetLayoutCreateInfo info{
            VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
        info.bindingCount = 2;
        info.pBindings = constant_bindings;
        vkCreateDescriptorSetLayout(device, &info, nullptr,
                                    &cache->constant_layout);
        VkDescriptorSetLayoutCreateInfo empty{
            VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
        vkCreateDescriptorSetLayout(device, &empty, nullptr,
                                    &cache->empty_layout);
    }

    // A descriptor pool big enough for this frame. Grown, never shrunk, so a
    // frame with more draws than any before it pays once.
    uint32_t draw_count = 0;
    for (const scene_pass& pass : passes)
        draw_count += static_cast<uint32_t>(pass.draws.size());
    if (cache->descriptor_pool == VK_NULL_HANDLE ||
        cache->pool_draws < draw_count) {
        if (cache->descriptor_pool)
            vkDestroyDescriptorPool(device, cache->descriptor_pool, nullptr);
        const uint32_t capacity = draw_count == 0 ? 1 : draw_count * 2;
        VkDescriptorPoolSize sizes[2]{};
        sizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        // Two per draw: the float constant bank and the boolean/loop bank.
        sizes[0].descriptorCount = capacity * 2;
        sizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        sizes[1].descriptorCount = capacity * 16;
        VkDescriptorPoolCreateInfo info{
            VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
        info.maxSets = capacity * 3;
        info.poolSizeCount = 2;
        info.pPoolSizes = sizes;
        vkCreateDescriptorPool(device, &info, nullptr, &cache->descriptor_pool);
        cache->pool_draws = capacity;
    }
    vkResetDescriptorPool(device, cache->descriptor_pool, 0);

    if (cache->command_buffer == VK_NULL_HANDLE) {
        VkCommandBufferAllocateInfo cmd_alloc{
            VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
        cmd_alloc.commandPool = command_pool;
        cmd_alloc.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
        cmd_alloc.commandBufferCount = 1;
        vkAllocateCommandBuffers(device, &cmd_alloc, &cache->command_buffer);
    }

    m_profile.target_ns = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - targets_started)
            .count());

    // A shader module per distinct SPIR-V, kept for the run.
    const auto module_for = [&](const std::vector<uint32_t>* spirv) {
        const auto found = cache->modules.find(spirv);
        if (found != cache->modules.end()) return found->second;
        span_timer timer(m_profile.module_ns);
        const VkShaderModule module = make_shader_module(device, *spirv);
        ++m_profile.modules_built;
        cache->modules[spirv] = module;
        return module;
    };
    // A texture set layout per distinct set of slots.
    const auto texture_layout_for = [&](const std::vector<uint32_t>& slots) {
        const auto found = cache->texture_layouts.find(slots);
        if (found != cache->texture_layouts.end()) return found->second;
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (uint32_t slot : slots)
            bindings.push_back({slot,
                                VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1,
                                VK_SHADER_STAGE_FRAGMENT_BIT, nullptr});
        VkDescriptorSetLayoutCreateInfo info{
            VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
        info.bindingCount = static_cast<uint32_t>(bindings.size());
        info.pBindings = bindings.empty() ? nullptr : bindings.data();
        VkDescriptorSetLayout layout = VK_NULL_HANDLE;
        vkCreateDescriptorSetLayout(device, &info, nullptr, &layout);
        cache->texture_layouts[slots] = layout;
        return layout;
    };

    // One region of the frame's arena: where the bytes come from and where
    // they are going. Copied in one pass once the arena is known to be big
    // enough, so growing it cannot invalidate anything already written.
    struct staged {
        const void* data{nullptr};
        VkDeviceSize size{0};
        VkDeviceSize offset{0};
        // False where these exact bytes were already placed in the arena by an
        // earlier draw, so the copy below has nothing left to do for them.
        bool fresh{true};
    };
    VkDeviceSize arena_needed = 0;
    // Regions already placed in this frame's arena, by the bytes they name.
    // Once the caller stops re-reading a vertex buffer per draw and hands the
    // same storage to every draw that fetches it, the same pointer and length
    // arrive here dozens of times - and copying those bytes into the arena
    // again writes what is already there. Keyed on the pointer AND the length,
    // so this can only ever collapse two regions whose contents are the same
    // object; it is not a comparison of contents and never needs to be.
    //
    // Alignment is part of the key because a region reused at a coarser
    // alignment than it was first placed at would be bound at an offset the
    // device rejects.
    std::map<std::tuple<const void*, VkDeviceSize, VkDeviceSize>, VkDeviceSize>
        placed;
    const auto stage = [&](const void* data, VkDeviceSize size,
                           VkDeviceSize alignment) {
        if (data != nullptr && size != 0) {
            const auto key = std::make_tuple(data, size, alignment);
            const auto found = placed.find(key);
            if (found != placed.end())
                return staged{data, size, found->second, false};
        }
        arena_needed = (arena_needed + alignment - 1) / alignment * alignment;
        const staged region{data, size, arena_needed};
        // Never a zero-sized region: a draw legitimately has no indices, and a
        // zero-length binding is not something Vulkan accepts.
        arena_needed += size != 0 ? size : 4;
        if (data != nullptr && size != 0)
            placed.emplace(std::make_tuple(data, size, alignment),
                           region.offset);
        return region;
    };

    // Per-draw recording state, built before the command buffer is recorded.
    struct recorded_draw {
        VkPipeline pipeline{VK_NULL_HANDLE};
        VkPipelineLayout layout{VK_NULL_HANDLE};
        std::vector<VkDeviceSize> vertex_offsets;
        VkDeviceSize index_offset{0};
        VkDeviceSize constant_offset{0};
        VkDeviceSize bool_loop_offset{0};
        std::vector<VkDescriptorSet> sets;
        uint32_t count{0};
        uint32_t first_vertex{0};
        bool indexed{false};
    };
    // One list of recorded draws per pass, so the command buffer can open a
    // render pass, record that pass's draws, and close it again.
    std::vector<std::vector<recorded_draw>> recorded(passes.size());
    std::vector<staged> regions;
    // The padded constant banks must outlive the loop: the arena copies from
    // them after every draw has been staged.
    std::deque<std::vector<float>> constant_storage;
    std::deque<std::vector<uint32_t>> bool_loop_storage;
    uint32_t skipped = 0;
    // Feedback reads that found no history image on the pass they name. The
    // allocation above covers every one of them, so this can only count a bug -
    // and it has to be counted rather than left to the picture, because the
    // fallback is the white placeholder and white is what a feedback loop
    // amplifies until the whole frame is white.
    uint32_t history_missing = 0;

    // Slots already settled this frame: the exact pixels a key was found to
    // hold, and the view serving them. A title binds the same texture on most
    // of its draws, and the decode cache hands back the SAME buffer each time,
    // so without this the whole image is memcmp'd against the uploaded copy
    // once per bound slot per draw - measured on Hydro Thunder as 2.2 GB of
    // comparison a frame to discover that 1612 of 1665 bindings had not
    // changed.
    //
    // The pointer is part of the key, not just the texture key, and that is
    // what makes skipping the comparison exact rather than hopeful: a hit means
    // this very buffer was compared equal to the uploaded image earlier in this
    // same frame, and nothing writes the decode cache between the draws of one
    // frame. A run with the decode cache off hands out a fresh buffer per
    // decode, so every lookup misses and every comparison happens exactly as
    // before - which is what that mode is for.
    std::map<std::pair<uint64_t, const void*>, VkImageView> settled;
    // Textures created this frame whose pixels are still in staging buffers.
    // Recorded into the frame's own command buffer below, so a frame's uploads
    // cost one submit between them instead of one submit and one full device
    // wait each. Freed after the queue goes idle at the end of the frame.
    std::vector<staged_texture> staged_uploads;
    // The view for one texture the caller described, uploading it the first
    // time it is seen and whenever its pixels have changed. Everything else
    // reuses the image already on the device: at a title's texture sizes an
    // upload a frame costs more than every other part of the frame together.
    const auto texture_view_for = [&](const scene_texture& texture) {
        const auto settled_key = std::make_pair(
            texture.key, static_cast<const void*>(texture.rgba));
        const auto settled_entry = settled.find(settled_key);
        if (settled_entry != settled.end()) {
            ++m_profile.textures_reused;
            return settled_entry->second;
        }
        auto entry = cache->textures.find(texture.key);
        const std::size_t size =
            static_cast<std::size_t>(texture.width) * texture.height * 4;
        if (entry != cache->textures.end()) {
            bool same = entry->second.width == texture.width &&
                        entry->second.height == texture.height &&
                        entry->second.pixels.size() == size;
            if (same) {
                span_timer timer(m_profile.texture_compare_ns);
                m_profile.texture_compare_bytes += size;
                same = std::memcmp(entry->second.pixels.data(), texture.rgba,
                                   size) == 0;
            }
            if (same) {
                ++m_profile.textures_reused;
                settled.emplace(settled_key, entry->second.view);
                return entry->second.view;
            }
            // Same texture, different contents - or a key collision. Either
            // way the image on the device is stale, so it goes. Nothing is in
            // flight: the previous frame was waited on before this one began.
            if (entry->second.view)
                vkDestroyImageView(device, entry->second.view, nullptr);
            if (entry->second.image)
                vkDestroyImage(device, entry->second.image, nullptr);
            if (entry->second.memory)
                vkFreeMemory(device, entry->second.memory, nullptr);
            cache->textures.erase(entry);
        }
        span_timer timer(m_profile.texture_upload_ns);
        ++m_profile.textures_uploaded;
        scene_cache::uploaded_texture fresh;
        fresh.width = texture.width;
        fresh.height = texture.height;
        fresh.pixels.assign(texture.rgba, texture.rgba + size);
        staged_texture staged;
        fresh.view = create_texture_image(device, physical, fresh.pixels,
                                          texture.width, texture.height,
                                          fresh.image, fresh.memory, staged);
        if (fresh.view != VK_NULL_HANDLE) staged_uploads.push_back(staged);
        if (fresh.view == VK_NULL_HANDLE) return VkImageView(VK_NULL_HANDLE);
        const VkImageView view =
            cache->textures.emplace(texture.key, std::move(fresh))
                .first->second.view;
        settled.emplace(settled_key, view);
        return view;
    };

    // Descriptor writes are gathered and applied once: the image info each
    // texture write points at must still be alive when the write happens, so
    // these are held in a deque rather than a vector that would move them.
    std::deque<VkDescriptorImageInfo> image_infos;
    std::vector<VkDescriptorBufferInfo> constant_infos;
    // Two per draw, and the reserve is load-bearing: the writes below hold
    // POINTERS into this vector, so a reallocation would leave every one of
    // them dangling and the descriptors would name whatever the freed memory
    // came to hold.
    constant_infos.reserve(std::size_t(draw_count) * 2);
    std::vector<VkWriteDescriptorSet> writes;

    for (std::size_t pass_index = 0; pass_index < passes.size(); ++pass_index) {
        const scene_pass& pass = passes[pass_index];
        if (pass_targets[pass_index] == nullptr) continue;
        for (const scene_draw& d : pass.draws) {
            if (d.vertex_spirv == nullptr || d.fragment_spirv == nullptr) {
                ++skipped;
                continue;
            }

            // Vertex input, straight from the translated shader's layout. A format
            // with no host equivalent means this draw would read its attributes as
            // something else, so it is skipped and counted rather than drawn wrong.
            std::vector<VkVertexInputBindingDescription> bindings;
            for (uint32_t b = 0; b < d.bindings.size(); ++b)
                bindings.push_back(
                    {b, d.bindings[b].stride_bytes, VK_VERTEX_INPUT_RATE_VERTEX});
            std::vector<VkVertexInputAttributeDescription> attributes;
            bool formats_ok = true;
            for (const scene_attribute& a : d.attributes) {
                const VkFormat vk_format = to_vk_vertex_format(a.format);
                if (vk_format == VK_FORMAT_UNDEFINED ||
                    a.binding >= bindings.size()) {
                    formats_ok = false;
                    break;
                }
                attributes.push_back(
                    {a.location, a.binding, vk_format, a.offset_bytes});
            }
            if (!formats_ok) {
                ++skipped;
                continue;
            }

            const VkDescriptorSetLayout texture_layout =
                texture_layout_for(d.texture_slots);
            pipeline_key key;
            key.vs = module_for(d.vertex_spirv);
            key.fs = module_for(d.fragment_spirv);
            key.gs = d.geometry_spirv != nullptr && !d.geometry_spirv->empty()
                         ? module_for(d.geometry_spirv)
                         : VK_NULL_HANDLE;
            key.blend = d.blend;
            key.topo = d.topo;
            key.texture_layout = texture_layout;
            key.depth_test_enabled = d.depth_test_enabled;
            key.depth_write_enabled = d.depth_write_enabled;
            key.depth_compare_op = d.depth_compare_op;
            key.cull_mode = d.cull_mode;
            key.front_face_ccw = d.front_face_ccw;
            key.color_write_enabled = d.color_write_enabled;
            key.width = pass.width;
            key.height = pass.height;
            for (const VkVertexInputBindingDescription& b : bindings)
                key.binding_strides.push_back(b.stride);
            for (const VkVertexInputAttributeDescription& a : attributes)
                key.attributes.push_back((uint64_t(a.location) << 48) |
                                         (uint64_t(a.binding) << 40) |
                                         (uint64_t(a.format) << 24) | a.offset);

            auto pipeline_entry = cache->pipelines.find(key);
            if (pipeline_entry != cache->pipelines.end()) {
                ++m_profile.pipelines_reused;
            } else {
                span_timer timer(m_profile.pipeline_ns);
                ++m_profile.pipelines_built;
                const std::vector<VkDescriptorSetLayout> set_layouts = {
                    cache->constant_layout, cache->empty_layout, texture_layout};
                VkPipelineLayout layout = VK_NULL_HANDLE;
                const VkPipeline pipeline = make_scene_pipeline(
                    device, static_cast<VkPipelineCache>(m_pipeline_cache),
                    cache->render_pass, key.width, key.height, key.vs,
                    key.fs, key.gs, d.blend, d.topo, bindings, attributes,
                    set_layouts, layout,
                    d.depth_test_enabled, d.depth_write_enabled,
                    d.depth_compare_op, d.cull_mode, d.front_face_ccw,
                    d.color_write_enabled);
                if (pipeline == VK_NULL_HANDLE) {
                    if (layout) vkDestroyPipelineLayout(device, layout, nullptr);
                    ++skipped;
                    continue;
                }
                pipeline_entry =
                    cache->pipelines.emplace(key, std::make_pair(pipeline, layout))
                        .first;
            }

            recorded_draw r;
            r.pipeline = pipeline_entry->second.first;
            r.layout = pipeline_entry->second.second;

            for (const scene_binding& b : d.bindings) {
                const staged region = stage(b.data, b.size_bytes, 16);
                regions.push_back(region);
                r.vertex_offsets.push_back(region.offset);
            }

            if (!d.indices.empty()) {
                const staged region =
                    stage(d.indices.data(), d.indices.size() * sizeof(uint32_t), 4);
                regions.push_back(region);
                r.index_offset = region.offset;
                r.count = static_cast<uint32_t>(d.indices.size());
                r.indexed = true;
            } else {
                r.count = d.vertex_count;
                r.first_vertex = d.first_vertex;
            }

            // The constant buffer is always bound, whether or not the caller
            // supplied values: the shader reads it unconditionally, and a zeroed
            // buffer is a defined (if wrong-looking) result where an unbound one is
            // undefined behaviour.
            constant_storage.push_back(d.constants);
            constant_storage.back().resize(kFloatConstantCount * 4, 0.0f);
            const staged constant_region =
                stage(constant_storage.back().data(),
                      constant_storage.back().size() * sizeof(float),
                      cache->uniform_alignment);
            regions.push_back(constant_region);
            r.constant_offset = constant_region.offset;

            bool_loop_storage.push_back(d.bool_loop_constants);
            bool_loop_storage.back().resize(kBoolLoopDwords, 0);
            const staged bool_loop_region =
                stage(bool_loop_storage.back().data(),
                      bool_loop_storage.back().size() * sizeof(uint32_t),
                      cache->uniform_alignment);
            regions.push_back(bool_loop_region);
            r.bool_loop_offset = bool_loop_region.offset;

            const std::vector<VkDescriptorSetLayout> set_layouts = {
                cache->constant_layout, cache->empty_layout, texture_layout};
            VkDescriptorSetAllocateInfo set_alloc{
                VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            set_alloc.descriptorPool = cache->descriptor_pool;
            set_alloc.descriptorSetCount = 3;
            set_alloc.pSetLayouts = set_layouts.data();
            r.sets.resize(3);
            VkResult allocated = VK_SUCCESS;
            {
                span_timer timer(m_profile.descriptor_ns);
                allocated =
                    vkAllocateDescriptorSets(device, &set_alloc, r.sets.data());
            }
            if (allocated != VK_SUCCESS) {
                ++skipped;
                continue;
            }

            for (std::size_t slot_index = 0;
                 slot_index < d.texture_slots.size(); ++slot_index) {
                const uint32_t slot = d.texture_slots[slot_index];
                VkImageView view = cache->placeholder_view;
                for (const scene_texture& texture : d.textures) {
                    if (texture.slot != slot) continue;
                    // A resolved pass first: that pass's image IS the texture,
                    // already in host layout, and there is nothing in guest
                    // memory to read. The caller has already decided which pass
                    // that is, including the case where it comes later in the
                    // frame and so still holds the previous frame's result.
                    if (texture.resolved_pass >= 0 &&
                        static_cast<std::size_t>(texture.resolved_pass) <
                            passes.size()) {
                        scene_cache::render_target* source =
                            pass_targets[static_cast<std::size_t>(
                                texture.resolved_pass)];
                        // Its own previous result comes from the history copy;
                        // any other pass's comes from that pass's image
                        // directly. Sampling the pass's own image here would be
                        // reading the attachment being written, which is
                        // undefined and which the validator rejects.
                        const scene_cache::history_image* keep =
                            pass_history[static_cast<std::size_t>(
                                texture.resolved_pass)];
                        if (source != nullptr &&
                            (!texture.own_history || keep != nullptr)) {
                            view = texture.own_history ? keep->view
                                                       : source->view;
                            break;
                        }
                        if (source != nullptr && texture.own_history)
                            ++history_missing;
                    }
                    if (texture.key == 0 || texture.rgba == nullptr ||
                        texture.width == 0 || texture.height == 0)
                        break;
                    const VkImageView uploaded = texture_view_for(texture);
                    if (uploaded != VK_NULL_HANDLE) view = uploaded;
                    break;
                }
                // How this slot is sampled, as the title asked. A caller that
                // supplied no state - the simplified entry points, and every
                // test written before this was decoded - keeps the plain linear
                // sampler it always had.
                VkSampler slot_sampler = cache->sampler;
                if (slot_index < d.texture_samplers.size()) {
                    const sampler_state& wanted =
                        d.texture_samplers[slot_index];
                    const auto found = cache->samplers.find(wanted);
                    if (found != cache->samplers.end()) {
                        if (found->second != VK_NULL_HANDLE)
                            slot_sampler = found->second;
                    } else {
                        const VkSampler built = make_sampler(
                            device, wanted, cache->mirror_clamp_supported,
                            cache->max_anisotropy);
                        cache->samplers.emplace(wanted, built);
                        if (built != VK_NULL_HANDLE) slot_sampler = built;
                    }
                }
                image_infos.push_back({slot_sampler, view,
                                       VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL});
                VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                write.dstSet = r.sets[2];
                write.dstBinding = slot;
                write.descriptorCount = 1;
                write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                write.pImageInfo = &image_infos.back();
                writes.push_back(write);
            }

            recorded[pass_index].push_back(std::move(r));
        }
    }

    // The arena, grown to fit this frame and then left alone. Growing destroys
    // the previous one, which is safe here because the last frame using it was
    // waited on before this one started.
    const auto arena_started = std::chrono::steady_clock::now();
    if (arena_needed > cache->arena_size) {
        if (cache->arena_mapped) vkUnmapMemory(device, cache->arena_memory);
        if (cache->arena) vkDestroyBuffer(device, cache->arena, nullptr);
        if (cache->arena_memory)
            vkFreeMemory(device, cache->arena_memory, nullptr);
        // Round up generously: a frame that needs slightly more than the last
        // should not pay for a reallocation every frame.
        VkDeviceSize size = cache->arena_size != 0 ? cache->arena_size : 1 << 20;
        while (size < arena_needed) size *= 2;

        VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
        info.size = size;
        info.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT |
                     VK_BUFFER_USAGE_INDEX_BUFFER_BIT |
                     VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        if (vkCreateBuffer(device, &info, nullptr, &cache->arena) !=
            VK_SUCCESS) {
            error = "vkCreateBuffer failed for the frame arena";
            return false;
        }
        VkMemoryRequirements req;
        vkGetBufferMemoryRequirements(device, cache->arena, &req);
        VkMemoryAllocateInfo alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        alloc.allocationSize = req.size;
        alloc.memoryTypeIndex =
            find_memory_type(physical, req.memoryTypeBits,
                             VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                 VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
        if (vkAllocateMemory(device, &alloc, nullptr, &cache->arena_memory) !=
            VK_SUCCESS) {
            error = "out of host-visible memory for the frame arena";
            return false;
        }
        vkBindBufferMemory(device, cache->arena, cache->arena_memory, 0);
        void* mapped = nullptr;
        vkMapMemory(device, cache->arena_memory, 0, size, 0, &mapped);
        cache->arena_mapped = static_cast<uint8_t*>(mapped);
        cache->arena_size = size;
    }

    for (const staged& region : regions) {
        if (region.size == 0 || !region.fresh) continue;
        m_profile.arena_bytes += region.size;
        std::memcpy(cache->arena_mapped + region.offset, region.data,
                    static_cast<std::size_t>(region.size));
    }
    m_profile.arena_ns = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - arena_started)
            .count());

    // The constant descriptors name a range of the arena, which only exists
    // now - so these writes are built here rather than as the draws were.
    for (const std::vector<recorded_draw>& pass_draws : recorded)
        for (const recorded_draw& r : pass_draws) {
            constant_infos.push_back(
                {cache->arena, r.constant_offset,
                 VkDeviceSize(kFloatConstantCount) * 4 * sizeof(float)});
            constant_infos.push_back(
                {cache->arena, r.bool_loop_offset,
                 VkDeviceSize(kBoolLoopDwords) * sizeof(uint32_t)});
        }
    std::size_t constant_index = 0;
    for (const std::vector<recorded_draw>& pass_draws : recorded)
        for (const recorded_draw& r : pass_draws)
            for (uint32_t binding = 0; binding < 2; ++binding) {
                VkWriteDescriptorSet write{
                    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                write.dstSet = r.sets[0];
                write.dstBinding = binding;
                write.descriptorCount = 1;
                write.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
                write.pBufferInfo = &constant_infos[constant_index++];
                writes.push_back(write);
            }

    if (!writes.empty()) {
        span_timer timer(m_profile.descriptor_ns);
        vkUpdateDescriptorSets(device, static_cast<uint32_t>(writes.size()),
                               writes.data(), 0, nullptr);
    }

    const auto record_started = std::chrono::steady_clock::now();
    vkResetCommandBuffer(cache->command_buffer, 0);
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cache->command_buffer, &begin);
    if (cache->timestamps != VK_NULL_HANDLE) {
        vkCmdResetQueryPool(cache->command_buffer, cache->timestamps, 0, 2);
        vkCmdWriteTimestamp(cache->command_buffer,
                            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                            cache->timestamps, 0);
    }

    // This frame's texture uploads, before anything samples them. They are at
    // the head of the same command buffer the frame is drawn with, so the copy
    // is ordered before every draw by the barrier inside, and costs no submit
    // of its own.
    record_staged_uploads(cache->command_buffer, staged_uploads);

    // Every pass's image has to be readable as a texture before the first pass
    // runs, because a pass is allowed to sample one that a LATER pass fills -
    // that image then holds the previous frame, which is what the title asked
    // for. Two are not readable to start with: an image created this frame
    // (undefined) and last frame's presented one (left a transfer source), so
    // both are brought to the layout every descriptor names.
    {
        std::vector<VkImageMemoryBarrier> to_readable;
        for (std::size_t i = 0; i < passes.size(); ++i) {
            scene_cache::render_target* target = pass_targets[i];
            if (target == nullptr) continue;
            if (target->layout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL)
                continue;
            VkImageMemoryBarrier bar{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
            bar.oldLayout = target->layout;
            bar.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bar.image = target->image;
            bar.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            bar.srcAccessMask = 0;
            bar.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            to_readable.push_back(bar);
            target->layout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        }
        if (!to_readable.empty())
            vkCmdPipelineBarrier(
                cache->command_buffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, nullptr, 0, nullptr,
                static_cast<uint32_t>(to_readable.size()), to_readable.data());
        // A HISTORY IMAGE ON ITS FIRST FRAME IS SEEDED FROM THE SURFACE ITSELF,
        // NOT CLEARED TO BLACK, and the difference is a title that renders
        // against one that never renders again.
        //
        // The image is made on the first frame some draw reads back the address
        // a pass resolves to - not on the first frame that pass runs - so on
        // that frame there is no copy to hand. Clearing it black looks like the
        // safe answer and is a claim about guest memory that is false: memory
        // at that address holds the LAST RESOLVE OF THAT SURFACE, which is the
        // previous frame's picture, and the console has no "not written yet"
        // state to give.
        //
        // What that costs is not one dark frame. Ridge Racer 6's front end ends
        // its drawing pass with a full-screen, blending-OFF blit of the address
        // that same pass resolves to - measured at frame 120000 of a 200 s run,
        // draw 31 of 33, covering every pixel but a one-pixel right column and
        // bottom row. So the frame's own picture is replaced by the history and
        // then copied straight back into it: history(n) = history(n-1), a closed
        // loop whose one input is the value it was given on its first frame.
        // Seeded black, the title presents black for the rest of the run - 27
        // sprite draws a frame, `0 UNACCOUNTED`, every counter clean, and the
        // pass reading exactly the colour the image held.
        //
        // The previous frame's picture is sitting in whichever target LAST
        // RESOLVED TO THAT ADDRESS - every target still holds last frame's
        // pixels here, none of them having begun its render pass - so the seed
        // is a copy of that one. Only when no target ever resolved there is
        // black the honest answer.
        //
        // Found by address and not by the pass ordinal being seeded, for
        // exactly the reason the history map itself is keyed by address: a
        // title's pass structure is not the same every frame, and Ridge Racer 6
        // is the title that proves it. Its three-pass front-end frame resolves
        // to 01549000 at pass 1 while the five-pass movie frame before it
        // resolves there at pass 3 - and pass 1 of THAT frame is a black idle
        // layer. Seeded from ordinal 1 the loop starts at black anyway, and the
        // whole fix does nothing; measured, a 123-draw front-end frame still
        // captured mean 0.156.
        const auto seed_source =
            [&](uint32_t address, uint32_t w,
                uint32_t h) -> scene_cache::render_target* {
            if (address == 0) return nullptr;
            for (auto& entry : cache->targets) {
                if (std::get<1>(entry.first) != w ||
                    std::get<2>(entry.first) != h)
                    continue;
                if (entry.second.last_resolve_address != address) continue;
                if (entry.second.layout == VK_IMAGE_LAYOUT_UNDEFINED) continue;
                return &entry.second;
            }
            return nullptr;
        };
        for (std::size_t i = 0; i < passes.size(); ++i) {
            scene_cache::history_image* keep = pass_history[i];
            if (keep == nullptr) continue;
            if (keep->layout != VK_IMAGE_LAYOUT_UNDEFINED) continue;
            scene_cache::render_target* source = seed_source(
                passes[i].resolve_address, passes[i].width, passes[i].height);
            VkImageMemoryBarrier bar{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
            bar.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            bar.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bar.image = keep->image;
            bar.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            bar.srcAccessMask = 0;
            bar.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            vkCmdPipelineBarrier(cache->command_buffer,
                                 VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr,
                                 0, nullptr, 1, &bar);
            if (source != nullptr) {
                // Moved to a transfer source and back to exactly the layout it
                // was in, which need not be the readable one: a target this
                // frame does not use was left wherever the frame that did use
                // it left it, and the presented one is left a transfer source.
                const VkImageLayout was = source->layout;
                VkImageMemoryBarrier src{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
                src.oldLayout = was;
                src.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
                src.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                src.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                src.image = source->image;
                src.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
                src.srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
                src.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
                vkCmdPipelineBarrier(cache->command_buffer,
                                     VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                     VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0,
                                     nullptr, 0, nullptr, 1, &src);
                VkImageCopy copy{};
                copy.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
                copy.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
                copy.extent = {passes[i].width, passes[i].height, 1};
                vkCmdCopyImage(cache->command_buffer, source->image,
                               VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, keep->image,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);
                src.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
                src.newLayout = was;
                src.srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
                src.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
                vkCmdPipelineBarrier(cache->command_buffer,
                                     VK_PIPELINE_STAGE_TRANSFER_BIT,
                                     VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 0,
                                     nullptr, 0, nullptr, 1, &src);
            } else {
                VkClearColorValue black{};
                const VkImageSubresourceRange range{VK_IMAGE_ASPECT_COLOR_BIT, 0,
                                                    1, 0, 1};
                vkCmdClearColorImage(cache->command_buffer, keep->image,
                                     VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                     &black, 1, &range);
            }
            bar.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            bar.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bar.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            bar.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            vkCmdPipelineBarrier(cache->command_buffer,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT,
                                 VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0,
                                 nullptr, 0, nullptr, 1, &bar);
            keep->layout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        }
    }

    VkClearValue clear_value{};
    clear_value.color = {{clear[0], clear[1], clear[2], clear[3]}};
    // Every pass, in order, each into its own target. Order is what makes the
    // resolves work: a pass that samples an earlier pass's image is recorded
    // after the render pass that filled it, and the render pass's own subpass
    // dependency makes that write visible to the read.
    for (std::size_t pass_index = 0; pass_index < passes.size(); ++pass_index) {
        if (pass_targets[pass_index] == nullptr) continue;
        // A pass that continues another starts from that one's pixels: EDRAM
        // holds what was drawn before the resolve that split them. The copy is
        // taken rather than the image shared, so each pass stays the snapshot
        // its own resolve copied out.
        const int continues = passes[pass_index].continues_pass;
        const bool inherits =
            continues >= 0 && static_cast<std::size_t>(continues) < passes.size() &&
            pass_targets[static_cast<std::size_t>(continues)] != nullptr;
        if (inherits) {
            scene_cache::render_target& source =
                *pass_targets[static_cast<std::size_t>(continues)];
            scene_cache::render_target& target = *pass_targets[pass_index];
            VkImageMemoryBarrier bars[2]{
                {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER},
                {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER}};
            bars[0].oldLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bars[0].newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            bars[0].srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bars[0].dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bars[0].image = source.image;
            bars[0].subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            bars[0].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            bars[0].dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            // Every pixel of the destination is written, so whatever it held is
            // irrelevant and its old layout need not be known.
            bars[1].oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            bars[1].newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            bars[1].srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bars[1].dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bars[1].image = target.image;
            bars[1].subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            bars[1].srcAccessMask = 0;
            bars[1].dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            vkCmdPipelineBarrier(cache->command_buffer,
                                 VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT |
                                     VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr,
                                 0, nullptr, 2, bars);
            // The two need not be the same size - the presented pass is forced
            // to the display's - so only the overlap is carried over.
            VkImageCopy copy{};
            copy.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            copy.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            copy.extent = {
                std::min(passes[pass_index].width,
                         passes[static_cast<std::size_t>(continues)].width),
                std::min(passes[pass_index].height,
                         passes[static_cast<std::size_t>(continues)].height),
                1};
            vkCmdCopyImage(cache->command_buffer, source.image,
                           VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, target.image,
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);
            // Source back where every descriptor expects it, destination into
            // the layout the loading render pass declares.
            bars[0].oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            bars[0].newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bars[0].srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            bars[0].dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            bars[1].oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            bars[1].newLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
            bars[1].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            bars[1].dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT |
                                    VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            vkCmdPipelineBarrier(cache->command_buffer,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT,
                                 VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT |
                                     VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                                 0, 0, nullptr, 0, nullptr, 2, bars);
        }
        VkRenderPassBeginInfo rp_begin{
            VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        rp_begin.renderPass = inherits ? cache->keep_pass : cache->render_pass;
        rp_begin.framebuffer = pass_targets[pass_index]->framebuffer;
        rp_begin.renderArea = {
            {0, 0}, {passes[pass_index].width, passes[pass_index].height}};
        // Depth clears to 1.0 - the far plane - which is what a LESS or
        // LESS_EQUAL test expects to start from. RB_DEPTH_CLEAR carries the
        // title's own value and is not read yet; a title that clears to
        // anything else, a reverse-Z one above all, needs that before its
        // depth is right.
        const VkClearValue pass_clears[2] = {clear_value, [] {
            VkClearValue depth{};
            depth.depthStencil = {1.0f, 0};
            return depth;
        }()};
        rp_begin.clearValueCount =
            scene_depth_format() != VK_FORMAT_UNDEFINED ? 2u : 1u;
        rp_begin.pClearValues = pass_clears;
        vkCmdBeginRenderPass(cache->command_buffer, &rp_begin,
                             VK_SUBPASS_CONTENTS_INLINE);
        for (const recorded_draw& r : recorded[pass_index]) {
            vkCmdBindPipeline(cache->command_buffer,
                              VK_PIPELINE_BIND_POINT_GRAPHICS, r.pipeline);
            vkCmdBindDescriptorSets(cache->command_buffer,
                                    VK_PIPELINE_BIND_POINT_GRAPHICS, r.layout,
                                    0, static_cast<uint32_t>(r.sets.size()),
                                    r.sets.data(), 0, nullptr);
            if (!r.vertex_offsets.empty()) {
                const std::vector<VkBuffer> arenas(r.vertex_offsets.size(),
                                                   cache->arena);
                vkCmdBindVertexBuffers(
                    cache->command_buffer, 0,
                    static_cast<uint32_t>(r.vertex_offsets.size()),
                    arenas.data(), r.vertex_offsets.data());
            }
            if (r.indexed) {
                vkCmdBindIndexBuffer(cache->command_buffer, cache->arena,
                                     r.index_offset, VK_INDEX_TYPE_UINT32);
                vkCmdDrawIndexed(cache->command_buffer, r.count, 1, 0, 0, 0);
            } else {
                vkCmdDraw(cache->command_buffer, r.count, 1, r.first_vertex, 0);
            }
        }
        vkCmdEndRenderPass(cache->command_buffer);

        // Keep this pass's result for the next frame, if any draw reads this
        // pass's previous one. Taken AFTER the pass, so the copy sampled by the
        // draws above - in this pass, or in an earlier one - was last frame's,
        // which is what the console's memory would still hold at that point,
        // this frame's resolve not having happened yet. One copy per frame, in
        // one place: a feedback loop fed twice in a frame squares its own gain
        // and saturates, and one fed from the current frame has no generation at
        // all.
        scene_cache::render_target* target = pass_targets[pass_index];
        // What this image now MEANS to the title: the guest address its pixels
        // were copied to. Recorded whether or not a history exists, because the
        // frame that needs it is a later one that does not yet know it will -
        // see seed_source above.
        if (passes[pass_index].resolve_address != 0)
            target->last_resolve_address = passes[pass_index].resolve_address;
        scene_cache::history_image* keep = pass_history[pass_index];
        if (keep != nullptr) {
            VkImageMemoryBarrier bars[2]{
                {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER},
                {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER}};
            bars[0].oldLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bars[0].newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            bars[0].image = target->image;
            bars[0].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
            bars[0].dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            bars[1].oldLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bars[1].newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            bars[1].image = keep->image;
            bars[1].srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
            bars[1].dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            for (VkImageMemoryBarrier& bar : bars) {
                bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                bar.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            }
            vkCmdPipelineBarrier(cache->command_buffer,
                                 VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT |
                                     VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr,
                                 0, nullptr, 2, bars);
            VkImageCopy copy{};
            copy.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            copy.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            copy.extent = {passes[pass_index].width, passes[pass_index].height,
                           1};
            vkCmdCopyImage(cache->command_buffer, target->image,
                           VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, keep->image,
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);
            // Both back to what every descriptor and the next frame expect.
            bars[0].oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            bars[0].newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bars[0].srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            bars[0].dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            bars[1].oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            bars[1].newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bars[1].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            bars[1].dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            vkCmdPipelineBarrier(cache->command_buffer,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT,
                                 VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0,
                                 nullptr, 0, nullptr, 2, bars);
        }
    }

    // The presented target is left ready to sample like every other, so it is
    // moved to a transfer source here - for the readback below, and for the
    // blit present() does later, which happens in its own submission and finds
    // the image in whatever layout this leaves it.
    VkImageMemoryBarrier to_transfer{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_transfer.oldLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    to_transfer.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    to_transfer.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_transfer.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_transfer.image = cache->image;
    to_transfer.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_transfer.srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
    to_transfer.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(cache->command_buffer,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_transfer);
    pass_targets[presented]->layout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;

    // Reading the frame back is the most expensive thing in it, so it happens
    // only when something is going to look at the pixels.
    if (out != nullptr) {
        VkBufferImageCopy copy{};
        copy.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        copy.imageExtent = {width, height, 1};
        vkCmdCopyImageToBuffer(cache->command_buffer, cache->image,
                               VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               cache->readback, 1, &copy);
    }
    if (cache->timestamps != VK_NULL_HANDLE)
        vkCmdWriteTimestamp(cache->command_buffer,
                            VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                            cache->timestamps, 1);
    vkEndCommandBuffer(cache->command_buffer);
    m_profile.record_ns = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - record_started)
            .count());

    {
        span_timer timer(m_profile.gpu_wait_ns);
        VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
        submit.commandBufferCount = 1;
        submit.pCommandBuffers = &cache->command_buffer;
        vkQueueSubmit(queue, 1, &submit, VK_NULL_HANDLE);
        vkQueueWaitIdle(queue);
    }
    // What the GPU was busy for, out of the span just measured. The queue is
    // idle, so both timestamps have been written and the results are available
    // without waiting.
    if (cache->timestamps != VK_NULL_HANDLE) {
        uint64_t ticks[2] = {0, 0};
        if (vkGetQueryPoolResults(device, cache->timestamps, 0, 2,
                                  sizeof(ticks), ticks, sizeof(uint64_t),
                                  VK_QUERY_RESULT_64_BIT) == VK_SUCCESS &&
            ticks[1] >= ticks[0])
            m_profile.gpu_exec_ns = static_cast<uint64_t>(
                static_cast<double>(ticks[1] - ticks[0]) *
                cache->timestamp_period);
    }
    // The queue is idle, so the copies are done and the staging buffers can go.
    for (const staged_texture& one : staged_uploads) {
        vkDestroyBuffer(device, one.staging, nullptr);
        vkFreeMemory(device, one.staging_memory, nullptr);
    }

    // WHITTY_PASS_PPM=prefix writes every pass's image, with its mean and peak
    // brightness, as prefix_NN.ppm. A frame of two dozen passes composited into
    // one picture cannot be debugged from the picture: "the playfield is black"
    // is a statement about one of those passes, and this says which. Only the
    // presented pass is read back normally, so this costs nothing until asked
    // for - and then costs a readback per pass, which is why it is opt-in.
    //
    // WHITTY_PASS_PPM_FRAME=N narrows it to one frame. Every frame is the wrong
    // default for anything heavy: forty passes, each a readback that waits for
    // the queue and a file written, took Hydro Thunder to 1.4 frames a second,
    // so a minute of running got nowhere near the part of the title worth
    // capturing and the measurement could not be made at all. With a frame
    // named, the run costs nothing until it arrives.
    static const char* pass_ppm_frame = std::getenv("WHITTY_PASS_PPM_FRAME");
    const bool pass_ppm_wanted =
        pass_ppm_frame == nullptr ||
        std::strtoull(pass_ppm_frame, nullptr, 10) == m_frame_number;
    if (const char* prefix =
            pass_ppm_wanted ? std::getenv("WHITTY_PASS_PPM") : nullptr) {
        std::printf("  [passes] frame %llu: %zu passes, presented %zu\n",
                    static_cast<unsigned long long>(m_frame_number),
                    passes.size(), presented);
        for (std::size_t i = 0; i < passes.size(); ++i) {
            if (pass_targets[i] == nullptr) continue;
            const uint32_t w = passes[i].width, h = passes[i].height;
            const VkDeviceSize bytes = VkDeviceSize(w) * h * 4;
            VkBufferCreateInfo bi{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
            bi.size = bytes;
            bi.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            VkBuffer buf = VK_NULL_HANDLE;
            vkCreateBuffer(device, &bi, nullptr, &buf);
            VkMemoryRequirements br;
            vkGetBufferMemoryRequirements(device, buf, &br);
            VkMemoryAllocateInfo ba{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
            ba.allocationSize = br.size;
            ba.memoryTypeIndex = find_memory_type(
                physical, br.memoryTypeBits,
                VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                    VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
            VkDeviceMemory mem = VK_NULL_HANDLE;
            vkAllocateMemory(device, &ba, nullptr, &mem);
            vkBindBufferMemory(device, buf, mem, 0);
            VkCommandBufferAllocateInfo ca{
                VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
            ca.commandPool = command_pool;
            ca.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
            ca.commandBufferCount = 1;
            VkCommandBuffer cmd = VK_NULL_HANDLE;
            vkAllocateCommandBuffers(device, &ca, &cmd);
            VkCommandBufferBeginInfo cb{
                VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
            cb.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            vkBeginCommandBuffer(cmd, &cb);
            VkImageMemoryBarrier bar{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
            bar.oldLayout = i == presented
                                ? VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL
                                : VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            bar.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            bar.image = pass_targets[i]->image;
            bar.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            bar.srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
            bar.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                 VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr,
                                 0, nullptr, 1, &bar);
            VkBufferImageCopy cp{};
            cp.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            cp.imageExtent = {w, h, 1};
            vkCmdCopyImageToBuffer(cmd, pass_targets[i]->image,
                                   VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, buf, 1,
                                   &cp);
            bar.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
            bar.newLayout = i == presented
                                ? VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL
                                : VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            // Back the way it came, so the next frame finds the layout the
            // cache recorded. The access masks belong to THIS barrier's
            // stages - a transfer read, then a shader read - not to the ones
            // above, which is what the validation layer objects to when the
            // struct is reused unchanged.
            bar.srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            bar.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                                 VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0,
                                 nullptr, 0, nullptr, 1, &bar);
            vkEndCommandBuffer(cmd);
            VkSubmitInfo si{VK_STRUCTURE_TYPE_SUBMIT_INFO};
            si.commandBufferCount = 1;
            si.pCommandBuffers = &cmd;
            vkQueueSubmit(queue, 1, &si, VK_NULL_HANDLE);
            vkQueueWaitIdle(queue);
            void* mapped = nullptr;
            vkMapMemory(device, mem, 0, bytes, 0, &mapped);
            const uint8_t* px = static_cast<const uint8_t*>(mapped);
            double sum = 0.0;
            uint32_t peak = 0;
            // ALPHA IS MEASURED SEPARATELY, and it is not decoration. A pass
            // sampled by a later draw under the ordinary SRC_ALPHA blend
            // contributes its colour multiplied by THIS number: a pass with a
            // perfect picture and an alpha of zero composites to nothing, and
            // a line reporting only brightness says the picture is there and
            // cannot say why none of it arrives. The pass PPM carries only
            // RGB, so without this the alpha channel is unmeasurable from
            // outside the process.
            double alpha_sum = 0.0;
            uint32_t alpha_peak = 0;
            for (VkDeviceSize at = 0; at + 3 < bytes; at += 4) {
                const uint32_t v = std::max<uint32_t>(
                    std::max<uint32_t>(px[at], px[at + 1]), px[at + 2]);
                sum += v;
                peak = std::max(peak, v);
                alpha_sum += px[at + 3];
                alpha_peak = std::max<uint32_t>(alpha_peak, px[at + 3]);
            }
            // The resolve address is printed beside the brightness because
            // that is the join between a pass and the draw that samples it: a
            // black pass matters only once you know what reads it.
            char continues[32] = "";
            if (passes[i].continues_pass >= 0)
                std::snprintf(continues, sizeof(continues), " after %d",
                              passes[i].continues_pass);
            std::printf("  [pass %zu] %ux%u draws %zu resolve %08X%s mean %.4f "
                        "peak %u alpha mean %.4f peak %u\n",
                        i, w, h, passes[i].draws.size(),
                        passes[i].resolve_address, continues,
                        sum / double(VkDeviceSize(w) * h), peak,
                        alpha_sum / double(VkDeviceSize(w) * h), alpha_peak);
            char path[512];
            std::snprintf(path, sizeof(path), "%s_%02zu.ppm", prefix, i);
            if (std::FILE* f = std::fopen(path, "wb")) {
                std::fprintf(f, "P6\n%u %u\n255\n", w, h);
                for (VkDeviceSize at = 0; at + 3 < bytes; at += 4)
                    std::fwrite(px + at, 1, 3, f);
                std::fclose(f);
            }
            vkUnmapMemory(device, mem);
            vkFreeCommandBuffers(device, command_pool, 1, &cmd);
            vkDestroyBuffer(device, buf, nullptr);
            vkFreeMemory(device, mem, nullptr);
        }
        std::fflush(stdout);
    }

    if (out != nullptr) {
        span_timer timer(m_profile.readback_ns);
        out->resize(static_cast<std::size_t>(cache->readback_size));
        void* mapped = nullptr;
        vkMapMemory(device, cache->readback_memory, 0, cache->readback_size, 0,
                    &mapped);
        std::memcpy(out->data(), mapped, out->size());
        vkUnmapMemory(device, cache->readback_memory);
    }

    // WHITTY_SUBMIT_PROFILE=1 prints this frame's breakdown as it happens,
    // rather than only as a run total. A single captured frame IS the run on
    // this workflow, so a total that averages one frame says nothing a per-frame
    // line does not, and the per-frame line also shows the first frame paying
    // for every pipeline the rest reuse.
    static const bool profile_frames =
        std::getenv("WHITTY_SUBMIT_PROFILE") != nullptr;
    if (profile_frames) {
        const double total_ms =
            std::chrono::duration<double, std::milli>(
                std::chrono::steady_clock::now() - frame_started)
                .count();
        std::printf(
            "  [submit] frame %llu: %.2f ms total - %.2f pipeline (%u built, "
            "%u reused), %.2f module (%u), %.2f texcmp (%.1f MB), %.2f texup "
            "(%u up / %u kept), %.2f descriptor, %.2f arena (%.1f MB), %.2f "
            "record, %.2f gpu (%.2f exec), %.2f readback, %.2f targets\n",
            static_cast<unsigned long long>(m_frame_number), total_ms,
            m_profile.pipeline_ns / 1e6, m_profile.pipelines_built,
            m_profile.pipelines_reused, m_profile.module_ns / 1e6,
            m_profile.modules_built, m_profile.texture_compare_ns / 1e6,
            m_profile.texture_compare_bytes / 1048576.0,
            m_profile.texture_upload_ns / 1e6, m_profile.textures_uploaded,
            m_profile.textures_reused, m_profile.descriptor_ns / 1e6,
            m_profile.arena_ns / 1e6, m_profile.arena_bytes / 1048576.0,
            m_profile.record_ns / 1e6, m_profile.gpu_wait_ns / 1e6,
            m_profile.gpu_exec_ns / 1e6, m_profile.readback_ns / 1e6,
            m_profile.target_ns / 1e6);
        std::fflush(stdout);
    }

    if (skipped != 0)
        error = "some draws were skipped: " + std::to_string(skipped);
    if (history_missing != 0)
        error += (error.empty() ? "" : "; ") +
                 std::string("feedback reads with no history image: ") +
                 std::to_string(history_missing);
    return true;
}

// A page of the system's own UI over the presented frame. The pixels are
// compared with what is already uploaded and the buffer is only rebuilt when
// they differ, so a page that stays open - which is the normal case, a player
// reading their achievements - costs one buffer-to-image copy a frame and no
// CPU work at all. The swapchain's byte order is handled here: the caller hands
// over RGBA and this swaps it when the surface wants BGRA, the same rule the
// credit follows.
void vulkan_backend::set_overlay_panel(uint32_t width, uint32_t height,
                                       int32_t x, int32_t y,
                                       const std::vector<uint8_t>& rgba,
                                       uint32_t slot) {
    if (m_display_state == nullptr) return;
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    auto* state = static_cast<display_state*>(m_display_state);
    if (device == VK_NULL_HANDLE) return;
    if (slot >= display_state::kOverlayPages) return;
    auto& page = state->pages[slot];

    const std::size_t needed =
        static_cast<std::size_t>(width) * height * 4;
    if (rgba.size() < needed || needed == 0) {
        // Taking the page down. The buffer is left allocated for the next one;
        // only the region list decides whether anything is copied.
        page.regions.clear();
        page.pixels.clear();
        return;
    }
    // Nothing changed, and the regions already say where it goes.
    if (page.pixels.size() == needed && !page.regions.empty() &&
        std::memcmp(page.pixels.data(), rgba.data(), needed) == 0 &&
        page.regions[0].imageOffset.x == x &&
        page.regions[0].imageOffset.y == y)
        return;

    const bool blue_first = state->format == VK_FORMAT_B8G8R8A8_UNORM ||
                            state->format == VK_FORMAT_B8G8R8A8_SRGB;
    std::vector<uint8_t> pixels(rgba.begin(), rgba.begin() + needed);
    page.pixels = pixels;
    if (blue_first)
        for (std::size_t at = 0; at + 3 < pixels.size(); at += 4)
            std::swap(pixels[at + 0], pixels[at + 2]);

    // Grow the buffer when the page needs more room than the last one did. A
    // page that shrinks keeps the larger buffer rather than reallocating.
    if (page.capacity < pixels.size()) {
        vkDeviceWaitIdle(device);
        if (page.buffer) vkDestroyBuffer(device, page.buffer, nullptr);
        if (page.memory) vkFreeMemory(device, page.memory, nullptr);
        page.buffer = VK_NULL_HANDLE;
        page.memory = VK_NULL_HANDLE;
        page.capacity = 0;
        page.regions.clear();

        VkBufferCreateInfo buffer_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
        buffer_info.size = pixels.size();
        buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        if (vkCreateBuffer(device, &buffer_info, nullptr, &page.buffer) !=
            VK_SUCCESS)
            return;
        VkMemoryRequirements requirements{};
        vkGetBufferMemoryRequirements(device, page.buffer, &requirements);
        VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        allocate.allocationSize = requirements.size;
        allocate.memoryTypeIndex =
            find_memory_type(physical, requirements.memoryTypeBits,
                             VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                 VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
        if (allocate.memoryTypeIndex == UINT32_MAX ||
            vkAllocateMemory(device, &allocate, nullptr, &page.memory) !=
                VK_SUCCESS) {
            vkDestroyBuffer(device, page.buffer, nullptr);
            page.buffer = VK_NULL_HANDLE;
            return;
        }
        vkBindBufferMemory(device, page.buffer, page.memory, 0);
        page.capacity = pixels.size();
    }

    void* mapped = nullptr;
    if (vkMapMemory(device, page.memory, 0, pixels.size(), 0, &mapped) !=
        VK_SUCCESS)
        return;
    std::memcpy(mapped, pixels.data(), pixels.size());
    vkUnmapMemory(device, page.memory);

    // One region for the whole page: it is an opaque plaque, so splitting it
    // would only add copies. Clipped to the swapchain rather than trusted, since
    // a copy running off the image is undefined behaviour and not a no-op.
    uint32_t copy_width = width;
    uint32_t copy_height = height;
    if (x < 0 || y < 0 ||
        static_cast<uint32_t>(x) + width > state->width ||
        static_cast<uint32_t>(y) + height > state->height) {
        page.regions.clear();
        return;
    }
    VkBufferImageCopy region{};
    region.bufferOffset = 0;
    region.bufferRowLength = width;
    region.bufferImageHeight = height;
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    region.imageOffset = {x, y, 0};
    region.imageExtent = {copy_width, copy_height, 1};
    page.regions.clear();
    page.regions.push_back(region);
}

// The cabinet surround. Uploaded to a device-local image once, through a
// staging buffer that is freed as soon as the queue has drained; from then on
// every present is one image-to-image copy of the four rectangles around the
// picture.
//
// The picture's own rectangle is never among those regions, which is the whole
// safety argument for this: whatever is painted into the middle of the artwork
// is dead pixels that no copy reads, so nothing here can reach a pixel the
// title rendered even if the layout arithmetic is wrong.
void vulkan_backend::set_surround(uint32_t width, uint32_t height,
                                  const std::vector<uint8_t>& rgba) {
    if (m_display_state == nullptr) return;
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    auto queue = static_cast<VkQueue>(m_queue);
    auto pool = static_cast<VkCommandPool>(m_command_pool);
    auto* state = static_cast<display_state*>(m_display_state);
    if (device == VK_NULL_HANDLE) return;

    const std::size_t needed = static_cast<std::size_t>(width) * height * 4;
    if (needed == 0 || rgba.size() < needed) {
        vkDeviceWaitIdle(device);
        destroy_surround(device, *state);
        return;
    }
    // The artwork has to be the surface's own size, because the copy regions
    // are computed from the pane layout in surface coordinates. Anything else
    // is refused rather than scaled: a surround stretched to fit would put the
    // bezel somewhere other than against the picture, which looks like a
    // layout bug and is one.
    if (width != state->width || height != state->height) {
        vkDeviceWaitIdle(device);
        destroy_surround(device, *state);
        return;
    }
    vkDeviceWaitIdle(device);
    destroy_surround(device, *state);

    VkImageCreateInfo image_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = state->format;
    image_info.extent = {width, height, 1};
    image_info.mipLevels = 1;
    image_info.arrayLayers = 1;
    image_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage =
        VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    if (vkCreateImage(device, &image_info, nullptr, &state->surround) !=
        VK_SUCCESS) {
        state->surround = VK_NULL_HANDLE;
        return;
    }
    VkMemoryRequirements image_req{};
    vkGetImageMemoryRequirements(device, state->surround, &image_req);
    VkMemoryAllocateInfo image_alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    image_alloc.allocationSize = image_req.size;
    image_alloc.memoryTypeIndex =
        find_memory_type(physical, image_req.memoryTypeBits,
                         VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (image_alloc.memoryTypeIndex == UINT32_MAX ||
        vkAllocateMemory(device, &image_alloc, nullptr,
                         &state->surround_memory) != VK_SUCCESS) {
        vkDestroyImage(device, state->surround, nullptr);
        state->surround = VK_NULL_HANDLE;
        return;
    }
    vkBindImageMemory(device, state->surround, state->surround_memory, 0);

    // The swapchain decides the byte order, exactly as it does for the credit
    // and the page. Getting this wrong is not a crash, it is a surround with
    // red and blue exchanged - which looks like a deliberate colour scheme.
    const bool blue_first = state->format == VK_FORMAT_B8G8R8A8_UNORM ||
                            state->format == VK_FORMAT_B8G8R8A8_SRGB;
    VkBuffer staging = VK_NULL_HANDLE;
    VkDeviceMemory staging_memory = VK_NULL_HANDLE;
    VkBufferCreateInfo buffer_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    buffer_info.size = needed;
    buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    if (vkCreateBuffer(device, &buffer_info, nullptr, &staging) != VK_SUCCESS) {
        destroy_surround(device, *state);
        return;
    }
    VkMemoryRequirements buffer_req{};
    vkGetBufferMemoryRequirements(device, staging, &buffer_req);
    VkMemoryAllocateInfo buffer_alloc{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    buffer_alloc.allocationSize = buffer_req.size;
    buffer_alloc.memoryTypeIndex =
        find_memory_type(physical, buffer_req.memoryTypeBits,
                         VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                             VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    if (buffer_alloc.memoryTypeIndex == UINT32_MAX ||
        vkAllocateMemory(device, &buffer_alloc, nullptr, &staging_memory) !=
            VK_SUCCESS) {
        vkDestroyBuffer(device, staging, nullptr);
        destroy_surround(device, *state);
        return;
    }
    vkBindBufferMemory(device, staging, staging_memory, 0);
    void* mapped = nullptr;
    if (vkMapMemory(device, staging_memory, 0, needed, 0, &mapped) !=
        VK_SUCCESS) {
        vkDestroyBuffer(device, staging, nullptr);
        vkFreeMemory(device, staging_memory, nullptr);
        destroy_surround(device, *state);
        return;
    }
    // Copied and byte-swapped IN ONE PASS, never swapped in place afterwards.
    //
    // Mapped host-visible memory on a discrete GPU is usually write-combined:
    // writing it is fast and READING it is not, by an order of magnitude. An
    // in-place swap reads every byte back out of it, and over the 29 MB this
    // surround is that measured at 21.6 ms - most of the upload, and all of it
    // avoidable. Reading from the caller's ordinary memory and writing the
    // swapped result once touches the mapped side in the one direction it is
    // good at.
    copy_swapping(mapped, rgba.data(), needed, blue_first);
    vkUnmapMemory(device, staging_memory);

    VkCommandBufferAllocateInfo cmd_alloc{
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    cmd_alloc.commandPool = pool;
    cmd_alloc.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cmd_alloc.commandBufferCount = 1;
    VkCommandBuffer cmd = VK_NULL_HANDLE;
    vkAllocateCommandBuffers(device, &cmd_alloc, &cmd);
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cmd, &begin);
    VkImageMemoryBarrier to_dst{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_dst.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    to_dst.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_dst.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_dst.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_dst.image = state->surround;
    to_dst.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_dst.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_dst);
    VkBufferImageCopy whole{};
    whole.bufferRowLength = width;
    whole.bufferImageHeight = height;
    whole.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    whole.imageExtent = {width, height, 1};
    vkCmdCopyBufferToImage(cmd, staging, state->surround,
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &whole);
    // Left as a transfer source for good: it is never written again, so every
    // present can copy straight out of it with no barrier of its own.
    VkImageMemoryBarrier to_src{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_src.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_src.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    to_src.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_src.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_src.image = state->surround;
    to_src.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_src.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    to_src.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_src);
    vkEndCommandBuffer(cmd);
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1;
    submit.pCommandBuffers = &cmd;
    vkQueueSubmit(queue, 1, &submit, VK_NULL_HANDLE);
    vkQueueWaitIdle(queue);
    vkFreeCommandBuffers(device, pool, 1, &cmd);
    vkDestroyBuffer(device, staging, nullptr);
    vkFreeMemory(device, staging_memory, nullptr);

    state->surround_width = width;
    state->surround_height = height;
}

// The audio meter. Identical in shape to set_overlay_panel above - a small
// host-visible buffer and one copy region - and deliberately not folded into it
// so that the blade coming up cannot take the meter down with it.
//
// Uploaded every frame, because that is what it is: 16 bars of a spectrum taken
// from the mix the title just submitted. At the size the layout gives it that
// is a few hundred kilobytes a frame, against the tens of megabytes re-sending
// the artwork behind it would cost.
void vulkan_backend::set_meter(uint32_t width, uint32_t height, int32_t x,
                               int32_t y, const std::vector<uint8_t>& rgba) {
    if (m_display_state == nullptr) return;
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    auto* state = static_cast<display_state*>(m_display_state);
    if (device == VK_NULL_HANDLE) return;

    const std::size_t needed = static_cast<std::size_t>(width) * height * 4;
    if (needed == 0 || rgba.size() < needed) {
        state->meter_regions.clear();
        return;
    }
    // Clipped to the swapchain rather than trusted: a copy running off the
    // image is undefined behaviour, not a copy that does less.
    if (x < 0 || y < 0 || static_cast<uint32_t>(x) + width > state->width ||
        static_cast<uint32_t>(y) + height > state->height) {
        state->meter_regions.clear();
        return;
    }

    const bool blue_first = state->format == VK_FORMAT_B8G8R8A8_UNORM ||
                            state->format == VK_FORMAT_B8G8R8A8_SRGB;
    if (state->meter_capacity < needed) {
        vkDeviceWaitIdle(device);
        if (state->meter) vkDestroyBuffer(device, state->meter, nullptr);
        if (state->meter_memory)
            vkFreeMemory(device, state->meter_memory, nullptr);
        state->meter = VK_NULL_HANDLE;
        state->meter_memory = VK_NULL_HANDLE;
        state->meter_capacity = 0;
        state->meter_regions.clear();

        VkBufferCreateInfo buffer_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
        buffer_info.size = needed;
        buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        if (vkCreateBuffer(device, &buffer_info, nullptr, &state->meter) !=
            VK_SUCCESS)
            return;
        VkMemoryRequirements requirements{};
        vkGetBufferMemoryRequirements(device, state->meter, &requirements);
        VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
        allocate.allocationSize = requirements.size;
        allocate.memoryTypeIndex =
            find_memory_type(physical, requirements.memoryTypeBits,
                             VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                 VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
        if (allocate.memoryTypeIndex == UINT32_MAX ||
            vkAllocateMemory(device, &allocate, nullptr,
                             &state->meter_memory) != VK_SUCCESS) {
            vkDestroyBuffer(device, state->meter, nullptr);
            state->meter = VK_NULL_HANDLE;
            return;
        }
        vkBindBufferMemory(device, state->meter, state->meter_memory, 0);
        state->meter_capacity = needed;
    }

    void* mapped = nullptr;
    if (vkMapMemory(device, state->meter_memory, 0, needed, 0, &mapped) !=
        VK_SUCCESS)
        return;
    // One pass, for the reason set_surround gives at length: this one runs
    // every frame, so reading write-combined memory back would be a cost paid
    // sixty times a second rather than once.
    copy_swapping(mapped, rgba.data(), needed, blue_first);
    vkUnmapMemory(device, state->meter_memory);

    VkBufferImageCopy region{};
    region.bufferOffset = 0;
    region.bufferRowLength = width;
    region.bufferImageHeight = height;
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    region.imageOffset = {x, y, 0};
    region.imageExtent = {width, height, 1};
    state->meter_regions.clear();
    state->meter_regions.push_back(region);
}

uint32_t vulkan_backend::display_width() const noexcept {
    if (m_display_state == nullptr) return 0;
    return static_cast<const display_state*>(m_display_state)->width;
}

uint32_t vulkan_backend::display_height() const noexcept {
    if (m_display_state == nullptr) return 0;
    return static_cast<const display_state*>(m_display_state)->height;
}

// Rebuilds the swapchain, and with it everything whose position was worked out
// from the old surface's size.
//
// The device is idled first. The images being replaced can still be in a
// presentation the compositor has not finished with, and the semaphores are the
// harder case: a vkQueuePresentKHR that returned VK_ERROR_OUT_OF_DATE_KHR gives
// no guarantee about whether it consumed the semaphore it waited on, so those
// are replaced rather than reused. That is two objects a mode change, against a
// wait that never ends if the guess is wrong.
bool vulkan_backend::resize_display(uint32_t width, uint32_t height,
                                    std::string& error) {
    if (m_display_state == nullptr) {
        error = "no display to resize";
        return false;
    }
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    auto surface = static_cast<VkSurfaceKHR>(m_surface);
    auto* state = static_cast<display_state*>(m_display_state);
    vkDeviceWaitIdle(device);

    if (state->acquired) vkDestroySemaphore(device, state->acquired, nullptr);
    if (state->rendered) vkDestroySemaphore(device, state->rendered, nullptr);
    VkSemaphoreCreateInfo semaphore_info{
        VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    vkCreateSemaphore(device, &semaphore_info, nullptr, &state->acquired);
    vkCreateSemaphore(device, &semaphore_info, nullptr, &state->rendered);

    if (!build_swapchain(device, physical, surface, *state, width, height,
                         error))
        return false;
    m_swapchain = state->swapchain;

    // The credit is placed per pane, and the panes come from the surface's size
    // - so both go and are worked out again. The system page's pixels are kept
    // but its region is not: the next set_overlay_panel() call recomputes it,
    // and until then nothing is copied rather than something copied to the old
    // coordinates.
    destroy_credit(device, *state);
    // The surround is the surface's own size, so a surface that changed shape
    // leaves it unusable - and a copy whose source is smaller than the region
    // asked for is undefined behaviour, not a smaller copy. It goes, and the
    // flat border stands until the host paints a new one for the new size.
    destroy_surround(device, *state);
    state->meter_regions.clear();
    for (auto& page : state->pages) {
        page.regions.clear();
        page.pixels.clear();
    }
    build_credit(device, physical, *state,
                 state->source_width != 0 ? state->source_width : state->width,
                 state->source_height != 0 ? state->source_height
                                           : state->height);
    m_display_out_of_date = false;
    return true;
}

bool vulkan_backend::present(std::string& error) {
    if (m_display_state == nullptr) {
        error = "no display to present to";
        return false;
    }
    if (m_scene_cache == nullptr) {
        // Nothing has been rendered, so there is nothing to show. Not an
        // error: a title can present before it draws anything.
        return true;
    }
    auto device = static_cast<VkDevice>(m_device);
    auto queue = static_cast<VkQueue>(m_queue);
    auto* state = static_cast<display_state*>(m_display_state);
    auto* cache = static_cast<scene_cache*>(m_scene_cache);
    if (cache->image == VK_NULL_HANDLE) return true;

    // What the frame is, so a rebuild can place the credit against the same
    // picture. Recorded before the acquire, which is the call that may find the
    // surface gone.
    state->source_width = cache->width;
    state->source_height = cache->height;

    uint32_t index = 0;
    const VkResult acquired = vkAcquireNextImageKHR(
        device, state->swapchain, UINT64_MAX, state->acquired, VK_NULL_HANDLE,
        &index);
    if (acquired == VK_ERROR_OUT_OF_DATE_KHR) {
        // The window changed shape under us - resized, or moved between
        // windowed and fullscreen. This frame cannot be shown, but the run is
        // not over: the host is told to rebuild the swapchain and the next frame
        // goes to the new surface. Nothing is submitted, so the semaphore this
        // acquire would have signalled is untouched.
        m_display_out_of_date = true;
        return true;
    }
    if (acquired != VK_SUCCESS && acquired != VK_SUBOPTIMAL_KHR) {
        error = "vkAcquireNextImageKHR failed";
        return false;
    }
    // Suboptimal still presents - the image is usable, it just no longer suits
    // the surface - so this frame is shown and the rebuild happens after it.
    // SUBOPTIMAL from a swapchain that chose not to pre-rotate is the platform
    // saying "I am rotating this for you", which is what was asked for. Only a
    // swapchain that expected to match the surface can learn anything from it.
    if (acquired == VK_SUBOPTIMAL_KHR && !state->rotation_is_deliberate)
        m_display_out_of_date = true;

    vkResetCommandBuffer(state->command_buffer, 0);
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(state->command_buffer, &begin);

    // The swapchain image comes back in an undefined layout every time, so it
    // is transitioned in and out around the blit.
    VkImageMemoryBarrier to_transfer{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_transfer.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    to_transfer.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_transfer.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_transfer.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_transfer.image = state->images[index];
    to_transfer.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_transfer.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(state->command_buffer,
                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_transfer);

    // Where the frame goes. One pane covering the whole image normally; two
    // side-by-side panes showing the same frame when the twin split is on, so a
    // second player has a screen area of their own.
    present_pane panes[2]{};
    // No cabinet, no leftover: with the surround hidden the picture takes the
    // whole screen its aspect can reach. See layout_present_panes' `fill`.
    const bool fill = !surround_visible().load(std::memory_order_relaxed);
    const int pane_count = layout_present_panes(
        state->width, state->height, cache->width, cache->height,
        state->twin_panes, panes, fill,
        plain_border().load(std::memory_order_relaxed),
        picture_width_cap().load(std::memory_order_relaxed));
    // The credit was placed against a picture of the other size, so it has to
    // be placed again when the toggle flips - otherwise it sits out in the
    // border on the way up and inside the picture on the way down.
    if (fill != state->fill_picture) {
        state->fill_picture = fill;
        destroy_credit(device, *state);
        build_credit(device,
                     static_cast<VkPhysicalDevice>(m_physical_device), *state,
                     state->source_width != 0 ? state->source_width
                                              : state->width,
                     state->source_height != 0 ? state->source_height
                                               : state->height);
    }

    // Whatever the panes do not cover has to be painted, because a swapchain
    // image comes back in an undefined layout with undefined contents - leaving
    // it shows last frame's leftovers in the gutter, in the letterbox bars, and
    // in the border. So the test is coverage, not which option is on: one pane
    // filling the whole image needs nothing and skips this, and that is the
    // ordinary windowed case with no border.
    //
    // The colour is the border's when a border was asked for - that clear IS
    // the frame around the picture, so drawing it costs nothing beyond what the
    // surround needed anyway - and black when it was not, because letterbox
    // bars on a fullscreen picture are meant to disappear rather than to be a
    // frame somebody did not ask for.
    //
    // The cabinet surround, when there is one, is copied over that clear
    // immediately afterwards. The clear stays even so: it is one fast-path
    // operation, it covers the gutter of a twin split and the case where the
    // artwork is a frame behind the surface's new size, and it costs nothing
    // next to what it insures against - an uninitialised swapchain image
    // showing another application's pixels.
    const bool covers_image =
        pane_count == 1 && panes[0].x == 0 && panes[0].y == 0 &&
        panes[0].width == static_cast<int32_t>(state->width) &&
        panes[0].height == static_cast<int32_t>(state->height);
    if (!covers_image) {
        const VkClearColorValue surround =
            state->bordered
                ? VkClearColorValue{{kBorderColour[0], kBorderColour[1],
                                     kBorderColour[2], 1.0f}}
                : VkClearColorValue{{0.0f, 0.0f, 0.0f, 1.0f}};
        const VkImageSubresourceRange whole{VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0,
                                            1};
        vkCmdClearColorImage(state->command_buffer, state->images[index],
                             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &surround, 1,
                             &whole);
        VkImageMemoryBarrier after_clear{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        after_clear.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        after_clear.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        after_clear.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        after_clear.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        after_clear.image = state->images[index];
        after_clear.subresourceRange = whole;
        after_clear.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        after_clear.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        vkCmdPipelineBarrier(state->command_buffer,
                             VK_PIPELINE_STAGE_TRANSFER_BIT,
                             VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                             nullptr, 1, &after_clear);
    }

    // The cabinet surround: the artwork that replaces the flat border.
    //
    // FOUR RECTANGLES, AND NOT A FIFTH. The picture's own rectangle is
    // deliberately not among them, so nothing in the artwork - however wrong
    // its layout arithmetic might be - can reach a pixel the title rendered.
    // The surround image is the surface's own size, so a region's source and
    // destination are the same coordinates and there is no mapping to get
    // wrong either.
    //
    // Only with a single pane. A twin split is two people's screens either
    // side of a gutter; there is no border around that to put a cabinet in,
    // and the flat clear above is the right answer for the gutter.
    const bool surround_usable =
        state->surround != VK_NULL_HANDLE && pane_count == 1 &&
        state->surround_width == state->width &&
        state->surround_height == state->height && !covers_image;
    // Said out loud, once, when there IS artwork and it is not being copied.
    // A surround that silently does not appear looks exactly like a surround
    // that was never built, and the host has already reported building one by
    // then - so the two states are indistinguishable from the log, which is
    // how an afternoon goes into guessing which of four conditions failed.
    if (!surround_usable && state->surround != VK_NULL_HANDLE) {
        static std::atomic<bool> said{false};
        if (!said.exchange(true))
            std::fprintf(stderr,
                         "  [gpu] surround NOT copied: artwork %ux%u, surface "
                         "%ux%u, %d pane(s)%s\n",
                         state->surround_width, state->surround_height,
                         state->width, state->height, pane_count,
                         covers_image ? ", picture covers the surface" : "");
    }
    if (surround_usable) {
        const int32_t surface_w = static_cast<int32_t>(state->width);
        const int32_t surface_h = static_cast<int32_t>(state->height);
        const present_pane& picture = panes[0];
        const present_pane around[4] = {
            // Above and below run the full width; the sides fill in what is
            // left beside the picture. Split this way so the four never
            // overlap - a copy written twice is wasted bandwidth in the one
            // place this design exists to save it.
            {0, 0, surface_w, picture.y},
            {0, picture.y + picture.height, surface_w,
             surface_h - (picture.y + picture.height)},
            {0, picture.y, picture.x, picture.height},
            {picture.x + picture.width, picture.y,
             surface_w - (picture.x + picture.width), picture.height},
        };
        VkImageCopy copies[4]{};
        uint32_t copy_count = 0;
        for (const present_pane& box : around) {
            if (box.width <= 0 || box.height <= 0) continue;
            VkImageCopy& copy = copies[copy_count++];
            copy.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            copy.srcOffset = {box.x, box.y, 0};
            copy.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            copy.dstOffset = {box.x, box.y, 0};
            copy.extent = {static_cast<uint32_t>(box.width),
                           static_cast<uint32_t>(box.height), 1};
        }
        if (copy_count != 0)
            vkCmdCopyImage(state->command_buffer, state->surround,
                           VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                           state->images[index],
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, copy_count,
                           copies);
    }

    // Blit rather than copy, so a frame rendered at the title's resolution
    // still fills a window of a different size. Both panes read the same source
    // image in the same command buffer - the frame is presented twice, not
    // rendered twice, which is why a second view costs a transfer and nothing
    // else.
    VkImageBlit blits[2]{};
    for (int i = 0; i < pane_count; ++i) {
        blits[i].srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        blits[i].srcOffsets[1] = VkOffset3D{static_cast<int32_t>(cache->width),
                                            static_cast<int32_t>(cache->height),
                                            1};
        blits[i].dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        blits[i].dstOffsets[0] = VkOffset3D{panes[i].x, panes[i].y, 0};
        blits[i].dstOffsets[1] = VkOffset3D{panes[i].x + panes[i].width,
                                            panes[i].y + panes[i].height, 1};
    }
    vkCmdBlitImage(state->command_buffer, cache->image,
                   VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->images[index],
                   VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                   static_cast<uint32_t>(pane_count), blits,
                   VK_FILTER_LINEAR);

    // The audio meter, into the well the surround left for it. It goes over the
    // artwork it sits in, so this one DOES need ordering against the copy
    // above - unlike the surround and the blit, which write disjoint halves of
    // the image and need nothing between them.
    if (!state->meter_regions.empty() && state->meter != VK_NULL_HANDLE) {
        VkImageMemoryBarrier before_meter{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        before_meter.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        before_meter.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        before_meter.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        before_meter.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        before_meter.image = state->images[index];
        before_meter.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        before_meter.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        before_meter.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        vkCmdPipelineBarrier(state->command_buffer,
                             VK_PIPELINE_STAGE_TRANSFER_BIT,
                             VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                             nullptr, 1, &before_meter);
        vkCmdCopyBufferToImage(
            state->command_buffer, state->meter, state->images[index],
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            static_cast<uint32_t>(state->meter_regions.size()),
            state->meter_regions.data());
    }

    // The credit goes on last: after everything the title drew, so nothing it
    // does can cover it, and into the swapchain image rather than the title's
    // target, so nothing it renders is disturbed either. It is a copy of a few
    // dozen small regions in the same command buffer as the blit - no extra
    // submission, no pipeline, and no work at all on the CPU.
    // The system's page goes on before the credit, so the credit stays legible
    // over it - it is the runtime's mark on the frame either way.
    for (auto& page : state->pages) {
        if (page.regions.empty()) continue;
        VkImageMemoryBarrier before_panel{
            VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        before_panel.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        before_panel.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        before_panel.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        before_panel.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        before_panel.image = state->images[index];
        before_panel.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        before_panel.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        before_panel.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        vkCmdPipelineBarrier(state->command_buffer,
                             VK_PIPELINE_STAGE_TRANSFER_BIT,
                             VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                             nullptr, 1, &before_panel);
        vkCmdCopyBufferToImage(
            state->command_buffer, page.buffer, state->images[index],
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            static_cast<uint32_t>(page.regions.size()), page.regions.data());
    }

    if (!state->credit_regions.empty()) {
        // The blit wrote the whole image and this writes part of it again, so
        // the two have to be ordered against each other.
        VkImageMemoryBarrier after_blit{
            VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        after_blit.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        after_blit.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        after_blit.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        after_blit.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        after_blit.image = state->images[index];
        after_blit.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        after_blit.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        after_blit.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        vkCmdPipelineBarrier(state->command_buffer,
                             VK_PIPELINE_STAGE_TRANSFER_BIT,
                             VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0,
                             nullptr, 1, &after_blit);
        vkCmdCopyBufferToImage(
            state->command_buffer, state->credit, state->images[index],
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            static_cast<uint32_t>(state->credit_regions.size()),
            state->credit_regions.data());
    }

    VkImageMemoryBarrier to_present{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    to_present.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    to_present.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    to_present.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_present.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    to_present.image = state->images[index];
    to_present.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
    to_present.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(state->command_buffer, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0, 0, nullptr, 0,
                         nullptr, 1, &to_present);
    vkEndCommandBuffer(state->command_buffer);

    const VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_TRANSFER_BIT;
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.waitSemaphoreCount = 1;
    submit.pWaitSemaphores = &state->acquired;
    submit.pWaitDstStageMask = &wait_stage;
    submit.commandBufferCount = 1;
    submit.pCommandBuffers = &state->command_buffer;
    submit.signalSemaphoreCount = 1;
    submit.pSignalSemaphores = &state->rendered;
    vkResetFences(device, 1, &state->fence);
    vkQueueSubmit(queue, 1, &submit, state->fence);

    VkPresentInfoKHR present_info{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
    present_info.waitSemaphoreCount = 1;
    present_info.pWaitSemaphores = &state->rendered;
    present_info.swapchainCount = 1;
    present_info.pSwapchains = &state->swapchain;
    present_info.pImageIndices = &index;
    const VkResult presented = vkQueuePresentKHR(queue, &present_info);
    // The command buffer and semaphores are reused next frame, so this frame
    // has to be done with them before then.
    vkWaitForFences(device, 1, &state->fence, VK_TRUE, UINT64_MAX);
    if (presented == VK_ERROR_OUT_OF_DATE_KHR ||
        (presented == VK_SUBOPTIMAL_KHR && !state->rotation_is_deliberate)) {
        // The surface changed between the acquire and the present. The frame is
        // gone either way; what matters is that the swapchain is rebuilt before
        // the next one, which the flag asks the host to do.
        //
        // OUT_OF_DATE always means that. SUBOPTIMAL only means it when this
        // swapchain was trying to match the surface's transform - see
        // build_swapchain for why one that is not trying answers SUBOPTIMAL on
        // every single present and must not be believed.
        m_display_out_of_date = true;
        return true;
    }
    return true;
}

bool vulkan_backend::render_draw(uint32_t width, uint32_t height,
                                 const float clear[4],
                                 const std::vector<uint32_t>& vertex_spirv,
                                 const std::vector<uint32_t>& fragment_spirv,
                                 const std::vector<float>& positions,
                                 uint32_t vertex_count, std::vector<uint8_t>& out,
                                 std::string& error) {
    const frame_draw draw{&vertex_spirv, &fragment_spirv, &positions,
                          vertex_count};
    return render_frame(width, height, clear, {draw}, out, error);
}

bool vulkan_backend::render_textured(
    uint32_t width, uint32_t height, const float clear[4],
    const std::vector<uint32_t>& vertex_spirv,
    const std::vector<uint32_t>& fragment_spirv,
    const std::vector<float>& positions, uint32_t vertex_count,
    const std::vector<uint8_t>& texture_rgba, uint32_t tex_width,
    uint32_t tex_height, std::vector<uint8_t>& out, std::string& error) {
    if (!initialized()) {
        error = "backend not initialized";
        return false;
    }
    auto device = static_cast<VkDevice>(m_device);
    auto physical = static_cast<VkPhysicalDevice>(m_physical_device);
    auto queue = static_cast<VkQueue>(m_queue);
    auto pool = static_cast<VkCommandPool>(m_command_pool);
    const VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
    VkRenderPass render_pass = make_render_pass(device, format);

    // Upload the texture and make a sampler.
    VkImage tex_image = VK_NULL_HANDLE;
    VkDeviceMemory tex_memory = VK_NULL_HANDLE;
    VkImageView tex_view = upload_texture(device, physical, queue, pool,
                                          texture_rgba, tex_width, tex_height,
                                          tex_image, tex_memory);
    VkSampler sampler = make_sampler(device);

    // Descriptor set layout: one combined image sampler for the fragment stage.
    VkDescriptorSetLayoutBinding binding{};
    binding.binding = 0;
    binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    binding.descriptorCount = 1;
    binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo set_layout_info{
        VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    set_layout_info.bindingCount = 1;
    set_layout_info.pBindings = &binding;
    VkDescriptorSetLayout set_layout = VK_NULL_HANDLE;
    vkCreateDescriptorSetLayout(device, &set_layout_info, nullptr, &set_layout);

    VkDescriptorPoolSize pool_size{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1};
    VkDescriptorPoolCreateInfo pool_info{
        VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    pool_info.maxSets = 1;
    pool_info.poolSizeCount = 1;
    pool_info.pPoolSizes = &pool_size;
    VkDescriptorPool desc_pool = VK_NULL_HANDLE;
    vkCreateDescriptorPool(device, &pool_info, nullptr, &desc_pool);

    VkDescriptorSetAllocateInfo set_alloc{
        VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    set_alloc.descriptorPool = desc_pool;
    set_alloc.descriptorSetCount = 1;
    set_alloc.pSetLayouts = &set_layout;
    VkDescriptorSet desc_set = VK_NULL_HANDLE;
    vkAllocateDescriptorSets(device, &set_alloc, &desc_set);

    VkDescriptorImageInfo image_desc{sampler, tex_view,
                                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstSet = desc_set;
    write.dstBinding = 0;
    write.descriptorCount = 1;
    write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    write.pImageInfo = &image_desc;
    vkUpdateDescriptorSets(device, 1, &write, 0, nullptr);

    VkShaderModule vs = make_shader_module(device, vertex_spirv);
    VkShaderModule fs = make_shader_module(device, fragment_spirv);
    VkPipelineLayout layout = VK_NULL_HANDLE;
    VkPipeline pipeline =
        make_pipeline(device, render_pass, width, height, vs, fs, false,
                      topology::triangle_list, set_layout, layout);
    VkDeviceMemory vmem = VK_NULL_HANDLE;
    VkBuffer vbuf = make_vertex_buffer(device, physical, positions, vmem);

    const bool ok = render_to_target(
        device, physical, queue, pool, width, height, format, render_pass, clear,
        [&](VkCommandBuffer cmd) {
            vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
            vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, layout,
                                    0, 1, &desc_set, 0, nullptr);
            const VkDeviceSize offset = 0;
            vkCmdBindVertexBuffers(cmd, 0, 1, &vbuf, &offset);
            vkCmdDraw(cmd, vertex_count, 1, 0, 0);
        },
        out, error);

    vkDestroyBuffer(device, vbuf, nullptr);
    vkFreeMemory(device, vmem, nullptr);
    vkDestroyPipeline(device, pipeline, nullptr);
    vkDestroyPipelineLayout(device, layout, nullptr);
    vkDestroyShaderModule(device, vs, nullptr);
    vkDestroyShaderModule(device, fs, nullptr);
    vkDestroyDescriptorPool(device, desc_pool, nullptr);
    vkDestroyDescriptorSetLayout(device, set_layout, nullptr);
    vkDestroySampler(device, sampler, nullptr);
    vkDestroyImageView(device, tex_view, nullptr);
    vkDestroyImage(device, tex_image, nullptr);
    vkFreeMemory(device, tex_memory, nullptr);
    vkDestroyRenderPass(device, render_pass, nullptr);
    return ok;
}

} // namespace whitty_xenon::gpu
