// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/VectorStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorStruct() {}
// Cross Module References
	SPHINX_DEV_API UScriptStruct* Z_Construct_UScriptStruct_FVector7D();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector7D;
class UScriptStruct* FVector7D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector7D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector7D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector7D, (UObject*)Z_Construct_UPackage__Script_SPHINX_Dev(), TEXT("Vector7D"));
	}
	return Z_Registration_Info_UScriptStruct_Vector7D.OuterSingleton;
}
template<> SPHINX_DEV_API UScriptStruct* StaticStruct<FVector7D>()
{
	return FVector7D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVector7D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Tension_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tension_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector7D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "VectorStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector7D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector7D>();
	}
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension_Inner = { "Tension", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension_MetaData[] = {
		{ "Category", "Tension" },
		{ "ModuleRelativePath", "VectorStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension = { "Tension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector7D, Tension), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension_MetaData), Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector7D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector7D_Statics::NewProp_Tension,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector7D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
		nullptr,
		&NewStructOps,
		"Vector7D",
		Z_Construct_UScriptStruct_FVector7D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector7D_Statics::PropPointers),
		sizeof(FVector7D),
		alignof(FVector7D),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector7D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector7D_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector7D_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVector7D()
	{
		if (!Z_Registration_Info_UScriptStruct_Vector7D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector7D.InnerSingleton, Z_Construct_UScriptStruct_FVector7D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vector7D.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_VectorStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_VectorStruct_h_Statics::ScriptStructInfo[] = {
		{ FVector7D::StaticStruct, Z_Construct_UScriptStruct_FVector7D_Statics::NewStructOps, TEXT("Vector7D"), &Z_Registration_Info_UScriptStruct_Vector7D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector7D), 2389293912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_VectorStruct_h_696392821(TEXT("/Script/SPHINX_Dev"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_VectorStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_VectorStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
