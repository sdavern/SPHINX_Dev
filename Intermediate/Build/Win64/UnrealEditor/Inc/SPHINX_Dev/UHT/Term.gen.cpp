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
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UTerm::StaticRegisterNativesUTerm()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTerm);
	UClass* Z_Construct_UClass_UTerm_NoRegister()
	{
		return UTerm::StaticClass();
	}
	struct Z_Construct_UClass_UTerm_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerm_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_PropertiesBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerm_Statics::NewProp_Hint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTerm_Statics::ClassParams = {
		&UTerm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTerm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UTerm, UTerm::StaticClass, TEXT("UTerm"), &Z_Registration_Info_UClass_UTerm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTerm), 1991234849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_3499514535(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Term_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
