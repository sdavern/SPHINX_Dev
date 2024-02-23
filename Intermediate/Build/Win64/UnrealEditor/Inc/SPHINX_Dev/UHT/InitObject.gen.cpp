// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InitObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitObject();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AInitObject::StaticRegisterNativesAInitObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInitObject);
	UClass* Z_Construct_UClass_AInitObject_NoRegister()
	{
		return AInitObject::StaticClass();
	}
	struct Z_Construct_UClass_AInitObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInitObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInitObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InitObject.h" },
		{ "ModuleRelativePath", "InitObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInitObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInitObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInitObject_Statics::ClassParams = {
		&AInitObject::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInitObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AInitObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AInitObject()
	{
		if (!Z_Registration_Info_UClass_AInitObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInitObject.OuterSingleton, Z_Construct_UClass_AInitObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInitObject.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AInitObject>()
	{
		return AInitObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInitObject);
	AInitObject::~AInitObject() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInitObject, AInitObject::StaticClass, TEXT("AInitObject"), &Z_Registration_Info_UClass_AInitObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInitObject), 2096245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitObject_h_1309988078(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
