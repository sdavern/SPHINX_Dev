// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
class UItemProperty;
class UObject;
class UPuzzlePoint;
class UTerm;
enum class EItemProperty : uint8;
#ifdef SPHINX_DEV_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SPHINX_DEV_Item_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToPropPtrs); \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execPostInitProperties); \
	DECLARE_FUNCTION(execGetNextSpawnPt); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execIsInspectable); \
	DECLARE_FUNCTION(execIsSpawnable); \
	DECLARE_FUNCTION(execIsCopyable); \
	DECLARE_FUNCTION(execIsCarryable); \
	DECLARE_FUNCTION(execIsAccessible); \
	DECLARE_FUNCTION(execIsOfType); \
	DECLARE_FUNCTION(execMatches); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execGetSuperTypes); \
	DECLARE_FUNCTION(execDeleteProperty); \
	DECLARE_FUNCTION(execAddPropertyOfType); \
	DECLARE_FUNCTION(execHasProperty); \
	DECLARE_FUNCTION(execGetPropertyWithName); \
	DECLARE_FUNCTION(execGetPropertiesWithName); \
	DECLARE_FUNCTION(execPropertyExists);


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem) \
	NO_API virtual ~UItem();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_15_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
