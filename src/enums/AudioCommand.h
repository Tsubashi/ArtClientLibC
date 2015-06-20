#pragma once
//------------------------------------------------------------------------------
// FILE:      AudioCommand.h
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
/// Audio Command
/// =====================
/// Describes something, I am sure.
/// TODO: Write a better description
/// - 0x00	play
/// - 0x01	dismiss
/// 
////////////////////////////////////////////////////////////////////////////////
typedef enum {
    PLAY = 0
  , DISMISS
} AudioCommand;
} // namespace