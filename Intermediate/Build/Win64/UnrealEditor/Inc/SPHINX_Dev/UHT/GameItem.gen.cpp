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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGameItem();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AGameItem::StaticRegisterNativesAGameItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameItem);
	UClass* Z_Construct_UClass_AGameItem_NoRegister()
	{
		return AGameItem::StaticClass();
	}
	struct Z_Construct_UClass_AGameItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUp_MetaData[];
#endif
		static void NewProp_PickedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PickedUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameItem.h" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::NewProp_Name_MetaData), Z_Construct_UClass_AGameItem_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::NewProp_DbItem_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_DbItem = { "DbItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItem, DbItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::NewProp_DbItem_MetaData), Z_Construct_UClass_AGameItem_Statics::NewProp_DbItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItem, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_AGameItem_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::NewProp_ContainedValue_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_ContainedValue = { "ContainedValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameItem, ContainedValue), Z_Construct_UClass_AGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::NewProp_ContainedValue_MetaData), Z_Construct_UClass_AGameItem_Statics::NewProp_ContainedValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::NewProp_Selected_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_AGameItem_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((AGameItem*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameItem), &Z_Construct_UClass_AGameItem_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::NewProp_Selected_MetaData), Z_Construct_UClass_AGameItem_Statics::NewProp_Selected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp_SetBit(void* Obj)
	{
		((AGameItem*)Obj)->PickedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp = { "PickedUp", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameItem), &Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp_MetaData), Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_ContainedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_Selected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameItem_Statics::NewProp_PickedUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameItem_Statics::ClassParams = {
		&AGameItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameItem()
	{
		if (!Z_Registration_Info_UClass_AGameItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameItem.OuterSingleton, Z_Construct_UClass_AGameItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameItem.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AGameItem>()
	{
		return AGameItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameItem);
	AGameItem::~AGameItem() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameItem, AGameItem::StaticClass, TEXT("AGameItem"), &Z_Registration_Info_UClass_AGameItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameItem), 2848344210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_837030145(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
