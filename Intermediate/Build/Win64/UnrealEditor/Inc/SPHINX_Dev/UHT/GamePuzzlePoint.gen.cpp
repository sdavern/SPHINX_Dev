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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitNPC_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitObject_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInitText_NoRegister();
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_PuzzlePoint;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InitNPCs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitNPCs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitNPCs;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InitTexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitTexts;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InitObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestNPC_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TestNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitSpawned_MetaData[];
#endif
		static void NewProp_InitSpawned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InitSpawned;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint = { "PuzzlePoint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePuzzlePoint, PuzzlePoint), Z_Construct_UClass_UClass, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs_Inner = { "InitNPCs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AInitNPC_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs = { "InitNPCs", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePuzzlePoint, InitNPCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts_Inner = { "InitTexts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AInitText_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts = { "InitTexts", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePuzzlePoint, InitTexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects_Inner = { "InitObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AInitObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects = { "InitObjects", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePuzzlePoint, InitObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_TestNPC_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_TestNPC = { "TestNPC", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamePuzzlePoint, TestNPC), Z_Construct_UClass_UClass, Z_Construct_UClass_AInitNPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_TestNPC_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_TestNPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	void Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((AGamePuzzlePoint*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGamePuzzlePoint), &Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned_MetaData[] = {
		{ "Category", "GamePuzzlePoint" },
		{ "ModuleRelativePath", "GamePuzzlePoint.h" },
	};
#endif
	void Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned_SetBit(void* Obj)
	{
		((AGamePuzzlePoint*)Obj)->InitSpawned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned = { "InitSpawned", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGamePuzzlePoint), &Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned_MetaData), Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamePuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_PuzzlePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitNPCs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitTexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_TestNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_IsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePuzzlePoint_Statics::NewProp_InitSpawned,
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
		{ Z_Construct_UClass_AGamePuzzlePoint, AGamePuzzlePoint::StaticClass, TEXT("AGamePuzzlePoint"), &Z_Registration_Info_UClass_AGamePuzzlePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePuzzlePoint), 4099119220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_875861587(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GamePuzzlePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
