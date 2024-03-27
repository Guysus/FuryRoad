// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/FuryRoadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuryRoadWheelRear() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadWheelRear();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadWheelRear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void UFuryRoadWheelRear::StaticRegisterNativesUFuryRoadWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFuryRoadWheelRear);
	UClass* Z_Construct_UClass_UFuryRoadWheelRear_NoRegister()
	{
		return UFuryRoadWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UFuryRoadWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFuryRoadWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFuryRoadWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "FuryRoadWheelRear.h" },
		{ "ModuleRelativePath", "FuryRoadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFuryRoadWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuryRoadWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuryRoadWheelRear_Statics::ClassParams = {
		&UFuryRoadWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuryRoadWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFuryRoadWheelRear()
	{
		if (!Z_Registration_Info_UClass_UFuryRoadWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuryRoadWheelRear.OuterSingleton, Z_Construct_UClass_UFuryRoadWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFuryRoadWheelRear.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<UFuryRoadWheelRear>()
	{
		return UFuryRoadWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuryRoadWheelRear);
	UFuryRoadWheelRear::~UFuryRoadWheelRear() {}
	struct Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFuryRoadWheelRear, UFuryRoadWheelRear::StaticClass, TEXT("UFuryRoadWheelRear"), &Z_Registration_Info_UClass_UFuryRoadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuryRoadWheelRear), 899353512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelRear_h_1919153580(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
