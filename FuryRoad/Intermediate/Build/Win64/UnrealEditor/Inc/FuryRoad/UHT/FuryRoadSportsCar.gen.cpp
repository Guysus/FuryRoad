// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/FuryRoadSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuryRoadSportsCar() {}
// Cross Module References
	FURYROAD_API UClass* Z_Construct_UClass_AFuryRoadPawn();
	FURYROAD_API UClass* Z_Construct_UClass_AFuryRoadSportsCar();
	FURYROAD_API UClass* Z_Construct_UClass_AFuryRoadSportsCar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void AFuryRoadSportsCar::StaticRegisterNativesAFuryRoadSportsCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFuryRoadSportsCar);
	UClass* Z_Construct_UClass_AFuryRoadSportsCar_NoRegister()
	{
		return AFuryRoadSportsCar::StaticClass();
	}
	struct Z_Construct_UClass_AFuryRoadSportsCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFuryRoadSportsCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFuryRoadPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFuryRoadSportsCar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFuryRoadSportsCar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FuryRoadSportsCar.h" },
		{ "ModuleRelativePath", "FuryRoadSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFuryRoadSportsCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFuryRoadSportsCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFuryRoadSportsCar_Statics::ClassParams = {
		&AFuryRoadSportsCar::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFuryRoadSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AFuryRoadSportsCar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFuryRoadSportsCar()
	{
		if (!Z_Registration_Info_UClass_AFuryRoadSportsCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFuryRoadSportsCar.OuterSingleton, Z_Construct_UClass_AFuryRoadSportsCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFuryRoadSportsCar.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<AFuryRoadSportsCar>()
	{
		return AFuryRoadSportsCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFuryRoadSportsCar);
	AFuryRoadSportsCar::~AFuryRoadSportsCar() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadSportsCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadSportsCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFuryRoadSportsCar, AFuryRoadSportsCar::StaticClass, TEXT("AFuryRoadSportsCar"), &Z_Registration_Info_UClass_AFuryRoadSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFuryRoadSportsCar), 28661233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadSportsCar_h_4124915491(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadSportsCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
