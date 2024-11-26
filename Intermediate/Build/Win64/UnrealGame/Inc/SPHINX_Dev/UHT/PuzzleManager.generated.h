// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PuzzleManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGamePuzzlePoint;
class UArea;
class UGameItem;
class UItem;
class UItemProperty;
class UPuzzlePoint;
class URule;
class UTerm;
#ifdef SPHINX_DEV_PuzzleManager_generated_h
#error "PuzzleManager.generated.h already included, missing '#pragma once' in PuzzleManager.h"
#endif
#define SPHINX_DEV_PuzzleManager_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRulesStruct_Statics; \
	SPHINX_DEV_API static class UScriptStruct* StaticStruct();


template<> SPHINX_DEV_API UScriptStruct* StaticStruct<struct FRulesStruct>();

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedRulesStruct_Statics; \
	SPHINX_DEV_API static class UScriptStruct* StaticStruct();


template<> SPHINX_DEV_API UScriptStruct* StaticStruct<struct FSharedRulesStruct>();

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignPlayer); \
	DECLARE_FUNCTION(execDestroyDialogue); \
	DECLARE_FUNCTION(execRetryIsGPPInViewport); \
	DECLARE_FUNCTION(execIsGPPInViewport); \
	DECLARE_FUNCTION(execGetGPPsInViewport); \
	DECLARE_FUNCTION(execGetRulePointers); \
	DECLARE_FUNCTION(execSetupDbItemsOnStart); \
	DECLARE_FUNCTION(execInitialisePPPtrs); \
	DECLARE_FUNCTION(execPrintAllRules); \
	DECLARE_FUNCTION(execPopulateRulePointers); \
	DECLARE_FUNCTION(execPrintLeaves); \
	DECLARE_FUNCTION(execActivateProperties); \
	DECLARE_FUNCTION(execReturnLeaves); \
	DECLARE_FUNCTION(execActivateMaxPuzzlePoints); \
	DECLARE_FUNCTION(execDeactivatePuzzlePoint); \
	DECLARE_FUNCTION(execActivatePuzzlePoint); \
	DECLARE_FUNCTION(execGetPPsInWorld); \
	DECLARE_FUNCTION(execCheckIfPuzzleToBeGenerated); \
	DECLARE_FUNCTION(execGetGameItemsInWorld); \
	DECLARE_FUNCTION(execGetItemsInWorld); \
	DECLARE_FUNCTION(execLoadRuleBPs); \
	DECLARE_FUNCTION(execLoadItemBPs); \
	DECLARE_FUNCTION(execLoadPuzzlePointBPs); \
	DECLARE_FUNCTION(execTriggerEnd); \
	DECLARE_FUNCTION(execGetCurrentArea); \
	DECLARE_FUNCTION(execGetCurrentAreaName); \
	DECLARE_FUNCTION(execGetObjective); \
	DECLARE_FUNCTION(execGetHint); \
	DECLARE_FUNCTION(execPuzzleContains); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execUpdatePlayerProperties); \
	DECLARE_FUNCTION(execGetAllPPs); \
	DECLARE_FUNCTION(execGetAllRules); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGetRulesWithOutput); \
	DECLARE_FUNCTION(execGetRulesWithInput); \
	DECLARE_FUNCTION(execFindDbItemsFor); \
	DECLARE_FUNCTION(execGetItemsOfType); \
	DECLARE_FUNCTION(execHasItemOfType); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execAddPuzzle); \
	DECLARE_FUNCTION(execFindItemsForOutputs); \
	DECLARE_FUNCTION(execFindLeaves); \
	DECLARE_FUNCTION(execExecuteRule); \
	DECLARE_FUNCTION(execAddApplicableRule); \
	DECLARE_FUNCTION(execRulesFor); \
	DECLARE_FUNCTION(execGenerateForActivePuzzlePoints);


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleManager(); \
	friend struct Z_Construct_UClass_APuzzleManager_Statics; \
public: \
	DECLARE_CLASS(APuzzleManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(APuzzleManager)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleManager(APuzzleManager&&); \
	NO_API APuzzleManager(const APuzzleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleManager) \
	NO_API virtual ~APuzzleManager();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_84_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class APuzzleManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_PuzzleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
