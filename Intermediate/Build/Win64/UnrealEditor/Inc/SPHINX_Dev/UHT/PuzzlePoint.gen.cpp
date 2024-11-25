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
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningGamePP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OwningGamePP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsNPC_MetaData[];
#endif
		static void NewProp_IsNPC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsText_MetaData[];
#endif
		static void NewProp_IsText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsObject_MetaData[];
#endif
		static void NewProp_IsObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PuzzleGoals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleGoals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzleGoals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainGoal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGoal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzleGoalsPtrs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleGoalsPtrs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzleGoalsPtrs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPuzzleRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPuzzleRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPuzzleRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GoalDialogue;
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
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PuzzlePoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_OwningGamePP_MetaData[] = {
		{ "Category", "PuzzlePoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//was (Transient)\n" },
#endif
		{ "ModuleRelativePath", "PuzzlePoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "was (Transient)" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_OwningGamePP = { "OwningGamePP", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, OwningGamePP), Z_Construct_UClass_UClass, Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_OwningGamePP_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_OwningGamePP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	void Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC_SetBit(void* Obj)
	{
		((UPuzzlePoint*)Obj)->IsNPC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC = { "IsNPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuzzlePoint), &Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	void Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText_SetBit(void* Obj)
	{
		((UPuzzlePoint*)Obj)->IsText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText = { "IsText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuzzlePoint), &Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	void Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject_SetBit(void* Obj)
	{
		((UPuzzlePoint*)Obj)->IsObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject = { "IsObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPuzzlePoint), &Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MaxDepth_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, MaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MaxDepth_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MaxDepth_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_Inner = { "PuzzleGoals", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_MetaData[] = {
		{ "Category", "PuzzlePoint" },
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals = { "PuzzleGoals", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, PuzzleGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MainGoal_MetaData[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MainGoal = { "MainGoal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, MainGoal), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MainGoal_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MainGoal_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs_Inner = { "PuzzleGoalsPtrs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs_MetaData[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs = { "PuzzleGoalsPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, PuzzleGoalsPtrs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules_Inner = { "CurrentPuzzleRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules_MetaData[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules = { "CurrentPuzzleRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, CurrentPuzzleRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_GoalDialogue_MetaData[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_GoalDialogue = { "GoalDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPuzzlePoint, GoalDialogue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_GoalDialogue_MetaData), Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_GoalDialogue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_OwningGamePP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsNPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_IsObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MaxDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_MainGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_PuzzleGoalsPtrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_CurrentPuzzleRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePoint_Statics::NewProp_GoalDialogue,
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
		{ Z_Construct_UClass_UPuzzlePoint, UPuzzlePoint::StaticClass, TEXT("UPuzzlePoint"), &Z_Registration_Info_UClass_UPuzzlePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzlePoint), 2700534781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_30379263(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
