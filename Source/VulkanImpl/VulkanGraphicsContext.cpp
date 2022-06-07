
#include <vector>

#include "VulkanTypes.hpp"

std::vector<const char*> instanceLayers = {"VK_LAYER_KHRONOS_validation"};

std::vector<const char*> instanceExtensions = {
    VK_KHR_SURFACE_EXTENSION_NAME, VK_KHR_WIN32_SURFACE_EXTENSION_NAME};

auto createInstance() {
  auto appInfo = vk::ApplicationInfo({}, {}, {}, {}, VK_API_VERSION_1_3);

  auto createInfo = vk::InstanceCreateInfo(
      {}, &appInfo, instanceLayers.size(), instanceLayers.data(),
      instanceExtensions.size(), instanceExtensions.data());

  auto instance = vk::createInstanceUnique(createInfo);

  return instance;
}

VulkanGraphicsContext::VulkanGraphicsContext() : _instance(createInstance()) {}

Pointer<IEnumerable<Pointer<IPhysicalAdapter>>>
VulkanGraphicsContext::GetPhysicalAdapters() const {
  throw 0;
}