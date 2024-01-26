// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameItem;
#ifdef SPHINX_DEV_InventoryManager_generated_h
#error "InventoryManager.generated.h already included, missing '#pragma once' in InventoryManager.h"
#endif
#define SPHINX_DEV_InventoryManager_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execGetSelectedItem); \
	DECLARE_FUNCTION(execDeselectItemFromInventory); \
	DECLARE_FUNCTION(execSelectItemFromInventory); \
	DECLARE_FUNCTION(execDeleteItemFromInventory); \
	DECLARE_FUNCTION(execRemoveSelectedItemFromInventory); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryManager(); \
	friend struct Z_Construct_UClass_UInventoryManager_Statics; \
public: \
	DECLARE_CLASS(UInventoryManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManager)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryManager(UInventoryManager&&); \
	NO_API UInventoryManager(const UInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryManager) \
	NO_API virtual ~UInventoryManager();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_15_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class UInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_InventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
