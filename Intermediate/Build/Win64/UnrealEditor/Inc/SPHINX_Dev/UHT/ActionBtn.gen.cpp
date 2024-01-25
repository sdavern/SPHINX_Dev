// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/ActionBtn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionBtn() {}
// Cross Module References
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionBtn();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionBtn_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UActionBtn::execOnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionBtn::execInitializeButton)
	{
		P_GET_OBJECT(AGameItem,Z_Param_GameItem);
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeButton(Z_Param_GameItem,Z_Param_Rule);
		P_NATIVE_END;
	}
	void UActionBtn::StaticRegisterNativesUActionBtn()
	{
		UClass* Class = UActionBtn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeButton", &UActionBtn::execInitializeButton },
			{ "OnButtonClicked", &UActionBtn::execOnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionBtn_InitializeButton_Statics
	{
		struct ActionBtn_eventInitializeButton_Parms
		{
			AGameItem* GameItem;
			URule* Rule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionBtn_eventInitializeButton_Parms, GameItem), Z_Construct_UClass_AGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActionBtn_eventInitializeButton_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::NewProp_Rule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBtn, nullptr, "InitializeButton", nullptr, nullptr, Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::ActionBtn_eventInitializeButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::ActionBtn_eventInitializeButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActionBtn_InitializeButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBtn_InitializeButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionBtn_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBtn_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBtn_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBtn, nullptr, "OnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBtn_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActionBtn_OnButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActionBtn_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBtn_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionBtn);
	UClass* Z_Construct_UClass_UActionBtn_NoRegister()
	{
		return UActionBtn::StaticClass();
	}
	struct Z_Construct_UClass_UActionBtn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedGameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedGameItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedRule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionBtn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionBtn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionBtn_InitializeButton, "InitializeButton" }, // 28665672
		{ &Z_Construct_UFunction_UActionBtn_OnButtonClicked, "OnButtonClicked" }, // 3872940985
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBtn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActionBtn.h" },
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionBtn, ActionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionButton_MetaData), Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionBtn, ActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionText_MetaData), Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedGameItem_MetaData[] = {
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedGameItem = { "LinkedGameItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionBtn, LinkedGameItem), Z_Construct_UClass_AGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedGameItem_MetaData), Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedGameItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedRule_MetaData[] = {
		{ "ModuleRelativePath", "ActionBtn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedRule = { "LinkedRule", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionBtn, LinkedRule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedRule_MetaData), Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedRule_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionBtn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBtn_Statics::NewProp_ActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedGameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBtn_Statics::NewProp_LinkedRule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionBtn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionBtn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionBtn_Statics::ClassParams = {
		&UActionBtn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionBtn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionBtn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionBtn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UActionBtn()
	{
		if (!Z_Registration_Info_UClass_UActionBtn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionBtn.OuterSingleton, Z_Construct_UClass_UActionBtn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionBtn.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UActionBtn>()
	{
		return UActionBtn::StaticClass();
	}
	UActionBtn::UActionBtn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionBtn);
	UActionBtn::~UActionBtn() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionBtn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionBtn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionBtn, UActionBtn::StaticClass, TEXT("UActionBtn"), &Z_Registration_Info_UClass_UActionBtn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionBtn), 3375207977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionBtn_h_908112281(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionBtn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ActionBtn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
