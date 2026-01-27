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
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionBtn_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UActionMenu::execSetupUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionMenu::execDeactivateActionMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateActionMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionMenu::execActivateActionMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionMenu::execDeactivateInventoryMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateInventoryMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionMenu::execActivateInventoryMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateInventoryMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionMenu::execChangeUpperText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeUpperText(Z_Param_NewText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionMenu::execChangeLowerText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLowerText(Z_Param_NewText);
		P_NATIVE_END;
	}
	void UActionMenu::StaticRegisterNativesUActionMenu()
	{
		UClass* Class = UActionMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateActionMenu", &UActionMenu::execActivateActionMenu },
			{ "ActivateInventoryMenu", &UActionMenu::execActivateInventoryMenu },
			{ "ChangeLowerText", &UActionMenu::execChangeLowerText },
			{ "ChangeUpperText", &UActionMenu::execChangeUpperText },
			{ "DeactivateActionMenu", &UActionMenu::execDeactivateActionMenu },
			{ "DeactivateInventoryMenu", &UActionMenu::execDeactivateInventoryMenu },
			{ "SetupUI", &UActionMenu::execSetupUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionMenu_ActivateActionMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ActivateActionMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_ActivateActionMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "ActivateActionMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ActivateActionMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_ActivateActionMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActionMenu_ActivateActionMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_ActivateActionMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "ActivateInventoryMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics
	{
		struct ActionMenu_eventChangeLowerText_Parms
		{
			FString NewText;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionMenu_eventChangeLowerText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::NewProp_NewText_MetaData), Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::NewProp_NewText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "ChangeLowerText", nullptr, nullptr, Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::ActionMenu_eventChangeLowerText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::ActionMenu_eventChangeLowerText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActionMenu_ChangeLowerText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_ChangeLowerText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics
	{
		struct ActionMenu_eventChangeUpperText_Parms
		{
			FString NewText;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionMenu_eventChangeUpperText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::NewProp_NewText_MetaData), Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::NewProp_NewText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "ChangeUpperText", nullptr, nullptr, Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::ActionMenu_eventChangeUpperText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::ActionMenu_eventChangeUpperText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActionMenu_ChangeUpperText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_ChangeUpperText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionMenu_DeactivateActionMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_DeactivateActionMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_DeactivateActionMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "DeactivateActionMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_DeactivateActionMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_DeactivateActionMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActionMenu_DeactivateActionMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_DeactivateActionMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "DeactivateInventoryMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionMenu_SetupUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionMenu_SetupUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionMenu_SetupUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionMenu, nullptr, "SetupUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionMenu_SetupUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionMenu_SetupUI_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActionMenu_SetupUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionMenu_SetupUI_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackTop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackMiddle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackMiddle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllInventoryButtons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllInventoryButtons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllInventoryButtons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllInventoryImages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllInventoryImages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllInventoryImages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LowerText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpperText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB1_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB1_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB2_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB2_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB3_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB3_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB4_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB4_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB5_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB5_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB5_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB6_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB6_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB6_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB7_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB7_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB7_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB8_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB8_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB8_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB9_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB9_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB9_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB10_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB10;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB10_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB10_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB11_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB11;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB11_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB11_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB12_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB12;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB12_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB12_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB13_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB13;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB13_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB13_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB14_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB14;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB14_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB14_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB15_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB15;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB15_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB15_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB16_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB16;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IB16_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IB16_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSprite;
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
		{ &Z_Construct_UFunction_UActionMenu_ActivateActionMenu, "ActivateActionMenu" }, // 3094629241
		{ &Z_Construct_UFunction_UActionMenu_ActivateInventoryMenu, "ActivateInventoryMenu" }, // 3159005642
		{ &Z_Construct_UFunction_UActionMenu_ChangeLowerText, "ChangeLowerText" }, // 3100623199
		{ &Z_Construct_UFunction_UActionMenu_ChangeUpperText, "ChangeUpperText" }, // 701067402
		{ &Z_Construct_UFunction_UActionMenu_DeactivateActionMenu, "DeactivateActionMenu" }, // 2470329422
		{ &Z_Construct_UFunction_UActionMenu_DeactivateInventoryMenu, "DeactivateInventoryMenu" }, // 2587008159
		{ &Z_Construct_UFunction_UActionMenu_SetupUI, "SetupUI" }, // 4210354501
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionMenu.h" },
		{ "ModuleRelativePath", "ActionMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_2 = { "Image_2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, Image_2), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_2_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_BackTop_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_BackTop = { "BackTop", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, BackTop), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_BackTop_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_BackTop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_BackMiddle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_BackMiddle = { "BackMiddle", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, BackMiddle), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_BackMiddle_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_BackMiddle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_0_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_0 = { "Image_0", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, Image_0), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_0_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Inventory Menu Variables\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Menu Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, Background), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_Background_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_Background_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons_Inner = { "AllInventoryButtons", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons = { "AllInventoryButtons", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, AllInventoryButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages_Inner = { "AllInventoryImages", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages = { "AllInventoryImages", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, AllInventoryImages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_LowerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_LowerText = { "LowerText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, LowerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_LowerText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_LowerText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_UpperText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_UpperText = { "UpperText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, UpperText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_UpperText_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_UpperText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1 = { "IB1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB1), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_Image = { "IB1_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB1_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2 = { "IB2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB2), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_Image = { "IB2_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB2_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3 = { "IB3", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB3), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_Image = { "IB3_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB3_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4 = { "IB4", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB4), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_Image = { "IB4_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB4_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5 = { "IB5", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB5), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_Image = { "IB5_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB5_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6 = { "IB6", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB6), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_Image = { "IB6_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB6_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7 = { "IB7", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB7), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_Image = { "IB7_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB7_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8 = { "IB8", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB8), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_Image = { "IB8_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB8_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9 = { "IB9", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB9), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_Image = { "IB9_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB9_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10 = { "IB10", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB10), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_Image = { "IB10_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB10_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11 = { "IB11", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB11), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_Image = { "IB11_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB11_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12 = { "IB12", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB12), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_Image = { "IB12_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB12_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13 = { "IB13", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB13), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_Image = { "IB13_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB13_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14 = { "IB14", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB14), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_Image = { "IB14_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB14_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15 = { "IB15", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB15), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_Image = { "IB15_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB15_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16 = { "IB16", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB16), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_Image = { "IB16_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, IB16_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_Image_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMenu_Statics::NewProp_DefaultSprite_MetaData[] = {
		{ "Category", "ActionMenu" },
		{ "ModuleRelativePath", "ActionMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMenu_Statics::NewProp_DefaultSprite = { "DefaultSprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionMenu, DefaultSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionMenu_Statics::NewProp_DefaultSprite_MetaData), Z_Construct_UClass_UActionMenu_Statics::NewProp_DefaultSprite_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_BackTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_BackMiddle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_Image_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_Background,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_AllInventoryImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_LowerText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_UpperText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB1_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB2_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB3_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB4_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB5_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB6_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB7_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB8_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB9_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB10_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB11_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB12_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB13_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB14_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB15_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_IB16_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMenu_Statics::NewProp_DefaultSprite,
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionMenu);
	UActionMenu::~UActionMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionMenu, UActionMenu::StaticClass, TEXT("UActionMenu"), &Z_Registration_Info_UClass_UActionMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionMenu), 1051759147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_1751802386(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
