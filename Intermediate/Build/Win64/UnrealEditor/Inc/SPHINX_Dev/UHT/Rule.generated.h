// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
class UObject;
class URule;
class UTerm;
#ifdef SPHINX_DEV_Rule_generated_h
#error "Rule.generated.h already included, missing '#pragma once' in Rule.h"
#endif
#define SPHINX_DEV_Rule_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcCosineSim); \
	DECLARE_FUNCTION(execInitialiseRule); \
	DECLARE_FUNCTION(execGetDbItems); \
	DECLARE_FUNCTION(execToPMString); \
	DECLARE_FUNCTION(execToChildrenPtr); \
	DECLARE_FUNCTION(execToInputsPtr); \
	DECLARE_FUNCTION(execToOutputsPtr); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execContainsItemRespawn); \
	DECLARE_FUNCTION(execContainsItem); \
	DECLARE_FUNCTION(execToShortString); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execGetRuleAsString); \
	DECLARE_FUNCTION(execHasPlayerInput); \
	DECLARE_FUNCTION(execMainOutputIs); \
	DECLARE_FUNCTION(execRemoveLastAddedRule); \
	DECLARE_FUNCTION(execAddChildRule); \
	DECLARE_FUNCTION(execDeleteInputAtIndex); \
	DECLARE_FUNCTION(execDeleteOutputAtIndex); \
	DECLARE_FUNCTION(execAddInput); \
	DECLARE_FUNCTION(execAddOutput); \
	DECLARE_FUNCTION(execIsEqual);


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURule(); \
	friend struct Z_Construct_UClass_URule_Statics; \
public: \
	DECLARE_CLASS(URule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(URule)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URule(URule&&); \
	NO_API URule(const URule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URule) \
	NO_API virtual ~URule();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_17_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class URule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Rule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
