// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Rule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(URule::execInitialiseRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitialiseRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execGetDbItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDbItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execToPMString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToPMString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execToChildrenPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToChildrenPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execToInputsPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToInputsPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execToOutputsPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToOutputsPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URule**)Z_Param__Result=P_THIS->Clone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execContainsItem)
	{
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execToShortString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToShortString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execGetRuleAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRuleAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execHasPlayerInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPlayerInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execMainOutputIs)
	{
		P_GET_OBJECT(UTerm,Z_Param_Term);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MainOutputIs(Z_Param_Term);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execRemoveLastAddedRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLastAddedRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execAddChildRule)
	{
		P_GET_OBJECT(URule,Z_Param_Child);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChildRule(Z_Param_Child);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execDeleteInputAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteInputAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execDeleteOutputAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteOutputAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execAddInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execAddOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOutput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URule::execIsEqual)
	{
		P_GET_OBJECT(UObject,Z_Param_OtherObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEqual(Z_Param_OtherObject);
		P_NATIVE_END;
	}
	void URule::StaticRegisterNativesURule()
	{
		UClass* Class = URule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildRule", &URule::execAddChildRule },
			{ "AddInput", &URule::execAddInput },
			{ "AddOutput", &URule::execAddOutput },
			{ "Clone", &URule::execClone },
			{ "ContainsItem", &URule::execContainsItem },
			{ "DeleteInputAtIndex", &URule::execDeleteInputAtIndex },
			{ "DeleteOutputAtIndex", &URule::execDeleteOutputAtIndex },
			{ "GetDbItems", &URule::execGetDbItems },
			{ "GetRuleAsString", &URule::execGetRuleAsString },
			{ "HasPlayerInput", &URule::execHasPlayerInput },
			{ "InitialiseRule", &URule::execInitialiseRule },
			{ "IsEqual", &URule::execIsEqual },
			{ "MainOutputIs", &URule::execMainOutputIs },
			{ "RemoveLastAddedRule", &URule::execRemoveLastAddedRule },
			{ "ToChildrenPtr", &URule::execToChildrenPtr },
			{ "ToInputsPtr", &URule::execToInputsPtr },
			{ "ToOutputsPtr", &URule::execToOutputsPtr },
			{ "ToPMString", &URule::execToPMString },
			{ "ToShortString", &URule::execToShortString },
			{ "ToString", &URule::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URule_AddChildRule_Statics
	{
		struct Rule_eventAddChildRule_Parms
		{
			URule* Child;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Child;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URule_AddChildRule_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventAddChildRule_Parms, Child), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_AddChildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_AddChildRule_Statics::NewProp_Child,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_AddChildRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_AddChildRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "AddChildRule", nullptr, nullptr, Z_Construct_UFunction_URule_AddChildRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_AddChildRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_AddChildRule_Statics::Rule_eventAddChildRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_AddChildRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_AddChildRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_AddChildRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_AddChildRule_Statics::Rule_eventAddChildRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_AddChildRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_AddChildRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_AddInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_AddInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_AddInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "AddInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_AddInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_AddInput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_AddInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_AddInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_AddOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_AddOutput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_AddOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "AddOutput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_AddOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_AddOutput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_AddOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_AddOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_Clone_Statics
	{
		struct Rule_eventClone_Parms
		{
			URule* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URule_Clone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventClone_Parms, ReturnValue), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_Clone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_Clone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_Clone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "Clone", nullptr, nullptr, Z_Construct_UFunction_URule_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_Clone_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_Clone_Statics::Rule_eventClone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_Clone_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_Clone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_Clone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_Clone_Statics::Rule_eventClone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ContainsItem_Statics
	{
		struct Rule_eventContainsItem_Parms
		{
			UItem* Item;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URule_ContainsItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventContainsItem_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URule_ContainsItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Rule_eventContainsItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URule_ContainsItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Rule_eventContainsItem_Parms), &Z_Construct_UFunction_URule_ContainsItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_ContainsItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_ContainsItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_ContainsItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ContainsItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ContainsItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ContainsItem", nullptr, nullptr, Z_Construct_UFunction_URule_ContainsItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ContainsItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_ContainsItem_Statics::Rule_eventContainsItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ContainsItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ContainsItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ContainsItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_ContainsItem_Statics::Rule_eventContainsItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_ContainsItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ContainsItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics
	{
		struct Rule_eventDeleteInputAtIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventDeleteInputAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "DeleteInputAtIndex", nullptr, nullptr, Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::Rule_eventDeleteInputAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::Rule_eventDeleteInputAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_DeleteInputAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_DeleteInputAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics
	{
		struct Rule_eventDeleteOutputAtIndex_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventDeleteOutputAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "DeleteOutputAtIndex", nullptr, nullptr, Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::Rule_eventDeleteOutputAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::Rule_eventDeleteOutputAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_DeleteOutputAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_DeleteOutputAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_GetDbItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_GetDbItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_GetDbItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "GetDbItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_GetDbItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_GetDbItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_GetDbItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_GetDbItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_GetRuleAsString_Statics
	{
		struct Rule_eventGetRuleAsString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URule_GetRuleAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventGetRuleAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_GetRuleAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_GetRuleAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_GetRuleAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_GetRuleAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "GetRuleAsString", nullptr, nullptr, Z_Construct_UFunction_URule_GetRuleAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_GetRuleAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_GetRuleAsString_Statics::Rule_eventGetRuleAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_GetRuleAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_GetRuleAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_GetRuleAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_GetRuleAsString_Statics::Rule_eventGetRuleAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_GetRuleAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_GetRuleAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_HasPlayerInput_Statics
	{
		struct Rule_eventHasPlayerInput_Parms
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
	void Z_Construct_UFunction_URule_HasPlayerInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Rule_eventHasPlayerInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URule_HasPlayerInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Rule_eventHasPlayerInput_Parms), &Z_Construct_UFunction_URule_HasPlayerInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_HasPlayerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_HasPlayerInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_HasPlayerInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_HasPlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "HasPlayerInput", nullptr, nullptr, Z_Construct_UFunction_URule_HasPlayerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_HasPlayerInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_HasPlayerInput_Statics::Rule_eventHasPlayerInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_HasPlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_HasPlayerInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_HasPlayerInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_HasPlayerInput_Statics::Rule_eventHasPlayerInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_HasPlayerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_HasPlayerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_InitialiseRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_InitialiseRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_InitialiseRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "InitialiseRule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_InitialiseRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_InitialiseRule_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_InitialiseRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_InitialiseRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_IsEqual_Statics
	{
		struct Rule_eventIsEqual_Parms
		{
			const UObject* OtherObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_OtherObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_OtherObject = { "OtherObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventIsEqual_Parms, OtherObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_OtherObject_MetaData), Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_OtherObject_MetaData) };
	void Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Rule_eventIsEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Rule_eventIsEqual_Parms), &Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_IsEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_OtherObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_IsEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_IsEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_IsEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "IsEqual", nullptr, nullptr, Z_Construct_UFunction_URule_IsEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_IsEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_IsEqual_Statics::Rule_eventIsEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_IsEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_IsEqual_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_IsEqual_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_IsEqual_Statics::Rule_eventIsEqual_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_IsEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_IsEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_MainOutputIs_Statics
	{
		struct Rule_eventMainOutputIs_Parms
		{
			UTerm* Term;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Term;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URule_MainOutputIs_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventMainOutputIs_Parms, Term), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URule_MainOutputIs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Rule_eventMainOutputIs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URule_MainOutputIs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Rule_eventMainOutputIs_Parms), &Z_Construct_UFunction_URule_MainOutputIs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_MainOutputIs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_MainOutputIs_Statics::NewProp_Term,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_MainOutputIs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_MainOutputIs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_MainOutputIs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "MainOutputIs", nullptr, nullptr, Z_Construct_UFunction_URule_MainOutputIs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_MainOutputIs_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_MainOutputIs_Statics::Rule_eventMainOutputIs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_MainOutputIs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_MainOutputIs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_MainOutputIs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_MainOutputIs_Statics::Rule_eventMainOutputIs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_MainOutputIs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_MainOutputIs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_RemoveLastAddedRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_RemoveLastAddedRule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_RemoveLastAddedRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "RemoveLastAddedRule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_RemoveLastAddedRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_RemoveLastAddedRule_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_RemoveLastAddedRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_RemoveLastAddedRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ToChildrenPtr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ToChildrenPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ToChildrenPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ToChildrenPtr", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToChildrenPtr_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ToChildrenPtr_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_ToChildrenPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ToChildrenPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ToInputsPtr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ToInputsPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ToInputsPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ToInputsPtr", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToInputsPtr_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ToInputsPtr_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_ToInputsPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ToInputsPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ToOutputsPtr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ToOutputsPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ToOutputsPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ToOutputsPtr", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToOutputsPtr_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ToOutputsPtr_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URule_ToOutputsPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ToOutputsPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ToPMString_Statics
	{
		struct Rule_eventToPMString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URule_ToPMString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventToPMString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_ToPMString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_ToPMString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ToPMString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ToPMString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ToPMString", nullptr, nullptr, Z_Construct_UFunction_URule_ToPMString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToPMString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_ToPMString_Statics::Rule_eventToPMString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToPMString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ToPMString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToPMString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_ToPMString_Statics::Rule_eventToPMString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_ToPMString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ToPMString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ToShortString_Statics
	{
		struct Rule_eventToShortString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URule_ToShortString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventToShortString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_ToShortString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_ToShortString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ToShortString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ToShortString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ToShortString", nullptr, nullptr, Z_Construct_UFunction_URule_ToShortString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToShortString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_ToShortString_Statics::Rule_eventToShortString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToShortString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ToShortString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToShortString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_ToShortString_Statics::Rule_eventToShortString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_ToShortString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ToShortString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URule_ToString_Statics
	{
		struct Rule_eventToString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URule_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Rule_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URule_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URule_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URule_ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URule_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URule, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_URule_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URule_ToString_Statics::Rule_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URule_ToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URule_ToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URule_ToString_Statics::Rule_eventToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URule_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URule_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URule);
	UClass* Z_Construct_UClass_URule_NoRegister()
	{
		return URule::StaticClass();
	}
	struct Z_Construct_UClass_URule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutputsBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputsBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputsBP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputsBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputsBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsBP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChildrenBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenBP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[];
#endif
		static void NewProp_bAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectedInput_MetaData[];
#endif
		static void NewProp_bSelectedInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectedInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInventory_MetaData[];
#endif
		static void NewProp_bInventory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URule_AddChildRule, "AddChildRule" }, // 2001653974
		{ &Z_Construct_UFunction_URule_AddInput, "AddInput" }, // 1051060185
		{ &Z_Construct_UFunction_URule_AddOutput, "AddOutput" }, // 287251476
		{ &Z_Construct_UFunction_URule_Clone, "Clone" }, // 131246586
		{ &Z_Construct_UFunction_URule_ContainsItem, "ContainsItem" }, // 1742011
		{ &Z_Construct_UFunction_URule_DeleteInputAtIndex, "DeleteInputAtIndex" }, // 771535037
		{ &Z_Construct_UFunction_URule_DeleteOutputAtIndex, "DeleteOutputAtIndex" }, // 860461923
		{ &Z_Construct_UFunction_URule_GetDbItems, "GetDbItems" }, // 3105820737
		{ &Z_Construct_UFunction_URule_GetRuleAsString, "GetRuleAsString" }, // 1961023621
		{ &Z_Construct_UFunction_URule_HasPlayerInput, "HasPlayerInput" }, // 1139320624
		{ &Z_Construct_UFunction_URule_InitialiseRule, "InitialiseRule" }, // 4133552141
		{ &Z_Construct_UFunction_URule_IsEqual, "IsEqual" }, // 2104045043
		{ &Z_Construct_UFunction_URule_MainOutputIs, "MainOutputIs" }, // 2166119519
		{ &Z_Construct_UFunction_URule_RemoveLastAddedRule, "RemoveLastAddedRule" }, // 4018126075
		{ &Z_Construct_UFunction_URule_ToChildrenPtr, "ToChildrenPtr" }, // 184935543
		{ &Z_Construct_UFunction_URule_ToInputsPtr, "ToInputsPtr" }, // 2501232765
		{ &Z_Construct_UFunction_URule_ToOutputsPtr, "ToOutputsPtr" }, // 3891607549
		{ &Z_Construct_UFunction_URule_ToPMString, "ToPMString" }, // 1247376672
		{ &Z_Construct_UFunction_URule_ToShortString, "ToShortString" }, // 564125521
		{ &Z_Construct_UFunction_URule_ToString, "ToString" }, // 3061468067
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Rule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URule_Statics::NewProp_OutputsBP_Inner = { "OutputsBP", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_OutputsBP_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_OutputsBP = { "OutputsBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, OutputsBP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_OutputsBP_MetaData), Z_Construct_UClass_URule_Statics::NewProp_OutputsBP_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Outputs_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Outputs_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URule_Statics::NewProp_InputsBP_Inner = { "InputsBP", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_InputsBP_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_InputsBP = { "InputsBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, InputsBP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_InputsBP_MetaData), Z_Construct_UClass_URule_Statics::NewProp_InputsBP_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Inputs_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Inputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Action_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_OwningPP_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URule_Statics::NewProp_OwningPP = { "OwningPP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, OwningPP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_OwningPP_MetaData), Z_Construct_UClass_URule_Statics::NewProp_OwningPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Hint_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Hint_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Hint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Parent), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP_Inner = { "ChildrenBP", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP = { "ChildrenBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, ChildrenBP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP_MetaData), Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Children_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Children_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_bAutomatic_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	void Z_Construct_UClass_URule_Statics::NewProp_bAutomatic_SetBit(void* Obj)
	{
		((URule*)Obj)->bAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URule_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URule), &Z_Construct_UClass_URule_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_bAutomatic_MetaData), Z_Construct_UClass_URule_Statics::NewProp_bAutomatic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	void Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput_SetBit(void* Obj)
	{
		((URule*)Obj)->bSelectedInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput = { "bSelectedInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URule), &Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput_MetaData), Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_bInventory_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	void Z_Construct_UClass_URule_Statics::NewProp_bInventory_SetBit(void* Obj)
	{
		((URule*)Obj)->bInventory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URule_Statics::NewProp_bInventory = { "bInventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URule), &Z_Construct_UClass_URule_Statics::NewProp_bInventory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_bInventory_MetaData), Z_Construct_UClass_URule_Statics::NewProp_bInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_RuleNumber_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URule_Statics::NewProp_RuleNumber = { "RuleNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, RuleNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_RuleNumber_MetaData), Z_Construct_UClass_URule_Statics::NewProp_RuleNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Name_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_OutputsBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_OutputsBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_InputsBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_InputsBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_OwningPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Hint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_bAutomatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_bSelectedInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_bInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_RuleNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URule_Statics::ClassParams = {
		&URule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::Class_MetaDataParams), Z_Construct_UClass_URule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URule()
	{
		if (!Z_Registration_Info_UClass_URule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URule.OuterSingleton, Z_Construct_UClass_URule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URule.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<URule>()
	{
		return URule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URule);
	URule::~URule() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URule, URule::StaticClass, TEXT("URule"), &Z_Registration_Info_UClass_URule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URule), 3382137338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_669082375(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
