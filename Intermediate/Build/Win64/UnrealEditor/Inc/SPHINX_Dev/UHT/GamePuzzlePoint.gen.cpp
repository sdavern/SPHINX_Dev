// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/GamePuzzlePoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePuzzlePoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AGamePuzzlePoint::StaticRegisterNativesAGamePuzzlePoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePuzzlePoint);
	UClass* Z_Construct_UClass_AGamePuzzlePoint_NoRegister()
	{
		return AGamePuzzlePoint::StaticClass();
	}
	struct Z_Construct_UClass_AGamePuzzlePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzlePoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzlePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePuzzlePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamePuzzlePoint.h" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint = { "PuzzlePoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePuzzlePoint, PuzzlePoint), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamePuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePuzzlePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePuzzlePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePuzzlePoint_Statics::ClassParams = {
		&AGamePuzzlePoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGamePuzzlePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AGamePuzzlePoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGamePuzzlePoint()
	{
		if (!Z_Registration_Info_UClass_AGamePuzzlePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamePuzzlePoint.OuterSingleton, Z_Construct_UClass_AGamePuzzlePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGamePuzzlePoint.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AGamePuzzlePoint>()
	{
		return AGamePuzzlePoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePuzzlePoint);
	AGamePuzzlePoint::~AGamePuzzlePoint() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamePuzzlePoint, AGamePuzzlePoint::StaticClass, TEXT("AGamePuzzlePoint"), &Z_Registration_Info_UClass_AGamePuzzlePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePuzzlePoint), 665957056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_823099522(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
