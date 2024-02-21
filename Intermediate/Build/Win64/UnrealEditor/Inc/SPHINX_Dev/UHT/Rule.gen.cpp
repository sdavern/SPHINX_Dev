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
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void URule::StaticRegisterNativesURule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URule);
	UClass* Z_Construct_UClass_URule_NoRegister()
	{
		return URule::StaticClass();
	}
	struct Z_Construct_UClass_URule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutputsBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputsBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputsBP;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputsBP_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputsBP_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URule_Statics::NewProp_InputsBP_Inner = { "InputsBP", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_InputsBP_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URule_Statics::NewProp_InputsBP = { "InputsBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, InputsBP), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_InputsBP_MetaData), Z_Construct_UClass_URule_Statics::NewProp_InputsBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URule_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Rule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URule_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URule, Action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URule_Statics::NewProp_Action_MetaData), Z_Construct_UClass_URule_Statics::NewProp_Action_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_InputsBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_InputsBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Hint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URule_Statics::NewProp_ChildrenBP,
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
		nullptr,
		Z_Construct_UClass_URule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_URule, URule::StaticClass, TEXT("URule"), &Z_Registration_Info_UClass_URule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URule), 31544302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_823598278(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
