// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/InitNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitNPC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitNPC();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitNPC_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AInitNPC::StaticRegisterNativesAInitNPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInitNPC);
	UClass* Z_Construct_UClass_AInitNPC_NoRegister()
	{
		return AInitNPC::StaticClass();
	}
	struct Z_Construct_UClass_AInitNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInitNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInitNPC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InitNPC.h" },
		{ "ModuleRelativePath", "InitNPC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitNPC_Statics::NewProp_OwningPP_MetaData[] = {
		{ "ModuleRelativePath", "InitNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInitNPC_Statics::NewProp_OwningPP = { "OwningPP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInitNPC, OwningPP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInitNPC_Statics::NewProp_OwningPP_MetaData), Z_Construct_UClass_AInitNPC_Statics::NewProp_OwningPP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInitNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInitNPC_Statics::NewProp_OwningPP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInitNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInitNPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInitNPC_Statics::ClassParams = {
		&AInitNPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInitNPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInitNPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInitNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AInitNPC_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInitNPC_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInitNPC()
	{
		if (!Z_Registration_Info_UClass_AInitNPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInitNPC.OuterSingleton, Z_Construct_UClass_AInitNPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInitNPC.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AInitNPC>()
	{
		return AInitNPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInitNPC);
	AInitNPC::~AInitNPC() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitNPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitNPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInitNPC, AInitNPC::StaticClass, TEXT("AInitNPC"), &Z_Registration_Info_UClass_AInitNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInitNPC), 4085889500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitNPC_h_149694004(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InitNPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
