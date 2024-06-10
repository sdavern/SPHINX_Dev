// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/SpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASpawnPoint();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnPoint::execGetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLocation();
		P_NATIVE_END;
	}
	void ASpawnPoint::StaticRegisterNativesASpawnPoint()
	{
		UClass* Class = ASpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocation", &ASpawnPoint::execGetLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnPoint_GetLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnPoint_GetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnPoint_GetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnPoint, nullptr, "GetLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnPoint_GetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnPoint_GetLocation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpawnPoint_GetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnPoint_GetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnPoint);
	UClass* Z_Construct_UClass_ASpawnPoint_NoRegister()
	{
		return ASpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnableProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnableProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnPoint_GetLocation, "GetLocation" }, // 2914250082
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPoint.h" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_Location_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties_Inner = { "SpawnableProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties = { "SpawnableProperties", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, SpawnableProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_SpawnableProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPoint_Statics::ClassParams = {
		&ASpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnPoint()
	{
		if (!Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton, Z_Construct_UClass_ASpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<ASpawnPoint>()
	{
		return ASpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPoint);
	ASpawnPoint::~ASpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnPoint, ASpawnPoint::StaticClass, TEXT("ASpawnPoint"), &Z_Registration_Info_UClass_ASpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnPoint), 784561541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SpawnPoint_h_1603041057(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
