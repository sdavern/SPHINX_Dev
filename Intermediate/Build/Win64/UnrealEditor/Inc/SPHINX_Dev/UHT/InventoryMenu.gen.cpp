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
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryButton_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryMenu();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryMenu::execChangeUpperText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeUpperText(Z_Param_NewText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryMenu::execChangeLowerText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLowerText(Z_Param_NewText);
		P_NATIVE_END;
	}
	void UInventoryMenu::StaticRegisterNativesUInventoryMenu()
	{
		UClass* Class = UInventoryMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeLowerText", &UInventoryMenu::execChangeLowerText },
			{ "ChangeUpperText", &UInventoryMenu::execChangeUpperText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics
	{
		struct InventoryMenu_eventChangeLowerText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryMenu_eventChangeLowerText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::NewProp_NewText_MetaData), Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::NewProp_NewText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryMenu, nullptr, "ChangeLowerText", nullptr, nullptr, Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::InventoryMenu_eventChangeLowerText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::InventoryMenu_eventChangeLowerText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryMenu_ChangeLowerText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryMenu_ChangeLowerText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics
	{
		struct InventoryMenu_eventChangeUpperText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryMenu_eventChangeUpperText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::NewProp_NewText_MetaData), Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::NewProp_NewText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryMenu, nullptr, "ChangeUpperText", nullptr, nullptr, Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::InventoryMenu_eventChangeUpperText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::InventoryMenu_eventChangeUpperText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryMenu_ChangeUpperText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryMenu_ChangeUpperText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryMenu);
	UClass* Z_Construct_UClass_UInventoryMenu_NoRegister()
	{
		return UInventoryMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllButtons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllButtons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllButtons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllImages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllImages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllImages;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryMenu_ChangeLowerText, "ChangeLowerText" }, // 3282152601
		{ &Z_Construct_UFunction_UInventoryMenu_ChangeUpperText, "ChangeUpperText" }, // 2523909348
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventoryMenu.h" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons_Inner = { "AllButtons", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons = { "AllButtons", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, AllButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages_Inner = { "AllImages", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages = { "AllImages", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, AllImages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_LowerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_LowerText = { "LowerText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, LowerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_LowerText_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_LowerText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_UpperText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_UpperText = { "UpperText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, UpperText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_UpperText_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_UpperText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1 = { "IB1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB1), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_Image = { "IB1_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB1_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2 = { "IB2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB2), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_Image = { "IB2_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB2_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3 = { "IB3", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB3), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_Image = { "IB3_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB3_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4 = { "IB4", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB4), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_Image = { "IB4_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB4_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5 = { "IB5", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB5), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_Image = { "IB5_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB5_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6 = { "IB6", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB6), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_Image = { "IB6_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB6_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7 = { "IB7", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB7), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_Image = { "IB7_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB7_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8 = { "IB8", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB8), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_Image = { "IB8_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB8_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9 = { "IB9", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB9), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_Image = { "IB9_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB9_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10 = { "IB10", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB10), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_Image = { "IB10_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB10_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11 = { "IB11", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB11), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_Image = { "IB11_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB11_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12 = { "IB12", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB12), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_Image = { "IB12_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB12_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13 = { "IB13", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB13), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_Image = { "IB13_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB13_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14 = { "IB14", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB14), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_Image = { "IB14_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB14_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15 = { "IB15", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB15), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_Image = { "IB15_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB15_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16 = { "IB16", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB16), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_Image = { "IB16_Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, IB16_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_Image_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_DefaultSprite_MetaData[] = {
		{ "Category", "InventoryMenu" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_DefaultSprite = { "DefaultSprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, DefaultSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_DefaultSprite_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_DefaultSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryMenu_Statics::NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryMenu_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryMenu, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::NewProp_ExitButton_MetaData), Z_Construct_UClass_UInventoryMenu_Statics::NewProp_ExitButton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_AllImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_LowerText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_UpperText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB1_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB2_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB3_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB4_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB5_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB6_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB7_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB8_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB9_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB10_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB11_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB12_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB13_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB14_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB15_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_IB16_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_DefaultSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryMenu_Statics::NewProp_ExitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryMenu_Statics::ClassParams = {
		&UInventoryMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryMenu_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryMenu);
	UInventoryMenu::~UInventoryMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryMenu, UInventoryMenu::StaticClass, TEXT("UInventoryMenu"), &Z_Registration_Info_UClass_UInventoryMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryMenu), 780891649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_31769204(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
