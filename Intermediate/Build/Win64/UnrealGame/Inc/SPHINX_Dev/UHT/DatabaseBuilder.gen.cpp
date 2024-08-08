// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/DatabaseBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UDatabaseBuilder();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UDatabaseBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UDatabaseBuilder::execAppendProperties)
	{
		P_GET_TARRAY(FString,Z_Param_BaseProps);
		P_GET_TARRAY(FString,Z_Param_AppProps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendProperties(Z_Param_BaseProps,Z_Param_AppProps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseBuilder::execLoadBaseItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadBaseItems(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseBuilder::execRefreshDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshDatabase();
		P_NATIVE_END;
	}
	void UDatabaseBuilder::StaticRegisterNativesUDatabaseBuilder()
	{
		UClass* Class = UDatabaseBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendProperties", &UDatabaseBuilder::execAppendProperties },
			{ "LoadBaseItems", &UDatabaseBuilder::execLoadBaseItems },
			{ "RefreshDatabase", &UDatabaseBuilder::execRefreshDatabase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics
	{
		struct DatabaseBuilder_eventAppendProperties_Parms
		{
			TArray<FString> BaseProps;
			TArray<FString> AppProps;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseProps_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseProps;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppProps_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppProps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_BaseProps_Inner = { "BaseProps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_BaseProps = { "BaseProps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseBuilder_eventAppendProperties_Parms, BaseProps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_AppProps_Inner = { "AppProps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_AppProps = { "AppProps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseBuilder_eventAppendProperties_Parms, AppProps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_BaseProps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_BaseProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_AppProps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::NewProp_AppProps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DatabaseBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseBuilder, nullptr, "AppendProperties", nullptr, nullptr, Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::DatabaseBuilder_eventAppendProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::DatabaseBuilder_eventAppendProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDatabaseBuilder_AppendProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseBuilder_AppendProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics
	{
		struct DatabaseBuilder_eventLoadBaseItems_Parms
		{
			FString FilePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseBuilder_eventLoadBaseItems_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::NewProp_FilePath_MetaData), Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::NewProp_FilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DatabaseBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseBuilder, nullptr, "LoadBaseItems", nullptr, nullptr, Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::DatabaseBuilder_eventLoadBaseItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::DatabaseBuilder_eventLoadBaseItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DatabaseBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseBuilder, nullptr, "RefreshDatabase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatabaseBuilder);
	UClass* Z_Construct_UClass_UDatabaseBuilder_NoRegister()
	{
		return UDatabaseBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseBuilder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatabaseBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseBuilder_AppendProperties, "AppendProperties" }, // 3796532112
		{ &Z_Construct_UFunction_UDatabaseBuilder_LoadBaseItems, "LoadBaseItems" }, // 576818644
		{ &Z_Construct_UFunction_UDatabaseBuilder_RefreshDatabase, "RefreshDatabase" }, // 759173770
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseBuilder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DatabaseBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DatabaseBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseBuilder_Statics::ClassParams = {
		&UDatabaseBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatabaseBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDatabaseBuilder()
	{
		if (!Z_Registration_Info_UClass_UDatabaseBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatabaseBuilder.OuterSingleton, Z_Construct_UClass_UDatabaseBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatabaseBuilder.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UDatabaseBuilder>()
	{
		return UDatabaseBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseBuilder);
	UDatabaseBuilder::~UDatabaseBuilder() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DatabaseBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DatabaseBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatabaseBuilder, UDatabaseBuilder::StaticClass, TEXT("UDatabaseBuilder"), &Z_Registration_Info_UClass_UDatabaseBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatabaseBuilder), 4156434232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DatabaseBuilder_h_603392935(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DatabaseBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_DatabaseBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
