// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APuzzleManager;
class UActionMenu;
class UGameItem;
class UItemProperty;
class URule;
class UTerm;
#ifdef SPHINX_DEV_GameItem_generated_h
#error "GameItem.generated.h already included, missing '#pragma once' in GameItem.h"
#endif
#define SPHINX_DEV_GameItem_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFulfillsProperties); \
	DECLARE_FUNCTION(execRuleFulfilled); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execGetPuzzleManager); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execIsDestructible); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execHasProperty); \
	DECLARE_FUNCTION(execExecuteRule); \
	DECLARE_FUNCTION(execOnGameItemClicked); \
	DECLARE_FUNCTION(execSetupDbItem);


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameItem(); \
	friend struct Z_Construct_UClass_UGameItem_Statics; \
public: \
	DECLARE_CLASS(UGameItem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(UGameItem)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameItem(UGameItem&&); \
	NO_API UGameItem(const UGameItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameItem) \
	NO_API virtual ~UGameItem();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_23_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class UGameItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_GameItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
