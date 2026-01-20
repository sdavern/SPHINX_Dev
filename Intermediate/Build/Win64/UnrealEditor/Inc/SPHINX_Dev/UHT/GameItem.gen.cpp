// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/GameItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItemProperty_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(UGameItem::execRespawnItem)
	{
		P_GET_OBJECT(UGameItem,Z_Param_GameItem);
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_GET_OBJECT(APuzzleManager,Z_Param_PMInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameItem::RespawnItem(Z_Param_GameItem,Z_Param_Rule,Z_Param_PMInstance);
		P_NATIVE_END;
	}
	void UGameItem::StaticRegisterNativesUGameItem()
	{
		UClass* Class = UGameItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RespawnItem", &UGameItem::execRespawnItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameItem_RespawnItem_Statics
	{
		struct GameItem_eventRespawnItem_Parms
		{
			UGameItem* GameItem;
			URule* Rule;
			APuzzleManager* PMInstance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PMInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_GameItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_GameItem = { "GameItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventRespawnItem_Parms, GameItem), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_GameItem_MetaData), Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_GameItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventRespawnItem_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_PMInstance = { "PMInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameItem_eventRespawnItem_Parms, PMInstance), Z_Construct_UClass_APuzzleManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameItem_eventRespawnItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameItem_eventRespawnItem_Parms), &Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameItem_RespawnItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_GameItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_PMInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameItem_RespawnItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameItem_RespawnItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameItem_RespawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameItem, nullptr, "RespawnItem", nullptr, nullptr, Z_Construct_UFunction_UGameItem_RespawnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RespawnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameItem_RespawnItem_Statics::GameItem_eventRespawnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RespawnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameItem_RespawnItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameItem_RespawnItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameItem_RespawnItem_Statics::GameItem_eventRespawnItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameItem_RespawnItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameItem_RespawnItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameItem);
	UClass* Z_Construct_UClass_UGameItem_NoRegister()
	{
		return UGameItem::StaticClass();
	}
	struct Z_Construct_UClass_UGameItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DbItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DbItem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainedValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsNPC_MetaData[];
#endif
		static void NewProp_IsNPC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInitNPC_MetaData[];
#endif
		static void NewProp_IsInitNPC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInitNPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameItem_RespawnItem, "RespawnItem" }, // 1441095870
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameItem.h" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem = { "DbItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, DbItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue_MetaData[] = {
		{ "Category", "GameItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue = { "ContainedValue", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameItem, ContainedValue), Z_Construct_UClass_UGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_Selected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->IsNPC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC = { "IsNPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_MetaData[] = {
		{ "Category", "GameItem" },
		{ "ModuleRelativePath", "GameItem.h" },
	};
#endif
	void Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_SetBit(void* Obj)
	{
		((UGameItem*)Obj)->IsInitNPC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC = { "IsInitNPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameItem), &Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_MetaData), Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_DbItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_ContainedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_Selected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_IsNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameItem_Statics::NewProp_IsInitNPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameItem_Statics::ClassParams = {
		&UGameItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameItem()
	{
		if (!Z_Registration_Info_UClass_UGameItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameItem.OuterSingleton, Z_Construct_UClass_UGameItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameItem.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<UGameItem>()
	{
		return UGameItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameItem);
	UGameItem::~UGameItem() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameItem, UGameItem::StaticClass, TEXT("UGameItem"), &Z_Registration_Info_UClass_UGameItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameItem), 3669968849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_2834348923(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
