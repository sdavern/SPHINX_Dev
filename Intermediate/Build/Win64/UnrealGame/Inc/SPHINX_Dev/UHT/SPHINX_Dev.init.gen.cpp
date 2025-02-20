// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPHINX_Dev_init() {}
	SPHINX_DEV_API UFunction* Z_Construct_UDelegateFunction_SPHINX_Dev_OnPickUp__DelegateSignature();
	SPHINX_DEV_API UFunction* Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SPHINX_Dev;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SPHINX_Dev()
	{
		if (!Z_Registration_Info_UPackage__Script_SPHINX_Dev.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SPHINX_Dev_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryButton_OnInventoryButtonClicked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SPHINX_Dev",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x71A0AF5A,
				0xEC9E2800,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SPHINX_Dev.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SPHINX_Dev.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SPHINX_Dev(Z_Construct_UPackage__Script_SPHINX_Dev, TEXT("/Script/SPHINX_Dev"), Z_Registration_Info_UPackage__Script_SPHINX_Dev, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x71A0AF5A, 0xEC9E2800));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
