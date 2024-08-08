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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UItem::StaticRegisterNativesUItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
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
		nullptr,
		Z_Construct_UClass_UItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 4281037115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_396384444(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
