// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/PuzzleManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UScriptStruct* Z_Construct_UScriptStruct_FRulesStruct();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RulesStruct;
class UScriptStruct* FRulesStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RulesStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RulesStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRulesStruct, (UObject*)Z_Construct_UPackage__Script_SPHINX_Dev(), TEXT("RulesStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RulesStruct.OuterSingleton;
}
template<> SPHINX_DEV_API UScriptStruct* StaticStruct<FRulesStruct>()
{
	return FRulesStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRulesStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRulesStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRulesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRulesStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRulesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
		nullptr,
		&NewStructOps,
		"RulesStruct",
		nullptr,
		0,
		sizeof(FRulesStruct),
		alignof(FRulesStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulesStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRulesStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRulesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RulesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RulesStruct.InnerSingleton, Z_Construct_UScriptStruct_FRulesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RulesStruct.InnerSingleton;
	}
	void APuzzleManager::StaticRegisterNativesAPuzzleManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuzzleManager);
	UClass* Z_Construct_UClass_APuzzleManager_NoRegister()
	{
		return APuzzleManager::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Everything_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Everything;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalFade_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinalFade;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameOverRules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Leaves_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Leaves_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leaves_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Leaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxActivePuzzles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActivePuzzles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleManager.h" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Player), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Everything_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Everything = { "Everything", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Everything), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Everything_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Everything_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartingInventory_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartingInventory = { "StartingInventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, StartingInventory), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartingInventory_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartingInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_FinalFade_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_FinalFade = { "FinalFade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, FinalFade), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_FinalFade_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_FinalFade_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_Inner = { "GameOverRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules = { "GameOverRules", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, GameOverRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_ValueProp = { "Leaves", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRulesStruct, METADATA_PARAMS(0, nullptr) }; // 3490656299
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_Key_KeyProp = { "Leaves_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves = { "Leaves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Leaves), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_MetaData) }; // 3490656299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles = { "MaxActivePuzzles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, MaxActivePuzzles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Everything,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartingInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_FinalFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APuzzleManager_Statics::ClassParams = {
		&APuzzleManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APuzzleManager()
	{
		if (!Z_Registration_Info_UClass_APuzzleManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuzzleManager.OuterSingleton, Z_Construct_UClass_APuzzleManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APuzzleManager.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<APuzzleManager>()
	{
		return APuzzleManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleManager);
	APuzzleManager::~APuzzleManager() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo[] = {
		{ FRulesStruct::StaticStruct, Z_Construct_UScriptStruct_FRulesStruct_Statics::NewStructOps, TEXT("RulesStruct"), &Z_Registration_Info_UScriptStruct_RulesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRulesStruct), 3490656299U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APuzzleManager, APuzzleManager::StaticClass, TEXT("APuzzleManager"), &Z_Registration_Info_UClass_APuzzleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleManager), 19808662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_2873094634(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
