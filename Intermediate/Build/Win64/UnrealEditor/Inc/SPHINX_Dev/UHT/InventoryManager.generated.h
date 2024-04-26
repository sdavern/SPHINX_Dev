// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameItem;
#ifdef SPHINX_DEV_InventoryManager_generated_h
#error "InventoryManager.generated.h already included, missing '#pragma once' in InventoryManager.h"
#endif
#define SPHINX_DEV_InventoryManager_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execGetSelectedItem); \
	DECLARE_FUNCTION(execDeselectItemFromInventory); \
	DECLARE_FUNCTION(execSelectItemFromInventory); \
	DECLARE_FUNCTION(execDeleteItemFromInventory); \
	DECLARE_FUNCTION(execRemoveSelectedItemFromInventory); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryManager(); \
	friend struct Z_Construct_UClass_AInventoryManager_Statics; \
public: \
	DECLARE_CLASS(AInventoryManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(AInventoryManager)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryManager(AInventoryManager&&); \
	NO_API AInventoryManager(const AInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventoryManager) \
	NO_API virtual ~AInventoryManager();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_17_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class AInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
