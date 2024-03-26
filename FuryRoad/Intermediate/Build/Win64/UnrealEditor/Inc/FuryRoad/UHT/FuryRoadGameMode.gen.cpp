// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/FuryRoadGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuryRoadGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FURYROAD_API UClass* Z_Construct_UClass_AFuryRoadGameMode();
	FURYROAD_API UClass* Z_Construct_UClass_AFuryRoadGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void AFuryRoadGameMode::StaticRegisterNativesAFuryRoadGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFuryRoadGameMode);
	UClass* Z_Construct_UClass_AFuryRoadGameMode_NoRegister()
	{
		return AFuryRoadGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFuryRoadGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFuryRoadGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFuryRoadGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFuryRoadGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FuryRoadGameMode.h" },
		{ "ModuleRelativePath", "FuryRoadGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFuryRoadGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFuryRoadGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFuryRoadGameMode_Statics::ClassParams = {
		&AFuryRoadGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFuryRoadGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFuryRoadGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFuryRoadGameMode()
	{
		if (!Z_Registration_Info_UClass_AFuryRoadGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFuryRoadGameMode.OuterSingleton, Z_Construct_UClass_AFuryRoadGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFuryRoadGameMode.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<AFuryRoadGameMode>()
	{
		return AFuryRoadGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFuryRoadGameMode);
	AFuryRoadGameMode::~AFuryRoadGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFuryRoadGameMode, AFuryRoadGameMode::StaticClass, TEXT("AFuryRoadGameMode"), &Z_Registration_Info_UClass_AFuryRoadGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFuryRoadGameMode), 549173504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadGameMode_h_3474141372(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
