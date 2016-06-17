#pragma once
//-----------------------------------------------------------------------------
// FILE:      OrdnanceType.h
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
  HOMING_MISSILE = 0
  NUKE = 1
  MINE = 2
  EMP = 3
} ORDNANCE_TYPE;
#endif


#if PROTO_VERSION >= 10500
typedef enum {
  HOMING_MISSILE = 0
  NUKE = 1
  MINE = 2
  EMP = 3
  PLASMA_SHOCK = 4
} ORDNANCE_TYPE;
#endif


} // namespace

