// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/FuryRoadSportsWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuryRoadSportsWheelRear() {}
// Cross Module References
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadSportsWheelRear();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadSportsWheelRear_NoRegister();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadWheelRear();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void UFuryRoadSportsWheelRear::StaticRegisterNativesUFuryRoadSportsWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFuryRoadSportsWheelRear);
	UClass* Z_Construct_UClass_UFuryRoadSportsWheelRear_NoRegister()
	{
		return UFuryRoadSportsWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFuryRoadWheelRear,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "FuryRoadSportsWheelRear.h" },
		{ "ModuleRelativePath", "FuryRoadSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuryRoadSportsWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::ClassParams = {
		&UFuryRoadSportsWheelRear::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFuryRoadSportsWheelRear()
	{
		if (!Z_Registration_Info_UClass_UFuryRoadSportsWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuryRoadSportsWheelRear.OuterSingleton, Z_Construct_UClass_UFuryRoadSportsWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFuryRoadSportsWheelRear.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<UFuryRoadSportsWheelRear>()
	{
		return UFuryRoadSportsWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuryRoadSportsWheelRear);
	UFuryRoadSportsWheelRear::~UFuryRoadSportsWheelRear() {}
	struct Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadSportsWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadSportsWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFuryRoadSportsWheelRear, UFuryRoadSportsWheelRear::StaticClass, TEXT("UFuryRoadSportsWheelRear"), &Z_Registration_Info_UClass_UFuryRoadSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuryRoadSportsWheelRear), 4040496599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadSportsWheelRear_h_1312311124(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadSportsWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadSportsWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
