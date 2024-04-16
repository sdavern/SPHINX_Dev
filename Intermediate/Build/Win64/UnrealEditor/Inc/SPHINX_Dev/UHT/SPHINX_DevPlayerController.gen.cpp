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
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevPlayerController();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevPlayerController_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UActionMenu_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void ASPHINX_DevPlayerController::StaticRegisterNativesASPHINX_DevPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPHINX_DevPlayerController);
	UClass* Z_Construct_UClass_ASPHINX_DevPlayerController_NoRegister()
	{
		return ASPHINX_DevPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASPHINX_DevPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrabDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrabDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer_MetaData[] = {
		{ "Category", "SPHINX_DevPlayerController" },
		{ "ModuleRelativePath", "SPHINX_DevPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer = { "ActivePlayer", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevPlayerController, ActivePlayer), Z_Construct_UClass_AAvatar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer_MetaData), Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer_MetaData) };
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActionMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_ActivePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_MaxGrabDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::NewProp_GrabRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPHINX_DevPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::ClassParams = {
		&ASPHINX_DevPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASPHINX_DevPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	ASPHINX_DevPlayerController::ASPHINX_DevPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPHINX_DevPlayerController);
	ASPHINX_DevPlayerController::~ASPHINX_DevPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPHINX_DevPlayerController, ASPHINX_DevPlayerController::StaticClass, TEXT("ASPHINX_DevPlayerController"), &Z_Registration_Info_UClass_ASPHINX_DevPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPHINX_DevPlayerController), 1966176070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_2225849482(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
