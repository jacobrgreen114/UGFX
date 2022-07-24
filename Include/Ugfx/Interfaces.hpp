
// Copyright (c) 2022. Jacob R. Green
// All Rights Reserved.

#pragma once

#include "SharperC.hpp"

enum class GraphicsApi {
  Vulkan,
  // DirectX,
  // Metal,
  // OpenGL,
};

class IPhysicalAdapter;

class IGraphicsContext : public virtual Object {
public:
  virtual ~IGraphicsContext() = default;

  virtual Pointer<IEnumerable<Pointer<IPhysicalAdapter>>>
  GetPhysicalAdapters() const = 0;

  static Pointer<IGraphicsContext> Create(GraphicsApi api);
};

class IPhysicalAdapter : public virtual Object {
public:
  virtual ~IPhysicalAdapter() = default;
};

class IQueue : public virtual Object {};

class IDeviceContext : public virtual Object {
public:
  struct CreateInfo;

  virtual ~IDeviceContext() = default;

  static Pointer<IDeviceContext> Create(const IPhysicalAdapter* physicalAdapter,
                                        const CreateInfo& createInfo);
};

struct IDeviceContext::CreateInfo {};