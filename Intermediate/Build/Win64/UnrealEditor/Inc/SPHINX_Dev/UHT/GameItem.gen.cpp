// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/GameItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UGameItem::execFulfillsProperties)
	{
		P_GET_OBJECT(UTerm,Z_Param_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FulfillsProperties(Z_Param_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execRuleFulfilled)
	{
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RuleFulfilled(Z_Param_Rule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execSpawn)
	{
		P_GET_OBJECT(UGameItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execGetPuzzleManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APuzzleManager**)Z_Param__Result=P_THIS->GetPuzzleManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execIsDestructible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDestructible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execGetProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemProperty**)Z_Param__Result=P_THIS->GetProperty(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execHasProperty)
	{
		P_GET_OBJECT(UItemProperty,Z_Param_PropertyToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasProperty(Z_Param_PropertyToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execExecuteRule)
	{
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteRule(Z_Param_Rule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execOnGameItemClicked)
	{
		P_GET_OBJECT(UActionMenu,Z_Param_ActionMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameItemClicked(Z_Param_ActionMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameItem::execSetupDbItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupDbItem();
		P_NATIVE_END;
	}
	void UGameItem::StaticRegisterNativesUGameItem()
	{
		UClass* Class = UGameItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteRule", &UGameItem::execExecuteRule },
			{ "FulfillsProperties", &UGameItem::execFulfillsProperties },
			{ "GetProperty", &UGameItem::execGetProperty },
			{ "GetPuzzleManager", &UGameItem::execGetPuzzleManager },
			{ "HasProperty", &UGameItem::execHasProperty },
			{ "IsDestructible", &UGameItem::execIsDestructible },
			{ "OnGameItemClicked", &UGameItem::execOnGameItemClicked },
			{ "RuleFulfilled", &UGameItem::execRuleFulfilled },
			{ "SetupDbItem", &UGameItem::execSetupDbItem },
			{ "Spawn", &UGameItem::execSpawn },
			{ "ToString", &UGameItem::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameItem_ExecuteRule_Statics
	{
		struct GameItem_eventExecuteRule_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventExecuteRule_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::NewProp_Rule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "ExecuteRule", nullptr, nullptr, Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::GameItem_eventExecuteRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::GameItem_eventExecuteRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_ExecuteRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_ExecuteRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics
	{
		struct GameItem_eventFulfillsProperties_Parms
		{
			UTerm* Input;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventFulfillsProperties_Parms, Input), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameItem_eventFulfillsProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameItem_eventFulfillsProperties_Parms), &Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "FulfillsProperties", nullptr, nullptr, Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::GameItem_eventFulfillsProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::GameItem_eventFulfillsProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_FulfillsProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_FulfillsProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_GetProperty_Statics
	{
		struct GameItem_eventGetProperty_Parms
		{
			FString PropertyName;
			UItemProperty* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameItem_GetProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventGetProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_GetProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventGetProperty_Parms, ReturnValue), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_GetProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_GetProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_GetProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_GetProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_GetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "GetProperty", nullptr, nullptr, Z_Construct_UFunction_UGameItem_GetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_GetProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_GetProperty_Statics::GameItem_eventGetProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_GetProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_GetProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_GetProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_GetProperty_Statics::GameItem_eventGetProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_GetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_GetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics
	{
		struct GameItem_eventGetPuzzleManager_Parms
		{
			APuzzleManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventGetPuzzleManager_Parms, ReturnValue), Z_Construct_UClass_APuzzleManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "GetPuzzleManager", nullptr, nullptr, Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::GameItem_eventGetPuzzleManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::GameItem_eventGetPuzzleManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_GetPuzzleManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_GetPuzzleManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_HasProperty_Statics
	{
		struct GameItem_eventHasProperty_Parms
		{
			UItemProperty* PropertyToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertyToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_HasProperty_Statics::NewProp_PropertyToCheck = { "PropertyToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventHasProperty_Parms, PropertyToCheck), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGameItem_HasProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameItem_eventHasProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameItem_HasProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameItem_eventHasProperty_Parms), &Z_Construct_UFunction_UGameItem_HasProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_HasProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_HasProperty_Statics::NewProp_PropertyToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_HasProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_HasProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_HasProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "HasProperty", nullptr, nullptr, Z_Construct_UFunction_UGameItem_HasProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_HasProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_HasProperty_Statics::GameItem_eventHasProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_HasProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_HasProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_HasProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_HasProperty_Statics::GameItem_eventHasProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_HasProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_HasProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_IsDestructible_Statics
	{
		struct GameItem_eventIsDestructible_Parms
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
	void Z_Construct_UFunction_UGameItem_IsDestructible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameItem_eventIsDestructible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameItem_IsDestructible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameItem_eventIsDestructible_Parms), &Z_Construct_UFunction_UGameItem_IsDestructible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_IsDestructible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_IsDestructible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_IsDestructible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_IsDestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "IsDestructible", nullptr, nullptr, Z_Construct_UFunction_UGameItem_IsDestructible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_IsDestructible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_IsDestructible_Statics::GameItem_eventIsDestructible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_IsDestructible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_IsDestructible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_IsDestructible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_IsDestructible_Statics::GameItem_eventIsDestructible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_IsDestructible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_IsDestructible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics
	{
		struct GameItem_eventOnGameItemClicked_Parms
		{
			UActionMenu* ActionMenu;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::NewProp_ActionMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::NewProp_ActionMenu = { "ActionMenu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventOnGameItemClicked_Parms, ActionMenu), Z_Construct_UClass_UActionMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::NewProp_ActionMenu_MetaData), Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::NewProp_ActionMenu_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::NewProp_ActionMenu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* void OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader, UPuzzlePoint* PP, bool Inventory); */" },
#endif
		{ "ModuleRelativePath", "GameItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader, UPuzzlePoint* PP, bool Inventory);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "OnGameItemClicked", nullptr, nullptr, Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::GameItem_eventOnGameItemClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::GameItem_eventOnGameItemClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_OnGameItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_OnGameItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics
	{
		struct GameItem_eventRuleFulfilled_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventRuleFulfilled_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameItem_eventRuleFulfilled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameItem_eventRuleFulfilled_Parms), &Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "RuleFulfilled", nullptr, nullptr, Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::GameItem_eventRuleFulfilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::GameItem_eventRuleFulfilled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_RuleFulfilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_RuleFulfilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_SetupDbItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_SetupDbItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_SetupDbItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "SetupDbItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_SetupDbItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_SetupDbItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameItem_SetupDbItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_SetupDbItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_Spawn_Statics
	{
		struct GameItem_eventSpawn_Parms
		{
			UGameItem* Item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_Spawn_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_Spawn_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventSpawn_Parms, Item), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_Spawn_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_UGameItem_Spawn_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_Spawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_Spawn_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "Spawn", nullptr, nullptr, Z_Construct_UFunction_UGameItem_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_Spawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_Spawn_Statics::GameItem_eventSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_Spawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_Spawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_Spawn_Statics::GameItem_eventSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameItem_ToString_Statics
	{
		struct GameItem_eventToString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameItem_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UGameItem_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_ToString_Statics::GameItem_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_ToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_ToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_ToString_Statics::GameItem_eventToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameItem);
	UClass* Z_Construct_UClass_UGameItem_NoRegister()
	{
		return UGameItem::StaticClass();
	}
	struct Z_Construct_UClass_UGameItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DbItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DbItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainedValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsNPC_MetaData[];
#endif
		static void NewProp_IsNPC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInitNPC_MetaData[];
#endif
		static void NewProp_IsInitNPC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInitNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUp_MetaData[];
#endif
		static void NewProp_PickedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PickedUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameItem_ExecuteRule, "ExecuteRule" }, // 568206114
		{ &Z_Construct_UFunction_UGameItem_FulfillsProperties, "FulfillsProperties" }, // 1477479554
		{ &Z_Construct_UFunction_UGameItem_GetProperty, "GetProperty" }, // 916745009
		{ &Z_Construct_UFunction_UGameItem_GetPuzzleManager, "GetPuzzleManager" }, // 3459181323
		{ &Z_Construct_UFunction_UGameItem_HasProperty, "HasProperty" }, // 3262056775
		{ &Z_Construct_UFunction_UGameItem_IsDestructible, "IsDestructible" }, // 2332088490
		{ &Z_Construct_UFunction_UGameItem_OnGameItemClicked, "OnGameItemClicked" }, // 547198023
		{ &Z_Construct_UFunction_UGameItem_RuleFulfilled, "RuleFulfilled" }, // 3772268362
		{ &Z_Construct_UFunction_UGameItem_SetupDbItem, "SetupDbItem" }, // 1120068500
		{ &Z_Construct_UFunction_UGameItem_Spawn, "Spawn" }, // 3077603014
		{ &Z_Construct_UFunction_UGameItem_ToString, "ToString" }, // 4162528043
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameItem.h" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem = { "DbItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, DbItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue_MetaData[] = {
		{ "Category", "GameItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue = { "ContainedValue", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, ContainedValue), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->IsNPC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC = { "IsNPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->IsInitNPC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC = { "IsInitNPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp_MetaData[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->PickedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp = { "PickedUp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Selected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_PickedUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameItem_Statics::ClassParams = {
		&UGameItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameItem()
	{
		if (!Z_Registration_Info_UClass_UGameItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameItem.OuterSingleton, Z_Construct_UClass_UGameItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameItem.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UGameItem>()
	{
		return UGameItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameItem);
	UGameItem::~UGameItem() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameItem, UGameItem::StaticClass, TEXT("UGameItem"), &Z_Registration_Info_UClass_UGameItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameItem), 1655982946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_3188737213(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
