// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMycppproject_init() {}
	MYCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Mycppproject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Mycppproject()
	{
		if (!Z_Registration_Info_UPackage__Script_Mycppproject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Mycppproject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x17E2F0D4,
				0x9C295A69,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Mycppproject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Mycppproject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Mycppproject(Z_Construct_UPackage__Script_Mycppproject, TEXT("/Script/Mycppproject"), Z_Registration_Info_UPackage__Script_Mycppproject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x17E2F0D4, 0x9C295A69));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
