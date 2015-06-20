#pragma once
//------------------------------------------------------------------------------
// FILE:      AllShipSettingsPacket.h
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
namespace packets {
//----- Constants / Enumerations -----------------------------------------------
//----- Structs / Classes ------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////
/// AllShipSettingsPacket
/// =====================
/// Type: 0xf754c8fe:0x0f [from server]
/// Provides the list of available player ships.
/// 
/// Payload
/// --------
/// Subtype (int)
///   Always 0x0f for this packet type.
/// Ships (array)
///   A list of the eight available player ships. Each ship is structured as follows:
///   - Drive type (int, enumeration)
///       Whether the ship has warp or jump drive
///   - Ship type (int)
///       ID from vesselData.xml
///   - Unknown (int) (v2.0 or later)
///       Only 0x01 has been observed thus far.
///   - Name (string)
///       The name of the ship
/// 
////////////////////////////////////////////////////////////////////////////////
struct AllShipSettingsPacket {
  
}
} // namespace