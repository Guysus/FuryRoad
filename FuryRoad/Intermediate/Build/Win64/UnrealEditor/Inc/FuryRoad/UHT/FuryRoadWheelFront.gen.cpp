// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/FuryRoadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuryRoadWheelFront() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadWheelFront();
	FURYROAD_API UClass* Z_Construct_UClass_UFuryRoadWheelFront_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void UFuryRoadWheelFront::StaticRegisterNativesUFuryRoadWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFuryRoadWheelFront);
	UClass* Z_Construct_UClass_UFuryRoadWheelFront_NoRegister()
	{
		return UFuryRoadWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UFuryRoadWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFuryRoadWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFuryRoadWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "FuryRoadWheelFront.h" },
		{ "ModuleRelativePath", "FuryRoadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFuryRoadWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuryRoadWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuryRoadWheelFront_Statics::ClassParams = {
		&UFuryRoadWheelFront::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuryRoadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuryRoadWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFuryRoadWheelFront()
	{
		if (!Z_Registration_Info_UClass_UFuryRoadWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuryRoadWheelFront.OuterSingleton, Z_Construct_UClass_UFuryRoadWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFuryRoadWheelFront.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<UFuryRoadWheelFront>()
	{
		return UFuryRoadWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuryRoadWheelFront);
	UFuryRoadWheelFront::~UFuryRoadWheelFront() {}
	struct Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFuryRoadWheelFront, UFuryRoadWheelFront::StaticClass, TEXT("UFuryRoadWheelFront"), &Z_Registration_Info_UClass_UFuryRoadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuryRoadWheelFront), 2347264575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelFront_h_3689773805(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_FuryRoadWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
