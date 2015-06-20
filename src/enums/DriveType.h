#pragma once
//------------------------------------------------------------------------------
// FILE:      DriveType.h
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
/// Drive Type
/// =====================
/// Describes whether a ship has a jump or warp drive
/// - 0x00	warp
/// - 0x01	jump
/// 
////////////////////////////////////////////////////////////////////////////////
typedef enum {
    WARP = 0
  , JUMP
} DriveType;
} // namespace