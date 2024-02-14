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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGameArea();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGameArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AGameArea::StaticRegisterNativesAGameArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameArea);
	UClass* Z_Construct_UClass_AGameArea_NoRegister()
	{
		return AGameArea::StaticClass();
	}
	struct Z_Construct_UClass_AGameArea_Statics
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
	UObject* (*const Z_Construct_UClass_AGameArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameArea.h" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea_Inner = { "ItemsInArea", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea_MetaData[] = {
		{ "Category", "GameArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea = { "ItemsInArea", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameArea, ItemsInArea), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea_MetaData), Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameArea, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints_MetaData), Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints_Inner = { "NPCSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints = { "NPCSpawnPoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameArea, NPCSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints_MetaData), Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints_Inner = { "FloorSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints_MetaData[] = {
		{ "Category", "GameArea" },
		{ "ModuleRelativePath", "GameArea.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints = { "FloorSpawnPoints", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameArea, FloorSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints_MetaData), Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_ItemsInArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_SpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_NPCSpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameArea_Statics::NewProp_FloorSpawnPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameArea_Statics::ClassParams = {
		&AGameArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameArea_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameArea_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameArea()
	{
		if (!Z_Registration_Info_UClass_AGameArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameArea.OuterSingleton, Z_Construct_UClass_AGameArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameArea.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AGameArea>()
	{
		return AGameArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameArea);
	AGameArea::~AGameArea() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameArea, AGameArea::StaticClass, TEXT("AGameArea"), &Z_Registration_Info_UClass_AGameArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameArea), 1293192499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_2283023540(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameArea_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
