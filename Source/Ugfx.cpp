

#include "Ugfx.hpp"

#include <exception>
#include <memory>

#include "Ugfx/Interfaces.hpp"
#include "VulkanImpl/VulkanTypes.hpp"

Pointer<IGraphicsContext> IGraphicsContext::Create(GraphicsApi api) {
  switch (api) {
    case GraphicsApi::Vulkan:
      return std::make_shared<VulkanGraphicsContext>();

    default:
      throw std::exception("Unknown graphics api");
  }
}