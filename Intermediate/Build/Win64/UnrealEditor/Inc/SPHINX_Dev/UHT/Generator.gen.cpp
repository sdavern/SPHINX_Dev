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
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGamePuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_AInventoryManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_APuzzleManager_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UGameItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UPuzzlePoint_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_URule_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_UTerm_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(AGenerator::execRetryGetSpawnPointFor)
	{
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetryGetSpawnPointFor(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGetSPsInViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASpawnPoint*>*)Z_Param__Result=P_THIS->GetSPsInViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGetAllSpawnPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASpawnPoint*>*)Z_Param__Result=P_THIS->GetAllSpawnPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGetSpawnPointFor)
	{
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASpawnPoint**)Z_Param__Result=P_THIS->GetSpawnPointFor(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execFindGamePuzzlePoint)
	{
		P_GET_OBJECT(UPuzzlePoint,Z_Param_PP);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGamePuzzlePoint**)Z_Param__Result=P_THIS->FindGamePuzzlePoint(Z_Param_PP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGenerateInputs)
	{
		P_GET_OBJECT(UTerm,Z_Param_StartTerm);
		P_GET_OBJECT(URule,Z_Param_ParentRule);
		P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
		P_GET_OBJECT(UPuzzlePoint,Z_Param_CurrentPP);
		P_GET_TARRAY(UPuzzlePoint*,Z_Param_NewAccessiblePPs);
		P_GET_TARRAY(UItem*,Z_Param_ItemsInLevel);
		P_GET_OBJECT(AGenerator,Z_Param_GInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateInputs(Z_Param_StartTerm,Z_Param_ParentRule,Z_Param_Depth,Z_Param_CurrentPP,Z_Param_NewAccessiblePPs,Z_Param_ItemsInLevel,Z_Param_GInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execGeneratePuzzleStartingFrom)
	{
		P_GET_OBJECT(UPuzzlePoint,Z_Param_PP);
		P_GET_TARRAY(UPuzzlePoint*,Z_Param_NewAccessiblePPs);
		P_GET_PROPERTY(FIntProperty,Z_Param_depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URule**)Z_Param__Result=P_THIS->GeneratePuzzleStartingFrom(Z_Param_PP,Z_Param_NewAccessiblePPs,Z_Param_depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGenerator::execSpawn)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_GET_OBJECT(URule,Z_Param_Rule);
		P_GET_OBJECT(UPuzzlePoint,Z_Param_PP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn(Z_Param_World,Z_Param_Item,Z_Param_Rule,Z_Param_PP);
		P_NATIVE_END;
	}
	void AGenerator::StaticRegisterNativesAGenerator()
	{
		UClass* Class = AGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindGamePuzzlePoint", &AGenerator::execFindGamePuzzlePoint },
			{ "GenerateInputs", &AGenerator::execGenerateInputs },
			{ "GeneratePuzzleStartingFrom", &AGenerator::execGeneratePuzzleStartingFrom },
			{ "GetAllSpawnPoints", &AGenerator::execGetAllSpawnPoints },
			{ "GetSpawnPointFor", &AGenerator::execGetSpawnPointFor },
			{ "GetSPsInViewport", &AGenerator::execGetSPsInViewport },
			{ "RetryGetSpawnPointFor", &AGenerator::execRetryGetSpawnPointFor },
			{ "Spawn", &AGenerator::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics
	{
		struct Generator_eventFindGamePuzzlePoint_Parms
		{
			UPuzzlePoint* PP;
			AGamePuzzlePoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventFindGamePuzzlePoint_Parms, PP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventFindGamePuzzlePoint_Parms, ReturnValue), Z_Construct_UClass_AGamePuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::NewProp_PP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "FindGamePuzzlePoint", nullptr, nullptr, Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::Generator_eventFindGamePuzzlePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::Generator_eventFindGamePuzzlePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GenerateInputs_Statics
	{
		struct Generator_eventGenerateInputs_Parms
		{
			UTerm* StartTerm;
			URule* ParentRule;
			int32 Depth;
			UPuzzlePoint* CurrentPP;
			TArray<UPuzzlePoint*> NewAccessiblePPs;
			TArray<UItem*> ItemsInLevel;
			AGenerator* GInstance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartTerm;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRule;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAccessiblePPs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAccessiblePPs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInLevel_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_StartTerm = { "StartTerm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, StartTerm), Z_Construct_UClass_UTerm_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ParentRule = { "ParentRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, ParentRule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, Depth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_CurrentPP = { "CurrentPP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, CurrentPP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_NewAccessiblePPs_Inner = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_NewAccessiblePPs = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, NewAccessiblePPs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ItemsInLevel_Inner = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, ItemsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_GInstance = { "GInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGenerateInputs_Parms, GInstance), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Generator_eventGenerateInputs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Generator_eventGenerateInputs_Parms), &Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_StartTerm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ParentRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_CurrentPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_NewAccessiblePPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_NewAccessiblePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ItemsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ItemsInLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_GInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GenerateInputs", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::Generator_eventGenerateInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::Generator_eventGenerateInputs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GenerateInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GenerateInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics
	{
		struct Generator_eventGeneratePuzzleStartingFrom_Parms
		{
			UPuzzlePoint* PP;
			TArray<UPuzzlePoint*> NewAccessiblePPs;
			int32 depth;
			URule* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAccessiblePPs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAccessiblePPs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_depth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGeneratePuzzleStartingFrom_Parms, PP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_NewAccessiblePPs_Inner = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_NewAccessiblePPs = { "NewAccessiblePPs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGeneratePuzzleStartingFrom_Parms, NewAccessiblePPs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_depth = { "depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGeneratePuzzleStartingFrom_Parms, depth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGeneratePuzzleStartingFrom_Parms, ReturnValue), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_PP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_NewAccessiblePPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_NewAccessiblePPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GeneratePuzzleStartingFrom", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::Generator_eventGeneratePuzzleStartingFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::Generator_eventGeneratePuzzleStartingFrom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics
	{
		struct Generator_eventGetAllSpawnPoints_Parms
		{
			TArray<ASpawnPoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetAllSpawnPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GetAllSpawnPoints", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::Generator_eventGetAllSpawnPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::Generator_eventGetAllSpawnPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GetAllSpawnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GetAllSpawnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics
	{
		struct Generator_eventGetSpawnPointFor_Parms
		{
			UItem* Item;
			ASpawnPoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetSpawnPointFor_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetSpawnPointFor_Parms, ReturnValue), Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GetSpawnPointFor", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::Generator_eventGetSpawnPointFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::Generator_eventGetSpawnPointFor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GetSpawnPointFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GetSpawnPointFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics
	{
		struct Generator_eventGetSPsInViewport_Parms
		{
			TArray<ASpawnPoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventGetSPsInViewport_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "GetSPsInViewport", nullptr, nullptr, Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::Generator_eventGetSPsInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::Generator_eventGetSPsInViewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_GetSPsInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_GetSPsInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics
	{
		struct Generator_eventRetryGetSpawnPointFor_Parms
		{
			UItem* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventRetryGetSpawnPointFor_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "RetryGetSpawnPointFor", nullptr, nullptr, Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Generator_eventRetryGetSpawnPointFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::Generator_eventRetryGetSpawnPointFor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGenerator_Spawn_Statics
	{
		struct Generator_eventSpawn_Parms
		{
			UWorld* World;
			UItem* Item;
			URule* Rule;
			UPuzzlePoint* PP;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rule;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventSpawn_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventSpawn_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventSpawn_Parms, Rule), Z_Construct_UClass_URule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_PP = { "PP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Generator_eventSpawn_Parms, PP), Z_Construct_UClass_UPuzzlePoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerator_Spawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerator_Spawn_Statics::NewProp_PP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGenerator_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerator_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerator, nullptr, "Spawn", nullptr, nullptr, Z_Construct_UFunction_AGenerator_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_Spawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerator_Spawn_Statics::Generator_eventSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerator_Spawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerator_Spawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGenerator_Spawn_Statics::Generator_eventSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGenerator_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerator_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenerator);
	UClass* Z_Construct_UClass_AGenerator_NoRegister()
	{
		return AGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FindSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MAX_DEPTH_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MAX_DEPTH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PMInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PMInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryInstance;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGenerator_FindGamePuzzlePoint, "FindGamePuzzlePoint" }, // 3997346557
		{ &Z_Construct_UFunction_AGenerator_GenerateInputs, "GenerateInputs" }, // 2159988236
		{ &Z_Construct_UFunction_AGenerator_GeneratePuzzleStartingFrom, "GeneratePuzzleStartingFrom" }, // 2028471718
		{ &Z_Construct_UFunction_AGenerator_GetAllSpawnPoints, "GetAllSpawnPoints" }, // 2526383699
		{ &Z_Construct_UFunction_AGenerator_GetSpawnPointFor, "GetSpawnPointFor" }, // 4012795558
		{ &Z_Construct_UFunction_AGenerator_GetSPsInViewport, "GetSPsInViewport" }, // 1677620457
		{ &Z_Construct_UFunction_AGenerator_RetryGetSpawnPointFor, "RetryGetSpawnPointFor" }, // 1374036708
		{ &Z_Construct_UFunction_AGenerator_Spawn, "Spawn" }, // 3194955191
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay = { "FindSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, FindSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_MAX_DEPTH_MetaData[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_MAX_DEPTH = { "MAX_DEPTH", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, MAX_DEPTH), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_MAX_DEPTH_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_MAX_DEPTH_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_PMInstance_MetaData[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_PMInstance = { "PMInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, PMInstance), Z_Construct_UClass_APuzzleManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_PMInstance_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_PMInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerator_Statics::NewProp_InventoryInstance_MetaData[] = {
		{ "ModuleRelativePath", "Generator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_InventoryInstance = { "InventoryInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, InventoryInstance), Z_Construct_UClass_AInventoryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::NewProp_InventoryInstance_MetaData), Z_Construct_UClass_AGenerator_Statics::NewProp_InventoryInstance_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_FindSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_MAX_DEPTH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_PMInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_InventoryInstance,
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
		FuncInfo,
		Z_Construct_UClass_AGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AGenerator, AGenerator::StaticClass, TEXT("AGenerator"), &Z_Registration_Info_UClass_AGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenerator), 3460001638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_1720645891(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Generator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
