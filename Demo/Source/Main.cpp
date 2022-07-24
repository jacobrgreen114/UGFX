

// Copyright (c) 2022. Jacob R. Green
// All Rights Reserved.

#include "Ugfx.hpp"

int main(int argc, const char** argv) {
  auto apiContext = IGraphicsContext::Create(GraphicsApi::Vulkan);

  auto physicalDevices = apiContext->GetPhysicalAdapters();
  auto physicalDevice = physicalDevices->First();

  auto deviceCreateInfo = IDeviceContext::CreateInfo();
  auto deviceContext = IDeviceContext::Create(physicalDevice, deviceCreateInfo);

  return 0;
}