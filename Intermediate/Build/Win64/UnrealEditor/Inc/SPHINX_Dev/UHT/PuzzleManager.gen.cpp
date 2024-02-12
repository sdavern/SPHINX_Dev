// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/PuzzleManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void APuzzleManager::StaticRegisterNativesAPuzzleManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuzzleManager);
	UClass* Z_Construct_UClass_APuzzleManager_NoRegister()
	{
		return APuzzleManager::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleManager.h" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PuzzleManager" },
		{ "ModuleRelativePath", "PuzzleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuzzleManager, Player), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData), Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleManager_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APuzzleManager_Statics::ClassParams = {
		&APuzzleManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APuzzleManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APuzzleManager()
	{
		if (!Z_Registration_Info_UClass_APuzzleManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuzzleManager.OuterSingleton, Z_Construct_UClass_APuzzleManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APuzzleManager.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<APuzzleManager>()
	{
		return APuzzleManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleManager);
	APuzzleManager::~APuzzleManager() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APuzzleManager, APuzzleManager::StaticClass, TEXT("APuzzleManager"), &Z_Registration_Info_UClass_APuzzleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleManager), 1869232478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_3953189766(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
