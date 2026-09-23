// vulkan_stub.c - a Vulkan that always refuses, for running under qemu-user.
//
// qemu-aarch64-static can execute the arm64 harness, which exercises the
// instruction semantics of the recompiled CPU, the memory model, the threading
// and the whole syscall surface - most of what a first device run would answer
// about correctness, and NONE of what it would answer about speed. What it
// cannot do is run a GPU driver, so this stands in for one.
//
// Every entry point refuses. That is not a shortcut, it is the point: the
// runtime has a documented headless path (vulkan_backend::initialize returns
// with no device when vkCreateInstance fails), so a refusing Vulkan makes the
// title run its CPU, its kernel and its whole GPU command stream while drawing
// nothing - which is exactly the thing under test.
//
// Generated from the undefined vk* symbols of the real build, so it cannot
// drift out of step with what the backend calls: a missing one is a link error,
// not a silent stub.
//
// -1 rather than 0, always. In Vulkan 0 is VK_SUCCESS, and a stub that reports
// success for a device it never created is this project's single most expensive
// class of bug.
#include <stdint.h>

int64_t vkAcquireNextImageKHR(void) { return -1; }
int64_t vkAllocateCommandBuffers(void) { return -1; }
int64_t vkAllocateDescriptorSets(void) { return -1; }
int64_t vkAllocateMemory(void) { return -1; }
int64_t vkBeginCommandBuffer(void) { return -1; }
int64_t vkBindBufferMemory(void) { return -1; }
int64_t vkBindImageMemory(void) { return -1; }
int64_t vkCmdBeginRenderPass(void) { return -1; }
int64_t vkCmdBindDescriptorSets(void) { return -1; }
int64_t vkCmdBindIndexBuffer(void) { return -1; }
int64_t vkCmdBindPipeline(void) { return -1; }
int64_t vkCmdBindVertexBuffers(void) { return -1; }
int64_t vkCmdBlitImage(void) { return -1; }
int64_t vkCmdClearColorImage(void) { return -1; }
int64_t vkCmdCopyBufferToImage(void) { return -1; }
int64_t vkCmdCopyImage(void) { return -1; }
int64_t vkCmdCopyImageToBuffer(void) { return -1; }
int64_t vkCmdDraw(void) { return -1; }
int64_t vkCmdDrawIndexed(void) { return -1; }
int64_t vkCmdEndRenderPass(void) { return -1; }
int64_t vkCmdPipelineBarrier(void) { return -1; }
int64_t vkCmdResetQueryPool(void) { return -1; }
int64_t vkCmdWriteTimestamp(void) { return -1; }
int64_t vkCreateBuffer(void) { return -1; }
int64_t vkCreateCommandPool(void) { return -1; }
int64_t vkCreateDescriptorPool(void) { return -1; }
int64_t vkCreateDescriptorSetLayout(void) { return -1; }
int64_t vkCreateDevice(void) { return -1; }
int64_t vkCreateFence(void) { return -1; }
int64_t vkCreateFramebuffer(void) { return -1; }
int64_t vkCreateGraphicsPipelines(void) { return -1; }
int64_t vkCreateImage(void) { return -1; }
int64_t vkCreateImageView(void) { return -1; }
int64_t vkCreateInstance(void) { return -1; }
int64_t vkCreatePipelineCache(void) { return -1; }
int64_t vkCreatePipelineLayout(void) { return -1; }
int64_t vkCreateQueryPool(void) { return -1; }
int64_t vkCreateRenderPass(void) { return -1; }
int64_t vkCreateSampler(void) { return -1; }
int64_t vkCreateSemaphore(void) { return -1; }
int64_t vkCreateShaderModule(void) { return -1; }
int64_t vkCreateSwapchainKHR(void) { return -1; }
int64_t vkDestroyBuffer(void) { return -1; }
int64_t vkDestroyCommandPool(void) { return -1; }
int64_t vkDestroyDescriptorPool(void) { return -1; }
int64_t vkDestroyDescriptorSetLayout(void) { return -1; }
int64_t vkDestroyDevice(void) { return -1; }
int64_t vkDestroyFence(void) { return -1; }
int64_t vkDestroyFramebuffer(void) { return -1; }
int64_t vkDestroyImage(void) { return -1; }
int64_t vkDestroyImageView(void) { return -1; }
int64_t vkDestroyInstance(void) { return -1; }
int64_t vkDestroyPipeline(void) { return -1; }
int64_t vkDestroyPipelineCache(void) { return -1; }
int64_t vkDestroyPipelineLayout(void) { return -1; }
int64_t vkDestroyQueryPool(void) { return -1; }
int64_t vkDestroyRenderPass(void) { return -1; }
int64_t vkDestroySampler(void) { return -1; }
int64_t vkDestroySemaphore(void) { return -1; }
int64_t vkDestroyShaderModule(void) { return -1; }
int64_t vkDestroySurfaceKHR(void) { return -1; }
int64_t vkDestroySwapchainKHR(void) { return -1; }
int64_t vkDeviceWaitIdle(void) { return -1; }
int64_t vkEndCommandBuffer(void) { return -1; }
int64_t vkEnumeratePhysicalDevices(void) { return -1; }
int64_t vkFreeCommandBuffers(void) { return -1; }
int64_t vkFreeMemory(void) { return -1; }
int64_t vkGetBufferMemoryRequirements(void) { return -1; }
int64_t vkGetDeviceQueue(void) { return -1; }
int64_t vkGetImageMemoryRequirements(void) { return -1; }
int64_t vkGetInstanceProcAddr(void) { return -1; }
int64_t vkGetPhysicalDeviceFeatures(void) { return -1; }
int64_t vkGetPhysicalDeviceMemoryProperties(void) { return -1; }
int64_t vkGetPhysicalDeviceProperties(void) { return -1; }
int64_t vkGetPhysicalDeviceQueueFamilyProperties(void) { return -1; }
int64_t vkGetPhysicalDeviceSurfaceCapabilitiesKHR(void) { return -1; }
int64_t vkGetPhysicalDeviceSurfaceFormatsKHR(void) { return -1; }
int64_t vkGetPhysicalDeviceSurfaceSupportKHR(void) { return -1; }
int64_t vkGetPipelineCacheData(void) { return -1; }
int64_t vkGetQueryPoolResults(void) { return -1; }
int64_t vkGetSwapchainImagesKHR(void) { return -1; }
int64_t vkMapMemory(void) { return -1; }
int64_t vkQueuePresentKHR(void) { return -1; }
int64_t vkQueueSubmit(void) { return -1; }
int64_t vkQueueWaitIdle(void) { return -1; }
int64_t vkResetCommandBuffer(void) { return -1; }
int64_t vkResetDescriptorPool(void) { return -1; }
int64_t vkResetFences(void) { return -1; }
int64_t vkUnmapMemory(void) { return -1; }
int64_t vkUpdateDescriptorSets(void) { return -1; }
int64_t vkWaitForFences(void) { return -1; }
