// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyRaceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyRaceManager;
#ifdef FURYROAD_MyRaceManager_generated_h
#error "MyRaceManager.generated.h already included, missing '#pragma once' in MyRaceManager.h"
#endif
#define FURYROAD_MyRaceManager_generated_h

#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_SPARSE_DATA
#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddLap); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_ACCESSORS
#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyRaceManager(); \
	friend struct Z_Construct_UClass_AMyRaceManager_Statics; \
public: \
	DECLARE_CLASS(AMyRaceManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FuryRoad"), NO_API) \
	DECLARE_SERIALIZER(AMyRaceManager)


#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyRaceManager(AMyRaceManager&&); \
	NO_API AMyRaceManager(const AMyRaceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRaceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRaceManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyRaceManager) \
	NO_API virtual ~AMyRaceManager();


#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_9_PROLOG
#define FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_SPARSE_DATA \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_ACCESSORS \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FURYROAD_API UClass* StaticClass<class AMyRaceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
