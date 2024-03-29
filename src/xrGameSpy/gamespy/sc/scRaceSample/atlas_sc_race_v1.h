﻿///////////////////////////////////////////////////////////////////////////////
// GameSpy ATLAS Competition System Header File
//
// NOTE: This is an auto-generated file, do not edit this file directly.
///////////////////////////////////////////////////////////////////////////////

#ifndef _ATLAS_SC_RACE_V1_H_
#define _ATLAS_SC_RACE_V1_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int ATLAS_GET_KEY(char* keyName);
extern char* ATLAS_GET_KEY_NAME(int keyId);
extern int ATLAS_GET_STAT(char* statName);
extern char* ATLAS_GET_STAT_NAME(int statId);

#define ATLAS_RULE_SET_VERSION 1

// KEYS
// Use these key ID's to report match data for your game.

#define RACE_TIME 1  // [TYPE: int] [DESC: Player's race time for the match (milliseconds).]

///////////////////////////////////////////////////////////////////////////////

// STATS
// Use these stat ID's to query aggregate statistics for your game.

#define CAREER_WINS 1  // [TYPE: int]
#define CAREER_LOSSES 2  // [TYPE: int]
#define BEST_RACE_TIME 3  // [TYPE: int] [DESC: Player's career best race time (milliseconds).]
#define WORST_RACE_TIME 4  // [TYPE: int] [DESC: Player's career worst race time (milliseconds).]
#define TOTAL_MATCHES 5  // [TYPE: int]
#define AVERAGE_RACE_TIME 6  // [TYPE: float] [DESC: Player's average race time per match (milliseconds/match).]
#define CURRENT_WIN_STREAK 7  // [TYPE: int]
#define CURRENT_LOSS_STREAK 8  // [TYPE: int]
#define TOTAL_RACE_TIME 9  // [TYPE: int] [DESC: Player's total race time for all matches (milliseconds).]
#define CAREER_DISCONNECTS 11  // [TYPE: int] [DESC: Player's total number of times disconnected.]
#define DISCONNECT_RATE 12  // [TYPE: float] [DESC: Player's disconnect rate (disconnects/matches).]
#define CAREER_DRAWS 13  // [TYPE: int] [DESC: Player's total number of draws (tied matches).]
#define CURRENT_DRAW_STREAK 14  // [TYPE: int]
#define CAREER_LONGEST_WIN_STREAK 15  // [TYPE: int]
#define CAREER_LONGEST_LOSS_STREAK 16  // [TYPE: int]
#define CAREER_LONGEST_DRAW_STREAK 17  // [TYPE: int]
#define TOTAL_COMPLETE_MATCHES 18  // [TYPE: int] [DESC: Total number of matches where the game went to completion (all win/loss/draw results).]
#define RICHARD_TEST1 19  // [TYPE: int]
#define RICHARD_TEST2 20  // [TYPE: int]
#define RICHARD_TEST3 21  // [TYPE: int]


#ifdef __cplusplus
}
#endif

#endif // _ATLAS_SC_RACE_V1_H_
