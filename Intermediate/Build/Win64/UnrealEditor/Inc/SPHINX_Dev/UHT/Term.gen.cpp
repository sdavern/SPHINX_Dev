// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Term.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerm() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	SPHINX_DEV_API UEnum* Z_Construct_UEnum_SPHINX_Dev_EItemProperty();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UTerm::execToPropPtrs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToPropPtrs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execGetTermAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTermAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execGetSuperTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSuperTypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execGetPropertyWithName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemProperty**)Z_Param__Result=P_THIS->GetPropertyWithName(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execGetPropertiesWithName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemProperty*>*)Z_Param__Result=P_THIS->GetPropertiesWithName(Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execDeleteProperty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteProperty(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTerm::execAddPropertyOfType)
	{
		P_GET_ENUM(EItemProperty,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPropertyOfType(EItemProperty(Z_Param_Type));
		P_NATIVE_END;
	}
	void UTerm::StaticRegisterNativesUTerm()
	{
		UClass* Class = UTerm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPropertyOfType", &UTerm::execAddPropertyOfType },
			{ "DeleteProperty", &UTerm::execDeleteProperty },
			{ "GetPropertiesWithName", &UTerm::execGetPropertiesWithName },
			{ "GetPropertyWithName", &UTerm::execGetPropertyWithName },
			{ "GetSuperTypes", &UTerm::execGetSuperTypes },
			{ "GetTermAsString", &UTerm::execGetTermAsString },
			{ "ToPropPtrs", &UTerm::execToPropPtrs },
			{ "ToString", &UTerm::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics
	{
		struct Term_eventAddPropertyOfType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventAddPropertyOfType_Parms, Type), Z_Construct_UEnum_SPHINX_Dev_EItemProperty, METADATA_PARAMS(0, nullptr) }; // 973540946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "AddPropertyOfType", nullptr, nullptr, Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::Term_eventAddPropertyOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::Term_eventAddPropertyOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_AddPropertyOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_AddPropertyOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_DeleteProperty_Statics
	{
		struct Term_eventDeleteProperty_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTerm_DeleteProperty_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventDeleteProperty_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_DeleteProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_DeleteProperty_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_DeleteProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_DeleteProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "DeleteProperty", nullptr, nullptr, Z_Construct_UFunction_UTerm_DeleteProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_DeleteProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_DeleteProperty_Statics::Term_eventDeleteProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_DeleteProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_DeleteProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_DeleteProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_DeleteProperty_Statics::Term_eventDeleteProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_DeleteProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_DeleteProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics
	{
		struct Term_eventGetPropertiesWithName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventGetPropertiesWithName_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventGetPropertiesWithName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "GetPropertiesWithName", nullptr, nullptr, Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::Term_eventGetPropertiesWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::Term_eventGetPropertiesWithName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_GetPropertiesWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_GetPropertiesWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics
	{
		struct Term_eventGetPropertyWithName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventGetPropertyWithName_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_PropertyName_MetaData), Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventGetPropertyWithName_Parms, ReturnValue), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "GetPropertyWithName", nullptr, nullptr, Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::Term_eventGetPropertyWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::Term_eventGetPropertyWithName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_GetPropertyWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_GetPropertyWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_GetSuperTypes_Statics
	{
		struct Term_eventGetSuperTypes_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventGetSuperTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "GetSuperTypes", nullptr, nullptr, Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::Term_eventGetSuperTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::Term_eventGetSuperTypes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_GetSuperTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_GetSuperTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_GetTermAsString_Statics
	{
		struct Term_eventGetTermAsString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTerm_GetTermAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventGetTermAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_GetTermAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_GetTermAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_GetTermAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_GetTermAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "GetTermAsString", nullptr, nullptr, Z_Construct_UFunction_UTerm_GetTermAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetTermAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_GetTermAsString_Statics::Term_eventGetTermAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetTermAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_GetTermAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_GetTermAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_GetTermAsString_Statics::Term_eventGetTermAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_GetTermAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_GetTermAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_ToPropPtrs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_ToPropPtrs_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove if causing issues\n" },
#endif
		{ "ModuleRelativePath", "Term.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove if causing issues" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_ToPropPtrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "ToPropPtrs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_ToPropPtrs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_ToPropPtrs_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTerm_ToPropPtrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_ToPropPtrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTerm_ToString_Statics
	{
		struct Term_eventToString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTerm_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Term_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerm_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerm_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTerm_ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerm_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTerm, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UTerm_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTerm_ToString_Statics::Term_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerm_ToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerm_ToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTerm_ToString_Statics::Term_eventToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTerm_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerm_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTerm);
	UClass* Z_Construct_UClass_UTerm_NoRegister()
	{
		return UTerm::StaticClass();
	}
	struct Z_Construct_UClass_UTerm_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DbItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DbItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitPointType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitPointType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GoalDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThanksDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThanksDialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTerm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTerm_AddPropertyOfType, "AddPropertyOfType" }, // 1904020756
		{ &Z_Construct_UFunction_UTerm_DeleteProperty, "DeleteProperty" }, // 859342017
		{ &Z_Construct_UFunction_UTerm_GetPropertiesWithName, "GetPropertiesWithName" }, // 3695699301
		{ &Z_Construct_UFunction_UTerm_GetPropertyWithName, "GetPropertyWithName" }, // 2376239776
		{ &Z_Construct_UFunction_UTerm_GetSuperTypes, "GetSuperTypes" }, // 3381131885
		{ &Z_Construct_UFunction_UTerm_GetTermAsString, "GetTermAsString" }, // 2320974903
		{ &Z_Construct_UFunction_UTerm_ToPropPtrs, "ToPropPtrs" }, // 43141781
		{ &Z_Construct_UFunction_UTerm_ToString, "ToString" }, // 2268134536
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Term.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP_Inner = { "PropertiesBP", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP = { "PropertiesBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, PropertiesBP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_DbItem_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_DbItem = { "DbItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, DbItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_DbItem_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_DbItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_GameItem_MetaData[] = {
		{ "Category", "Term" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, GameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_GameItem_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_GameItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_Hint_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, Hint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_Hint_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_Hint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_InitPointType_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_InitPointType = { "InitPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, InitPointType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_InitPointType_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_InitPointType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_GoalDialogue_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_GoalDialogue = { "GoalDialogue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, GoalDialogue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_GoalDialogue_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_GoalDialogue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerm_Statics::NewProp_ThanksDialogue_MetaData[] = {
		{ "Category", "Term" },
		{ "ModuleRelativePath", "Term.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTerm_Statics::NewProp_ThanksDialogue = { "ThanksDialogue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerm, ThanksDialogue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::NewProp_ThanksDialogue_MetaData), Z_Construct_UClass_UTerm_Statics::NewProp_ThanksDialogue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Hint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_InitPointType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_GoalDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_ThanksDialogue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTerm_Statics::ClassParams = {
		&UTerm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTerm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::Class_MetaDataParams), Z_Construct_UClass_UTerm_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTerm()
	{
		if (!Z_Registration_Info_UClass_UTerm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTerm.OuterSingleton, Z_Construct_UClass_UTerm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTerm.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UTerm>()
	{
		return UTerm::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerm);
	UTerm::~UTerm() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTerm, UTerm::StaticClass, TEXT("UTerm"), &Z_Registration_Info_UClass_UTerm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTerm), 809628200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_3916280181(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
