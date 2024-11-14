// Jolt Physics Library (https://github.com/jrouwe/JoltPhysics)
// SPDX-FileCopyrightText: 2021 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

#include <Jolt/Jolt.h>
#include <Jolt/Math/Vec3.h>

JPH_NAMESPACE_BEGIN

struct WaterProperties {
	Vec3 mWaterVelocity{ Vec3::sZero() };
	float buoyancy = 1.0f;
	float linearDrag = 1.0f;
	float angularDrag = 1.0f;
};

JPH_NAMESPACE_END
