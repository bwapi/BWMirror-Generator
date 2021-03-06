/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bwapi_Game */

#ifndef _Included_bwapi_Game
#define _Included_bwapi_Game
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bwapi_Game
 * Method:    getForces_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getForces_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getPlayers_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getPlayers_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getAllUnits_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getAllUnits_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getMinerals_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getMinerals_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getGeysers_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getGeysers_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getNeutralUnits_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getNeutralUnits_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getStaticMinerals_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getStaticMinerals_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getStaticGeysers_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getStaticGeysers_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getStaticNeutralUnits_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getStaticNeutralUnits_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getBullets_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getBullets_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getNukeDots_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getNukeDots_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getForce_native
 * Signature: (JI)Lbwapi/Force;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getForce_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getPlayer_native
 * Signature: (JI)Lbwapi/Player;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getPlayer_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getUnit_native
 * Signature: (JI)Lbwapi/Unit;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getUnit_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    indexToUnit_native
 * Signature: (JI)Lbwapi/Unit;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_indexToUnit_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getRegion_native
 * Signature: (JI)Lbwapi/Region;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getRegion_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getGameType_native
 * Signature: (J)Lbwapi/GameType;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getGameType_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getLatency_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getLatency_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getFrameCount_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getFrameCount_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getFPS_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getFPS_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getAverageFPS_native
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_bwapi_Game_getAverageFPS_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getMousePosition_native
 * Signature: (J)Lbwapi/Position;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getMousePosition_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getMouseState_native
 * Signature: (JLbwapi/MouseButton;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_getMouseState_1native__JLbwapi_MouseButton_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getMouseState_native
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_getMouseState_1native__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getKeyState_native
 * Signature: (JLbwapi/Key;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_getKeyState_1native__JLbwapi_Key_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getKeyState_native
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_getKeyState_1native__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getScreenPosition_native
 * Signature: (J)Lbwapi/Position;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getScreenPosition_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setScreenPosition_native
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setScreenPosition_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    setScreenPosition_native
 * Signature: (JLbwapi/Position;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setScreenPosition_1native__JLbwapi_Position_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    pingMinimap_native
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_pingMinimap_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    pingMinimap_native
 * Signature: (JLbwapi/Position;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_pingMinimap_1native__JLbwapi_Position_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    isFlagEnabled_native
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isFlagEnabled_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    enableFlag_native
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_enableFlag_1native
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getUnitsOnTile_native
 * Signature: (JII)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getUnitsOnTile_1native
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    getUnitsInRectangle_native
 * Signature: (JIIII)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getUnitsInRectangle_1native__JIIII
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    getUnitsInRectangle_native
 * Signature: (JLbwapi/Position;Lbwapi/Position;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getUnitsInRectangle_1native__JLbwapi_Position_2Lbwapi_Position_2
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getUnitsInRadius_native
 * Signature: (JLbwapi/Position;I)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getUnitsInRadius_1native
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     bwapi_Game
 * Method:    getLastError_native
 * Signature: (J)Lbwapi/Error;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getLastError_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setLastError_native
 * Signature: (JLbwapi/Error;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setLastError_1native
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    mapWidth_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_mapWidth_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    mapHeight_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_mapHeight_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    mapFileName_native
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bwapi_Game_mapFileName_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    mapPathName_native
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bwapi_Game_mapPathName_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    mapName_native
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bwapi_Game_mapName_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    mapHash_native
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bwapi_Game_mapHash_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isWalkable_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isWalkable_1native
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    isBuildable_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isBuildable_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    isBuildable_native
 * Signature: (JIIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isBuildable_1native__JIIZ
  (JNIEnv *, jobject, jlong, jint, jint, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    isBuildable_native
 * Signature: (JLbwapi/TilePosition;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isBuildable_1native__JLbwapi_TilePosition_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    isBuildable_native
 * Signature: (JLbwapi/TilePosition;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isBuildable_1native__JLbwapi_TilePosition_2Z
  (JNIEnv *, jobject, jlong, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    isVisible_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isVisible_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    isVisible_native
 * Signature: (JLbwapi/TilePosition;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isVisible_1native__JLbwapi_TilePosition_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    isExplored_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isExplored_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    isExplored_native
 * Signature: (JLbwapi/TilePosition;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isExplored_1native__JLbwapi_TilePosition_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasCreep_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasCreep_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    hasCreep_native
 * Signature: (JLbwapi/TilePosition;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasCreep_1native__JLbwapi_TilePosition_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JIILbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JIILbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JLbwapi/TilePosition;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JLbwapi_TilePosition_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JLbwapi/TilePosition;Lbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JLbwapi_TilePosition_2Lbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JIIII
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JIIIILbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JIIIILbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JLbwapi/TilePosition;II)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JLbwapi_TilePosition_2II
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    hasPower_native
 * Signature: (JLbwapi/TilePosition;IILbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPower_1native__JLbwapi_TilePosition_2IILbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jobject, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPowerPrecise_native
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPowerPrecise_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    hasPowerPrecise_native
 * Signature: (JIILbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPowerPrecise_1native__JIILbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPowerPrecise_native
 * Signature: (JLbwapi/Position;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPowerPrecise_1native__JLbwapi_Position_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    hasPowerPrecise_native
 * Signature: (JLbwapi/Position;Lbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPowerPrecise_1native__JLbwapi_Position_2Lbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    canBuildHere_native
 * Signature: (JLbwapi/Unit;Lbwapi/TilePosition;Lbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_canBuildHere_1native__JLbwapi_Unit_2Lbwapi_TilePosition_2Lbwapi_UnitType_2
  (JNIEnv *, jobject, jlong, jobject, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    canBuildHere_native
 * Signature: (JLbwapi/Unit;Lbwapi/TilePosition;Lbwapi/UnitType;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_canBuildHere_1native__JLbwapi_Unit_2Lbwapi_TilePosition_2Lbwapi_UnitType_2Z
  (JNIEnv *, jobject, jlong, jobject, jobject, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    canMake_native
 * Signature: (JLbwapi/Unit;Lbwapi/UnitType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_canMake_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    canResearch_native
 * Signature: (JLbwapi/Unit;Lbwapi/TechType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_canResearch_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    canUpgrade_native
 * Signature: (JLbwapi/Unit;Lbwapi/UpgradeType;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_canUpgrade_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getStartLocations_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getStartLocations_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    printf_native
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_printf_1native
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     bwapi_Game
 * Method:    sendText_native
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_sendText_1native
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     bwapi_Game
 * Method:    sendTextEx_native
 * Signature: (JZLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_sendTextEx_1native
  (JNIEnv *, jobject, jlong, jboolean, jstring);

/*
 * Class:     bwapi_Game
 * Method:    changeRace_native
 * Signature: (JLbwapi/Race;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_changeRace_1native
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    isInGame_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isInGame_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isMultiplayer_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isMultiplayer_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isBattleNet_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isBattleNet_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isPaused_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isPaused_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isReplay_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isReplay_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    startGame_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_startGame_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    pauseGame_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_pauseGame_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    resumeGame_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_resumeGame_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    leaveGame_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_leaveGame_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    restartGame_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_restartGame_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setLocalSpeed_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setLocalSpeed_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setLocalSpeed_native
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setLocalSpeed_1native__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    issueCommand_native
 * Signature: (JLjava/util/List;Lbwapi/UnitCommand;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_issueCommand_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getSelectedUnits_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getSelectedUnits_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    self_native
 * Signature: (J)Lbwapi/Player;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_self_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    enemy_native
 * Signature: (J)Lbwapi/Player;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_enemy_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    neutral_native
 * Signature: (J)Lbwapi/Player;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_neutral_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    allies_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_allies_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    enemies_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_enemies_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    observers_native
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_observers_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setTextSize_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setTextSize_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setTextSize_native
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setTextSize_1native__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    drawText_native
 * Signature: (JIIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawText_1native
  (JNIEnv *, jobject, jlong, jint, jint, jint, jstring);

/*
 * Class:     bwapi_Game
 * Method:    drawTextMap_native
 * Signature: (JIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTextMap_1native
  (JNIEnv *, jobject, jlong, jint, jint, jstring);

/*
 * Class:     bwapi_Game
 * Method:    drawTextMouse_native
 * Signature: (JIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTextMouse_1native
  (JNIEnv *, jobject, jlong, jint, jint, jstring);

/*
 * Class:     bwapi_Game
 * Method:    drawTextScreen_native
 * Signature: (JIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTextScreen_1native
  (JNIEnv *, jobject, jlong, jint, jint, jstring);

/*
 * Class:     bwapi_Game
 * Method:    drawBox_native
 * Signature: (JIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBox_1native__JIIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawBox_native
 * Signature: (JIIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBox_1native__JIIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawBoxMap_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBoxMap_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawBoxMap_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBoxMap_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawBoxMouse_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBoxMouse_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawBoxMouse_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBoxMouse_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawBoxScreen_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBoxScreen_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawBoxScreen_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawBoxScreen_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangle_native
 * Signature: (JIIIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangle_1native__JIIIIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangle_native
 * Signature: (JIIIIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangle_1native__JIIIIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangleMap_native
 * Signature: (JIIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangleMap_1native__JIIIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangleMap_native
 * Signature: (JIIIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangleMap_1native__JIIIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangleMouse_native
 * Signature: (JIIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangleMouse_1native__JIIIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangleMouse_native
 * Signature: (JIIIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangleMouse_1native__JIIIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangleScreen_native
 * Signature: (JIIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangleScreen_1native__JIIIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawTriangleScreen_native
 * Signature: (JIIIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawTriangleScreen_1native__JIIIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawCircle_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircle_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawCircle_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircle_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawCircleMap_native
 * Signature: (JIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircleMap_1native__JIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawCircleMap_native
 * Signature: (JIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircleMap_1native__JIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawCircleMouse_native
 * Signature: (JIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircleMouse_1native__JIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawCircleMouse_native
 * Signature: (JIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircleMouse_1native__JIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawCircleScreen_native
 * Signature: (JIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircleScreen_1native__JIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawCircleScreen_native
 * Signature: (JIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawCircleScreen_1native__JIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipse_native
 * Signature: (JIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipse_1native__JIIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipse_native
 * Signature: (JIIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipse_1native__JIIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipseMap_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipseMap_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipseMap_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipseMap_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipseMouse_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipseMouse_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipseMouse_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipseMouse_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipseScreen_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipseScreen_1native__JIIIILbwapi_Color_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawEllipseScreen_native
 * Signature: (JIIIILbwapi/Color;Z)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawEllipseScreen_1native__JIIIILbwapi_Color_2Z
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    drawDot_native
 * Signature: (JIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawDot_1native
  (JNIEnv *, jobject, jlong, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawDotMap_native
 * Signature: (JIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawDotMap_1native
  (JNIEnv *, jobject, jlong, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawDotMouse_native
 * Signature: (JIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawDotMouse_1native
  (JNIEnv *, jobject, jlong, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawDotScreen_native
 * Signature: (JIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawDotScreen_1native
  (JNIEnv *, jobject, jlong, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawLine_native
 * Signature: (JIIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawLine_1native
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawLineMap_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawLineMap_1native
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawLineMouse_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawLineMouse_1native
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    drawLineScreen_native
 * Signature: (JIIIILbwapi/Color;)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_drawLineScreen_1native
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getScreenBuffer_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_getScreenBuffer_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getLatencyFrames_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getLatencyFrames_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getLatencyTime_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getLatencyTime_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getRemainingLatencyFrames_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getRemainingLatencyFrames_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getRemainingLatencyTime_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getRemainingLatencyTime_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getRevision_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getRevision_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isDebug_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isDebug_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    isLatComEnabled_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_isLatComEnabled_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setLatCom_native
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setLatCom_1native
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    getReplayFrameCount_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getReplayFrameCount_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setGUI_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setGUI_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setGUI_native
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setGUI_1native__JZ
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    getAPM_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getAPM_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    getAPM_native
 * Signature: (JZ)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getAPM_1native__JZ
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    setMap_native
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setMap_1native
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     bwapi_Game
 * Method:    setFrameSkip_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setFrameSkip_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setFrameSkip_native
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setFrameSkip_1native__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    hasPath_native
 * Signature: (JLbwapi/Position;Lbwapi/Position;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_hasPath_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     bwapi_Game
 * Method:    setAlliance_native
 * Signature: (JLbwapi/Player;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setAlliance_1native__JLbwapi_Player_2Z
  (JNIEnv *, jobject, jlong, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    setAlliance_native
 * Signature: (JLbwapi/Player;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setAlliance_1native__JLbwapi_Player_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    setAlliance_native
 * Signature: (JLbwapi/Player;ZZ)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setAlliance_1native__JLbwapi_Player_2ZZ
  (JNIEnv *, jobject, jlong, jobject, jboolean, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    setVision_native
 * Signature: (JLbwapi/Player;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setVision_1native__JLbwapi_Player_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    setVision_native
 * Signature: (JLbwapi/Player;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setVision_1native__JLbwapi_Player_2Z
  (JNIEnv *, jobject, jlong, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    setCommandOptimizationLevel_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setCommandOptimizationLevel_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setCommandOptimizationLevel_native
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_bwapi_Game_setCommandOptimizationLevel_1native__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     bwapi_Game
 * Method:    getRegionAt_native
 * Signature: (JII)Lbwapi/Region;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getRegionAt_1native__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     bwapi_Game
 * Method:    getRegionAt_native
 * Signature: (JLbwapi/Position;)Lbwapi/Region;
 */
JNIEXPORT jobject JNICALL Java_bwapi_Game_getRegionAt_1native__JLbwapi_Position_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    getLastEventTime_native
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bwapi_Game_getLastEventTime_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setReplayVision_native
 * Signature: (JLbwapi/Player;)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setReplayVision_1native__JLbwapi_Player_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     bwapi_Game
 * Method:    setReplayVision_native
 * Signature: (JLbwapi/Player;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setReplayVision_1native__JLbwapi_Player_2Z
  (JNIEnv *, jobject, jlong, jobject, jboolean);

/*
 * Class:     bwapi_Game
 * Method:    setRevealAll_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setRevealAll_1native__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bwapi_Game
 * Method:    setRevealAll_native
 * Signature: (JZ)Z
 */
JNIEXPORT jboolean JNICALL Java_bwapi_Game_setRevealAll_1native__JZ
  (JNIEnv *, jobject, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
