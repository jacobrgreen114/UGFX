
#pragma once

#include "SharperC.hpp"

enum class GraphicsApi {
  Vulkan,
  // DirectX,
  // Metal,
  // OpenGL,
};

class IPhysicalAdapter;

class IGraphicsContext {
 public:
  virtual ~IGraphicsContext() = default;

  virtual Pointer<IEnumerable<Pointer<IPhysicalAdapter>>> GetPhysicalAdapters()
      const = 0;

  static Pointer<IGraphicsContext> Create(GraphicsApi api);
};

class IPhysicalAdapter {};

class IDeviceContext {};
