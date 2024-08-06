// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/SPHINX_DevGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPHINX_DevGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevGameMode();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void ASPHINX_DevGameMode::StaticRegisterNativesASPHINX_DevGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPHINX_DevGameMode);
	UClass* Z_Construct_UClass_ASPHINX_DevGameMode_NoRegister()
	{
		return ASPHINX_DevGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASPHINX_DevGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPHINX_DevGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SPHINX_DevGameMode.h" },
		{ "ModuleRelativePath", "SPHINX_DevGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPHINX_DevGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPHINX_DevGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPHINX_DevGameMode_Statics::ClassParams = {
		&ASPHINX_DevGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPHINX_DevGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASPHINX_DevGameMode()
	{
		if (!Z_Registration_Info_UClass_ASPHINX_DevGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPHINX_DevGameMode.OuterSingleton, Z_Construct_UClass_ASPHINX_DevGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPHINX_DevGameMode.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<ASPHINX_DevGameMode>()
	{
		return ASPHINX_DevGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPHINX_DevGameMode);
	ASPHINX_DevGameMode::~ASPHINX_DevGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPHINX_DevGameMode, ASPHINX_DevGameMode::StaticClass, TEXT("ASPHINX_DevGameMode"), &Z_Registration_Info_UClass_ASPHINX_DevGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPHINX_DevGameMode), 3995748269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevGameMode_h_2810048292(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
