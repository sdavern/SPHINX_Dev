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
	DEFINE_FUNCTION(UPuzzlePoint::execDeleteGoal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteGoal(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execAddGoal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGoal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execGetObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execGetHint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execGetCurrentGoal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTerm**)Z_Param__Result=P_THIS->GetCurrentGoal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execPickGoal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTerm**)Z_Param__Result=P_THIS->PickGoal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execSetInitType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePoint::execToPuzzleGoalPtrs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToPuzzleGoalPtrs();
		P_NATIVE_END;
	}
	void UPuzzlePoint::StaticRegisterNativesUPuzzlePoint()
	{
		UClass* Class = UPuzzlePoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGoal", &UPuzzlePoint::execAddGoal },
			{ "DeleteGoal", &UPuzzlePoint::execDeleteGoal },
			{ "GetCurrentGoal", &UPuzzlePoint::execGetCurrentGoal },
			{ "GetHint", &UPuzzlePoint::execGetHint },
			{ "GetObjective", &UPuzzlePoint::execGetObjective },
			{ "PickGoal", &UPuzzlePoint::execPickGoal },
			{ "SetInitType", &UPuzzlePoint::execSetInitType },
			{ "ToPuzzleGoalPtrs", &UPuzzlePoint::execToPuzzleGoalPtrs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzlePoint_AddGoal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_AddGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_AddGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "AddGoal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_AddGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_AddGoal_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPuzzlePoint_AddGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_AddGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics
	{
		struct PuzzlePoint_eventDeleteGoal_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzlePoint_eventDeleteGoal_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "DeleteGoal", nullptr, nullptr, Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::PuzzlePoint_eventDeleteGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::PuzzlePoint_eventDeleteGoal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPuzzlePoint_DeleteGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_DeleteGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics
	{
		struct PuzzlePoint_eventGetCurrentGoal_Parms
		{
			UTerm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzlePoint_eventGetCurrentGoal_Parms, ReturnValue), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "GetCurrentGoal", nullptr, nullptr, Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::PuzzlePoint_eventGetCurrentGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::PuzzlePoint_eventGetCurrentGoal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics
	{
		struct PuzzlePoint_eventGetHint_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzlePoint_eventGetHint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "GetHint", nullptr, nullptr, Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::PuzzlePoint_eventGetHint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::PuzzlePoint_eventGetHint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPuzzlePoint_GetHint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_GetHint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics
	{
		struct PuzzlePoint_eventGetObjective_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzlePoint_eventGetObjective_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "GetObjective", nullptr, nullptr, Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::PuzzlePoint_eventGetObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::PuzzlePoint_eventGetObjective_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPuzzlePoint_GetObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_GetObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics
	{
		struct PuzzlePoint_eventPickGoal_Parms
		{
			UTerm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuzzlePoint_eventPickGoal_Parms, ReturnValue), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "PickGoal", nullptr, nullptr, Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::PuzzlePoint_eventPickGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::PuzzlePoint_eventPickGoal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPuzzlePoint_PickGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_PickGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_SetInitType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_SetInitType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_SetInitType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "SetInitType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_SetInitType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_SetInitType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPuzzlePoint_SetInitType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_SetInitType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePoint, nullptr, "ToPuzzleGoalPtrs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuzzlePoint);
	UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister()
	{
		return UPuzzlePoint::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzlePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzlePoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzlePoint_AddGoal, "AddGoal" }, // 2860848082
		{ &Z_Construct_UFunction_UPuzzlePoint_DeleteGoal, "DeleteGoal" }, // 1293045123
		{ &Z_Construct_UFunction_UPuzzlePoint_GetCurrentGoal, "GetCurrentGoal" }, // 3278175775
		{ &Z_Construct_UFunction_UPuzzlePoint_GetHint, "GetHint" }, // 3134405292
		{ &Z_Construct_UFunction_UPuzzlePoint_GetObjective, "GetObjective" }, // 4157677956
		{ &Z_Construct_UFunction_UPuzzlePoint_PickGoal, "PickGoal" }, // 2458136064
		{ &Z_Construct_UFunction_UPuzzlePoint_SetInitType, "SetInitType" }, // 3859181197
		{ &Z_Construct_UFunction_UPuzzlePoint_ToPuzzleGoalPtrs, "ToPuzzleGoalPtrs" }, // 3466911302
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePoint_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		Z_Construct_UClass_UPuzzlePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UPuzzlePoint, UPuzzlePoint::StaticClass, TEXT("UPuzzlePoint"), &Z_Registration_Info_UClass_UPuzzlePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzlePoint), 4027560451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_3666178912(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzlePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
