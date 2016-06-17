#pragma once
//-----------------------------------------------------------------------------
// FILE:      ShipSystem.h
// COPYRIGHT: Copyright (c) 2016 Tsubashi
//           
// Distributed under The MIT License (MIT)
//
//-----------------------------------------------------------------------------

//----- Included files --------------------------------------------------------
// 1. Standard library headers
// 2. External library headers
// 3. Shared code headers
// 4. Non-shared code headers
///////////////////////////////////////////////////////////////////////////////
namespace enum {

typedef enum {
  BEAMS = 0
  TORPEDOES = 1
  SENSORS = 2
  MANEUVERING = 3
  IMPULSE = 4
  WARPJUMP_DRIVE = 5
  FORE_SHIELDS = 6
  AFT_SHIELDS = 7
} SHIP_SYSTEM;

} // namespace

