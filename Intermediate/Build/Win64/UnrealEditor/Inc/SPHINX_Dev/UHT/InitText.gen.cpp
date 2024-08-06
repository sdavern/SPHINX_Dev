// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InitText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitText() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitText();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitText_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AInitText::StaticRegisterNativesAInitText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInitText);
	UClass* Z_Construct_UClass_AInitText_NoRegister()
	{
		return AInitText::StaticClass();
	}
	struct Z_Construct_UClass_AInitText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInitText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInitText_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InitText.h" },
		{ "ModuleRelativePath", "InitText.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInitText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInitText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInitText_Statics::ClassParams = {
		&AInitText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInitText_Statics::Class_MetaDataParams), Z_Construct_UClass_AInitText_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AInitText()
	{
		if (!Z_Registration_Info_UClass_AInitText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInitText.OuterSingleton, Z_Construct_UClass_AInitText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInitText.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AInitText>()
	{
		return AInitText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInitText);
	AInitText::~AInitText() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInitText, AInitText::StaticClass, TEXT("AInitText"), &Z_Registration_Info_UClass_AInitText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInitText), 2909507702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitText_h_3692519883(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
