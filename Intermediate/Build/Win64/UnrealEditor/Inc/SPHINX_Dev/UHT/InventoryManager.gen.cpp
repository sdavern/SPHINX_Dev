// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InventoryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryManager();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UInventoryManager::StaticRegisterNativesUInventoryManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryManager);
	UClass* Z_Construct_UClass_UInventoryManager_NoRegister()
	{
		return UInventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventoryManager.h" },
		{ "ModuleRelativePath", "InventoryManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManager_Statics::ClassParams = {
		&UInventoryManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInventoryManager()
	{
		if (!Z_Registration_Info_UClass_UInventoryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryManager.OuterSingleton, Z_Construct_UClass_UInventoryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryManager.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UInventoryManager>()
	{
		return UInventoryManager::StaticClass();
	}
	UInventoryManager::UInventoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManager);
	UInventoryManager::~UInventoryManager() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryManager, UInventoryManager::StaticClass, TEXT("UInventoryManager"), &Z_Registration_Info_UClass_UInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryManager), 2684990479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_2857904153(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
