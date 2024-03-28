// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/Public/MyPlayCarPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayCarPawn() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	FURYROAD_API UClass* Z_Construct_UClass_AMyPlayCarPawn();
	FURYROAD_API UClass* Z_Construct_UClass_AMyPlayCarPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	void AMyPlayCarPawn::StaticRegisterNativesAMyPlayCarPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayCarPawn);
	UClass* Z_Construct_UClass_AMyPlayCarPawn_NoRegister()
	{
		return AMyPlayCarPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayCarPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pCamera;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayCarPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayCarPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayCarPawn.h" },
		{ "ModuleRelativePath", "Public/MyPlayCarPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pSpringArm_MetaData[] = {
		{ "Category", "MyPlayCarPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayCarPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pSpringArm = { "pSpringArm", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayCarPawn, pSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pSpringArm_MetaData), Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pSpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pCamera_MetaData[] = {
		{ "Category", "MyPlayCarPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayCarPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pCamera = { "pCamera", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayCarPawn, pCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pCamera_MetaData), Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pCamera_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials_Inner = { "pMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials_MetaData[] = {
		{ "Category", "MyPlayCarPawn" },
		{ "ModuleRelativePath", "Public/MyPlayCarPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials = { "pMaterials", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayCarPawn, pMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials_MetaData), Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayCarPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayCarPawn_Statics::NewProp_pMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayCarPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayCarPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayCarPawn_Statics::ClassParams = {
		&AMyPlayCarPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlayCarPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayCarPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayCarPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyPlayCarPawn()
	{
		if (!Z_Registration_Info_UClass_AMyPlayCarPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayCarPawn.OuterSingleton, Z_Construct_UClass_AMyPlayCarPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayCarPawn.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<AMyPlayCarPawn>()
	{
		return AMyPlayCarPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayCarPawn);
	AMyPlayCarPawn::~AMyPlayCarPawn() {}
	struct Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyPlayCarPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyPlayCarPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayCarPawn, AMyPlayCarPawn::StaticClass, TEXT("AMyPlayCarPawn"), &Z_Registration_Info_UClass_AMyPlayCarPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayCarPawn), 1172956583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyPlayCarPawn_h_2199651698(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyPlayCarPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyPlayCarPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
