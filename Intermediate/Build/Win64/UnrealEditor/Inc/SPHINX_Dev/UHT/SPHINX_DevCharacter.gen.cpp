// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SPHINX_Dev/SPHINX_DevCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPHINX_DevCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevCharacter();
	SPHINX_DEV_API UClass* Z_Construct_UClass_ASPHINX_DevCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SPHINX_Dev();
// End Cross Module References
	DEFINE_FUNCTION(ASPHINX_DevCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPHINX_DevCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void ASPHINX_DevCharacter::StaticRegisterNativesASPHINX_DevCharacter()
	{
		UClass* Class = ASPHINX_DevCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &ASPHINX_DevCharacter::execGetHasRifle },
			{ "SetHasRifle", &ASPHINX_DevCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics
	{
		struct SPHINX_DevCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SPHINX_DevCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPHINX_DevCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::SPHINX_DevCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::SPHINX_DevCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics
	{
		struct SPHINX_DevCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((SPHINX_DevCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPHINX_DevCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPHINX_DevCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::SPHINX_DevCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::SPHINX_DevCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPHINX_DevCharacter);
	UClass* Z_Construct_UClass_ASPHINX_DevCharacter_NoRegister()
	{
		return ASPHINX_DevCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASPHINX_DevCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPHINX_DevCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SPHINX_Dev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPHINX_DevCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPHINX_DevCharacter_GetHasRifle, "GetHasRifle" }, // 1994824876
		{ &Z_Construct_UFunction_ASPHINX_DevCharacter_SetHasRifle, "SetHasRifle" }, // 1006733982
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SPHINX_DevCharacter.h" },
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPHINX_DevCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "SPHINX_DevCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((ASPHINX_DevCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASPHINX_DevCharacter), &Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPHINX_DevCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPHINX_DevCharacter_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPHINX_DevCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPHINX_DevCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPHINX_DevCharacter_Statics::ClassParams = {
		&ASPHINX_DevCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPHINX_DevCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPHINX_DevCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPHINX_DevCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASPHINX_DevCharacter()
	{
		if (!Z_Registration_Info_UClass_ASPHINX_DevCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPHINX_DevCharacter.OuterSingleton, Z_Construct_UClass_ASPHINX_DevCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPHINX_DevCharacter.OuterSingleton;
	}
	template<> SPHINX_DEV_API UClass* StaticClass<ASPHINX_DevCharacter>()
	{
		return ASPHINX_DevCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPHINX_DevCharacter);
	ASPHINX_DevCharacter::~ASPHINX_DevCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPHINX_DevCharacter, ASPHINX_DevCharacter::StaticClass, TEXT("ASPHINX_DevCharacter"), &Z_Registration_Info_UClass_ASPHINX_DevCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPHINX_DevCharacter), 1568600006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevCharacter_h_2771023347(TEXT("/Script/SPHINX_Dev"),
		Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_valey_Documents_Unreal_Projects_SPHINX_Dev_Source_SPHINX_Dev_SPHINX_DevCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
