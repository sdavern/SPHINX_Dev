// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/ConditionalObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionalObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AConditionalObject();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AConditionalObject_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void AConditionalObject::StaticRegisterNativesAConditionalObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConditionalObject);
	UClass* Z_Construct_UClass_AConditionalObject_NoRegister()
	{
		return AConditionalObject::StaticClass();
	}
	struct Z_Construct_UClass_AConditionalObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Area;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectedItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConditionalObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConditionalObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConditionalObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ConditionalObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConditionalObject_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "ConditionalObject" },
		{ "ModuleRelativePath", "ConditionalObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConditionalObject_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConditionalObject, Condition), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::NewProp_Condition_MetaData), Z_Construct_UClass_AConditionalObject_Statics::NewProp_Condition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConditionalObject_Statics::NewProp_Area_MetaData[] = {
		{ "Category", "ConditionalObject" },
		{ "ModuleRelativePath", "ConditionalObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConditionalObject_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConditionalObject, Area), Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::NewProp_Area_MetaData), Z_Construct_UClass_AConditionalObject_Statics::NewProp_Area_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConditionalObject_Statics::NewProp_AffectedItem_MetaData[] = {
		{ "Category", "ConditionalObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AffectedItem would be an AActor in UE5 if it's a physical object in the world\n" },
#endif
		{ "ModuleRelativePath", "ConditionalObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AffectedItem would be an AActor in UE5 if it's a physical object in the world" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConditionalObject_Statics::NewProp_AffectedItem = { "AffectedItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConditionalObject, AffectedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::NewProp_AffectedItem_MetaData), Z_Construct_UClass_AConditionalObject_Statics::NewProp_AffectedItem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConditionalObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConditionalObject_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConditionalObject_Statics::NewProp_Area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConditionalObject_Statics::NewProp_AffectedItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConditionalObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConditionalObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConditionalObject_Statics::ClassParams = {
		&AConditionalObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConditionalObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AConditionalObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConditionalObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AConditionalObject()
	{
		if (!Z_Registration_Info_UClass_AConditionalObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConditionalObject.OuterSingleton, Z_Construct_UClass_AConditionalObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConditionalObject.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<AConditionalObject>()
	{
		return AConditionalObject::StaticClass();
	}
	AConditionalObject::AConditionalObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConditionalObject);
	AConditionalObject::~AConditionalObject() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ConditionalObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ConditionalObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConditionalObject, AConditionalObject::StaticClass, TEXT("AConditionalObject"), &Z_Registration_Info_UClass_AConditionalObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConditionalObject), 1041471255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ConditionalObject_h_2713704560(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ConditionalObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ConditionalObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
