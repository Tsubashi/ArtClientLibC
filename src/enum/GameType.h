#pragma once
//-----------------------------------------------------------------------------
// FILE:      GameType.h
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
  SIEGE = 0
  SINGLE_FRONT = 1
  DOUBLE_FRONT = 2
} GAME_TYPE;
#endif


#if PROTO_VERSION >= 20100
typedef enum {
  SIEGE = 0
  SINGLE_FRONT = 1
  DOUBLE_FRONT = 2
  DEEP_STRIKE = 3
  PEACETIME = 4
  BORDER_WAR = 5
} GAME_TYPE;
#endif


} // namespace

