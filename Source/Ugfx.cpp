

// Copyright (c) 2022. Jacob R. Green
// All Rights Reserved.

#include "Ugfx.hpp"

#include <exception>
#include <memory>

#include "Ugfx/Interfaces.hpp"
#include "VulkanImpl/VulkanTypes.hpp"

Pointer<IGraphicsContext> IGraphicsContext::Create(GraphicsApi api) {
  switch (api) {
  case GraphicsApi::Vulkan:
    return new VulkanGraphicsContext();

  default:
    throw std::exception("Unknown graphics api");
  }
}

Pointer<IDeviceContext>
IDeviceContext::Create(const IPhysicalAdapter* physicalAdapter,
                       const IDeviceContext::CreateInfo& createInfo) {
  return Pointer<IDeviceContext>(nullptr);
}
