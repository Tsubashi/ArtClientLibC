#pragma once
//-----------------------------------------------------------------------------
// FILE:      EliteAbility.h
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
  STEALTH = 1
  LOWVIS = 2
  CLOAK = 4
  HET = 8
  WARP = 16
  TELEPORT = 32
  TRACTOR = 64
  DRONES = 128
  ANTI-MINE = 256
  ANTI-TORP = 512
  SHIELD_DRAIN = 1024
} ELITE_ABILITY;

} // namespace

