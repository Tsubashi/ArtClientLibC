#pragma once
//-----------------------------------------------------------------------------
// FILE:      COMMMessage.h
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
  YES = 0
  NO = 1
  HELP = 2
  GREETINGS = 3
  DIE = 4
  WERE_LEAVING_THE_SECTOR_BYE = 5
  READY_TO_GO = 6
  PLEASE_FOLLOW_US = 7
  WELL_FOLLOW_YOU = 8
  WERE_BADLY_DAMAGED = 9
  WERE_HEADED_BACK_TO_THE_STATION = 10
  SORRY_PLEASE_DISREGARD = 11
} MESSAGE_TO_PLAYERS;

typedef enum {
  WILL_YOU_SURRENDER = 0
  TAUNT_1 = 1
  TAUNT_2 = 2
  TAUNT_3 = 3
} MESSAGE_TO_ENEMIES;

typedef enum {
  STAND_BY_FOR_DOCKING = 0
  PLEASE_REPORT_STATUS = 1
  BUILD_HOMING_MISSILES = 2
  BUILD_NUKES = 3
  BUILD_MINES = 4
  BUILD_EMPS = 5
} MESSAGE_TO_STATIONS;

typedef enum {
  REPORT_STATUS = 0
  TURN_TO_HEADING_0 = 1
  TURN_TO_HEADING_90 = 2
  TURN_TO_HEADING_180 = 3
  TURN_TO_HEADING_270 = 4
  TURN_10_DEGREES_TO_PORT = 5
  TURN_10_DEGREES_TO_STARBOARD = 6
  ATTACK_NEAREST_ENEMY = 7
  PROCEED_TO_YOUR_DESTINATION = 8
  GO_DEFEND_TARGET = 9
  TURN_25_DEGREES_TO_PORT = 15
  TURN_25_DEGREES_TO_STARBOARD = 16
} MESSAGE_TO_OTHER_SHIPS;


} // namespace

