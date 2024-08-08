// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Generator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(AGenerator::execRetryGetSpawnPointFor)
	{
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetryGetSpawnPointFor(Z_Param_Item);
		P_NATIVE_END;
	}
	void AGenerator::StaticRegisterNativesAGenerator()
	{
		UClass* Class = AGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RetryGetSpawnPointFor", &AGenerator::execRetryGetSpawnPointFor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics
	{
		struct Generator_eventRetryGetSpawnPointFor_Parms
		{
			UItem* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventRetryGetSpawnPointFor_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "RetryGetSpawnPointFor", nullptr, nullptr, Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Generator_eventRetryGetSpawnPointFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Generator_eventRetryGetSpawnPointFor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenerator);
	UClass* Z_Construct_UClass_AGenerator_NoRegister()
	{
		return AGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FindSpawnDelay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingInventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingInventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor, "RetryGetSpawnPointFor" }, // 1374036708
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Make singleton, see GenerateForArea in PuzzleManager\n" },
#endif
		{ "IncludePath", "Generator.h" },
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make singleton, see GenerateForArea in PuzzleManager" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay = { "FindSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, FindSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_Inner = { "StartingInventory", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//static TMap<UArea*, URule*> PuzzlesPerArea;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static TMap<UArea*, URule*> PuzzlesPerArea;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory = { "StartingInventory", nullptr, (EPropertyFlags)0x0040008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, StartingInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenerator_Statics::ClassParams = {
		&AGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGenerator()
	{
		if (!Z_Registration_Info_UClass_AGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenerator.OuterSingleton, Z_Construct_UClass_AGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGenerator.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AGenerator>()
	{
		return AGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerator);
	AGenerator::~AGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGenerator, AGenerator::StaticClass, TEXT("AGenerator"), &Z_Registration_Info_UClass_AGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenerator), 4205890595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_2900542683(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
