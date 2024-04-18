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
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldButton = { "HoldButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, HoldButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldButton_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectButton = { "InspectButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, InspectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectButton_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_InventoryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_InventoryButton = { "InventoryButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, InventoryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_InventoryButton_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_InventoryButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitButton_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText = { "HoldText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, HoldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText = { "InspectText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, InspectText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText = { "ExitText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ExitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_InventoryButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionMenu_Statics::ClassParams = {
		&UActionMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActionMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UActionMenu, UActionMenu::StaticClass, TEXT("UActionMenu"), &Z_Registration_Info_UClass_UActionMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionMenu), 1623743494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_2581881680(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
