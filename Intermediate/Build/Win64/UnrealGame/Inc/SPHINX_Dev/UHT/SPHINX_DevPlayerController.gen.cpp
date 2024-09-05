// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/SPHINX_DevPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPHINX_DevPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitNPC_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInventoryManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevPlayerController();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevPlayerController_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UDialogueBox_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryButton_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryMenu_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execClearSprites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSprites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execCloseInventoryMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseInventoryMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execOpenInventoryMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenInventoryMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execOnSpriteButtonClicked)
	{
		P_GET_OBJECT(UInventoryButton,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpriteButtonClicked(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execOnInspectButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInspectButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execOnExitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execOnInventoryButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInventoryButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevPlayerController::execOnHoldButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoldButtonClicked();
		P_NATIVE_END;
	}
	void ASPHINX_DevPlayerController::StaticRegisterNativesASPHINX_DevPlayerController()
	{
		UClass* Class = ASPHINX_DevPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSprites", &ASPHINX_DevPlayerController::execClearSprites },
			{ "CloseInventoryMenu", &ASPHINX_DevPlayerController::execCloseInventoryMenu },
			{ "OnExitButtonClicked", &ASPHINX_DevPlayerController::execOnExitButtonClicked },
			{ "OnHoldButtonClicked", &ASPHINX_DevPlayerController::execOnHoldButtonClicked },
			{ "OnInspectButtonClicked", &ASPHINX_DevPlayerController::execOnInspectButtonClicked },
			{ "OnInventoryButtonClicked", &ASPHINX_DevPlayerController::execOnInventoryButtonClicked },
			{ "OnSpriteButtonClicked", &ASPHINX_DevPlayerController::execOnSpriteButtonClicked },
			{ "OpenInventoryMenu", &ASPHINX_DevPlayerController::execOpenInventoryMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "ClearSprites", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "CloseInventoryMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "OnExitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "OnHoldButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "OnInspectButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* UFUNCTION()\n\x09void OnActionButtonClicked(); */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\n      void OnActionButtonClicked();" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "OnInventoryButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics
	{
		struct SPHINX_DevPlayerController_eventOnSpriteButtonClicked_Parms
		{
			UInventoryButton* Button;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPHINX_DevPlayerController_eventOnSpriteButtonClicked_Parms, Button), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::NewProp_Button_MetaData), Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::NewProp_Button_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "OnSpriteButtonClicked", nullptr, nullptr, Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::SPHINX_DevPlayerController_eventOnSpriteButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::SPHINX_DevPlayerController_eventOnSpriteButtonClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevPlayerController, nullptr, "OpenInventoryMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPHINX_DevPlayerController);
	UClass* Z_Construct_UClass_ASPHINX_DevPlayerController_NoRegister()
	{
		return ASPHINX_DevPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASPHINX_DevPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBoxClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueBoxClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayingScene_MetaData[];
#endif
		static void NewProp_IsPlayingScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayingScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCIsHit_MetaData[];
#endif
		static void NewProp_NPCIsHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NPCIsHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrabDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrabDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitGameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitGameItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedGameItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PMInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PMInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitInitNPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitInitNPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_ClearSprites, "ClearSprites" }, // 205211298
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_CloseInventoryMenu, "CloseInventoryMenu" }, // 1744342659
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_OnExitButtonClicked, "OnExitButtonClicked" }, // 2581611811
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_OnHoldButtonClicked, "OnHoldButtonClicked" }, // 3667471852
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInspectButtonClicked, "OnInspectButtonClicked" }, // 515109491
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_OnInventoryButtonClicked, "OnInventoryButtonClicked" }, // 3164041675
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_OnSpriteButtonClicked, "OnSpriteButtonClicked" }, // 3975016252
		{ &Z_Construct_UFunction_ASPHINX_DevPlayerController_OpenInventoryMenu, "OpenInventoryMenu" }, // 1667843202
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SPHINX_DevPlayerController.h" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenuClass = { "ActionMenuClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, ActionMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActionMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenuClass_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBoxClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBoxClass = { "DialogueBoxClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, DialogueBoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBoxClass_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBoxClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenuClass = { "InventoryMenuClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, InventoryMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenuClass_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryManager_MetaData[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, InventoryManager), Z_Construct_UClass_AInventoryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryManager_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer_MetaData[] = {
		{ "Category", "SPHINX_DevPlayerController" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer = { "ActivePlayer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, ActivePlayer), Z_Construct_UClass_AAvatar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene_MetaData[] = {
		{ "Category", "SPHINX_DevPlayerController" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene_SetBit(void* Obj)
	{
		((ASPHINX_DevPlayerController*)Obj)->IsPlayingScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene = { "IsPlayingScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASPHINX_DevPlayerController), &Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit_MetaData[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit_SetBit(void* Obj)
	{
		((ASPHINX_DevPlayerController*)Obj)->NPCIsHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit = { "NPCIsHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASPHINX_DevPlayerController), &Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_MaxGrabDistance_MetaData[] = {
		{ "Category", "SPHINX_DevPlayerController" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_MaxGrabDistance = { "MaxGrabDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, MaxGrabDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_MaxGrabDistance_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_MaxGrabDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabRadius_MetaData[] = {
		{ "Category", "SPHINX_DevPlayerController" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabRadius = { "GrabRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, GrabRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabRadius_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitGameItem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitGameItem = { "HitGameItem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, HitGameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitGameItem_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitGameItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_SelectedGameItem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_SelectedGameItem = { "SelectedGameItem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, SelectedGameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_SelectedGameItem_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_SelectedGameItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_PMInstance_MetaData[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_PMInstance = { "PMInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, PMInstance), Z_Construct_UClass_APuzzleManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_PMInstance_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_PMInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabSoundCue = { "GrabSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, GrabSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabSoundCue_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabSoundCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DropSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DropSoundCue = { "DropSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, DropSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DropSoundCue_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DropSoundCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ClickSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ClickSoundCue = { "ClickSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, ClickSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ClickSoundCue_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ClickSoundCue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenu = { "ActionMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, ActionMenu), Z_Construct_UClass_UActionMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenu_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenu_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBox = { "DialogueBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, DialogueBox), Z_Construct_UClass_UDialogueBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBox_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenu = { "InventoryMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, InventoryMenu), Z_Construct_UClass_UInventoryMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenu_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenu_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitInitNPC_MetaData[] = {
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitInitNPC = { "HitInitNPC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, HitInitNPC), Z_Construct_UClass_AInitNPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitInitNPC_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitInitNPC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBoxClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_IsPlayingScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_NPCIsHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_MaxGrabDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitGameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_SelectedGameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_PMInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DropSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ClickSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_DialogueBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InventoryMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_HitInitNPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPHINX_DevPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::ClassParams = {
		&ASPHINX_DevPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASPHINX_DevPlayerController()
	{
		if (!Z_Registration_Info_UClass_ASPHINX_DevPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPHINX_DevPlayerController.OuterSingleton, Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPHINX_DevPlayerController.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<ASPHINX_DevPlayerController>()
	{
		return ASPHINX_DevPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPHINX_DevPlayerController);
	ASPHINX_DevPlayerController::~ASPHINX_DevPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPHINX_DevPlayerController, ASPHINX_DevPlayerController::StaticClass, TEXT("ASPHINX_DevPlayerController"), &Z_Registration_Info_UClass_ASPHINX_DevPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPHINX_DevPlayerController), 3360909174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_3168811630(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
