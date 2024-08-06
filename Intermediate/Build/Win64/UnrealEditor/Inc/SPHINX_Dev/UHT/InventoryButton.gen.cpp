// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InventoryButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryButton() {}
// Cross Module References
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryButton();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UInventoryButton_NoRegister();
	SPHINX_DEV_API UFunction* Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics
	{
		struct InventoryButton_eventOnInventoryButtonClicked_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryButton_eventOnInventoryButtonClicked_Parms, Button), Z_Construct_UClass_UInventoryButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::NewProp_Button_MetaData), Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::NewProp_Button_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InventoryButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryButton, nullptr, "OnInventoryButtonClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::InventoryButton_eventOnInventoryButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::InventoryButton_eventOnInventoryButtonClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UInventoryButton::FOnInventoryButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryButtonClicked, UInventoryButton* Button)
{
	struct InventoryButton_eventOnInventoryButtonClicked_Parms
	{
		UInventoryButton* Button;
	};
	InventoryButton_eventOnInventoryButtonClicked_Parms Parms;
	Parms.Button=Button;
	OnInventoryButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInventoryButton::execButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonClicked();
		P_NATIVE_END;
	}
	void UInventoryButton::StaticRegisterNativesUInventoryButton()
	{
		UClass* Class = UInventoryButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClicked", &UInventoryButton::execButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryButton_ButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryButton_ButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InventoryButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryButton_ButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryButton, nullptr, "ButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryButton_ButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryButton_ButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryButton_ButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryButton_ButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryButton);
	UClass* Z_Construct_UClass_UInventoryButton_NoRegister()
	{
		return UInventoryButton::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryButtonClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryButtonClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryButton_ButtonClicked, "ButtonClicked" }, // 1862420067
		{ &Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature, "OnInventoryButtonClicked__DelegateSignature" }, // 3647513771
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryButton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventoryButton.h" },
		{ "ModuleRelativePath", "InventoryButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryButton_Statics::NewProp_OnInventoryButtonClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "InventoryButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryButton_Statics::NewProp_OnInventoryButtonClicked = { "OnInventoryButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryButton, OnInventoryButtonClicked), Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::NewProp_OnInventoryButtonClicked_MetaData), Z_Construct_UClass_UInventoryButton_Statics::NewProp_OnInventoryButtonClicked_MetaData) }; // 3647513771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryButton_Statics::NewProp_GameItem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryButton_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryButton, GameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::NewProp_GameItem_MetaData), Z_Construct_UClass_UInventoryButton_Statics::NewProp_GameItem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryButton_Statics::NewProp_OnInventoryButtonClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryButton_Statics::NewProp_GameItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryButton_Statics::ClassParams = {
		&UInventoryButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryButton()
	{
		if (!Z_Registration_Info_UClass_UInventoryButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryButton.OuterSingleton, Z_Construct_UClass_UInventoryButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryButton.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UInventoryButton>()
	{
		return UInventoryButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryButton);
	UInventoryButton::~UInventoryButton() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryButton, UInventoryButton::StaticClass, TEXT("UInventoryButton"), &Z_Registration_Info_UClass_UInventoryButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryButton), 3136652626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryButton_h_4220536563(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
