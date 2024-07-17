#pragma once
#pragma managed( push, off )
#include "MRMesh/MRMeshFwd.h"
#pragma managed( pop )

#define MR_DOTNET_NAMESPACE_BEGIN namespace MR { namespace DotNet {
#define MR_DOTNET_NAMESPACE_END }}

using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Collections::ObjectModel;

MR_DOTNET_NAMESPACE_BEGIN

using VertId = int;
using EdgeId = int;
using FaceId = int;

public value struct ThreeVertIds
{
    VertId v0;
    VertId v1;
    VertId v2;
    
    ThreeVertIds( VertId v0, VertId v1, VertId v2 )
    {
        this->v0 = v0;
        this->v1 = v1;
        this->v2 = v2;
    }
};

using Triangulation = List<ThreeVertIds>;
using TriangulationReadOnly = ReadOnlyCollection<ThreeVertIds>;

using EdgePath = List<EdgeId>;
using EdgePathReadOnly = ReadOnlyCollection<EdgeId>;

ref class BitSetReadOnly;
ref class BitSet;

using VertBitSetReadOnly = BitSetReadOnly;
using FaceBitSetReadOnly = BitSetReadOnly;

using VertBitSet = BitSet;
using FaceBitSet = BitSet;

ref class Vector3f;
ref class Matrix3f;
ref class AffineXf3f;
using VertCoords = List<Vector3f^>;
using VertCoordsReadOnly = ReadOnlyCollection<Vector3f^>;

ref class Mesh;

MR_DOTNET_NAMESPACE_END