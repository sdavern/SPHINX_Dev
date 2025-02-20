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
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzleTracker_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
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
	DEFINE_FUNCTION(APuzzleManager::execAssignPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execDestroyDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execRetryIsGPPInViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetryIsGPPInViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execIsGPPInViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGPPInViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetGPPsInViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AGamePuzzlePoint*>*)Z_Param__Result=P_THIS->GetGPPsInViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetRulePointers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URule*>*)Z_Param__Result=P_THIS->GetRulePointers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execSetupDbItemsOnStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupDbItemsOnStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execInitialisePPPtrs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitialisePPPtrs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execPrintAllRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintAllRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execPopulateRulePointers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateRulePointers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execPrintLeaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLeaves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execActivateProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execReturnLeaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnLeaves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execActivateMaxPuzzlePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMaxPuzzlePoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execDeactivatePuzzlePoint)
	{
		P_GET_OBJECT(AGamePuzzlePoint,Z_Param_PP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivatePuzzlePoint(Z_Param_PP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execActivatePuzzlePoint)
	{
		P_GET_OBJECT(AGamePuzzlePoint,Z_Param_PP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePuzzlePoint(Z_Param_PP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetPPsInWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AGamePuzzlePoint*>*)Z_Param__Result=P_THIS->GetPPsInWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execCheckIfPuzzleToBeGenerated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfPuzzleToBeGenerated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetGameItemsInWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameItem*>*)Z_Param__Result=P_THIS->GetGameItemsInWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetItemsInWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->GetItemsInWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execLoadRuleBPs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<URule> >*)Z_Param__Result=P_THIS->LoadRuleBPs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execLoadItemBPs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UItem> >*)Z_Param__Result=P_THIS->LoadItemBPs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execLoadPuzzlePointBPs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UPuzzlePoint> >*)Z_Param__Result=P_THIS->LoadPuzzlePointBPs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execTriggerEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetCurrentArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UArea**)Z_Param__Result=P_THIS->GetCurrentArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetCurrentAreaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentAreaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetHint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execPuzzleContains)
	{
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_GET_OBJECT(URule,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PuzzleContains(Z_Param_Item,Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameItem**)Z_Param__Result=P_THIS->GetPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execUpdatePlayerProperties)
	{
		P_GET_OBJECT(UItemProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerProperties(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetAllPPs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPuzzlePoint*>*)Z_Param__Result=P_THIS->GetAllPPs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetAllRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URule*>*)Z_Param__Result=P_THIS->GetAllRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetAllItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->GetAllItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetRulesWithOutput)
	{
		P_GET_OBJECT(UTerm,Z_Param_Term);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URule*>*)Z_Param__Result=P_THIS->GetRulesWithOutput(Z_Param_Term);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetRulesWithInput)
	{
		P_GET_OBJECT(UItem,Z_Param_DbItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URule*>*)Z_Param__Result=P_THIS->GetRulesWithInput(Z_Param_DbItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execFindDbItemsFor)
	{
		P_GET_OBJECT(UTerm,Z_Param_Term);
		P_GET_TARRAY(UPuzzlePoint*,Z_Param_NewAccessiblePPs);
		P_GET_TARRAY(UItem*,Z_Param_ItemsInLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->FindDbItemsFor(Z_Param_Term,Z_Param_NewAccessiblePPs,Z_Param_ItemsInLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetItemsOfType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
		P_GET_TARRAY(UPuzzlePoint*,Z_Param_NewAccessiblePPs);
		P_GET_TARRAY(UItem*,Z_Param_ItemsInLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->GetItemsOfType(Z_Param_ItemName,Z_Param_NewAccessiblePPs,Z_Param_ItemsInLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execHasItemOfType)
	{
		P_GET_OBJECT(UTerm,Z_Param_Term);
		P_GET_TARRAY(UPuzzlePoint*,Z_Param_NewAccessiblePPs);
		P_GET_TARRAY(UItem*,Z_Param_ItemsInLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasItemOfType(Z_Param_Term,Z_Param_NewAccessiblePPs,Z_Param_ItemsInLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execGetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItem**)Z_Param__Result=P_THIS->GetObject(Z_Param_ItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execAddPuzzle)
	{
		P_GET_OBJECT(UPuzzlePoint,Z_Param_PP);
		P_GET_PROPERTY(FStrProperty,Z_Param_Puzzle);
		P_GET_PROPERTY(FStrProperty,Z_Param_GoalString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPuzzle(Z_Param_PP,Z_Param_Puzzle,Z_Param_GoalString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execFindItemsForOutputs)
	{
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindItemsForOutputs(Z_Param_Rule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execFindLeaves)
	{
		P_GET_OBJECT(URule,Z_Param_Parent);
		P_GET_OBJECT(UPuzzlePoint,Z_Param_PP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindLeaves(Z_Param_Parent,Z_Param_PP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execExecuteRule)
	{
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteRule(Z_Param_Rule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execAddApplicableRule)
	{
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_GET_OBJECT(UGameItem,Z_Param_GameItem);
		P_GET_TARRAY(URule*,Z_Param_Rules);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddApplicableRule(Z_Param_Rule,Z_Param_GameItem,Z_Param_Rules);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APuzzleManager::execRulesFor)
	{
		P_GET_OBJECT(UGameItem,Z_Param_GameItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URule*>*)Z_Param__Result=P_THIS->RulesFor(Z_Param_GameItem);
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
			{ "ActivateMaxPuzzlePoints", &APuzzleManager::execActivateMaxPuzzlePoints },
			{ "ActivateProperties", &APuzzleManager::execActivateProperties },
			{ "ActivatePuzzlePoint", &APuzzleManager::execActivatePuzzlePoint },
			{ "AddApplicableRule", &APuzzleManager::execAddApplicableRule },
			{ "AddPuzzle", &APuzzleManager::execAddPuzzle },
			{ "AssignPlayer", &APuzzleManager::execAssignPlayer },
			{ "CheckIfPuzzleToBeGenerated", &APuzzleManager::execCheckIfPuzzleToBeGenerated },
			{ "DeactivatePuzzlePoint", &APuzzleManager::execDeactivatePuzzlePoint },
			{ "DestroyDialogue", &APuzzleManager::execDestroyDialogue },
			{ "ExecuteRule", &APuzzleManager::execExecuteRule },
			{ "FindDbItemsFor", &APuzzleManager::execFindDbItemsFor },
			{ "FindItemsForOutputs", &APuzzleManager::execFindItemsForOutputs },
			{ "FindLeaves", &APuzzleManager::execFindLeaves },
			{ "GenerateForActivePuzzlePoints", &APuzzleManager::execGenerateForActivePuzzlePoints },
			{ "GetAllItems", &APuzzleManager::execGetAllItems },
			{ "GetAllPPs", &APuzzleManager::execGetAllPPs },
			{ "GetAllRules", &APuzzleManager::execGetAllRules },
			{ "GetCurrentArea", &APuzzleManager::execGetCurrentArea },
			{ "GetCurrentAreaName", &APuzzleManager::execGetCurrentAreaName },
			{ "GetGameItemsInWorld", &APuzzleManager::execGetGameItemsInWorld },
			{ "GetGPPsInViewport", &APuzzleManager::execGetGPPsInViewport },
			{ "GetHint", &APuzzleManager::execGetHint },
			{ "GetItemsInWorld", &APuzzleManager::execGetItemsInWorld },
			{ "GetItemsOfType", &APuzzleManager::execGetItemsOfType },
			{ "GetObject", &APuzzleManager::execGetObject },
			{ "GetObjective", &APuzzleManager::execGetObjective },
			{ "GetPlayer", &APuzzleManager::execGetPlayer },
			{ "GetPPsInWorld", &APuzzleManager::execGetPPsInWorld },
			{ "GetRulePointers", &APuzzleManager::execGetRulePointers },
			{ "GetRulesWithInput", &APuzzleManager::execGetRulesWithInput },
			{ "GetRulesWithOutput", &APuzzleManager::execGetRulesWithOutput },
			{ "HasItemOfType", &APuzzleManager::execHasItemOfType },
			{ "InitialisePPPtrs", &APuzzleManager::execInitialisePPPtrs },
			{ "IsGPPInViewport", &APuzzleManager::execIsGPPInViewport },
			{ "LoadItemBPs", &APuzzleManager::execLoadItemBPs },
			{ "LoadPuzzlePointBPs", &APuzzleManager::execLoadPuzzlePointBPs },
			{ "LoadRuleBPs", &APuzzleManager::execLoadRuleBPs },
			{ "PopulateRulePointers", &APuzzleManager::execPopulateRulePointers },
			{ "PrintAllRules", &APuzzleManager::execPrintAllRules },
			{ "PrintLeaves", &APuzzleManager::execPrintLeaves },
			{ "PuzzleContains", &APuzzleManager::execPuzzleContains },
			{ "RetryIsGPPInViewport", &APuzzleManager::execRetryIsGPPInViewport },
			{ "ReturnLeaves", &APuzzleManager::execReturnLeaves },
			{ "RulesFor", &APuzzleManager::execRulesFor },
			{ "SetupDbItemsOnStart", &APuzzleManager::execSetupDbItemsOnStart },
			{ "TriggerEnd", &APuzzleManager::execTriggerEnd },
			{ "UpdatePlayerProperties", &APuzzleManager::execUpdatePlayerProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "ActivateMaxPuzzlePoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_ActivateProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_ActivateProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_ActivateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "ActivateProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ActivateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_ActivateProperties_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_ActivateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_ActivateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics
	{
		struct PuzzleManager_eventActivatePuzzlePoint_Parms
		{
			AGamePuzzlePoint* PP;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventActivatePuzzlePoint_Parms, PP), Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::NewProp_PP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "ActivatePuzzlePoint", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::PuzzleManager_eventActivatePuzzlePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::PuzzleManager_eventActivatePuzzlePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics
	{
		struct PuzzleManager_eventAddApplicableRule_Parms
		{
			URule* Rule;
			UGameItem* GameItem;
			TArray<URule*> Rules;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rules_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventAddApplicableRule_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_GameItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventAddApplicableRule_Parms, GameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_GameItem_MetaData), Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_GameItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventAddApplicableRule_Parms, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_Rules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::NewProp_Rules,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "AddApplicableRule", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::PuzzleManager_eventAddApplicableRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::PuzzleManager_eventAddApplicableRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_AddApplicableRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_AddApplicableRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics
	{
		struct PuzzleManager_eventAddPuzzle_Parms
		{
			UPuzzlePoint* PP;
			FString Puzzle;
			FString GoalString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Puzzle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GoalString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventAddPuzzle_Parms, PP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventAddPuzzle_Parms, Puzzle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::NewProp_GoalString = { "GoalString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventAddPuzzle_Parms, GoalString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::NewProp_PP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::NewProp_Puzzle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::NewProp_GoalString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "AddPuzzle", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::PuzzleManager_eventAddPuzzle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::PuzzleManager_eventAddPuzzle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_AddPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_AddPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_AssignPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_AssignPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_AssignPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "AssignPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_AssignPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_AssignPlayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_AssignPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_AssignPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics
	{
		struct PuzzleManager_eventCheckIfPuzzleToBeGenerated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleManager_eventCheckIfPuzzleToBeGenerated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuzzleManager_eventCheckIfPuzzleToBeGenerated_Parms), &Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "CheckIfPuzzleToBeGenerated", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::PuzzleManager_eventCheckIfPuzzleToBeGenerated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::PuzzleManager_eventCheckIfPuzzleToBeGenerated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics
	{
		struct PuzzleManager_eventDeactivatePuzzlePoint_Parms
		{
			AGamePuzzlePoint* PP;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventDeactivatePuzzlePoint_Parms, PP), Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::NewProp_PP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "DeactivatePuzzlePoint", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::PuzzleManager_eventDeactivatePuzzlePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::PuzzleManager_eventDeactivatePuzzlePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_DestroyDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_DestroyDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_DestroyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "DestroyDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_DestroyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_DestroyDialogue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_DestroyDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_DestroyDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics
	{
		struct PuzzleManager_eventFindDbItemsFor_Parms
		{
			UTerm* Term;
			TArray<UPuzzlePoint*> NewAccessiblePPs;
			TArray<UItem*> ItemsInLevel;
			TArray<UItem*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Term;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAccessiblePPs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAccessiblePPs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInLevel_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindDbItemsFor_Parms, Term), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_NewAccessiblePPs_Inner = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_NewAccessiblePPs = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindDbItemsFor_Parms, NewAccessiblePPs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ItemsInLevel_Inner = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindDbItemsFor_Parms, ItemsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindDbItemsFor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_Term,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_NewAccessiblePPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_NewAccessiblePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ItemsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ItemsInLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "FindDbItemsFor", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::PuzzleManager_eventFindDbItemsFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::PuzzleManager_eventFindDbItemsFor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_FindDbItemsFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_FindDbItemsFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics
	{
		struct PuzzleManager_eventFindItemsForOutputs_Parms
		{
			URule* Rule;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindItemsForOutputs_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleManager_eventFindItemsForOutputs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuzzleManager_eventFindItemsForOutputs_Parms), &Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "FindItemsForOutputs", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::PuzzleManager_eventFindItemsForOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::PuzzleManager_eventFindItemsForOutputs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics
	{
		struct PuzzleManager_eventFindLeaves_Parms
		{
			URule* Parent;
			UPuzzlePoint* PP;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindLeaves_Parms, Parent), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventFindLeaves_Parms, PP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::NewProp_PP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "FindLeaves", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::PuzzleManager_eventFindLeaves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::PuzzleManager_eventFindLeaves_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_FindLeaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_FindLeaves_Statics::FuncParams);
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
	struct Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics
	{
		struct PuzzleManager_eventGetAllItems_Parms
		{
			TArray<UItem*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetAllItems", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::PuzzleManager_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::PuzzleManager_eventGetAllItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics
	{
		struct PuzzleManager_eventGetAllPPs_Parms
		{
			TArray<UPuzzlePoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetAllPPs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetAllPPs", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::PuzzleManager_eventGetAllPPs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::PuzzleManager_eventGetAllPPs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetAllPPs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetAllPPs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics
	{
		struct PuzzleManager_eventGetAllRules_Parms
		{
			TArray<URule*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetAllRules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetAllRules", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::PuzzleManager_eventGetAllRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::PuzzleManager_eventGetAllRules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetAllRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetAllRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics
	{
		struct PuzzleManager_eventGetCurrentArea_Parms
		{
			UArea* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetCurrentArea_Parms, ReturnValue), Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetCurrentArea", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::PuzzleManager_eventGetCurrentArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::PuzzleManager_eventGetCurrentArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetCurrentArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetCurrentArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics
	{
		struct PuzzleManager_eventGetCurrentAreaName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetCurrentAreaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetCurrentAreaName", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::PuzzleManager_eventGetCurrentAreaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::PuzzleManager_eventGetCurrentAreaName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics
	{
		struct PuzzleManager_eventGetGameItemsInWorld_Parms
		{
			TArray<UGameItem*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetGameItemsInWorld_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetGameItemsInWorld", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::PuzzleManager_eventGetGameItemsInWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::PuzzleManager_eventGetGameItemsInWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics
	{
		struct PuzzleManager_eventGetGPPsInViewport_Parms
		{
			TArray<AGamePuzzlePoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetGPPsInViewport_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetGPPsInViewport", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::PuzzleManager_eventGetGPPsInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::PuzzleManager_eventGetGPPsInViewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetHint_Statics
	{
		struct PuzzleManager_eventGetHint_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_GetHint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetHint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetHint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetHint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetHint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetHint", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetHint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetHint_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetHint_Statics::PuzzleManager_eventGetHint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetHint_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetHint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetHint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetHint_Statics::PuzzleManager_eventGetHint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetHint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetHint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics
	{
		struct PuzzleManager_eventGetItemsInWorld_Parms
		{
			TArray<UItem*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetItemsInWorld_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetItemsInWorld", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::PuzzleManager_eventGetItemsInWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::PuzzleManager_eventGetItemsInWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetItemsInWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetItemsInWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics
	{
		struct PuzzleManager_eventGetItemsOfType_Parms
		{
			FString ItemName;
			TArray<UPuzzlePoint*> NewAccessiblePPs;
			TArray<UItem*> ItemsInLevel;
			TArray<UItem*> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAccessiblePPs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAccessiblePPs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInLevel_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetItemsOfType_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_NewAccessiblePPs_Inner = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_NewAccessiblePPs = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetItemsOfType_Parms, NewAccessiblePPs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ItemsInLevel_Inner = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetItemsOfType_Parms, ItemsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetItemsOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_NewAccessiblePPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_NewAccessiblePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ItemsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ItemsInLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetItemsOfType", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::PuzzleManager_eventGetItemsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::PuzzleManager_eventGetItemsOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetItemsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetItemsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetObject_Statics
	{
		struct PuzzleManager_eventGetObject_Parms
		{
			FString ItemName;
			UItem* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_GetObject_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetObject_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetObject_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetObject_Statics::PuzzleManager_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetObject_Statics::PuzzleManager_eventGetObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetObjective_Statics
	{
		struct PuzzleManager_eventGetObjective_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetObjective_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetObjective", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::PuzzleManager_eventGetObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::PuzzleManager_eventGetObjective_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics
	{
		struct PuzzleManager_eventGetPlayer_Parms
		{
			UGameItem* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetPlayer_Parms, ReturnValue), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetPlayer", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::PuzzleManager_eventGetPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::PuzzleManager_eventGetPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics
	{
		struct PuzzleManager_eventGetPPsInWorld_Parms
		{
			TArray<AGamePuzzlePoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetPPsInWorld_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetPPsInWorld", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::PuzzleManager_eventGetPPsInWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::PuzzleManager_eventGetPPsInWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetPPsInWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetPPsInWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics
	{
		struct PuzzleManager_eventGetRulePointers_Parms
		{
			TArray<URule*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetRulePointers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetRulePointers", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::PuzzleManager_eventGetRulePointers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::PuzzleManager_eventGetRulePointers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetRulePointers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetRulePointers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics
	{
		struct PuzzleManager_eventGetRulesWithInput_Parms
		{
			UItem* DbItem;
			TArray<URule*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DbItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::NewProp_DbItem = { "DbItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetRulesWithInput_Parms, DbItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetRulesWithInput_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetRulesWithInput", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::PuzzleManager_eventGetRulesWithInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::PuzzleManager_eventGetRulesWithInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetRulesWithInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetRulesWithInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics
	{
		struct PuzzleManager_eventGetRulesWithOutput_Parms
		{
			UTerm* Term;
			TArray<URule*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Term;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetRulesWithOutput_Parms, Term), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventGetRulesWithOutput_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::NewProp_Term,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "GetRulesWithOutput", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::PuzzleManager_eventGetRulesWithOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::PuzzleManager_eventGetRulesWithOutput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics
	{
		struct PuzzleManager_eventHasItemOfType_Parms
		{
			UTerm* Term;
			TArray<UPuzzlePoint*> NewAccessiblePPs;
			TArray<UItem*> ItemsInLevel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Term;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAccessiblePPs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAccessiblePPs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInLevel_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventHasItemOfType_Parms, Term), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_NewAccessiblePPs_Inner = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_NewAccessiblePPs = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventHasItemOfType_Parms, NewAccessiblePPs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ItemsInLevel_Inner = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventHasItemOfType_Parms, ItemsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleManager_eventHasItemOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuzzleManager_eventHasItemOfType_Parms), &Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_Term,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_NewAccessiblePPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_NewAccessiblePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ItemsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ItemsInLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "HasItemOfType", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::PuzzleManager_eventHasItemOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::PuzzleManager_eventHasItemOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_HasItemOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_HasItemOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "InitialisePPPtrs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics
	{
		struct PuzzleManager_eventIsGPPInViewport_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleManager_eventIsGPPInViewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuzzleManager_eventIsGPPInViewport_Parms), &Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "IsGPPInViewport", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::PuzzleManager_eventIsGPPInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::PuzzleManager_eventIsGPPInViewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_IsGPPInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_IsGPPInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics
	{
		struct PuzzleManager_eventLoadItemBPs_Parms
		{
			TArray<TSubclassOf<UItem> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventLoadItemBPs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "LoadItemBPs", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::PuzzleManager_eventLoadItemBPs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::PuzzleManager_eventLoadItemBPs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_LoadItemBPs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_LoadItemBPs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics
	{
		struct PuzzleManager_eventLoadPuzzlePointBPs_Parms
		{
			TArray<TSubclassOf<UPuzzlePoint> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventLoadPuzzlePointBPs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "LoadPuzzlePointBPs", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::PuzzleManager_eventLoadPuzzlePointBPs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::PuzzleManager_eventLoadPuzzlePointBPs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics
	{
		struct PuzzleManager_eventLoadRuleBPs_Parms
		{
			TArray<TSubclassOf<URule> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventLoadRuleBPs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "LoadRuleBPs", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::PuzzleManager_eventLoadRuleBPs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::PuzzleManager_eventLoadRuleBPs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_LoadRuleBPs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_LoadRuleBPs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_PopulateRulePointers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_PopulateRulePointers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_PopulateRulePointers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "PopulateRulePointers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_PopulateRulePointers_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_PopulateRulePointers_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_PopulateRulePointers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_PopulateRulePointers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_PrintAllRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_PrintAllRules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_PrintAllRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "PrintAllRules", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_PrintAllRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_PrintAllRules_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_PrintAllRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_PrintAllRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_PrintLeaves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_PrintLeaves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_PrintLeaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "PrintLeaves", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_PrintLeaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_PrintLeaves_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_PrintLeaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_PrintLeaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics
	{
		struct PuzzleManager_eventPuzzleContains_Parms
		{
			UItem* Item;
			URule* Parent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventPuzzleContains_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventPuzzleContains_Parms, Parent), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleManager_eventPuzzleContains_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuzzleManager_eventPuzzleContains_Parms), &Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "PuzzleContains", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::PuzzleManager_eventPuzzleContains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::PuzzleManager_eventPuzzleContains_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_PuzzleContains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_PuzzleContains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "RetryIsGPPInViewport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_ReturnLeaves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_ReturnLeaves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_ReturnLeaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "ReturnLeaves", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_ReturnLeaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_ReturnLeaves_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_ReturnLeaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_ReturnLeaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_RulesFor_Statics
	{
		struct PuzzleManager_eventRulesFor_Parms
		{
			UGameItem* GameItem;
			TArray<URule*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_GameItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventRulesFor_Parms, GameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_GameItem_MetaData), Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_GameItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventRulesFor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "RulesFor", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::PuzzleManager_eventRulesFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::PuzzleManager_eventRulesFor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_RulesFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_RulesFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "SetupDbItemsOnStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_TriggerEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_TriggerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_TriggerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "TriggerEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_TriggerEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_TriggerEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APuzzleManager_TriggerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_TriggerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics
	{
		struct PuzzleManager_eventUpdatePlayerProperties_Parms
		{
			UItemProperty* Property;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleManager_eventUpdatePlayerProperties_Parms, Property), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleManager, nullptr, "UpdatePlayerProperties", nullptr, nullptr, Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::PuzzleManager_eventUpdatePlayerProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::PuzzleManager_eventUpdatePlayerProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAllRules_MetaData[];
#endif
		static void NewProp_UseAllRules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAllRules;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RulePointers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RulePointers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RulePointers;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalsPicked_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalsPicked_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GoalsPicked;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PickedGoalStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedGoalStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PickedGoalStrings;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePPs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActivePPs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGeneratedPuzzles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveGeneratedPuzzles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PPLoaded_MetaData[];
#endif
		static void NewProp_PPLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PPLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsLoaded_MetaData[];
#endif
		static void NewProp_ItemsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ItemsLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RulesLoaded_MetaData[];
#endif
		static void NewProp_RulesLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RulesLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPPToFind_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GPPToFind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleToFind_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleToFind;
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
		{ &Z_Construct_UFunction_APuzzleManager_ActivateMaxPuzzlePoints, "ActivateMaxPuzzlePoints" }, // 1762936443
		{ &Z_Construct_UFunction_APuzzleManager_ActivateProperties, "ActivateProperties" }, // 3294379903
		{ &Z_Construct_UFunction_APuzzleManager_ActivatePuzzlePoint, "ActivatePuzzlePoint" }, // 3762621961
		{ &Z_Construct_UFunction_APuzzleManager_AddApplicableRule, "AddApplicableRule" }, // 1217035004
		{ &Z_Construct_UFunction_APuzzleManager_AddPuzzle, "AddPuzzle" }, // 1281223752
		{ &Z_Construct_UFunction_APuzzleManager_AssignPlayer, "AssignPlayer" }, // 2362844116
		{ &Z_Construct_UFunction_APuzzleManager_CheckIfPuzzleToBeGenerated, "CheckIfPuzzleToBeGenerated" }, // 1401144944
		{ &Z_Construct_UFunction_APuzzleManager_DeactivatePuzzlePoint, "DeactivatePuzzlePoint" }, // 1152937369
		{ &Z_Construct_UFunction_APuzzleManager_DestroyDialogue, "DestroyDialogue" }, // 643231884
		{ &Z_Construct_UFunction_APuzzleManager_ExecuteRule, "ExecuteRule" }, // 3978695043
		{ &Z_Construct_UFunction_APuzzleManager_FindDbItemsFor, "FindDbItemsFor" }, // 4079131118
		{ &Z_Construct_UFunction_APuzzleManager_FindItemsForOutputs, "FindItemsForOutputs" }, // 3795709974
		{ &Z_Construct_UFunction_APuzzleManager_FindLeaves, "FindLeaves" }, // 1115912063
		{ &Z_Construct_UFunction_APuzzleManager_GenerateForActivePuzzlePoints, "GenerateForActivePuzzlePoints" }, // 3110264395
		{ &Z_Construct_UFunction_APuzzleManager_GetAllItems, "GetAllItems" }, // 3393791194
		{ &Z_Construct_UFunction_APuzzleManager_GetAllPPs, "GetAllPPs" }, // 3228642255
		{ &Z_Construct_UFunction_APuzzleManager_GetAllRules, "GetAllRules" }, // 47216285
		{ &Z_Construct_UFunction_APuzzleManager_GetCurrentArea, "GetCurrentArea" }, // 68530450
		{ &Z_Construct_UFunction_APuzzleManager_GetCurrentAreaName, "GetCurrentAreaName" }, // 3348394490
		{ &Z_Construct_UFunction_APuzzleManager_GetGameItemsInWorld, "GetGameItemsInWorld" }, // 1588317882
		{ &Z_Construct_UFunction_APuzzleManager_GetGPPsInViewport, "GetGPPsInViewport" }, // 2928160446
		{ &Z_Construct_UFunction_APuzzleManager_GetHint, "GetHint" }, // 344876490
		{ &Z_Construct_UFunction_APuzzleManager_GetItemsInWorld, "GetItemsInWorld" }, // 1059699222
		{ &Z_Construct_UFunction_APuzzleManager_GetItemsOfType, "GetItemsOfType" }, // 1821790974
		{ &Z_Construct_UFunction_APuzzleManager_GetObject, "GetObject" }, // 979355358
		{ &Z_Construct_UFunction_APuzzleManager_GetObjective, "GetObjective" }, // 3950252527
		{ &Z_Construct_UFunction_APuzzleManager_GetPlayer, "GetPlayer" }, // 2541011315
		{ &Z_Construct_UFunction_APuzzleManager_GetPPsInWorld, "GetPPsInWorld" }, // 182560857
		{ &Z_Construct_UFunction_APuzzleManager_GetRulePointers, "GetRulePointers" }, // 3140136903
		{ &Z_Construct_UFunction_APuzzleManager_GetRulesWithInput, "GetRulesWithInput" }, // 1046896975
		{ &Z_Construct_UFunction_APuzzleManager_GetRulesWithOutput, "GetRulesWithOutput" }, // 292368387
		{ &Z_Construct_UFunction_APuzzleManager_HasItemOfType, "HasItemOfType" }, // 1868364753
		{ &Z_Construct_UFunction_APuzzleManager_InitialisePPPtrs, "InitialisePPPtrs" }, // 3493482082
		{ &Z_Construct_UFunction_APuzzleManager_IsGPPInViewport, "IsGPPInViewport" }, // 1883914194
		{ &Z_Construct_UFunction_APuzzleManager_LoadItemBPs, "LoadItemBPs" }, // 78148084
		{ &Z_Construct_UFunction_APuzzleManager_LoadPuzzlePointBPs, "LoadPuzzlePointBPs" }, // 2539546048
		{ &Z_Construct_UFunction_APuzzleManager_LoadRuleBPs, "LoadRuleBPs" }, // 3064361660
		{ &Z_Construct_UFunction_APuzzleManager_PopulateRulePointers, "PopulateRulePointers" }, // 41979425
		{ &Z_Construct_UFunction_APuzzleManager_PrintAllRules, "PrintAllRules" }, // 1739689885
		{ &Z_Construct_UFunction_APuzzleManager_PrintLeaves, "PrintLeaves" }, // 1048485897
		{ &Z_Construct_UFunction_APuzzleManager_PuzzleContains, "PuzzleContains" }, // 2550224499
		{ &Z_Construct_UFunction_APuzzleManager_RetryIsGPPInViewport, "RetryIsGPPInViewport" }, // 2118265750
		{ &Z_Construct_UFunction_APuzzleManager_ReturnLeaves, "ReturnLeaves" }, // 1608340300
		{ &Z_Construct_UFunction_APuzzleManager_RulesFor, "RulesFor" }, // 1221365577
		{ &Z_Construct_UFunction_APuzzleManager_SetupDbItemsOnStart, "SetupDbItemsOnStart" }, // 978279458
		{ &Z_Construct_UFunction_APuzzleManager_TriggerEnd, "TriggerEnd" }, // 2759729158
		{ &Z_Construct_UFunction_APuzzleManager_UpdatePlayerProperties, "UpdatePlayerProperties" }, // 321120939
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	void Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules_SetBit(void* Obj)
	{
		((APuzzleManager*)Obj)->UseAllRules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules = { "UseAllRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuzzleManager), &Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules_MetaData) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers_Inner = { "RulePointers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers = { "RulePointers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, RulePointers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers_MetaData) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked_Inner = { "GoalsPicked", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked = { "GoalsPicked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, GoalsPicked), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings_Inner = { "PickedGoalStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings = { "PickedGoalStrings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, PickedGoalStrings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePPs_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePPs = { "ActivePPs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, ActivePPs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePPs_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePPs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActiveGeneratedPuzzles_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActiveGeneratedPuzzles = { "ActiveGeneratedPuzzles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, ActiveGeneratedPuzzles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActiveGeneratedPuzzles_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActiveGeneratedPuzzles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	void Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded_SetBit(void* Obj)
	{
		((APuzzleManager*)Obj)->PPLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded = { "PPLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuzzleManager), &Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	void Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded_SetBit(void* Obj)
	{
		((APuzzleManager*)Obj)->ItemsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded = { "ItemsLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuzzleManager), &Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	void Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded_SetBit(void* Obj)
	{
		((APuzzleManager*)Obj)->RulesLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded = { "RulesLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuzzleManager), &Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_GPPToFind_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_GPPToFind = { "GPPToFind", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, GPPToFind), Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_GPPToFind_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_GPPToFind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleToFind_MetaData[] = {
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleToFind = { "RuleToFind", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, RuleToFind), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleToFind_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleToFind_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_StartArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_UseAllRules,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulePointers,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GoalsPicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PickedGoalStrings,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActivePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ActiveGeneratedPuzzles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_PPLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_ItemsLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RulesLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_GPPToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_RuleToFind,
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
		{ Z_Construct_UClass_APuzzleManager, APuzzleManager::StaticClass, TEXT("APuzzleManager"), &Z_Registration_Info_UClass_APuzzleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleManager), 3914892081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87984251(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
