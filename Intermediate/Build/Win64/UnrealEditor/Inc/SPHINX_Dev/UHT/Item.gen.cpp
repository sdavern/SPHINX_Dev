// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	SPHINX_DEV_API UEnum* Z_Construct_UEnum_SPHINX_Dev_EItemProperty();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UItem::execToPropPtrs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToPropPtrs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItem**)Z_Param__Result=P_THIS->Clone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execPostInitProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostInitProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execGetNextSpawnPt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNextSpawnPt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execIsInspectable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInspectable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execIsSpawnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpawnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execIsCopyable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCopyable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execIsCarryable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCarryable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execIsAccessible)
	{
		P_GET_TARRAY(UPuzzlePoint*,Z_Param_PPs);
		P_GET_TARRAY(UItem*,Z_Param_ItemsInScene);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAccessible(Z_Param_PPs,Z_Param_ItemsInScene);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execIsOfType)
	{
		P_GET_OBJECT(UTerm,Z_Param_Term);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOfType(Z_Param_Term);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execMatches)
	{
		P_GET_OBJECT(UTerm,Z_Param_Term);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Matches(Z_Param_Term);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execEquals)
	{
		P_GET_OBJECT(UObject,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equals(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execGetSuperTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSuperTypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execDeleteProperty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteProperty(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execAddPropertyOfType)
	{
		P_GET_ENUM(EItemProperty,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPropertyOfType(EItemProperty(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execHasProperty)
	{
		P_GET_OBJECT(UItemProperty,Z_Param_PropertyToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasProperty(Z_Param_PropertyToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execGetPropertyWithName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemProperty**)Z_Param__Result=P_THIS->GetPropertyWithName(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execGetPropertiesWithName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemProperty*>*)Z_Param__Result=P_THIS->GetPropertiesWithName(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execPropertyExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PropertyExists(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	void UItem::StaticRegisterNativesUItem()
	{
		UClass* Class = UItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPropertyOfType", &UItem::execAddPropertyOfType },
			{ "Clone", &UItem::execClone },
			{ "DeleteProperty", &UItem::execDeleteProperty },
			{ "Equals", &UItem::execEquals },
			{ "GetNextSpawnPt", &UItem::execGetNextSpawnPt },
			{ "GetPropertiesWithName", &UItem::execGetPropertiesWithName },
			{ "GetPropertyWithName", &UItem::execGetPropertyWithName },
			{ "GetSuperTypes", &UItem::execGetSuperTypes },
			{ "HasProperty", &UItem::execHasProperty },
			{ "IsAccessible", &UItem::execIsAccessible },
			{ "IsCarryable", &UItem::execIsCarryable },
			{ "IsCopyable", &UItem::execIsCopyable },
			{ "IsInspectable", &UItem::execIsInspectable },
			{ "IsOfType", &UItem::execIsOfType },
			{ "IsSpawnable", &UItem::execIsSpawnable },
			{ "Matches", &UItem::execMatches },
			{ "PostInitProperties", &UItem::execPostInitProperties },
			{ "PropertyExists", &UItem::execPropertyExists },
			{ "ToPropPtrs", &UItem::execToPropPtrs },
			{ "ToString", &UItem::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItem_AddPropertyOfType_Statics
	{
		struct Item_eventAddPropertyOfType_Parms
		{
			EItemProperty Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventAddPropertyOfType_Parms, Type), Z_Construct_UEnum_SPHINX_Dev_EItemProperty, METADATA_PARAMS(0, nullptr) }; // 973540946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "AddPropertyOfType", nullptr, nullptr, Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::Item_eventAddPropertyOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::Item_eventAddPropertyOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_AddPropertyOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_AddPropertyOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_Clone_Statics
	{
		struct Item_eventClone_Parms
		{
			UItem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_Clone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventClone_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_Clone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_Clone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_Clone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "Clone", nullptr, nullptr, Z_Construct_UFunction_UItem_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Clone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_Clone_Statics::Item_eventClone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Clone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_Clone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Clone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_Clone_Statics::Item_eventClone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_DeleteProperty_Statics
	{
		struct Item_eventDeleteProperty_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItem_DeleteProperty_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventDeleteProperty_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_DeleteProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_DeleteProperty_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_DeleteProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_DeleteProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "DeleteProperty", nullptr, nullptr, Z_Construct_UFunction_UItem_DeleteProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_DeleteProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_DeleteProperty_Statics::Item_eventDeleteProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_DeleteProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_DeleteProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_DeleteProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_DeleteProperty_Statics::Item_eventDeleteProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_DeleteProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_DeleteProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_Equals_Statics
	{
		struct Item_eventEquals_Parms
		{
			const UObject* Other;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_Equals_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_Equals_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventEquals_Parms, Other), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Equals_Statics::NewProp_Other_MetaData), Z_Construct_UFunction_UItem_Equals_Statics::NewProp_Other_MetaData) };
	void Z_Construct_UFunction_UItem_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventEquals_Parms), &Z_Construct_UFunction_UItem_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_Equals_Statics::NewProp_Other,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_Equals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "Equals", nullptr, nullptr, Z_Construct_UFunction_UItem_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_Equals_Statics::Item_eventEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_Equals_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Equals_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_Equals_Statics::Item_eventEquals_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics
	{
		struct Item_eventGetNextSpawnPt_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetNextSpawnPt_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetNextSpawnPt", nullptr, nullptr, Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::Item_eventGetNextSpawnPt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::Item_eventGetNextSpawnPt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_GetNextSpawnPt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetNextSpawnPt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics
	{
		struct Item_eventGetPropertiesWithName_Parms
		{
			FString PropertyName;
			TArray<UItemProperty*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetPropertiesWithName_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetPropertiesWithName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetPropertiesWithName", nullptr, nullptr, Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::Item_eventGetPropertiesWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::Item_eventGetPropertiesWithName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_GetPropertiesWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetPropertiesWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_GetPropertyWithName_Statics
	{
		struct Item_eventGetPropertyWithName_Parms
		{
			FString PropertyName;
			UItemProperty* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetPropertyWithName_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetPropertyWithName_Parms, ReturnValue), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetPropertyWithName", nullptr, nullptr, Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::Item_eventGetPropertyWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::Item_eventGetPropertyWithName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_GetPropertyWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetPropertyWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_GetSuperTypes_Statics
	{
		struct Item_eventGetSuperTypes_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_GetSuperTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItem_GetSuperTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetSuperTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetSuperTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetSuperTypes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetSuperTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetSuperTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetSuperTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetSuperTypes", nullptr, nullptr, Z_Construct_UFunction_UItem_GetSuperTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetSuperTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetSuperTypes_Statics::Item_eventGetSuperTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetSuperTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetSuperTypes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetSuperTypes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_GetSuperTypes_Statics::Item_eventGetSuperTypes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_GetSuperTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetSuperTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_HasProperty_Statics
	{
		struct Item_eventHasProperty_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_HasProperty_Statics::NewProp_PropertyToCheck = { "PropertyToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventHasProperty_Parms, PropertyToCheck), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UItem_HasProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventHasProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_HasProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventHasProperty_Parms), &Z_Construct_UFunction_UItem_HasProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_HasProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_HasProperty_Statics::NewProp_PropertyToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_HasProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_HasProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_HasProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "HasProperty", nullptr, nullptr, Z_Construct_UFunction_UItem_HasProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_HasProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_HasProperty_Statics::Item_eventHasProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_HasProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_HasProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_HasProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_HasProperty_Statics::Item_eventHasProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_HasProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_HasProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_IsAccessible_Statics
	{
		struct Item_eventIsAccessible_Parms
		{
			TArray<UPuzzlePoint*> PPs;
			TArray<UItem*> ItemsInScene;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PPs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PPs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInScene_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInScene;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_PPs_Inner = { "PPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_PPs = { "PPs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventIsAccessible_Parms, PPs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ItemsInScene_Inner = { "ItemsInScene", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ItemsInScene = { "ItemsInScene", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventIsAccessible_Parms, ItemsInScene), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventIsAccessible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventIsAccessible_Parms), &Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_IsAccessible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_PPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_PPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ItemsInScene_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ItemsInScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsAccessible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_IsAccessible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_IsAccessible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "IsAccessible", nullptr, nullptr, Z_Construct_UFunction_UItem_IsAccessible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsAccessible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_IsAccessible_Statics::Item_eventIsAccessible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsAccessible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_IsAccessible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsAccessible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_IsAccessible_Statics::Item_eventIsAccessible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_IsAccessible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_IsAccessible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_IsCarryable_Statics
	{
		struct Item_eventIsCarryable_Parms
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
	void Z_Construct_UFunction_UItem_IsCarryable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventIsCarryable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_IsCarryable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventIsCarryable_Parms), &Z_Construct_UFunction_UItem_IsCarryable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_IsCarryable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsCarryable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_IsCarryable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_IsCarryable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "IsCarryable", nullptr, nullptr, Z_Construct_UFunction_UItem_IsCarryable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsCarryable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_IsCarryable_Statics::Item_eventIsCarryable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsCarryable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_IsCarryable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsCarryable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_IsCarryable_Statics::Item_eventIsCarryable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_IsCarryable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_IsCarryable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_IsCopyable_Statics
	{
		struct Item_eventIsCopyable_Parms
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
	void Z_Construct_UFunction_UItem_IsCopyable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventIsCopyable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_IsCopyable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventIsCopyable_Parms), &Z_Construct_UFunction_UItem_IsCopyable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_IsCopyable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsCopyable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_IsCopyable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_IsCopyable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "IsCopyable", nullptr, nullptr, Z_Construct_UFunction_UItem_IsCopyable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsCopyable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_IsCopyable_Statics::Item_eventIsCopyable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsCopyable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_IsCopyable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsCopyable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_IsCopyable_Statics::Item_eventIsCopyable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_IsCopyable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_IsCopyable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_IsInspectable_Statics
	{
		struct Item_eventIsInspectable_Parms
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
	void Z_Construct_UFunction_UItem_IsInspectable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventIsInspectable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_IsInspectable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventIsInspectable_Parms), &Z_Construct_UFunction_UItem_IsInspectable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_IsInspectable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsInspectable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_IsInspectable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_IsInspectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "IsInspectable", nullptr, nullptr, Z_Construct_UFunction_UItem_IsInspectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsInspectable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_IsInspectable_Statics::Item_eventIsInspectable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsInspectable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_IsInspectable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsInspectable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_IsInspectable_Statics::Item_eventIsInspectable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_IsInspectable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_IsInspectable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_IsOfType_Statics
	{
		struct Item_eventIsOfType_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_IsOfType_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventIsOfType_Parms, Term), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UItem_IsOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventIsOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_IsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventIsOfType_Parms), &Z_Construct_UFunction_UItem_IsOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_IsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsOfType_Statics::NewProp_Term,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_IsOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_IsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "IsOfType", nullptr, nullptr, Z_Construct_UFunction_UItem_IsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_IsOfType_Statics::Item_eventIsOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_IsOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_IsOfType_Statics::Item_eventIsOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_IsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_IsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_IsSpawnable_Statics
	{
		struct Item_eventIsSpawnable_Parms
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
	void Z_Construct_UFunction_UItem_IsSpawnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventIsSpawnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_IsSpawnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventIsSpawnable_Parms), &Z_Construct_UFunction_UItem_IsSpawnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_IsSpawnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_IsSpawnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_IsSpawnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_IsSpawnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "IsSpawnable", nullptr, nullptr, Z_Construct_UFunction_UItem_IsSpawnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsSpawnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_IsSpawnable_Statics::Item_eventIsSpawnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsSpawnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_IsSpawnable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_IsSpawnable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_IsSpawnable_Statics::Item_eventIsSpawnable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_IsSpawnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_IsSpawnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_Matches_Statics
	{
		struct Item_eventMatches_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_Matches_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventMatches_Parms, Term), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UItem_Matches_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventMatches_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_Matches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventMatches_Parms), &Z_Construct_UFunction_UItem_Matches_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_Matches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_Matches_Statics::NewProp_Term,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_Matches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_Matches_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_Matches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "Matches", nullptr, nullptr, Z_Construct_UFunction_UItem_Matches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Matches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_Matches_Statics::Item_eventMatches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Matches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_Matches_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_Matches_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_Matches_Statics::Item_eventMatches_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_Matches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_Matches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_PostInitProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_PostInitProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_PostInitProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "PostInitProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_PostInitProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_PostInitProperties_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItem_PostInitProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_PostInitProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_PropertyExists_Statics
	{
		struct Item_eventPropertyExists_Parms
		{
			FString PropertyName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventPropertyExists_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_PropertyName_MetaData) };
	void Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventPropertyExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventPropertyExists_Parms), &Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_PropertyExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_PropertyExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_PropertyExists_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Item functions\n" },
#endif
		{ "ModuleRelativePath", "Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_PropertyExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "PropertyExists", nullptr, nullptr, Z_Construct_UFunction_UItem_PropertyExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_PropertyExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_PropertyExists_Statics::Item_eventPropertyExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_PropertyExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_PropertyExists_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_PropertyExists_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_PropertyExists_Statics::Item_eventPropertyExists_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_PropertyExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_PropertyExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_ToPropPtrs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_ToPropPtrs_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove if causing issues\n" },
#endif
		{ "ModuleRelativePath", "Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove if causing issues" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_ToPropPtrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "ToPropPtrs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_ToPropPtrs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_ToPropPtrs_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItem_ToPropPtrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_ToPropPtrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_ToString_Statics
	{
		struct Item_eventToString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItem_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UItem_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_ToString_Statics::Item_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_ToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_ToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItem_ToString_Statics::Item_eventToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItem_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_PropertiesBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertiesBP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPrefab_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemPrefab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LongDescription;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificSpawnPoints_MetaData[];
#endif
		static void NewProp_SpecificSpawnPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpecificSpawnPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStationary_MetaData[];
#endif
		static void NewProp_IsStationary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStationary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsIndestructible_MetaData[];
#endif
		static void NewProp_IsIndestructible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIndestructible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItem_AddPropertyOfType, "AddPropertyOfType" }, // 2256233135
		{ &Z_Construct_UFunction_UItem_Clone, "Clone" }, // 2687646893
		{ &Z_Construct_UFunction_UItem_DeleteProperty, "DeleteProperty" }, // 3567153302
		{ &Z_Construct_UFunction_UItem_Equals, "Equals" }, // 360647321
		{ &Z_Construct_UFunction_UItem_GetNextSpawnPt, "GetNextSpawnPt" }, // 3842576326
		{ &Z_Construct_UFunction_UItem_GetPropertiesWithName, "GetPropertiesWithName" }, // 2593579316
		{ &Z_Construct_UFunction_UItem_GetPropertyWithName, "GetPropertyWithName" }, // 3528290580
		{ &Z_Construct_UFunction_UItem_GetSuperTypes, "GetSuperTypes" }, // 2814588385
		{ &Z_Construct_UFunction_UItem_HasProperty, "HasProperty" }, // 1608075909
		{ &Z_Construct_UFunction_UItem_IsAccessible, "IsAccessible" }, // 2542930279
		{ &Z_Construct_UFunction_UItem_IsCarryable, "IsCarryable" }, // 4287664382
		{ &Z_Construct_UFunction_UItem_IsCopyable, "IsCopyable" }, // 2110608978
		{ &Z_Construct_UFunction_UItem_IsInspectable, "IsInspectable" }, // 2203098025
		{ &Z_Construct_UFunction_UItem_IsOfType, "IsOfType" }, // 2626946982
		{ &Z_Construct_UFunction_UItem_IsSpawnable, "IsSpawnable" }, // 16885237
		{ &Z_Construct_UFunction_UItem_Matches, "Matches" }, // 3006190532
		{ &Z_Construct_UFunction_UItem_PostInitProperties, "PostInitProperties" }, // 3594135253
		{ &Z_Construct_UFunction_UItem_PropertyExists, "PropertyExists" }, // 4252690101
		{ &Z_Construct_UFunction_UItem_ToPropPtrs, "ToPropPtrs" }, // 1450475958
		{ &Z_Construct_UFunction_UItem_ToString, "ToString" }, // 3325332115
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Item's basic properties, not related to the ItemProperty files\n" },
#endif
		{ "ModuleRelativePath", "Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item's basic properties, not related to the ItemProperty files" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP_Inner = { "PropertiesBP", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP = { "PropertiesBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, PropertiesBP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_ItemPrefab_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemPrefab = { "ItemPrefab", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ItemPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_ItemPrefab_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_ItemPrefab_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_LongDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, LongDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_LongDescription_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_LongDescription_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	void Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints_SetBit(void* Obj)
	{
		((UItem*)Obj)->SpecificSpawnPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints = { "SpecificSpawnPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_IsStationary_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	void Z_Construct_UClass_UItem_Statics::NewProp_IsStationary_SetBit(void* Obj)
	{
		((UItem*)Obj)->IsStationary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_IsStationary = { "IsStationary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_IsStationary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_IsStationary_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_IsStationary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	void Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible_SetBit(void* Obj)
	{
		((UItem*)Obj)->IsIndestructible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible = { "IsIndestructible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_SpawnLength_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_SpawnLength = { "SpawnLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, SpawnLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_SpawnLength_MetaData), Z_Construct_UClass_UItem_Statics::NewProp_SpawnLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp__index_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItem_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, _index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp__index_MetaData), Z_Construct_UClass_UItem_Statics::NewProp__index_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_PropertiesBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemPrefab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_LongDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_SpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_SpecificSpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_IsStationary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_IsIndestructible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_SpawnLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp__index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
		&UItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItem()
	{
		if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItem.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UItem>()
	{
		return UItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
	UItem::~UItem() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 4289365540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_3782733978(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
