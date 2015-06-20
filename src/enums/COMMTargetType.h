#pragma once
//------------------------------------------------------------------------------
// FILE:      COMMTargetType.h
// COPYRIGHT: Copyright (c) 2015 Tsubashi
//           
// Distributed under The MIT License (MIT)
//
//------------------------------------------------------------------------------

//----- Included files ---------------------------------------------------------
// 1. Standard library headers
// 2. External library headers
// 3. Shared code headers
// 4. Non-shared code headers
//----- Defines ----------------------------------------------------------------
//----- Forward declarations ---------------------------------------------------
//----- Namespace declaration --------------------------------------------------
namespace enums {
//----- Constants / Enumerations -----------------------------------------------
//----- Structs / Classes ------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////
/// COMM Target Type
/// =====================
/// Describes the current beam frequency
/// - 0x00	A
/// - 0x01	B
/// - 0x02	C
/// - 0x03	D
/// - 0x04	E
/// 
////////////////////////////////////////////////////////////////////////////////
typedef enum {
    A = 0
  , B
  , C
  , D
  , E
} BeamFrequency;
} // namespace