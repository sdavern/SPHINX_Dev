// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/PuzzlePoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UPuzzlePoint::StaticRegisterNativesUPuzzlePoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuzzlePoint);
	UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister()
	{
		return UPuzzlePoint::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzlePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PuzzleGoals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleGoals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzleGoals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzlePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PuzzlePoint.h" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_Inner = { "PuzzleGoals", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals = { "PuzzleGoals", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, PuzzleGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzlePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzlePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuzzlePoint_Statics::ClassParams = {
		&UPuzzlePoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPuzzlePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UPuzzlePoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPuzzlePoint()
	{
		if (!Z_Registration_Info_UClass_UPuzzlePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuzzlePoint.OuterSingleton, Z_Construct_UClass_UPuzzlePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPuzzlePoint.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UPuzzlePoint>()
	{
		return UPuzzlePoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzlePoint);
	UPuzzlePoint::~UPuzzlePoint() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPuzzlePoint, UPuzzlePoint::StaticClass, TEXT("UPuzzlePoint"), &Z_Registration_Info_UClass_UPuzzlePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzlePoint), 2447844536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_3581210030(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
