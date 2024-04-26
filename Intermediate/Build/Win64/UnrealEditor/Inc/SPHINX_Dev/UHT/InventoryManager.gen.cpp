// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InventoryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInventoryManager();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInventoryManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(AInventoryManager::execGetInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGameItem*>*)Z_Param__Result=P_THIS->GetInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execGetSelectedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameItem**)Z_Param__Result=P_THIS->GetSelectedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execDeselectItemFromInventory)
	{
		P_GET_OBJECT(UGameItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectItemFromInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execSelectItemFromInventory)
	{
		P_GET_OBJECT(UGameItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectItemFromInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execDeleteItemFromInventory)
	{
		P_GET_OBJECT(UGameItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteItemFromInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execRemoveSelectedItemFromInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSelectedItemFromInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execRemoveItemFromInventory)
	{
		P_GET_OBJECT(UGameItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemFromInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryManager::execAddItemToInventory)
	{
		P_GET_OBJECT(UGameItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	void AInventoryManager::StaticRegisterNativesAInventoryManager()
	{
		UClass* Class = AInventoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &AInventoryManager::execAddItemToInventory },
			{ "DeleteItemFromInventory", &AInventoryManager::execDeleteItemFromInventory },
			{ "DeselectItemFromInventory", &AInventoryManager::execDeselectItemFromInventory },
			{ "GetInventory", &AInventoryManager::execGetInventory },
			{ "GetSelectedItem", &AInventoryManager::execGetSelectedItem },
			{ "RemoveItemFromInventory", &AInventoryManager::execRemoveItemFromInventory },
			{ "RemoveSelectedItemFromInventory", &AInventoryManager::execRemoveSelectedItemFromInventory },
			{ "SelectItemFromInventory", &AInventoryManager::execSelectItemFromInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics
	{
		struct InventoryManager_eventAddItemToInventory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventAddItemToInventory_Parms, Item), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "AddItemToInventory", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::InventoryManager_eventAddItemToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::InventoryManager_eventAddItemToInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics
	{
		struct InventoryManager_eventDeleteItemFromInventory_Parms
		{
			UGameItem* Item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventDeleteItemFromInventory_Parms, Item), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_Item_MetaData) };
	void Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryManager_eventDeleteItemFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryManager_eventDeleteItemFromInventory_Parms), &Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "DeleteItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::InventoryManager_eventDeleteItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::InventoryManager_eventDeleteItemFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics
	{
		struct InventoryManager_eventDeselectItemFromInventory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventDeselectItemFromInventory_Parms, Item), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "DeselectItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::InventoryManager_eventDeselectItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::InventoryManager_eventDeselectItemFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_GetInventory_Statics
	{
		struct InventoryManager_eventGetInventory_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventGetInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "GetInventory", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::InventoryManager_eventGetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::InventoryManager_eventGetInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics
	{
		struct InventoryManager_eventGetSelectedItem_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventGetSelectedItem_Parms, ReturnValue), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "GetSelectedItem", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::InventoryManager_eventGetSelectedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::InventoryManager_eventGetSelectedItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_GetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_GetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics
	{
		struct InventoryManager_eventRemoveItemFromInventory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventRemoveItemFromInventory_Parms, Item), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "RemoveItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::InventoryManager_eventRemoveItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::InventoryManager_eventRemoveItemFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "RemoveSelectedItemFromInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics
	{
		struct InventoryManager_eventSelectItemFromInventory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventSelectItemFromInventory_Parms, Item), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::NewProp_Item_MetaData), Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::NewProp_Item_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryManager, nullptr, "SelectItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::InventoryManager_eventSelectItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::InventoryManager_eventSelectItemFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryManager);
	UClass* Z_Construct_UClass_AInventoryManager_NoRegister()
	{
		return AInventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AInventoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInventoryManager_AddItemToInventory, "AddItemToInventory" }, // 4026230581
		{ &Z_Construct_UFunction_AInventoryManager_DeleteItemFromInventory, "DeleteItemFromInventory" }, // 2857641609
		{ &Z_Construct_UFunction_AInventoryManager_DeselectItemFromInventory, "DeselectItemFromInventory" }, // 2528826733
		{ &Z_Construct_UFunction_AInventoryManager_GetInventory, "GetInventory" }, // 1448261001
		{ &Z_Construct_UFunction_AInventoryManager_GetSelectedItem, "GetSelectedItem" }, // 1452062547
		{ &Z_Construct_UFunction_AInventoryManager_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 3552632234
		{ &Z_Construct_UFunction_AInventoryManager_RemoveSelectedItemFromInventory, "RemoveSelectedItemFromInventory" }, // 3618098120
		{ &Z_Construct_UFunction_AInventoryManager_SelectItemFromInventory, "SelectItemFromInventory" }, // 2791889821
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventoryManager.h" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryManager, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory_MetaData), Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryManager_Statics::NewProp_DbItem_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_DbItem = { "DbItem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryManager, DbItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::NewProp_DbItem_MetaData), Z_Construct_UClass_AInventoryManager_Statics::NewProp_DbItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryManager, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryManager_Statics::NewProp_SelectedItem_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryManager, SelectedItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::NewProp_SelectedItem_MetaData), Z_Construct_UClass_AInventoryManager_Statics::NewProp_SelectedItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryManager_Statics::NewProp_ActivePlayer_MetaData[] = {
		{ "Category", "InventoryManager" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryManager_Statics::NewProp_ActivePlayer = { "ActivePlayer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryManager, ActivePlayer), Z_Construct_UClass_AAvatar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::NewProp_ActivePlayer_MetaData), Z_Construct_UClass_AInventoryManager_Statics::NewProp_ActivePlayer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_SelectedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryManager_Statics::NewProp_ActivePlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryManager_Statics::ClassParams = {
		&AInventoryManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInventoryManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventoryManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInventoryManager()
	{
		if (!Z_Registration_Info_UClass_AInventoryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryManager.OuterSingleton, Z_Construct_UClass_AInventoryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInventoryManager.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AInventoryManager>()
	{
		return AInventoryManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryManager);
	AInventoryManager::~AInventoryManager() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryManager, AInventoryManager::StaticClass, TEXT("AInventoryManager"), &Z_Registration_Info_UClass_AInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryManager), 1587602569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_175792243(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
