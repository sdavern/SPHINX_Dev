// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/GameArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameArea() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameArea();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UGameArea::StaticRegisterNativesUGameArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameArea);
	UClass* Z_Construct_UClass_UGameArea_NoRegister()
	{
		return UGameArea::StaticClass();
	}
	struct Z_Construct_UClass_UGameArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInArea_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsInArea_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaContent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaContent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCSpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCSpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCSpawnPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorSpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloorSpawnPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameArea.h" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea_Inner = { "ItemsInArea", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea_MetaData[] = {
		{ "Category", "GameArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea = { "ItemsInArea", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameArea, ItemsInArea), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea_MetaData), Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::NewProp_AreaBP_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_AreaBP = { "AreaBP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameArea, AreaBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::NewProp_AreaBP_MetaData), Z_Construct_UClass_UGameArea_Statics::NewProp_AreaBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::NewProp_AreaContent_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_AreaContent = { "AreaContent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameArea, AreaContent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::NewProp_AreaContent_MetaData), Z_Construct_UClass_UGameArea_Statics::NewProp_AreaContent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameArea, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints_MetaData), Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints_Inner = { "NPCSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints = { "NPCSpawnPoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameArea, NPCSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints_MetaData), Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints_Inner = { "FloorSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints = { "FloorSpawnPoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameArea, FloorSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints_MetaData), Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_ItemsInArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_AreaBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_AreaContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_SpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_NPCSpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameArea_Statics::NewProp_FloorSpawnPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameArea_Statics::ClassParams = {
		&UGameArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameArea_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameArea_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameArea()
	{
		if (!Z_Registration_Info_UClass_UGameArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameArea.OuterSingleton, Z_Construct_UClass_UGameArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameArea.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UGameArea>()
	{
		return UGameArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameArea);
	UGameArea::~UGameArea() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameArea, UGameArea::StaticClass, TEXT("UGameArea"), &Z_Registration_Info_UClass_UGameArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameArea), 821531474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_354144766(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
