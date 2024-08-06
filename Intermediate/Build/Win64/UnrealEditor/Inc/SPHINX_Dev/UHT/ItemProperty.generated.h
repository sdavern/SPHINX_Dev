// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemProperty.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPHINX_DEV_ItemProperty_generated_h
#error "ItemProperty.generated.h already included, missing '#pragma once' in ItemProperty.h"
#endif
#define SPHINX_DEV_ItemProperty_generated_h

#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_SPARSE_DATA
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_ACCESSORS
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemProperty(); \
	friend struct Z_Construct_UClass_UItemProperty_Statics; \
public: \
	DECLARE_CLASS(UItemProperty, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SPHINX_Dev"), NO_API) \
	DECLARE_SERIALIZER(UItemProperty)


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemProperty(UItemProperty&&); \
	NO_API UItemProperty(const UItemProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemProperty) \
	NO_API virtual ~UItemProperty();


#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_16_PROLOG
#define FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_SPARSE_DATA \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_ACCESSORS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHINX_DEV_API UClass* StaticClass<class UItemProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_ItemProperty_h


#define FOREACH_ENUM_EITEMPROPERTY(op) \
	op(EItemProperty::StringProperty) \
	op(EItemProperty::IntProperty) \
	op(EItemProperty::BoolProperty) 

enum class EItemProperty : uint8;
template<> struct TIsUEnumClass<EItemProperty> { enum { Value = true }; };
template<> SPHINX_DEV_API UEnum* StaticEnum<EItemProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
