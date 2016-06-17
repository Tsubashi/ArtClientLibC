#pragma once
//-----------------------------------------------------------------------------
// FILE:      ConsoleType.h
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


#if PROTO_VERSION < 20100
typedef enum {
  MAIN_SCREEN = 0
  HELM = 1
  WEAPONS = 2
  ENGINEERING = 3
  SCIENCE = 4
  COMMUNICATIONS = 5
  OBSERVER = 6
  CAPTAINS_MAP = 7
  GAME_MASTER = 8
} CONSOLE_TYPE;
#endif


#if PROTO_VERSION >= 20100
#if PROTO_VERSION < 20300
typedef enum {
  MAIN_SCREEN = 0
  HELM = 1
  WEAPONS = 2
  ENGINEERING = 3
  SCIENCE = 4
  COMMUNICATIONS = 5
  DATA = 6
  OBSERVER = 7
  CAPTAINS_MAP = 8
  GAME_MASTER = 9
} CONSOLE_TYPE;
#endif
#endif


#if PROTO_VERSION >= 20300
typedef enum {
  MAIN_SCREEN = 0
  HELM = 1
  WEAPONS = 2
  ENGINEERING = 3
  SCIENCE = 4
  COMMUNICATIONS = 5
  FIGHTER = 6
  DATA = 7
  OBSERVER = 8
  CAPTAINS_MAP = 9
  GAME_MASTER = 10
} CONSOLE_TYPE;
#endif


} // namespace

