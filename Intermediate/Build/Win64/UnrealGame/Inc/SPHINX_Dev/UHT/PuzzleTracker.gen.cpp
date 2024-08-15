// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/PuzzleTracker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleTracker() {}
// Cross Module References
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzleTracker();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzleTracker_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UPuzzleTracker::execUpdateText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PuzzleNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateText(Z_Param_PuzzleNumber);
		P_NATIVE_END;
	}
	void UPuzzleTracker::StaticRegisterNativesUPuzzleTracker()
	{
		UClass* Class = UPuzzleTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateText", &UPuzzleTracker::execUpdateText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics
	{
		struct PuzzleTracker_eventUpdateText_Parms
		{
			int32 PuzzleNumber;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PuzzleNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::NewProp_PuzzleNumber = { "PuzzleNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzleTracker_eventUpdateText_Parms, PuzzleNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::NewProp_PuzzleNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleTracker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTracker, nullptr, "UpdateText", nullptr, nullptr, Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::PuzzleTracker_eventUpdateText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::PuzzleTracker_eventUpdateText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPuzzleTracker_UpdateText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzleTracker_UpdateText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuzzleTracker);
	UClass* Z_Construct_UClass_UPuzzleTracker_NoRegister()
	{
		return UPuzzleTracker::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackerText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackerText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTracker_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleTracker_UpdateText, "UpdateText" }, // 586436386
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTracker_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTracker_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PuzzleTracker.h" },
		{ "ModuleRelativePath", "PuzzleTracker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTracker_Statics::NewProp_TrackerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PuzzleTracker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuzzleTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleTracker_Statics::NewProp_TrackerText = { "TrackerText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzleTracker, TrackerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTracker_Statics::NewProp_TrackerText_MetaData), Z_Construct_UClass_UPuzzleTracker_Statics::NewProp_TrackerText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzleTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleTracker_Statics::NewProp_TrackerText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleTracker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleTracker_Statics::ClassParams = {
		&UPuzzleTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPuzzleTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTracker_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTracker_Statics::Class_MetaDataParams), Z_Construct_UClass_UPuzzleTracker_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTracker_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPuzzleTracker()
	{
		if (!Z_Registration_Info_UClass_UPuzzleTracker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuzzleTracker.OuterSingleton, Z_Construct_UClass_UPuzzleTracker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPuzzleTracker.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UPuzzleTracker>()
	{
		return UPuzzleTracker::StaticClass();
	}
	UPuzzleTracker::UPuzzleTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleTracker);
	UPuzzleTracker::~UPuzzleTracker() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleTracker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleTracker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPuzzleTracker, UPuzzleTracker::StaticClass, TEXT("UPuzzleTracker"), &Z_Registration_Info_UClass_UPuzzleTracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzleTracker), 4246818106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleTracker_h_565165796(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleTracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleTracker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
