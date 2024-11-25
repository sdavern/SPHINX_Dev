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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInventoryManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevPlayerController_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzleTracker_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UScriptStruct* Z_Construct_UScriptStruct_FRulesStruct();
	SPHINX_DEV_API UScriptStruct* Z_Construct_UScriptStruct_FSharedRulesStruct();
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RulesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RulesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RulesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray_Inner = { "RulesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The array that holds the URule pointers\n" },
#endif
		{ "ModuleRelativePath", "PuzzleManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array that holds the URule pointers" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray = { "RulesArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRulesStruct, RulesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray_MetaData), Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRulesStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRulesStruct_Statics::NewProp_RulesArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRulesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
		nullptr,
		&NewStructOps,
		"RulesStruct",
		Z_Construct_UScriptStruct_FRulesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulesStruct_Statics::PropPointers),
		sizeof(FRulesStruct),
		alignof(FRulesStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulesStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRulesStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRulesStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRulesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RulesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RulesStruct.InnerSingleton, Z_Construct_UScriptStruct_FRulesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RulesStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedRulesStruct;
class UScriptStruct* FSharedRulesStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedRulesStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedRulesStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedRulesStruct, (UObject*)Z_Construct_UPackage__Script_SPHINX_Dev(), TEXT("SharedRulesStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SharedRulesStruct.OuterSingleton;
}
template<> SPHINX_DEV_API UScriptStruct* StaticStruct<FSharedRulesStruct>()
{
	return FSharedRulesStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSharedRulesStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedRulesStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
		nullptr,
		&NewStructOps,
		"SharedRulesStruct",
		nullptr,
		0,
		sizeof(FSharedRulesStruct),
		alignof(FSharedRulesStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedRulesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SharedRulesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedRulesStruct.InnerSingleton, Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SharedRulesStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(APuzzleManager::execExecuteRule)
	{
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteRule(Z_Param_Rule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGenerateForActivePuzzlePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateForActivePuzzlePoints();
		P_NATIVE_END;
	}
	void APuzzleManager::StaticRegisterNativesAPuzzleManager()
	{
		UClass* Class = APuzzleManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteRule", &APuzzleManager::execExecuteRule },
			{ "GenerateForActivePuzzlePoints", &APuzzleManager::execGenerateForActivePuzzlePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics
	{
		struct PuzzleManager_eventExecuteRule_Parms
		{
			URule* Rule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventExecuteRule_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::NewProp_Rule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "ExecuteRule", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::PuzzleManager_eventExecuteRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::PuzzleManager_eventExecuteRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_ExecuteRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_ExecuteRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GenerateForActivePuzzlePoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuzzleManager);
	UClass* Z_Construct_UClass_APuzzleManager_NoRegister()
	{
		return APuzzleManager::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Leaves_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Leaves_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leaves_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Leaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolvedSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SolvedSoundCue;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemAssets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllItems;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RuleAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuleAssets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PPAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PPAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PPAssets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzlePointPtrs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzlePointPtrs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzlePointPtrs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessiblePPs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessiblePPs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AccessiblePPs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RulePPs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RulePPs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RulePPs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RulePPs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PuzzlesGeneratedStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzlesGeneratedStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzlesGeneratedStrings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedPuzzles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompletedPuzzles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPuzzles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPuzzles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleTracker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzleTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentArea;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameOverRules;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePuzzlePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePuzzlePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePuzzlePoints;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PuzzlesGenerated_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzlesGenerated_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzlesGenerated_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PuzzlesGenerated;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_APuzzleManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APuzzleManager_ExecuteRule, "ExecuteRule" }, // 3978695043
		{ &Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints, "GenerateForActivePuzzlePoints" }, // 3110264395
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleManager.h" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartArea_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartArea = { "StartArea", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, StartArea), Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartArea_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PlayerController), Z_Construct_UClass_ASPHINX_DevPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PlayerController_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_ValueProp = { "Leaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRulesStruct, METADATA_PARAMS(0, nullptr) }; // 984681485
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_Key_KeyProp = { "Leaves_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves = { "Leaves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Leaves), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_MetaData) }; // 984681485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Player), Z_Construct_UClass_AAvatar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_InventoryManager_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, InventoryManager), Z_Construct_UClass_AInventoryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_InventoryManager_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_InventoryManager_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_SolvedSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_SolvedSoundCue = { "SolvedSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, SolvedSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_SolvedSoundCue_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_SolvedSoundCue_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets_Inner = { "ItemAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//AActor* Statistics;\n" },
#endif
		{ "ModuleRelativePath", "PuzzleManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nAActor* Statistics;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets = { "ItemAssets", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, ItemAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems_Inner = { "AllItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems = { "AllItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, AllItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets_Inner = { "RuleAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets = { "RuleAssets", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, RuleAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets_Inner = { "PPAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TArray<TSubclassOf<UArea>> AreaAssets;\n" },
#endif
		{ "ModuleRelativePath", "PuzzleManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray<TSubclassOf<UArea>> AreaAssets;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets = { "PPAssets", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PPAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs_Inner = { "PuzzlePointPtrs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs = { "PuzzlePointPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PuzzlePointPtrs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs_Inner = { "AccessiblePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs = { "AccessiblePPs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, AccessiblePPs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_ValueProp = { "RulePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_Key_KeyProp = { "RulePPs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs = { "RulePPs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, RulePPs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings_Inner = { "PuzzlesGeneratedStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings = { "PuzzlesGeneratedStrings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PuzzlesGeneratedStrings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_CompletedPuzzles_MetaData[] = {
		{ "Category", "PuzzleManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//For demo only\n" },
#endif
		{ "ModuleRelativePath", "PuzzleManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For demo only" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_CompletedPuzzles = { "CompletedPuzzles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, CompletedPuzzles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_CompletedPuzzles_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_CompletedPuzzles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxPuzzles_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxPuzzles = { "MaxPuzzles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, MaxPuzzles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxPuzzles_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxPuzzles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzleTracker_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzleTracker = { "PuzzleTracker", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PuzzleTracker), Z_Construct_UClass_UPuzzleTracker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzleTracker_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzleTracker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_CurrentArea_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_CurrentArea = { "CurrentArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, CurrentArea), Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_CurrentArea_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_CurrentArea_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_Inner = { "GameOverRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules = { "GameOverRules", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, GameOverRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints_Inner = { "ActivePuzzlePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints = { "ActivePuzzlePoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, ActivePuzzlePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_ValueProp = { "PuzzlesGenerated", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_Key_KeyProp = { "PuzzlesGenerated_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TMap<UPuzzlePoint*, FRulesStruct> PuzzleRules;\n" },
#endif
		{ "ModuleRelativePath", "PuzzleManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TMap<UPuzzlePoint*, FRulesStruct> PuzzleRules;" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated = { "PuzzlesGenerated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PuzzlesGenerated), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles = { "MaxActivePuzzles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, MaxActivePuzzles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxActivePuzzles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Leaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_InventoryManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Everything,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartingInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_FinalFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_SolvedSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_AllItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlePointPtrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_AccessiblePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGeneratedStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_CompletedPuzzles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_MaxPuzzles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzleTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_CurrentArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GameOverRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePuzzlePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PuzzlesGenerated,
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
		FuncInfo,
		Z_Construct_UClass_APuzzleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ FRulesStruct::StaticStruct, Z_Construct_UScriptStruct_FRulesStruct_Statics::NewStructOps, TEXT("RulesStruct"), &Z_Registration_Info_UScriptStruct_RulesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRulesStruct), 984681485U) },
		{ FSharedRulesStruct::StaticStruct, Z_Construct_UScriptStruct_FSharedRulesStruct_Statics::NewStructOps, TEXT("SharedRulesStruct"), &Z_Registration_Info_UScriptStruct_SharedRulesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedRulesStruct), 3720797568U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APuzzleManager, APuzzleManager::StaticClass, TEXT("APuzzleManager"), &Z_Registration_Info_UClass_APuzzleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleManager), 525728665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_1224827036(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
