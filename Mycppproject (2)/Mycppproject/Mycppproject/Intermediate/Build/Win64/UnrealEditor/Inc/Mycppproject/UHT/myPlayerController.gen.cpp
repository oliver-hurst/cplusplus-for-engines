// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week 1/myPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodemyPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYCPPPROJECT_API UClass* Z_Construct_UClass_AmyPlayerController();
MYCPPPROJECT_API UClass* Z_Construct_UClass_AmyPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mycppproject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AmyPlayerController ******************************************************
void AmyPlayerController::StaticRegisterNativesAmyPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AmyPlayerController;
UClass* AmyPlayerController::GetPrivateStaticClass()
{
	using TClass = AmyPlayerController;
	if (!Z_Registration_Info_UClass_AmyPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("myPlayerController"),
			Z_Registration_Info_UClass_AmyPlayerController.InnerSingleton,
			StaticRegisterNativesAmyPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AmyPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AmyPlayerController_NoRegister()
{
	return AmyPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AmyPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "week 1/myPlayerController.h" },
		{ "ModuleRelativePath", "Public/week 1/myPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "Public/week 1/myPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmyPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmyPlayerController_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmyPlayerController, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmyPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyPlayerController_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmyPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AmyPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Mycppproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmyPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AmyPlayerController_Statics::ClassParams = {
	&AmyPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AmyPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AmyPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmyPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AmyPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AmyPlayerController()
{
	if (!Z_Registration_Info_UClass_AmyPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmyPlayerController.OuterSingleton, Z_Construct_UClass_AmyPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AmyPlayerController.OuterSingleton;
}
AmyPlayerController::AmyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AmyPlayerController);
AmyPlayerController::~AmyPlayerController() {}
// ********** End Class AmyPlayerController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_myPlayerController_h__Script_Mycppproject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AmyPlayerController, AmyPlayerController::StaticClass, TEXT("AmyPlayerController"), &Z_Registration_Info_UClass_AmyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmyPlayerController), 1884214297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_myPlayerController_h__Script_Mycppproject_1999207730(TEXT("/Script/Mycppproject"),
	Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_myPlayerController_h__Script_Mycppproject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_myPlayerController_h__Script_Mycppproject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
