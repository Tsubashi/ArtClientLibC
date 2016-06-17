#pragma once
//-----------------------------------------------------------------------------
// FILE:      TubeStatus.h
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
  UNLOADED = 0
  LOADED = 1
  LOADING = 2
  UNLOADING = 3
} TUBE_STATUS;

} // namespace

