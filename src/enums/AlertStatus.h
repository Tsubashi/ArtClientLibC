#pragma once
//------------------------------------------------------------------------------
// FILE:      AlertStatus.h
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
/// Alert Status
/// =====================
/// Describes if the ship is on alert
/// - 0x00	normal
/// - 0x01	red alert
/// 
////////////////////////////////////////////////////////////////////////////////
typedef enum {
    NORMAL = 0
  , RED_ALERT
} AlertStatus;
} // namespace