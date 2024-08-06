// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Avatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatar() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AAvatar();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AAvatar::StaticRegisterNativesAAvatar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAvatar);
	UClass* Z_Construct_UClass_AAvatar_NoRegister()
	{
		return AAvatar::StaticClass();
	}
	struct Z_Construct_UClass_AAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalvedSpeedModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalvedSpeedModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperZDCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Avatar.h" },
		{ "ModuleRelativePath", "Avatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_GameItem_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to bind functionality to input\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to bind functionality to input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, GameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_GameItem_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_GameItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_SpeedModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_SpeedModifier = { "SpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, SpeedModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_SpeedModifier_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_SpeedModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_HalvedSpeedModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_HalvedSpeedModifier = { "HalvedSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, HalvedSpeedModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_HalvedSpeedModifier_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_HalvedSpeedModifier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_SpeedModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_HalvedSpeedModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvatar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAvatar_Statics::ClassParams = {
		&AAvatar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAvatar()
	{
		if (!Z_Registration_Info_UClass_AAvatar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAvatar.OuterSingleton, Z_Construct_UClass_AAvatar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAvatar.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AAvatar>()
	{
		return AAvatar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvatar);
	AAvatar::~AAvatar() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Avatar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Avatar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAvatar, AAvatar::StaticClass, TEXT("AAvatar"), &Z_Registration_Info_UClass_AAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAvatar), 632961084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Avatar_h_860551211(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Avatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Avatar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
