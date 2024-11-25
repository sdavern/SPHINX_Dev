// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/ItemProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemProperty() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	SPHINX_DEV_API UEnum* Z_Construct_UEnum_SPHINX_Dev_EItemProperty();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemProperty;
	static UEnum* EItemProperty_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemProperty.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SPHINX_Dev_EItemProperty, (UObject*)Z_Construct_UPackage__Script_SPHINX_Dev(), TEXT("EItemProperty"));
		}
		return Z_Registration_Info_UEnum_EItemProperty.OuterSingleton;
	}
	template<> SPHINX_DEV_API UEnum* StaticEnum<EItemProperty>()
	{
		return EItemProperty_StaticEnum();
	}
	struct Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::Enumerators[] = {
		{ "EItemProperty::StringProperty", (int64)EItemProperty::StringProperty },
		{ "EItemProperty::IntProperty", (int64)EItemProperty::IntProperty },
		{ "EItemProperty::BoolProperty", (int64)EItemProperty::BoolProperty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoolProperty.DisplayName", "Bool Property" },
		{ "BoolProperty.Name", "EItemProperty::BoolProperty" },
		{ "IntProperty.DisplayName", "Int Property" },
		{ "IntProperty.Name", "EItemProperty::IntProperty" },
		{ "ModuleRelativePath", "ItemProperty.h" },
		{ "ScriptName", "ItemPropertyEnum" },
		{ "StringProperty.DisplayName", "String Property" },
		{ "StringProperty.Name", "EItemProperty::StringProperty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SPHINX_Dev,
		nullptr,
		"EItemProperty",
		"EItemProperty",
		Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SPHINX_Dev_EItemProperty()
	{
		if (!Z_Registration_Info_UEnum_EItemProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemProperty.InnerSingleton, Z_Construct_UEnum_SPHINX_Dev_EItemProperty_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemProperty.InnerSingleton;
	}
	DEFINE_FUNCTION(UItemProperty::execRemoveProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveProperty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemProperty::execEquals)
	{
		P_GET_OBJECT(UItemProperty,Z_Param_OtherProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equals(Z_Param_OtherProperty);
		P_NATIVE_END;
	}
	void UItemProperty::StaticRegisterNativesUItemProperty()
	{
		UClass* Class = UItemProperty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equals", &UItemProperty::execEquals },
			{ "RemoveProperty", &UItemProperty::execRemoveProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemProperty_Equals_Statics
	{
		struct ItemProperty_eventEquals_Parms
		{
			UItemProperty* OtherProperty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherProperty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemProperty_Equals_Statics::NewProp_OtherProperty = { "OtherProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemProperty_eventEquals_Parms, OtherProperty), Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UItemProperty_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemProperty_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemProperty_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemProperty_eventEquals_Parms), &Z_Construct_UFunction_UItemProperty_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemProperty_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemProperty_Equals_Statics::NewProp_OtherProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemProperty_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemProperty_Equals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemProperty.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemProperty_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemProperty, nullptr, "Equals", nullptr, nullptr, Z_Construct_UFunction_UItemProperty_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemProperty_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemProperty_Equals_Statics::ItemProperty_eventEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemProperty_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemProperty_Equals_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemProperty_Equals_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemProperty_Equals_Statics::ItemProperty_eventEquals_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemProperty_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemProperty_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemProperty_RemoveProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemProperty_RemoveProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemProperty.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemProperty_RemoveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemProperty, nullptr, "RemoveProperty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemProperty_RemoveProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemProperty_RemoveProperty_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemProperty_RemoveProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemProperty_RemoveProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemProperty);
	UClass* Z_Construct_UClass_UItemProperty_NoRegister()
	{
		return UItemProperty::StaticClass();
	}
	struct Z_Construct_UClass_UItemProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemProperty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemProperty_Equals, "Equals" }, // 2477735314
		{ &Z_Construct_UFunction_UItemProperty_RemoveProperty, "RemoveProperty" }, // 2260701570
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemProperty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemProperty.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemProperty.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemProperty_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemProperty_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "ItemProperty.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemProperty_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemProperty, Type), Z_Construct_UEnum_SPHINX_Dev_EItemProperty, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UItemProperty_Statics::NewProp_Type_MetaData) }; // 973540946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemProperty_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "ItemProperty.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UItemProperty_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemProperty_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "ItemProperty.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemProperty, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::NewProp_Value_MetaData), Z_Construct_UClass_UItemProperty_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemProperty_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemProperty_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemProperty_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemProperty_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemProperty_Statics::ClassParams = {
		&UItemProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemProperty_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemProperty_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemProperty()
	{
		if (!Z_Registration_Info_UClass_UItemProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemProperty.OuterSingleton, Z_Construct_UClass_UItemProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemProperty.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UItemProperty>()
	{
		return UItemProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemProperty);
	UItemProperty::~UItemProperty() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics::EnumInfo[] = {
		{ EItemProperty_StaticEnum, TEXT("EItemProperty"), &Z_Registration_Info_UEnum_EItemProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 973540946U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemProperty, UItemProperty::StaticClass, TEXT("UItemProperty"), &Z_Registration_Info_UClass_UItemProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemProperty), 613491437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_4179633278(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
