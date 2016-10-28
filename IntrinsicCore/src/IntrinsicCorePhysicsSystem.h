// Copyright 2016 Benjamin Glatzel
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

// Forward decls.
namespace physx
{
class PxPhysics;
class PxFoundation;
class PxCooking;
class PxScene;
class PxCpuDispatcher;
}

namespace Intrinsic
{
namespace Core
{
namespace Physics
{
namespace DebugRenderingFlags
{
enum Flags
{
  kEnabled = 0x01
};
}

struct System
{
  static void init();
  static void dispatchSimulation(float p_DeltaT);
  static void syncSimulation();
  static void updatePvdCamera();
  static void renderLineDebugGeometry();

  static void setDebugRenderingFlags(uint32_t p_DebugRenderingFlags);

  static physx::PxPhysics* _pxPhysics;
  static physx::PxFoundation* _pxFoundation;
  static physx::PxCooking* _pxCooking;
  static physx::PxCpuDispatcher* _pxCpuDispatcher;
  static physx::PxScene* _pxScene;
};
}
}
}