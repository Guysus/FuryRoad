// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/FuryRoadOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuryRoadOffroadWheelRear() {}
// Cross Module References
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadOffroadWheelRear();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadOffroadWheelRear_NoRegister();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadWheelRear();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void UFuryRoadOffroadWheelRear::StaticRegisterNativesUFuryRoadOffroadWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFuryRoadOffroadWheelRear);
	UClass* Z_Construct_UClass_UFuryRoadOffroadWheelRear_NoRegister()
	{
		return UFuryRoadOffroadWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFuryRoadWheelRear,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "FuryRoadOffroadWheelRear.h" },
		{ "ModuleRelativePath", "FuryRoadOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuryRoadOffroadWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::ClassParams = {
		&UFuryRoadOffroadWheelRear::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFuryRoadOffroadWheelRear()
	{
		if (!Z_Registration_Info_UClass_UFuryRoadOffroadWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuryRoadOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UFuryRoadOffroadWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFuryRoadOffroadWheelRear.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<UFuryRoadOffroadWheelRear>()
	{
		return UFuryRoadOffroadWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuryRoadOffroadWheelRear);
	UFuryRoadOffroadWheelRear::~UFuryRoadOffroadWheelRear() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadOffroadWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadOffroadWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFuryRoadOffroadWheelRear, UFuryRoadOffroadWheelRear::StaticClass, TEXT("UFuryRoadOffroadWheelRear"), &Z_Registration_Info_UClass_UFuryRoadOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuryRoadOffroadWheelRear), 2076205425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadOffroadWheelRear_h_3717851213(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_FuryRoad_FuryRoad_Source_FuryRoad_FuryRoadOffroadWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
