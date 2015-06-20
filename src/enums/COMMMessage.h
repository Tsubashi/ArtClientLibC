#pragma once
//------------------------------------------------------------------------------
// FILE:      COMMMessage.h
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
/// COMM Message
/// =====================
/// Describes the a COMM message. Meaning varies depending on the target.
/// To players:
/// - 0x00	Yes.
/// - 0x01	No.
/// - 0x02	Help!
/// - 0x03	Greetings.
/// - 0x04	Die!
/// - 0x05	We're leaving the sector. Bye.
/// - 0x06	Ready to go.
/// - 0x07	Please follow us.
/// - 0x08	We'll follow you.
/// - 0x09	We're badly damaged.
/// - 0x0a	We're headed back to the station.
/// - 0x0b	Sorry, please disregard.
///
/// To Enemies:
/// - 0x00	Will you surrender?
/// - 0x01	Taunt #1 (varies by race)
/// - 0x02	Taunt #2 (varies by race)
/// - 0x03	Taunt #3 (varies by race)
///
/// To Stations:
/// - 0x00	Stand by for docking.
/// - 0x01	Please report status.
/// - 0x02	Build homing missiles
/// - 0x03	Build nukes
/// - 0x04	Build mines
/// - 0x05	Build EMPs
/// 
/// To Other Ships:
/// - 0x00	Report status
/// - 0x01	Turn to heading 0
/// - 0x02	Turn to heading 90
/// - 0x03	Turn to heading 180
/// - 0x04	Turn to heading 270
/// - 0x05	Turn 10 degrees to port
/// - 0x06	Turn 10 degrees to starboard
/// - 0x07	Attack nearest enemy
/// - 0x08	Proceed to your destination
/// - 0x09	Go defend [target]
/// - 0x0a	unused
/// - 0x0b	unused
/// - 0x0c	unused
/// - 0x0d	unused
/// - 0x0e	unused
/// - 0x0f	Turn 25 degrees to port
/// - 0x10	Turn 25 degrees to starboard
///
////////////////////////////////////////////////////////////////////////////////
namespace COMMMessage {
  typedef enum {
      YES = 0
    , NO
    , HELP
    , GREETINGS
    , DIE
    , BYE
    , READY_TO_GO
    , FOLLOW_US
    , WE_FOLLOW_YOU
    , WE_ARE_DAMAGED
    , HEADED_TO_STATION
    , DISREGARD
  } ToPlayers;
  
  typedef enum {
      SURRENDER = 0
    , TAUNT_1
    , TAUNT_2
    , TAUNT_3
  } ToEnemies;
  
  typedef enum {
      DOCKING_REQUEST = 0
    , REPORT_STATUS
    , BUILD_HOMING
    , BUILD_NUKE
    , BUILD_MINE
    , BUILD_EMP
  } ToStations;
  
  typedef enum {
      REPORT_STATUS = 0
    , TURN_TO_ZERO
    , TURN_TO_NINETY
    , TURN_TO_ONE_EIGHTY
    , TURN_TEN_TO_PORT
    , TURN_TEN_TO_STARBOARD
    , ATTACK_NEAREST_ENEMY
    , PROCEED
    , UNUSED_1
    , UNUSED_2
    , UNUSED_3
    , UNUSED_4
    , UNUSED_5
    , TURN_25_TO_PORT
    , TURN_25_TO_STARBOARD
  } ToOtherShips;
} // namespace COMMMessage

} // namespace