#include "Ugfx/Interfaces.hpp"

#ifdef OS_WINDOWS
#define VK_USE_PLATFORM_WIN32_KHR
#elif OS_LINUX
#define VK_USE_PLATFORM_WAYLAND_KHR
#elif OS_MACOS
#define VK_USE_PLATFORM_MACOS_MVK
#endif

#include <vulkan/vulkan.hpp>

class VulkanGraphicsContext : public IGraphicsContext {
 public:
  const vk::UniqueHandle<vk::Instance, vk::DispatchLoaderStatic> _instance;

  Pointer<IEnumerable<Pointer<IPhysicalAdapter>>> GetPhysicalAdapters()
      const override;

  VulkanGraphicsContext();
  ~VulkanGraphicsContext() override = default;
};