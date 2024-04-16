// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/ActionMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionMenu() {}
// Cross Module References
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UActionMenu::StaticRegisterNativesUActionMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionMenu);
	UClass* Z_Construct_UClass_UActionMenu_NoRegister()
	{
		return UActionMenu::StaticClass();
	}
	struct Z_Construct_UClass_UActionMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionMenu.h" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionMenu_Statics::ClassParams = {
		&UActionMenu::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UActionMenu()
	{
		if (!Z_Registration_Info_UClass_UActionMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionMenu.OuterSingleton, Z_Construct_UClass_UActionMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionMenu.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UActionMenu>()
	{
		return UActionMenu::StaticClass();
	}
	UActionMenu::UActionMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionMenu);
	UActionMenu::~UActionMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionMenu, UActionMenu::StaticClass, TEXT("UActionMenu"), &Z_Registration_Info_UClass_UActionMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionMenu), 2031048609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_504789466(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
