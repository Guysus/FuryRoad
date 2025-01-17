// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuryRoad/Public/MyRaceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyRaceManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FURYROAD_API UClass* Z_Construct_UClass_AMyRaceManager();
	FURYROAD_API UClass* Z_Construct_UClass_AMyRaceManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FuryRoad();
// End Cross Module References
	DEFINE_FUNCTION(AMyRaceManager::execAddLap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyRaceManager::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMyRaceManager**)Z_Param__Result=AMyRaceManager::GetInstance();
		P_NATIVE_END;
	}
	void AMyRaceManager::StaticRegisterNativesAMyRaceManager()
	{
		UClass* Class = AMyRaceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLap", &AMyRaceManager::execAddLap },
			{ "GetInstance", &AMyRaceManager::execGetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyRaceManager_AddLap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRaceManager_AddLap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyRaceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyRaceManager_AddLap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyRaceManager, nullptr, "AddLap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRaceManager_AddLap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyRaceManager_AddLap_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyRaceManager_AddLap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyRaceManager_AddLap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics
	{
		struct MyRaceManager_eventGetInstance_Parms
		{
			AMyRaceManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyRaceManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AMyRaceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyRaceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyRaceManager, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::MyRaceManager_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::MyRaceManager_eventGetInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyRaceManager_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyRaceManager_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyRaceManager);
	UClass* Z_Construct_UClass_AMyRaceManager_NoRegister()
	{
		return AMyRaceManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyRaceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lapCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lapCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyRaceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FuryRoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRaceManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyRaceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyRaceManager_AddLap, "AddLap" }, // 2303607322
		{ &Z_Construct_UFunction_AMyRaceManager_GetInstance, "GetInstance" }, // 2712648174
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRaceManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRaceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyRaceManager.h" },
		{ "ModuleRelativePath", "Public/MyRaceManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRaceManager_Statics::NewProp_lapCount_MetaData[] = {
		{ "Category", "MyRaceManager" },
		{ "ModuleRelativePath", "Public/MyRaceManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyRaceManager_Statics::NewProp_lapCount = { "lapCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyRaceManager, lapCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRaceManager_Statics::NewProp_lapCount_MetaData), Z_Construct_UClass_AMyRaceManager_Statics::NewProp_lapCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyRaceManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRaceManager_Statics::NewProp_lapCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyRaceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRaceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyRaceManager_Statics::ClassParams = {
		&AMyRaceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyRaceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyRaceManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRaceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyRaceManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRaceManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyRaceManager()
	{
		if (!Z_Registration_Info_UClass_AMyRaceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyRaceManager.OuterSingleton, Z_Construct_UClass_AMyRaceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyRaceManager.OuterSingleton;
	}
	template<> FURYROAD_API UClass* StaticClass<AMyRaceManager>()
	{
		return AMyRaceManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyRaceManager);
	AMyRaceManager::~AMyRaceManager() {}
	struct Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyRaceManager, AMyRaceManager::StaticClass, TEXT("AMyRaceManager"), &Z_Registration_Info_UClass_AMyRaceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyRaceManager), 2670407134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_2668621259(TEXT("/Script/FuryRoad"),
		Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FuryRoad_Source_FuryRoad_Public_MyRaceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
