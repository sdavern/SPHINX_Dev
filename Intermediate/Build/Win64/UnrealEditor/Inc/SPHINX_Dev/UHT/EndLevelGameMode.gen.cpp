// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/EndLevelGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLevelGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AEndLevelGameMode();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AEndLevelGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AEndLevelGameMode::StaticRegisterNativesAEndLevelGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndLevelGameMode);
	UClass* Z_Construct_UClass_AEndLevelGameMode_NoRegister()
	{
		return AEndLevelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEndLevelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndLevelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EndLevelGameMode.h" },
		{ "ModuleRelativePath", "EndLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndLevelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndLevelGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndLevelGameMode_Statics::ClassParams = {
		&AEndLevelGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEndLevelGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEndLevelGameMode()
	{
		if (!Z_Registration_Info_UClass_AEndLevelGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndLevelGameMode.OuterSingleton, Z_Construct_UClass_AEndLevelGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEndLevelGameMode.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AEndLevelGameMode>()
	{
		return AEndLevelGameMode::StaticClass();
	}
	AEndLevelGameMode::AEndLevelGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelGameMode);
	AEndLevelGameMode::~AEndLevelGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_EndLevelGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_EndLevelGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEndLevelGameMode, AEndLevelGameMode::StaticClass, TEXT("AEndLevelGameMode"), &Z_Registration_Info_UClass_AEndLevelGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndLevelGameMode), 781079670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_EndLevelGameMode_h_3011263443(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_EndLevelGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_EndLevelGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
