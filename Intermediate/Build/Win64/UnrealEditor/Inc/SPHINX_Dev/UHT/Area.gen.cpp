// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/Area.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArea() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UArea();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UArea_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	void UArea::StaticRegisterNativesUArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArea);
	UClass* Z_Construct_UClass_UArea_NoRegister()
	{
		return UArea::StaticClass();
	}
	struct Z_Construct_UClass_UArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Goals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Goals;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedTo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedTo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFinalScene_MetaData[];
#endif
		static void NewProp_IsFinalScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFinalScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGoal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Area.h" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_Goals_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, Goals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_Goals_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_Goals_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo_Inner = { "ConnectedTo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArea_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo = { "ConnectedTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, ConnectedTo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_InGameArea_MetaData[] = {
		{ "Category", "Area" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_InGameArea = { "InGameArea", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, InGameArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_InGameArea_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_InGameArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_MaxDepth_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, MaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_MaxDepth_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_MaxDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	void Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene_SetBit(void* Obj)
	{
		((UArea*)Obj)->IsFinalScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene = { "IsFinalScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArea), &Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_CurrentGoal_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_CurrentGoal = { "CurrentGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, CurrentGoal), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_CurrentGoal_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_CurrentGoal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArea_Statics::NewProp_AreaObject_MetaData[] = {
		{ "Category", "Area" },
		{ "ModuleRelativePath", "Area.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArea_Statics::NewProp_AreaObject = { "AreaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArea, AreaObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::NewProp_AreaObject_MetaData), Z_Construct_UClass_UArea_Statics::NewProp_AreaObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_Goals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_Goals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_ConnectedTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_InGameArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_MaxDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_IsFinalScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_CurrentGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArea_Statics::NewProp_AreaObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArea_Statics::ClassParams = {
		&UArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UArea_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArea_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArea()
	{
		if (!Z_Registration_Info_UClass_UArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArea.OuterSingleton, Z_Construct_UClass_UArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArea.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UArea>()
	{
		return UArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArea);
	UArea::~UArea() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Area_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Area_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArea, UArea::StaticClass, TEXT("UArea"), &Z_Registration_Info_UClass_UArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArea), 1666133657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Area_h_3946887733(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Area_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Area_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
