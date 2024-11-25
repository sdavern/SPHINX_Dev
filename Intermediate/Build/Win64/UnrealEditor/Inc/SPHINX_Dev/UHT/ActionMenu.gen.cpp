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
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionBtn_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UActionMenu::execChangeButtonText)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_ButtonText);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeButtonText(Z_Param_ButtonText,Z_Param_NewText);
		P_NATIVE_END;
	}
	void UActionMenu::StaticRegisterNativesUActionMenu()
	{
		UClass* Class = UActionMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeButtonText", &UActionMenu::execChangeButtonText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics
	{
		struct ActionMenu_eventChangeButtonText_Parms
		{
			UTextBlock* ButtonText;
			FString NewText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_ButtonText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionMenu_eventChangeButtonText_Parms, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_ButtonText_MetaData), Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_ButtonText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionMenu_eventChangeButtonText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_NewText_MetaData), Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_NewText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "ChangeButtonText", nullptr, nullptr, Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::ActionMenu_eventChangeButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::ActionMenu_eventChangeButtonText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActionMenu_ChangeButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_ChangeButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionMenu);
	UClass* Z_Construct_UClass_UActionMenu_NoRegister()
	{
		return UActionMenu::StaticClass();
	}
	struct Z_Construct_UClass_UActionMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButtons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButtons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackBottom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackBottom;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton_3;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionMenu_ChangeButtonText, "ChangeButtonText" }, // 2735802502
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionMenu.h" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons_Inner = { "ActionButtons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActionBtn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons = { "ActionButtons", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_BackBottom_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_BackBottom = { "BackBottom", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, BackBottom), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_BackBottom_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_BackBottom_MetaData) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionButton), Z_Construct_UClass_UActionBtn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_1 = { "ActionButton_1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionButton_1), Z_Construct_UClass_UActionBtn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_1_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_2 = { "ActionButton_2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionButton_2), Z_Construct_UClass_UActionBtn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_2_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_3 = { "ActionButton_3", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionButton_3), Z_Construct_UClass_UActionBtn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_3_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_3_MetaData) };
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
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText = { "HoldText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, HoldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_1 = { "ActionText_1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionText_1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_1_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_2 = { "ActionText_2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionText_2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_2_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_3 = { "ActionText_3", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ActionText_3), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_3_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText = { "InspectText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, InspectText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText = { "ExitText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, ExitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_NameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_NameText = { "NameText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_NameText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_NameText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_AddText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_AddText = { "AddText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, AddText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_AddText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_AddText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_BackBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionButton_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_InventoryButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_HoldText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ActionText_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_InspectText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_ExitText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_NameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_AddText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionMenu_Statics::ClassParams = {
		&UActionMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UActionMenu, UActionMenu::StaticClass, TEXT("UActionMenu"), &Z_Registration_Info_UClass_UActionMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionMenu), 311801448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_227887897(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
