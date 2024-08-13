// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/SphinxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphinxActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASphinxActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASphinxActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void ASphinxActor::StaticRegisterNativesASphinxActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASphinxActor);
	UClass* Z_Construct_UClass_ASphinxActor_NoRegister()
	{
		return ASphinxActor::StaticClass();
	}
	struct Z_Construct_UClass_ASphinxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASphinxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphinxActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphinxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SphinxActor.h" },
		{ "ModuleRelativePath", "SphinxActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASphinxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphinxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASphinxActor_Statics::ClassParams = {
		&ASphinxActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASphinxActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASphinxActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASphinxActor()
	{
		if (!Z_Registration_Info_UClass_ASphinxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASphinxActor.OuterSingleton, Z_Construct_UClass_ASphinxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASphinxActor.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<ASphinxActor>()
	{
		return ASphinxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphinxActor);
	ASphinxActor::~ASphinxActor() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SphinxActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SphinxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASphinxActor, ASphinxActor::StaticClass, TEXT("ASphinxActor"), &Z_Registration_Info_UClass_ASphinxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASphinxActor), 3930576541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SphinxActor_h_2298455593(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SphinxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SphinxActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
