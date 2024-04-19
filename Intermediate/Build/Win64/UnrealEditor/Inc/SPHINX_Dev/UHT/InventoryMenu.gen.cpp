// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InventoryMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryMenu() {}
// Cross Module References
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryMenu();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UInventoryMenu::StaticRegisterNativesUInventoryMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryMenu);
	UClass* Z_Construct_UClass_UInventoryMenu_NoRegister()
	{
		return UInventoryMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventoryMenu.h" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryMenu_Statics::ClassParams = {
		&UInventoryMenu::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryMenu_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInventoryMenu()
	{
		if (!Z_Registration_Info_UClass_UInventoryMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryMenu.OuterSingleton, Z_Construct_UClass_UInventoryMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryMenu.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UInventoryMenu>()
	{
		return UInventoryMenu::StaticClass();
	}
	UInventoryMenu::UInventoryMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryMenu);
	UInventoryMenu::~UInventoryMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryMenu, UInventoryMenu::StaticClass, TEXT("UInventoryMenu"), &Z_Registration_Info_UClass_UInventoryMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryMenu), 2682067622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_1975678698(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
