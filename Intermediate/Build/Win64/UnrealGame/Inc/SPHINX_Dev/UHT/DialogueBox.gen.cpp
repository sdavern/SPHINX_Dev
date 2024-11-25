// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/DialogueBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBox() {}
// Cross Module References
	SPHINX_DEV_API UClass* Z_Construct_UClass_UDialogueBox();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UDialogueBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueBox::execChangeInspectText)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_ButtonText);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeInspectText(Z_Param_ButtonText,Z_Param_NewText);
		P_NATIVE_END;
	}
	void UDialogueBox::StaticRegisterNativesUDialogueBox()
	{
		UClass* Class = UDialogueBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeInspectText", &UDialogueBox::execChangeInspectText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics
	{
		struct DialogueBox_eventChangeInspectText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_ButtonText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBox_eventChangeInspectText_Parms, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_ButtonText_MetaData), Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_ButtonText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBox_eventChangeInspectText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_NewText_MetaData), Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_NewText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBox, nullptr, "ChangeInspectText", nullptr, nullptr, Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::DialogueBox_eventChangeInspectText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::DialogueBox_eventChangeInspectText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueBox_ChangeInspectText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBox_ChangeInspectText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBox);
	UClass* Z_Construct_UClass_UDialogueBox_NoRegister()
	{
		return UDialogueBox::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueBox_ChangeInspectText, "ChangeInspectText" }, // 2013292951
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DialogueBox.h" },
		{ "ModuleRelativePath", "DialogueBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBox_Statics::NewProp_InspectText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBox_Statics::NewProp_InspectText = { "InspectText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBox, InspectText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::NewProp_InspectText_MetaData), Z_Construct_UClass_UDialogueBox_Statics::NewProp_InspectText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBox_Statics::NewProp_InspectText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBox_Statics::ClassParams = {
		&UDialogueBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueBox()
	{
		if (!Z_Registration_Info_UClass_UDialogueBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBox.OuterSingleton, Z_Construct_UClass_UDialogueBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueBox.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UDialogueBox>()
	{
		return UDialogueBox::StaticClass();
	}
	UDialogueBox::UDialogueBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBox);
	UDialogueBox::~UDialogueBox() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DialogueBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DialogueBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBox, UDialogueBox::StaticClass, TEXT("UDialogueBox"), &Z_Registration_Info_UClass_UDialogueBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBox), 4065398672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DialogueBox_h_2002299685(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DialogueBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DialogueBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
