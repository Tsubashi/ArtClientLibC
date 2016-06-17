#pragma once
//-----------------------------------------------------------------------------
// FILE:      ObjectType.h
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

// If unspecified, use the latest version
#if !defined PROTO_VERSION
#define PROTO_VERSION 99999
#endif


#if PROTO_VERSION < 10500
typedef enum {
  PLAYER_SHIP = 1
  WEAPONS_CONSOLE = 2
  ENGINEERING_CONSOLE = 3
  NPC_SHIP = 4
  BASE = 5
  MINE = 6
  ANOMALY = 7
  NEBULA = 9
  TORPEDO = 10
  BLACK_HOLE = 11
  ASTEROID = 12
  GENERIC_MESH = 13
  CREATURE = 14
  WHALE = 15
  DRONE = 16
} OBJECT_TYPE;
#endif


#if PROTO_VERSION >= 10500
typedef enum {
  PLAYER_SHIP = 1
  WEAPONS_CONSOLE = 2
  ENGINEERING_CONSOLE = 3
  PLAYER_SHIP_UPGRADES = 4
  NPC_SHIP = 5
  BASE = 6
  MINE = 7
  ANOMALY = 8
  NEBULA = 10
  TORPEDO = 11
  BLACK_HOLE = 12
  ASTEROID = 13
  GENERIC_MESH = 14
  CREATURE = 15
  DRONE = 16
} OBJECT_TYPE;
#endif


} // namespace

