// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Generator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AGenerator::StaticRegisterNativesAGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenerator);
	UClass* Z_Construct_UClass_AGenerator_NoRegister()
	{
		return AGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingInventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingInventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Make singleton, see GenerateForArea in PuzzleManager\n" },
#endif
		{ "IncludePath", "Generator.h" },
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make singleton, see GenerateForArea in PuzzleManager" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_Inner = { "StartingInventory", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//static TMap<UArea*, URule*> PuzzlesPerArea;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static TMap<UArea*, URule*> PuzzlesPerArea;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory = { "StartingInventory", nullptr, (EPropertyFlags)0x0040008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, StartingInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_StartingInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenerator_Statics::ClassParams = {
		&AGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGenerator()
	{
		if (!Z_Registration_Info_UClass_AGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenerator.OuterSingleton, Z_Construct_UClass_AGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGenerator.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AGenerator>()
	{
		return AGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerator);
	AGenerator::~AGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGenerator, AGenerator::StaticClass, TEXT("AGenerator"), &Z_Registration_Info_UClass_AGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenerator), 535745537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_3790355253(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
