#pragma once

#include "MRMesh/MRMeshFwd.h"
#include "MRMesh/MRVisualObject.h"

namespace MR
{

// This controls which dimensions are shown on top of an object as arrows.
enum class MRMESH_CLASS DimensionsVisualizePropertyType
{
    radius,
    angle,
    length,
    _count [[maybe_unused]],
};
template <> struct IsVisualizeMaskEnum<DimensionsVisualizePropertyType> : std::true_type {};

}
